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
	{ 0x8a095a73, __VMLINUX_SYMBOL_STR(rpmsg_send) },
	{ 0xefd442fe, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x75d6c9ff, __VMLINUX_SYMBOL_STR(rpmsg_sendto) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xba3b4911, __VMLINUX_SYMBOL_STR(_dev_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "59E4A871FAA015981F070D4");
