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
	{ 0x2672ab2d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8968f68c, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x89d10367, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xdc71537f, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc6702268, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x8aaa0d6d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x38e5252b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0x49018887, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x22348dfe, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x323cc41c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xa6d83381, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe0da95b8, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x28b00825, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x57718273, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd133f796, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x78a7321f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x5f01de02, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5e50f6cd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x53da44c6, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x686981cc, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x767aa202, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x51655246, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0x678e4d46, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x68edf6af, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf3980bb0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3e60251e, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x1c89c0e0, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2a336804, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xe2206e61, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xb603c965, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xa0b04675, __VMLINUX_SYMBOL_STR(vmalloc_32) },
	{ 0x4081039c, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6a380ae5, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf77cf541, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x32a862b8, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x59c88dd4, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xfbb7a5db, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xdbfc174c, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x30237293, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x5ae84e62, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x6c452c55, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x9a44e23b, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x47175211, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3B347441C25CC5199B44097");
