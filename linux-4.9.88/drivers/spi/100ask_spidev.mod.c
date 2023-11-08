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
	{ 0xdeab2e77, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd9e8ecd8, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xc10014df, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x94552302, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xe5d3aaae, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x8fc3936c, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x7701869e, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x36c24269, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x9fb4c6bd, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xcc432362, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xcbcc099a, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0x38ecabcc, __VMLINUX_SYMBOL_STR(spi_busnum_to_master) },
	{ 0xef45dae4, __VMLINUX_SYMBOL_STR(spi_unregister_device) },
	{ 0x503919d, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x44857d68, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x1ac7207d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x7c6db3b0, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x57718273, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf3980bb0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2672ab2d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbf90f60e, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xca0aca85, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x323cc41c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x76596166, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x5e50f6cd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "006E0AFB779BEA005200F50");
