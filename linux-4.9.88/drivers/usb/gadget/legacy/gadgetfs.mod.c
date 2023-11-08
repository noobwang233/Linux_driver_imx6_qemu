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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2672ab2d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x7d419536, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0x382f0cee, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0xaeb0f71a, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0xd9e8ecd8, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xf34b5d3b, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xf9c3a7fd, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x969b4d15, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x9f592dcd, __VMLINUX_SYMBOL_STR(dup_iter) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x323cc41c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x800f5671, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x6bc9e7d8, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x4177eebe, __VMLINUX_SYMBOL_STR(usb_ep_set_halt) },
	{ 0xaeab85c9, __VMLINUX_SYMBOL_STR(usb_gadget_unregister_driver) },
	{ 0x4640ff6a, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x50b88f41, __VMLINUX_SYMBOL_STR(usb_get_gadget_udc_name) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x30180558, __VMLINUX_SYMBOL_STR(usb_gadget_set_state) },
	{ 0xff3a6604, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x89a4f37c, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5dd675b1, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x28b00825, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x57718273, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc031c111, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5e50f6cd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x790989c9, __VMLINUX_SYMBOL_STR(usb_ep_clear_halt) },
	{ 0xd2c7229e, __VMLINUX_SYMBOL_STR(use_mm) },
	{ 0xe1687f18, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x6a8e5392, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xa31db0e7, __VMLINUX_SYMBOL_STR(usb_ep_dequeue) },
	{ 0xf3980bb0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xee99a1b9, __VMLINUX_SYMBOL_STR(usb_gadget_vbus_draw) },
	{ 0x52e22d23, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x491ff2b0, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9c82d768, __VMLINUX_SYMBOL_STR(kiocb_set_cancel_fn) },
	{ 0xe218b878, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xe5b7742a, __VMLINUX_SYMBOL_STR(usb_gadget_probe_driver) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x27aa6eb, __VMLINUX_SYMBOL_STR(usb_ep_fifo_status) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2384c7ca, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0x80609d7f, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xce9ef1a7, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xd424431f, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x99767cb8, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x388504c8, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0xaf9e5ae1, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x64f9d14e, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x4278d37d, __VMLINUX_SYMBOL_STR(unuse_mm) },
	{ 0x2bd15524, __VMLINUX_SYMBOL_STR(usb_ep_fifo_flush) },
	{ 0xc757ec7e, __VMLINUX_SYMBOL_STR(simple_dir_inode_operations) },
	{ 0xdeab2e77, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6BA4C2DC39AF020E98801C3");
