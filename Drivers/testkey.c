#include "linux/printk.h"
#include <linux/kernel.h>
#include <linux/types.h>   // 定义了ssize_t的头文件
#include <linux/ide.h>
#include <linux/init.h>    // 模块加载init和卸载exit相关头文件
#include <linux/module.h>
#include <linux/cdev.h>         // cdev相关头文件
#include <linux/device.h>   //设备号dev_t相关头文件
#include <linux/errno.h>    //错误相关头文件
#include <linux/gpio.h>     //gpio子系统相关头文件
#include <linux/of_gpio.h>  //of_gpio函数相关头文件
#include <linux/of.h>       //of_函数相关头文件
#include <linux/miscdevice.h> //miscdevice头文件
#include <linux/platform_device.h> //platform_device头文件
#include <linux/of_platform.h> //platform of函数
#include <asm/string.h>
#include <linux/slab.h> //kzalloc头文件
#include <linux/string.h>

#define KEY_MAJOR 233
#define MAX_KEY_NUM 2 /* 最大设备数量 */

/*private date*/
static u8 key_dev_count = 0; /* 设备计数 */
static struct class *key_cls;//设备类
/* device struct 设备结构体*/
struct key_dev_t
{
    unsigned int minor;
    struct platform_device *key_pdev;
    int gpio; /* key 所使用的 GPIO 编号 */
    spinlock_t lock; /*设备互斥访问自旋锁*/
    bool status; /*设备状态*/
    bool value; /*按键状态*/
    struct cdev *key_cdev; /*字符设备结构体*/
    struct class *cls;
    struct device *dev;
};
// match table
const struct of_device_id keys_of_match_table[] = {
    {.compatible = "key_gpio",},
    {},
};
struct key_dev_t *key_devs[MAX_KEY_NUM];//device list

/* private function declear */
// file_operation functions
static int key_drv_open(struct inode *inode, struct file *filp);
static int key_drv_release(struct inode *inode, struct file *filp);
static ssize_t key_drv_read(struct file *filp, char __user *buf, size_t cnt, loff_t *offt);
static ssize_t key_drv_write(struct file *filp, const char __user *buf, size_t cnt, loff_t *offt);
static int key_drv_probe(struct platform_device *device);
static int key_drv_remove(struct platform_device *device);
//module init and exit
static int __init key_drv_init(void);
static void __exit key_drv_exit(void);
//private key init and deinit function
static int key_dev_init(struct key_dev_t **key_dev);
//


/* 驱动提供的文件操作结构体 */
static struct file_operations key_drv_fop = {
    .owner = THIS_MODULE,
    .open = key_drv_open,
    .release = key_drv_release,
    .write = key_drv_write,
    .read = key_drv_read,
};
/* 用于注册平台驱动的platform_driver结构体 */
static struct platform_driver key_platform_driver = {
    .probe = key_drv_probe,
    .remove = key_drv_remove,

    .driver = {
        .name = "key_drv",
        .of_match_table = keys_of_match_table,
    },
};


static int key_drv_open(struct inode *inode, struct file *filp)
{
    unsigned long flags;/*中断标记*/

    struct key_dev_t *key_dev = container_of(&(inode->i_cdev), struct key_dev_t, key_cdev);//获取当前打开设备文件对应的设备结构体变量指针
    filp->private_data = key_dev;
    spin_lock_irqsave(&(key_dev->lock), flags);//上锁
    if(key_dev->status != true) //设备忙
    {
        spin_unlock_irqrestore(&(key_dev->lock), flags);//释放锁
        pr_err("key_drv busy!\n");
        return -EBUSY;
    }
    key_dev->status = false;//占用设备
    spin_unlock_irqrestore(&(key_dev->lock), flags);//释放锁
    printk("key_drv open!\r\n");
    return 0;
}

static int key_drv_release(struct inode *inode, struct file *filp)
{
    unsigned long flags;/*中断标记*/
    
    struct key_dev_t *key_dev = filp->private_data;
    spin_lock_irqsave(&(key_dev->lock), flags);//上锁
    key_dev->status = true;//释放设备
    spin_unlock_irqrestore(&(key_dev->lock), flags);//释放锁
    printk("key_drv close!\r\n");
    return 0;
}

static ssize_t key_drv_read(struct file *filp, char __user *buf, size_t cnt, loff_t *offt)
{
    int retvalue = 0;
    u8 status = 0;

    struct key_dev_t *key_dev = filp->private_data;

    printk(" read key_drv start!\r\n");
    status = gpio_get_value(key_dev->gpio);
    /* 向用户空间发送数据 */
    retvalue = copy_to_user(buf, &status, cnt);
    if(retvalue == 0)
    {
        printk("key_drv send data ok!\r\n");
    }
    else
    {
        printk("key_drv send data failed!\r\n");
        return -EIO;
    }

    printk(" read key_drv finish!\r\n");
    return 0;
}

static ssize_t key_drv_write(struct file *filp, const char __user *buf, size_t cnt, loff_t *offt)
{
    //empty
    return 0;
}
/*
key_devs: 按键设备的结构体指针list
*/
static int key_dev_init(struct key_dev_t **key_devs)
{
    int retvalue;

    struct device_node *np = (*key_devs)->key_pdev->dev.of_node;

    /* 获取gpio号 */
    (*key_devs)->gpio = of_get_named_gpio(np, "gpios", 0);
    if ((*key_devs)->gpio <= 0)
    {
        pr_err("get gpio failed\n");
        return -EIO;
    }
    printk("get gpio %d successfully! \n", (*key_devs)->gpio);

    /* 申请gpio */
    retvalue = gpio_request((*key_devs)->gpio, (*key_devs)->key_pdev->name);
    if (retvalue != 0)
    {
        pr_err("request gpio failed\n");
        return -EIO;
    }
    printk("request gpio %d successfully! \n", (*key_devs)->gpio);
    /* 设置为输入 */
    retvalue = gpio_direction_input((*key_devs)->gpio);
    if (retvalue != 0)
    {
        pr_err("set gpio %d input failed! \n", (*key_devs)->gpio);
        goto freegpio;
    }
    printk("set gpio %d input successfully! \n", (*key_devs)->gpio);


    
    /* 使用cdev注册字符设备 */
    (*key_devs)->key_cdev = cdev_alloc();//申请cdev字符设备的空间
    if((*key_devs)->key_cdev == NULL )
    {
        pr_err("key_dev cdev_alloc() failed! \n");
        goto freegpio;
    }
    printk("key_dev cdev_alloc() successfully!\n");

    /*生成设备号*/
    #ifdef KEY_MAJOR
        (*key_devs)->key_cdev->dev = MKDEV(KEY_MAJOR, key_dev_count);
        retvalue = register_chrdev_region((*key_devs)->key_cdev->dev, 1, (*key_devs)->key_pdev->name);
        if(retvalue != 0)
        {
            pr_err("key_dev dev_t register failed! \n");
            retvalue = alloc_chrdev_region(&((*key_devs)->key_cdev->dev), 0, 1, (*key_devs)->key_pdev->name);
            if(retvalue != 0)
            {
                pr_err("key_dev dev_t alloc register failed! \n");
                goto freecdev;
            }
        }
    #else
        retvalue = alloc_chrdev_region(&((*key_devs)->key_cdev->dev), 0, 1, (*key_devs)->key_pdev->name);
        if(retvalue != 0)
        {
            pr_err("key_dev dev_t register failed! \n");
            goto freecdev;
        }
    #endif
    (*key_devs)->minor = MINOR((*key_devs)->key_cdev->dev);
    printk("key register dev_t success! major=%d,minor=%d\r\n", MAJOR((*key_devs)->key_cdev->dev), MINOR((*key_devs)->key_cdev->dev));
    /*注册字符设备*/
    (*key_devs)->key_cdev->owner = THIS_MODULE;
    cdev_init((*key_devs)->key_cdev, &key_drv_fop);
    printk("cdev_init success!\n");
    retvalue = cdev_add((*key_devs)->key_cdev, (*key_devs)->key_cdev->dev, 1);
    if(retvalue != 0) 
    {
        pr_err("cannot register cdev driver\n");
        goto freedevt;
    }
    printk("cdev_add success!\n");
    /*生成设备节点*/
    (*key_devs)->dev = device_create((*key_devs)->cls, NULL,  (*key_devs)->key_cdev->dev,  NULL,  "key_dev_%d", key_dev_count);
    if((*key_devs)->dev == NULL)
    {
        pr_err("device_create failed!\n");
        goto delcdev;
    }
    printk("key_dev_%d create success!\r\n", key_dev_count);
    /* 初始化设备自旋锁*/
    spin_lock_init(&(*key_devs)->lock);
    (*key_devs)->status = true;
    printk("key_dev_%d spin_lock_init success!\r\n", key_dev_count);
    return 0;

//错误处理
delcdev:
    cdev_del((*key_devs)->key_cdev);
    printk("cdev_del success!\n");
freedevt:
    unregister_chrdev_region((*key_devs)->key_cdev->dev, 1);
    printk("unregister_chrdev_region success!\n");
freecdev:
    if((*key_devs)->key_cdev != NULL)
    {
        kfree((*key_devs)->key_cdev);
        printk("kfree((*key_devs)->key_cdev) success!\n");
    }
freegpio:
    gpio_free((*key_devs)->gpio);
    printk("gpio_free %d success!\n",(*key_devs)->gpio);
    return -EIO;
}


static int key_drv_probe(struct platform_device *device)
{
    int retvalue = 0;
    const char *str;
    struct device_node *np = device->dev.of_node;

    //check status
    retvalue = of_property_read_string(np, "status", &str);
    if(retvalue < 0)
    {
        return -EINVAL;
    }
    if(strcmp(str, "okay"))
    {
        return -EINVAL;
    }
    printk("%s status okey!\n", device->name);
    //分配设备结构体空间
    key_devs[key_dev_count] = kzalloc(sizeof(struct key_dev_t), GFP_KERNEL);
    if(key_devs[key_dev_count] == NULL )
    {
        pr_err("key_dev kzalloc failed! \n");
        return -EIO;
    }
    printk("key_dev kzalloc successfully! %d\n", (int)key_devs[key_dev_count]);
    key_devs[key_dev_count]->key_pdev = device;
    key_devs[key_dev_count]->cls = key_cls;
    retvalue = key_dev_init(&key_devs[key_dev_count]);
    printk("%s init() success! return value %d\r\n",key_devs[key_dev_count]->key_pdev->name, retvalue);
    if(retvalue != 0)
    {
        printk("free key_dev\r\n");
        goto freekey_dev;
    }
    printk("%s probe() success!\r\n",key_devs[key_dev_count]->key_pdev->name);
    key_dev_count++;
    return 0;

freekey_dev:
    if (key_devs[key_dev_count] != NULL)
    {
        kfree(key_devs[key_dev_count]);
        printk("kfree(key_dev) success!\n");
    }
    return retvalue;
}

static int key_drv_remove(struct platform_device *device)
{
    unsigned int i;
    /* 注销字符设备 */
    printk("platform_device %s!\r\n", device->name);
    for(i = 0; i <= MAX_KEY_NUM; i++)
    {
        if(!strcmp(key_devs[i]->key_pdev->name, device->name))
            break;
    }
    if(i > key_dev_count)
    {
        pr_err("can not find device in local list!\n");
        return -EIO;
    }
    printk("%s remove() key_dev address %d!\r\n",key_devs[i]->key_pdev->name, (int)key_devs[i]);
    device_destroy(key_devs[i]->cls, key_devs[i]->key_cdev->dev);
    printk("device_destroy success!\n");
    cdev_del(key_devs[i]->key_cdev);
    printk("cdev_del success!\n");
    unregister_chrdev_region(key_devs[i]->key_cdev->dev, 1);
    printk("unregister_chrdev_region success!\n");
    kfree(key_devs[i]->key_cdev);
    printk("kfree(key_devs[i]->key_cdev) success!\n");    
    gpio_free(key_devs[i]->gpio);
    printk("gpio_free %d success!\n", key_devs[i]->gpio);
    if (key_devs[i] != NULL)
    {
        kfree(key_devs[i]);
        printk("kfree(key_dev) success!\n");
    }
    key_dev_count--;
    return 0;
}

static int __init key_drv_init(void)
{
    int retvalue = 0;

    key_cls = class_create(THIS_MODULE, "key_drv");
    if(key_cls == NULL)
    {
        pr_err("create key_drv class failed! \n");
        return -EIO;
    }
    printk("class_create success!\n");
    /* 注册platform驱动 */
    retvalue = platform_driver_register(&key_platform_driver);
    if(retvalue != 0)
    {
        pr_err("key platform driver register failed!\n");
        return -EIO;
    }
    printk("key platform driver register success!\n");
    return 0;
}

static void __exit key_drv_exit(void)
{
    /* 注销platform驱动 */
    platform_driver_unregister(&key_platform_driver);
    printk("key platform driver unregister success!\n");
    class_destroy(key_cls);
    printk("class_destroy success!\n");
}


module_init(key_drv_init);
module_exit(key_drv_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("wt");
MODULE_INFO(intree, "Y");
