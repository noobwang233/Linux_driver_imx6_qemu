#include <linux/i2c.h>      //i2c子系统相关头文件





// AT24设备结构体定义
struct at24_dev_t
{
    struct i2c_driver i2cdriver;
    
};