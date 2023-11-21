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
#include "linux/export.h"
#include "test_at24.h"

/* macro definition*/
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
    {.name = "wt,at24c02",.driver_data = 0x50},// address
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



/* function definition */
static int at24_drv_probe(struct i2c_client *client, const struct i2c_device_id *dt)
{

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
