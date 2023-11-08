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
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5cc509a4, __VMLINUX_SYMBOL_STR(nsecs_to_jiffies) },
	{ 0x4df4df1a, __VMLINUX_SYMBOL_STR(ir_raw_event_store_edge) },
	{ 0xeea12f4d, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x34231038, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x1c132024, __VMLINUX_SYMBOL_STR(request_any_context_irq) },
	{ 0x213267a4, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xe5fd1ef5, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x75404595, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xf3980bb0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2672ab2d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xa7bcbcaf, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x776ed96d, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xd7e218ba, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x5278a4fb, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xf0f4ffad, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6AD43E30B8F63E799251A69");
