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
	{ 0xfe0ef16f, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0x92e73a2a, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0x37170f1e, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0x1b9b5852, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0xf3980bb0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2672ab2d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa0182221, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0x490bc657, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "65B0A26AD78122C417312C2");
