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
	{ 0xc510b017, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x2672ab2d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x255ef832, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x56dd70f6, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0x4b863d47, __VMLINUX_SYMBOL_STR(ps2_handle_ack) },
	{ 0x92669f30, __VMLINUX_SYMBOL_STR(ps2_sendbyte) },
	{ 0x751859ab, __VMLINUX_SYMBOL_STR(ps2_handle_response) },
	{ 0xca19dde2, __VMLINUX_SYMBOL_STR(input_mt_report_finger_count) },
	{ 0x7c6ac61f, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x495cf710, __VMLINUX_SYMBOL_STR(ps2_end_command) },
	{ 0xaad9c857, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x323cc41c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x4d9f3444, __VMLINUX_SYMBOL_STR(serio_interrupt) },
	{ 0xe9293831, __VMLINUX_SYMBOL_STR(ps2_drain) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb1ea493e, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd7cce712, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x8985d6ee, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x7aacad7c, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xe0315a9d, __VMLINUX_SYMBOL_STR(serio_unregister_child_port) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xb3eba0e9, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xefd442fe, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x28b00825, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19d3b7d8, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7d2d450f, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5e50f6cd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xe7b2b007, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0xfc08bb84, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0xfbd6fd88, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x51ef33b8, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0xf87bf551, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xbb2cd99, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xba3b4911, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf3980bb0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x2d4a1790, __VMLINUX_SYMBOL_STR(ps2_command) },
	{ 0x58d2273e, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1c89c0e0, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb603c965, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xd31895d5, __VMLINUX_SYMBOL_STR(input_mt_drop_unused) },
	{ 0x86e29e48, __VMLINUX_SYMBOL_STR(ps2_init) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x162b0b02, __VMLINUX_SYMBOL_STR(serio_reconnect) },
	{ 0xf75085c9, __VMLINUX_SYMBOL_STR(__serio_register_port) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6a380ae5, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x6375ee25, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xff15378f, __VMLINUX_SYMBOL_STR(ps2_cmd_aborted) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x61866233, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x8b2d7d64, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xdeab2e77, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4401d2b, __VMLINUX_SYMBOL_STR(ps2_begin_command) },
	{ 0xc33ed8e8, __VMLINUX_SYMBOL_STR(input_mt_assign_slots) },
	{ 0x47175211, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty05pr*id*ex*");

MODULE_INFO(srcversion, "67246AF911AC881338EDA25");
