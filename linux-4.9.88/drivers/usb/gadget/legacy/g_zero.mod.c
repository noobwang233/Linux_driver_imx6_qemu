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
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xaad9c857, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xac28cf0f, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig_reset) },
	{ 0x29697972, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x39e23b71, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2338c723, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xba3b4911, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6d5d64de, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xb7f57154, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x5b0c993, __VMLINUX_SYMBOL_STR(usb_gadget_wakeup) },
	{ 0x68edc4d1, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xff24dc3f, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0xb9a5a2bb, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4eeba2bf, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x5afceb7e, __VMLINUX_SYMBOL_STR(usb_add_config_only) },
	{ 0xc55ee5a6, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x48614c8d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xdeab2e77, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "124BBAEC06D72116CD699C4");
