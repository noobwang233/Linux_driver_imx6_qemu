#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9a454969, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x94552302, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7701869e, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x76596166, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x7c6db3b0, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x9fb4c6bd, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xe5d3aaae, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x8fc3936c, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x36c24269, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xcbcc099a, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0x38ecabcc, __VMLINUX_SYMBOL_STR(spi_busnum_to_master) },
	{ 0x5278a4fb, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xe5fd1ef5, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xf0f4ffad, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xc10014df, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xef45dae4, __VMLINUX_SYMBOL_STR(spi_unregister_device) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xefd442fe, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x29e85232, __VMLINUX_SYMBOL_STR(adxl34x_probe) },
	{ 0xb5465e8d, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0xbf90f60e, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x49a4fcbd, __VMLINUX_SYMBOL_STR(adxl34x_remove) },
	{ 0x66535a18, __VMLINUX_SYMBOL_STR(adxl34x_suspend) },
	{ 0xe4586827, __VMLINUX_SYMBOL_STR(adxl34x_resume) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "21CA61773B23BDC4B7880B4");
