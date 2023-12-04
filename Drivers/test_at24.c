#include <linux/kernel.h>
#include <linux/types.h>    // 定义了ssize_t的头文件
#include <linux/ide.h>
#include <linux/init.h>     // 模块加载init和卸载exit相关头文件
#include <linux/module.h>
#include <linux/device.h>   //设备号dev_t相关头文件
#include <linux/errno.h>    //错误相关头文件
#include <linux/slab.h>     //kzalloc头文件
#include <linux/cdev.h>     // cdev相关头文件
#include <linux/i2c.h>      //i2c子系统相关头文件
#include <linux/miscdevice.h> //使用miscdev
#include <linux/delay.h>      //usleep_range 头文件
#include "asm-generic/errno-base.h"
#include "asm/string.h"
#include "linux/export.h"
#include "linux/fs.h"
#include "linux/kdev_t.h"
#include "linux/mod_devicetable.h"
#include "linux/printk.h"
#include "linux/skbuff.h"
#include "test_at24.h" 

/* macro definition*/
#define AT24_DEV_COUNT 1
#define AT24C02_BYTE_LEN 2048/8 //2k bit 
#define AT24C02_PAGE_SIZE AT24C02_BYTE_LEN/32 //32page
#define AT24C02_FLAGS 0
#define AT24C02_MAX_IO_COUNT 7 // max io byte every time
#define AT24C02_WRITE_TIMEOUT 25
#define ERR_DBUG  pr_err("%s, LINE %d :", __func__, __LINE__)

#define loop_until_timeout(tout, op_time)				\
	for (tout = jiffies + msecs_to_jiffies(AT24C02_WRITE_TIMEOUT), op_time = 0; \
	     op_time ? time_before(op_time, tout) : true;		\
	     usleep_range(1000, 1500), op_time = jiffies) // 休眠时间在 1000 到 1500 微秒之间的随机时长

/* 变量声明 */

/* private function declear */
// probe and remove
static int at24_drv_probe(struct i2c_client *client, const struct i2c_device_id *dt);
static int at24_drv_remove(struct i2c_client *client);
//file_operations
static ssize_t at24_read(struct file *filp, char __user *buf, size_t cnt, loff_t *offt);
static ssize_t at24_write(struct file *filp, const char __user *buf, size_t cnt, loff_t *offt);
static int at24_release(struct inode *inode, struct file *filp);
static int at24_open(struct inode *inode, struct file *filp);
//module init and exit
static int __init at24_drv_init(void);
static void __init at24_drv_exit(void);
// get and add at24_dev_t
static int at24_add_dev(struct at24_dev_data_t *at24);
static int at24_del_dev(struct at24_dev_data_t *at24);
static int at24_del_all_dev(void);
static struct at24_dev_data_t* at24_get_dev(dev_t dev);
// // 这个函数用于确保每次写入count个字节数量之后，不超过下一页的起始地址
// static size_t at24_adjust_write_count(struct at24_dev_data_t *at24, unsigned int offset, size_t count);
// 使用i2c_transfer 读取
static ssize_t at24_read_i2c(struct at24_dev_data_t *at24, char *buf, unsigned int offset, size_t count);
static ssize_t at24_write_i2c(struct at24_dev_data_t *at24, const char *buf,unsigned int offset, size_t count);
/* private date definition */
static struct at24_dev_data_t** at24_dev_list = NULL;
static uint32_t at24_dev_count = 0;
static const struct of_device_id at24_dev_match_table[] = 
{
    {.compatible = "wt,at24c02"},
    {}
};
// i2c_driver结构体
static struct i2c_driver at24_i2c_drv = 
{
    .probe = at24_drv_probe,
    .remove = at24_drv_remove,
    .driver = {
        .name = "at24_drv",
        .owner = THIS_MODULE,
		.of_match_table = at24_dev_match_table,
    }
};

static struct file_operations at24_fop = 
{
	.owner = THIS_MODULE,
	.write = at24_write,
	.read = at24_read,
	.release = at24_release,
	.open = at24_open,
};

static int at24_del_all_dev(void)
{
	int i;

	if(at24_dev_list == NULL)
		return 0;

	for(i = 0; i < at24_dev_count; i++)
	{
		if(at24_dev_list[i] != NULL)
			kfree(at24_dev_list[i]);
	}
	kfree(at24_dev_list);
	at24_dev_count = 0;
}

static int at24_add_dev(struct at24_dev_data_t *at24)
{
	struct at24_dev_data_t** at24_dev_list_temp;

	if(at24_dev_list !=NULL)
	{
		//创建at24_dev_count + 1个struct at24_dev_data_t *空间
		at24_dev_list_temp = kzalloc(sizeof(struct at24_dev_data_t *) * (at24_dev_count + 1), GFP_KERNEL);
		if(at24_dev_list_temp == NULL)
		{
			ERR_DBUG;
			pr_err("at24_add_dev: kzalloc failed! at24_dev_count:%d\n", at24_dev_count);
			return -ENOMEM;
		}
		memcpy(at24_dev_list_temp, at24_dev_list, sizeof(struct at24_dev_data_t *) * (at24_dev_count));
		kfree(at24_dev_list);
		at24_dev_list_temp[at24_dev_count] = at24;//add at24 to the end of list
		at24_dev_list = at24_dev_list_temp;
		at24_dev_count = at24_dev_count + 1;
	}
	else 
	{
		at24_dev_list = kzalloc(sizeof(struct at24_dev_data_t *), GFP_KERNEL);
		if(at24_dev_list == NULL)
		{
			ERR_DBUG;
			pr_err("at24_add_dev: kzalloc failed! at24_dev_count:%d\n", at24_dev_count);
			return -ENOMEM;
		}
		at24_dev_list[0] = at24;//add at24 to the end of list
		at24_dev_count = at24_dev_count + 1;
	}
	return 0;
}

static int at24_del_dev(struct at24_dev_data_t *at24)
{
	int i;
	struct at24_dev_data_t** at24_dev_list_temp;

	if(at24_dev_count == 0)
	{
		ERR_DBUG;
		pr_err("the at24_dev_list is NULL!\n");
		return -EIO;
	}

	if(at24 == NULL)
	{
		ERR_DBUG;
		pr_err("the at24_dev is NULL!\n");
		return -EIO;
	}

	//find the positon of this at24 in at24_dev_list 第i+1个
	for(i = 0; i < at24_dev_count; i++)
	{
		if(at24_dev_list[i] == at24)
			break;
	}
	if(i >= at24_dev_count)
	{
		ERR_DBUG;
		pr_err("can not find at24_dev minor: %d in dev_list!\n", at24->miscdev->minor);
		return -EIO;
	}
	//创建at24_dev_count - 1 个struct at24_dev_data_t *空间
	at24_dev_list_temp = kzalloc(sizeof(struct at24_dev_data_t *) * (at24_dev_count - 1), GFP_KERNEL);
	if(at24_dev_list_temp == NULL)
	{
		ERR_DBUG;
		pr_err("at24_add_dev: kzalloc failed! at24_dev_count:%d\n", at24_dev_count);
		return -ENOMEM;
	}
	//拷贝前i个
	if((i + 1) > 1) //不是第一个
	{
		memcpy(at24_dev_list_temp, at24_dev_list, sizeof(struct at24_dev_data_t *) * (i));
	}
	//拷贝i+2 到 at24_dev_count 个
	if((i + 1) < at24_dev_count) //不是最后一个
	{
		memcpy(&at24_dev_list_temp[i+1], &at24_dev_list[i+2], sizeof(struct at24_dev_data_t *) * (at24_dev_count - 1 - i));
	}
	kfree(at24);
	kfree(at24_dev_list);
	at24_dev_list = at24_dev_list_temp;
	at24_dev_count = at24_dev_count-1;
	if(at24_dev_count == 0)
	{
		kfree(at24_dev_list);
		at24_dev_list = NULL;
	}
	return 0;

}
static struct at24_dev_data_t* at24_get_dev(dev_t dev)
{
	int i;
	struct at24_dev_data_t** at24_dev_list_temp;

	if(at24_dev_count == 0)
	{
		ERR_DBUG;
		pr_err("the at24_dev_list is NULL!\n");
		return NULL;
	}
	//find the positon of this at24 in at24_dev_list 第i+1个
	for(i = 0; i < at24_dev_count; i++)
	{
		if(at24_dev_list[i]->dev == dev)
			break;
	}
	if(i >= at24_dev_count)
	{
		ERR_DBUG;
		pr_err("can not find at24_dev minor: %d in dev_list!\n", MINOR(dev));
		return NULL;
	}
	return at24_dev_list[i];
}
static ssize_t at24_read_i2c(struct at24_dev_data_t *at24, char *buf,
				    unsigned int offset, size_t count)
{
	unsigned long timeout, read_time;
	struct i2c_client *client;
	struct i2c_msg msg[2];
	int status;
	u8 msgbuf[1];

    // clear msg
	memset(msg, 0, sizeof(msg));
	client = at24->client;

	if (count > AT24C02_MAX_IO_COUNT)
		count = AT24C02_MAX_IO_COUNT;

	msgbuf[0] = offset;

	msg[0].addr = client->addr;
	msg[0].buf = msgbuf;
	msg[0].len = 1;

	msg[1].addr = client->addr;
	msg[1].flags = I2C_M_RD;
	msg[1].buf = buf;
	msg[1].len = count;

	loop_until_timeout(timeout, read_time) {
		status = i2c_transfer(client->adapter, msg, 2);
		if (status == 2)
			status = count;

		dev_dbg(&client->dev, "read %zu@%d --> %d (%ld)\n",
				count, offset, status, jiffies);

		if (status == count)
			return count;
	}

	return -ETIMEDOUT;
}

static ssize_t at24_write_i2c(struct at24_dev_data_t *at24, const char *buf,
				    unsigned int offset, size_t count)
{
	unsigned long timeout, write_time;
	struct i2c_client *client;
	struct i2c_msg msg;
	ssize_t status = 0;

	client = at24->client;
	//count = at24_adjust_write_count(at24, offset, count);

	msg.addr = client->addr;
	msg.flags = 0;

	/* msg.buf is u8 and casts will mask the values */
	msg.buf = at24->writebuf;
	msg.buf[0] = offset;
	memcpy(&msg.buf[1], buf, count);
	msg.len = 1 + count;

	loop_until_timeout(timeout, write_time) {
		status = i2c_transfer(client->adapter, &msg, 1);
		if (status == 1)
			status = count;

		dev_dbg(&client->dev, "write %zu@%d --> %zd (%ld)\n",
				count, offset, status, jiffies);

		if (status == count)
			return count;
	}

	return -ETIMEDOUT;
}

static int at24_open(struct inode *inode, struct file *filp)
{
	struct at24_dev_data_t *at24 = at24_get_dev(inode->i_rdev);

	printk("open at24_dev:%s Major:10 minor:%d", at24->client->name, at24->miscdev->minor);
	filp->private_data = at24;

	return 0;

}
static int at24_release(struct inode *inode, struct file *filp)
{
	return 0;
}
static ssize_t at24_write(struct file *filp, const char __user *buf, size_t cnt, loff_t *offt)
{
	struct at24_dev_data_t *at24 = filp->private_data;
	return 0;
}
static ssize_t at24_read(struct file *filp, char __user *buf, size_t cnt, loff_t *offt)
{
	return 0;
}

/* function definition */
static int at24_drv_probe(struct i2c_client *client, const struct i2c_device_id *dt)
{
    int retvalue;
    struct at24_platform_data chip;
    struct at24_dev_data_t *at24_dev_data;
    unsigned num_addresses;
    
    //get at24_platform_data, this data should be given in i2c_device_id.driver_data. In this test, i will fix the at24_platform_data by macro definition
    chip.byte_len = AT24C02_BYTE_LEN;
    chip.page_size = AT24C02_PAGE_SIZE;
    chip.flags = AT24C02_FLAGS;
    // check the functionality if it supports i2c
    if (!i2c_check_functionality(client->adapter, I2C_FUNC_I2C)) {
        return -EPFNOSUPPORT;
    }
    // i2c地址个数
    num_addresses = 1;

    //分配at24_dev_data_t空间,使用devm_kzalloc将分配的内存与设备结构体 struct device 绑定，当设备被注销时，会自动释放此空间
    at24_dev_data = devm_kzalloc(&client->dev,sizeof(struct at24_dev_data_t), GFP_KERNEL);
    if(!at24_dev_data)
        return -ENOMEM;
    //初始化at24_dev_data中的变量
    mutex_init(&at24_dev_data->lock);
    at24_dev_data->chip =chip;
    at24_dev_data->num_addresses = num_addresses;
    //填充at24_dev_data中i2c_driver结构体
    at24_dev_data->i2cdriver = &at24_i2c_drv;
	//使用miscdev注册设备
	//申请一个miscdev空间
	at24_dev_data->miscdev = devm_kzalloc(&client->dev,sizeof(struct miscdevice), GFP_KERNEL);
	if(!at24_dev_data)
	{
		retvalue = -ENOMEM;
        goto free_at24_dev;
	}
	at24_dev_data->miscdev->fops = &at24_fop;
	at24_dev_data->miscdev->name = client->name;
	retvalue = misc_register(at24_dev_data->miscdev);
	if(retvalue != 0)
	{
		retvalue = -EIO;
		goto free_misc;
	}
	at24_dev_data->dev = MKDEV(10, at24_dev_data->miscdev->minor);//记录设备号
	printk("at24_dev: %s Major:10 minor:%d", at24_dev_data->client->name, at24_dev_data->miscdev->minor);
	retvalue = at24_add_dev(at24_dev_data);
	if(retvalue != 0)
	{
		retvalue = -EIO;
		goto free_misc;
	}
    i2c_set_clientdata(client, at24_dev_data);//将设备结构体指针放入client->dev->dev_data中
    return 0;
free_misc:
	if(at24_dev_data->miscdev != NULL)
		kfree(at24_dev_data->miscdev);
free_at24_dev:
	if(at24_dev_data != NULL)
		kfree(at24_dev_data);
	return retvalue;

}

static int at24_drv_remove(struct i2c_client *client)
{
	struct at24_dev_data_t *at24_dev_data = i2c_get_clientdata(client);

	misc_deregister(at24_dev_data->miscdev);

    return 0;
}

static int __init at24_drv_init(void)
{
    //注册i2c_driver

    return i2c_add_driver(&at24_i2c_drv);
}

static void __init at24_drv_exit(void)
{
    //注销i2c_driver
    i2c_del_driver(&at24_i2c_drv);
}

module_init(at24_drv_init);
module_exit(at24_drv_exit);



MODULE_LICENSE("GPL");
MODULE_AUTHOR("wt");
MODULE_INFO(intree, "Y");
