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
	{ 0xdc71537f, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdeab2e77, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x48614c8d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x7704142e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe3183f57, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3a1ac054, __VMLINUX_SYMBOL_STR(set_normalized_timespec64) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x323cc41c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28b00825, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x3bb1851e, __VMLINUX_SYMBOL_STR(usb_get_descriptor) },
	{ 0xe2206e61, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x8b2d7d64, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0x57718273, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xba3b4911, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbb48d6f4, __VMLINUX_SYMBOL_STR(usb_get_status) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x49018887, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x44dd3d8d, __VMLINUX_SYMBOL_STR(completion_done) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xf3980bb0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2672ab2d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x686981cc, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xdbfc174c, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x59c88dd4, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9a44e23b, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x68edf6af, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x46e6b8a5, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4fadc663, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x3e81ec50, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcaaefa1c, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x8fe15e19, __VMLINUX_SYMBOL_STR(usb_sg_wait) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x3dc1da66, __VMLINUX_SYMBOL_STR(usb_sg_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7fdd56f3, __VMLINUX_SYMBOL_STR(usb_sg_cancel) },
	{ 0x78a7321f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd442fe, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "56A266E3DBD994D3297EE42");
