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
	{ 0x7f248605, __VMLINUX_SYMBOL_STR(unregister_rpmsg_driver) },
	{ 0x7f21c008, __VMLINUX_SYMBOL_STR(__register_rpmsg_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e321c08, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xde5c4b88, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x4420e4e5, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2dfc7eae, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x879e479b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xbc3d79e3, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0xdc355d07, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0xc06d65eb, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8a095a73, __VMLINUX_SYMBOL_STR(rpmsg_send) },
	{ 0x41b54b3c, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x887da728, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x12b93fc5, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0xba3b4911, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xefd442fe, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x990cc295, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3baecd03, __VMLINUX_SYMBOL_STR(tty_prepare_flip_string) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C8F2E2D7F0A4FEF76D59F79");
