cmd_arch/arm/boot/dts/vf610m4-colibri.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.vf610m4-colibri.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.vf610m4-colibri.dtb.dts.tmp arch/arm/boot/dts/vf610m4-colibri.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/vf610m4-colibri.dtb -b 0 -i arch/arm/boot/dts/ -Wno-unit_address_vs_reg -d arch/arm/boot/dts/.vf610m4-colibri.dtb.d.dtc.tmp arch/arm/boot/dts/.vf610m4-colibri.dtb.dts.tmp ; cat arch/arm/boot/dts/.vf610m4-colibri.dtb.d.pre.tmp arch/arm/boot/dts/.vf610m4-colibri.dtb.d.dtc.tmp > arch/arm/boot/dts/.vf610m4-colibri.dtb.d

source_arch/arm/boot/dts/vf610m4-colibri.dtb := arch/arm/boot/dts/vf610m4-colibri.dts

deps_arch/arm/boot/dts/vf610m4-colibri.dtb := \
  arch/arm/boot/dts/vf610m4.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/armv7-m.dtsi \
  arch/arm/boot/dts/vfxxx.dtsi \
  arch/arm/boot/dts/vf610-pinfunc.h \
  arch/arm/boot/dts/include/dt-bindings/clock/vf610-clock.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \

arch/arm/boot/dts/vf610m4-colibri.dtb: $(deps_arch/arm/boot/dts/vf610m4-colibri.dtb)

$(deps_arch/arm/boot/dts/vf610m4-colibri.dtb):
