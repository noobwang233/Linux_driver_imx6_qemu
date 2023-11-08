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
	{ 0x762124b9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x8b93010a, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7e89c7d6, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x478bed9b, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x7c6db3b0, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xe5d3aaae, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x8fc3936c, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x9fb4c6bd, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xcc432362, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x3345f6f8, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xeb977dbb, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xa7ceab7f, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x57718273, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa73c0e3, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xfb0e6687, __VMLINUX_SYMBOL_STR(syscon_regmap_lookup_by_phandle) },
	{ 0x7cc55e18, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0xb29ebba7, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x879e479b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x96fdb539, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xefd442fe, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x323cc41c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x5e50f6cd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x7701869e, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x94552302, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x76596166, __VMLINUX_SYMBOL_STR(device_destroy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx6q-dcic");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-dcicC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-dcic");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-dcicC*");

MODULE_INFO(srcversion, "A1652BA98651818366A42B3");
