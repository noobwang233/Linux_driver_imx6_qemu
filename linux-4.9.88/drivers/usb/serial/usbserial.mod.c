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
	{ 0x6eff878e, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfdd0d9b9, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x2672ab2d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x73e1a7fe, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x59435cb7, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x7647726c, __VMLINUX_SYMBOL_STR(handle_sysrq) },
	{ 0xfff289f3, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x4eb1a083, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xdc355d07, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xc89de85, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1dc9523e, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x49018887, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x9e321c08, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x3cc93e6e, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x323cc41c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x887da728, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc2910861, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4420e4e5, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x48ef2617, __VMLINUX_SYMBOL_STR(__tty_insert_flip_char) },
	{ 0xc06d65eb, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xcb219f70, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xefd442fe, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7704142e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x57718273, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x513b9459, __VMLINUX_SYMBOL_STR(tty_ldisc_deref) },
	{ 0xc10014df, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x3669652f, __VMLINUX_SYMBOL_STR(usb_unpoison_urb) },
	{ 0xa87c7c70, __VMLINUX_SYMBOL_STR(usb_poison_urb) },
	{ 0x34ddcd57, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xde5c4b88, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x5ced5049, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x41b54b3c, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x5e50f6cd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x80434cac, __VMLINUX_SYMBOL_STR(tty_vhangup) },
	{ 0x7c810528, __VMLINUX_SYMBOL_STR(tty_ldisc_ref) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xbba49804, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xb9ee6e38, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xa51c865, __VMLINUX_SYMBOL_STR(usb_store_new_id) },
	{ 0x30bbb13, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x57b7799a, __VMLINUX_SYMBOL_STR(tty_register_device) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x428f469a, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0x678e4d46, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x84b29451, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xba3b4911, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x68edf6af, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf3980bb0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x7ac254e1, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x44857d68, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xc34adbe5, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbc3d79e3, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd7125ac, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x30e74134, __VMLINUX_SYMBOL_STR(tty_termios_copy_hw) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x12b93fc5, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x54b68b1d, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0x694be42a, __VMLINUX_SYMBOL_STR(usb_show_dynids) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x2dfc7eae, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x5971e172, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x845dce18, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xbd9640e1, __VMLINUX_SYMBOL_STR(usb_match_one_id) },
	{ 0xe3183f57, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x46f3aaf3, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8b2d7d64, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x991f3c7a, __VMLINUX_SYMBOL_STR(driver_attach) },
	{ 0x990cc295, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x48614c8d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xb9af53af, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xdbfc174c, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x6c452c55, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x8279b0e, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x9a44e23b, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x2d2542a1, __VMLINUX_SYMBOL_STR(usb_put_intf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A58B8592894CB14B87329C3");
