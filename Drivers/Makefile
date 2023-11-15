# 1. 使用不同的开发板内核时, 一定要修改 KERN_DIR
# 2. KERN_DIR 中的内核要事先配置、编译, 为了能编译内核, 要先设置下列环境变量:
# 2.1 ARCH, 比如: export ARCH=arm64
# 2.2 CROSS_COMPILE=arm-linux-gnueabihf-, 比如: export CROSS_COMPILE=aarch64-linux-gnu06 # 2.3 PATH, 比如: export PATH=$PATH:/home/book/100ask_roc-rk3399-pc/ToolChain-6.3.1/gcc-linaro-6.3.1-2017.05-x86_64_aarch64-linux-gnu/bin
# 注意: 不同的开发板不同的编译器上述 3 个环境变量不一定相同,
# 请参考各开发板的高级用户使用手册
# CROSS_COMPILE=arm-linux-gnueabihf-
# rm -rf  $(DTBFS)/*.dtb
# rm -rf  $(ROOTFS_MNT)/lib/modules/4.9.88/*.ko
# rm -rf  $(ROOTFS_MNT)/lib/modules/4.9.88/*app
# rm -rf  $(DTBFS)/*.dtb
# rm -rf  $(ROOTFS_MNT)/lib/modules/4.9.88/*.ko
# rm -rf  $(ROOTFS_MNT)/lib/modules/4.9.88/*app
# cp /home/wta3wx/Linux/source_code/100ask_imx6ull-qemu/linux-4.9.88/arch/arm/boot/dts/100ask_imx6ull_qemu.dtb $(DTBFS)
# cp *.ko $(ROOTFS_MNT)/lib/modules/4.9.88
# arm-linux-gnueabihf-gcc -o testapp testapp.c
# cp *app  $(ROOTFS_MNT)/lib/modules/4.9.88
KERNELDIR := $(shell pwd)/../linux-4.9.88
CURRENT_PATH := $(shell pwd)
#ROOTFS := /home/wta3wx/Linux/qemu/ubuntu-16.04_imx6ul_qemu_system/imx6ull-system-image/rootfs.img
#ROOTFS_MNT := /home/wta3wx/mnt
DTBFS := /home/wta3wx/Linux/qemu/ubuntu-16.04_imx6ul_qemu_system/imx6ull-system-image
QEMU_MNT := /home/wta3wx/qemu_mnt
obj-m += keydrv.o leddrv.o
#leddrv.ko 有testdrv.o和led.o生成
keydrv-objs = testkey.o # led.o
leddrv-objs = testled.o # led.o
build: kernel_modules

kernel_modules:
	$(MAKE) -C $(KERNELDIR) M=$(CURRENT_PATH) modules
copy:
	rm -rf  $(DTBFS)/*.dtb
	rm -rf  $(QEMU_MNT)/*.ko
	rm -rf  $(QEMU_MNT)/*app
	cp $(KERNELDIR)/arch/arm/boot/dts/100ask_imx6ull_qemu.dtb $(DTBFS)
	cp *.ko $(QEMU_MNT)/
	arm-linux-gnueabihf-gcc -o testapp testapp.c
	cp *app  $(QEMU_MNT)/
get_dts:
	mv 100ask_imx6ull_qemu.dts ./100ask_imx6ull_qemu.dts.bak
	cp /home/wta3wx/Linux/source_code/100ask_imx6ull-qemu/linux-4.9.88/arch/arm/boot/dts/100ask_imx6ull_qemu.dts ./
copy_dts:
	cp *.dts $(KERNELDIR)/arch/arm/boot/dts/
clean:
	rm -rf *.o *app *.ko .*.o.d .*.cmd *.mod.* *.temp *.mod modules.order Module.symvers .tmp_versions