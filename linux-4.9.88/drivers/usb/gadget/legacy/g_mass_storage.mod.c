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
	{ 0xab6c68ac, __VMLINUX_SYMBOL_STR(fsg_config_from_params) },
	{ 0x1ccb58f7, __VMLINUX_SYMBOL_STR(fsg_common_set_num_buffers) },
	{ 0x6acb4179, __VMLINUX_SYMBOL_STR(fsg_common_set_inquiry_string) },
	{ 0xef818edc, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x141fce2a, __VMLINUX_SYMBOL_STR(fsg_common_remove_luns) },
	{ 0xaad9c857, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9a0221c7, __VMLINUX_SYMBOL_STR(fsg_common_free_buffers) },
	{ 0x29697972, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xf3ecfb4, __VMLINUX_SYMBOL_STR(fsg_common_set_cdev) },
	{ 0x39e23b71, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x2338c723, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xba3b4911, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6d5d64de, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xb7f57154, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0xd1a3e8e0, __VMLINUX_SYMBOL_STR(fsg_common_create_luns) },
	{ 0x68edc4d1, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xff24dc3f, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0xb9a5a2bb, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4eeba2bf, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x549a0a23, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xc55ee5a6, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7e26d4a5, __VMLINUX_SYMBOL_STR(fsg_common_set_sysfs) },
	{ 0x48614c8d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xdeab2e77, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CF8E715C8743384F7A5DAF4");
