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
#include "linux/of.h"
#include "linux/printk.h"
#include "test_at24.h"

/* macro definition*/
#define AT24_DEV_COUNT 1
#define AT24C02_BYTE_LEN 2048/8 //2k bit 
#define AT24C02_PAGE_SIZE AT24C02_BYTE_LEN/32 //32page
#define AT24C02_FLAGS 0
#define AT24C02_MAX_IO_COUNT 255 // max io byte every time
/* 变量声明 */

/* private function declear */
// probe and remove
static int at24_drv_probe(struct i2c_client *client, const struct i2c_device_id *dt);
static int at24_drv_remove(struct i2c_client *client);

//module init and exit
static int __init at24_drv_init(void);
static void __init at24_drv_exit(void);


/* private date definition */
static const struct i2c_device_id at24_dev_match_table[] = 
{
    {.name = "wt,at24c02",},
    {}
};
// i2c_driver结构体
static struct i2c_driver at24_i2c_drv = 
{
    .probe = at24_drv_probe,
    .remove = at24_drv_remove,
    .id_table = at24_dev_match_table,
    .driver = {
        .name = "at24_drv",
        .owner = THIS_MODULE,
    }
};

static ssize_t at24_read_i2c(struct at24_dev_data_t *at24, char *buf,
				    unsigned int offset, size_t count)
{
	unsigned long timeout, read_time;
	struct i2c_client *client;
	struct i2c_msg msg[2];
	int status, i;
	u8 msgbuf[1];

    // clear msg
	memset(msg, 0, sizeof(msg));
	client = at24->client;

	if (count > AT24C02_MAX_IO_COUNT)
		count = AT24C02_MAX_IO_COUNT;

	msgbuf[0] = offset;

	msg[0].addr = client->addr;
	msg[0].buf = msgbuf;
	msg[0].len = i;

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

/* function definition */
static int at24_drv_probe(struct i2c_client *client, const struct i2c_device_id *dt)
{
    int retvalue;
    const char *str;
    struct at24_platform_data chip;
    struct at24_dev_data_t *at24_dev_data;
    struct device_node *np = client->dev.of_node;
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
    

    i2c_set_clientdata(client, at24_dev_data);//将设备结构体指针放入client->dev->dev_data中

    return 0;


}

static int at24_drv_remove(struct i2c_client *client)
{

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
