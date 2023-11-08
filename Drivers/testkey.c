#include <linux/types.h>   // 定义了ssize_t的头文件
#include <linux/kernel.h>
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


#define KEY_MISC_MINOR  234        /* KEY_MISC的次设备号 */
#define KEY_MISC_NAME  "key_misc"  /* 驱动的主设备名称 */
#define DEVICE_CNT    1            /* 设备数量 */

struct key_dev_t
{
    struct device_node *np;
    int gpio; /* key 所使用的 GPIO 编号 */
    struct miscdevice *misc;
    spinlock_t lock;
    struct platform_driver *p_driver;
    bool status; /*设备状态*/
    bool value; /*按键状态*/
};
static struct file_operations key_drv_fop;
struct platform_driver key_platform_driver;
/* MISC 设备结构体 */    /* 填充miscdevice结构体*/
static struct miscdevice key_misc_dev = {
    .minor = KEY_MISC_MINOR,
    .name = KEY_MISC_NAME,
    .fops = &key_drv_fop,
};
struct key_dev_t key_dev_0 = {
    .misc = &key_misc_dev,
    .p_driver = &key_platform_driver,
};

static int key_drv_open(struct inode *inode, struct file *filp)
{
    unsigned long flags;/*中断标记*/

    filp->private_data = &key_dev_0;
    spin_lock_irqsave(&key_dev_0.lock, flags);//上锁
    if(key_dev_0.status != true) //设备忙
    {
        spin_unlock_irqrestore(&key_dev_0.lock, flags);//释放锁
        pr_err("key_drv busy!\n");
        return -EBUSY;
    }
    key_dev_0.status = false;//占用设备
    spin_unlock_irqrestore(&key_dev_0.lock, flags);//释放锁
    printk("key_drv open!\r\n");
    return 0;
}

static int key_drv_release(struct inode *inode, struct file *filp)
{
    unsigned long flags;/*中断标记*/

    spin_lock_irqsave(&key_dev_0.lock, flags);//上锁
    key_dev_0.status = true;//释放设备
    spin_unlock_irqrestore(&key_dev_0.lock, flags);//释放锁
    printk("key_drv close!\r\n");
    return 0;
}

static ssize_t key_drv_read(struct file *filp, char __user *buf, size_t cnt, loff_t *offt)
{
    int retvalue = 0;
    u8 status = 0;

    status = gpio_get_value(key_dev_0.gpio);
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

    printk(" read key_drv success!\r\n");
    return 0;
}

static ssize_t key_drv_write(struct file *filp, const char __user *buf, size_t cnt, loff_t *offt)
{
    int retvalue = 0;
    u8 cmd = 0;

    retvalue = copy_from_user(&cmd, buf, cnt);
    if(retvalue == 0)
    {
        printk("key_drv receive data:%d\r\n", cmd);
    }
    else
    {
        printk("key_drv receive data failed!\r\n");
        return -EIO;
    }

    switch (cmd)
    {
    case 0:// GPIO_ACTIVE_LOW
        gpio_set_value(key_dev_0.gpio, 0);
        printk("key on\n");
        break;
    case 1:
        gpio_set_value(key_dev_0.gpio, 1);
        printk("key off\n");
        break;
    default:
        gpio_set_value(key_dev_0.gpio, (gpio_get_value(key_dev_0.gpio)==0? 1:0));
        printk("key trigger\n");
        break;
    }
    return 0;
}

static int key_drv_probe(struct platform_device *device)
{
    int retvalue = 0;

    /* 初始化自旋锁*/
    spin_lock_init(&key_dev_0.lock);
    key_dev_0.status = true;
    /* 注册字符设备驱动 */
    /* 查找设备结点 */
    key_dev_0.np = of_find_compatible_node(NULL , NULL , "key_gpio");
    if (key_dev_0.np == NULL)
    {
        pr_err("find device node failed\n");
        return -EIO;
    }
    printk("find device node successfully! \n");
    /* 解析gpio属性 */
    key_dev_0.gpio = of_get_named_gpio(key_dev_0.np, "gpios", 0);
    if (key_dev_0.gpio <= 0)
    {
        pr_err("get gpio failed\n");
        return -EIO;
    }
    printk("get gpio %d successfully! \n", key_dev_0.gpio);
    /* 申请gpio */
    retvalue = gpio_request(key_dev_0.gpio, "key_gpio");
    if (retvalue != 0)
    {
        pr_err("request gpio failed\n");
        return -EIO;
    }
    printk("request gpio %d successfully! \n", key_dev_0.gpio);
    /* 设置为输出且默认为1 GPIO_ACTIVE_LOW 关闭key*/
    retvalue = gpio_direction_output(key_dev_0.gpio, 1);
    if (retvalue != 0)
    {
        pr_err("request gpio output failed\n");
        goto freegpio;
    }
    printk("request gpio %d output successfully! \n", key_dev_0.gpio);

    /* 注册MISC设备 */
    retvalue = misc_register(key_dev_0.misc);
    if(retvalue != 0) 
    {
        pr_err("cannot register misc driver\n");
        goto freegpio;
    }
    printk("key_misc_init() success! major=%d,minor=%d\r\n", 10, key_dev_0.misc->minor);
    return 0;
freegpio:
    gpio_free(key_dev_0.gpio);
    return -EIO;
}

static int __init key_drv_init(void)
{
    int retvalue = 0;

    /* 注册platform驱动 */
    retvalue = platform_driver_register(key_dev_0.p_driver);
    if(retvalue != 0)
    {
        pr_err("platform driver register failed!\n");
        return -EIO;
    }
    printk("platform driver register success!\n");
    return 0;
}

static void __exit key_drv_exit(void)
{
    /* 注销platform驱动 */
    platform_driver_unregister(key_dev_0.p_driver);
    printk("platform driver unregister success!\n");
}

static int key_drv_remove(struct platform_device *device)
{
    /* 注销字符设备驱动 */
    misc_deregister(key_dev_0.misc);
    gpio_free(key_dev_0.gpio);
    printk("key_misc deinit\n");
    printk("key_misc_remove() success!\r\n");
    return 0;
}

static struct file_operations key_drv_fop = {
    .owner = THIS_MODULE,
    .open = key_drv_open,
    .release = key_drv_release,
    .write = key_drv_write,
    .read = key_drv_read,
};

const struct of_device_id keys_of_match_table[] = {
    {.compatible = "key_gpio",},
    {},
};

struct platform_driver key_platform_driver = {
    .probe = key_drv_probe,
    .remove = key_drv_remove,

    .driver = {
        .name = "key_gpio",
        .of_match_table = keys_of_match_table,
    },
};


module_init(key_drv_init);
module_exit(key_drv_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("wt");
MODULE_INFO(intree, "Y");
