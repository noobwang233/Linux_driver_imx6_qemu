cmd_arch/arm/boot/dts/imx6ull-14x14-ebf.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6ull-14x14-ebf.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6ull-14x14-ebf.dtb.dts.tmp arch/arm/boot/dts/imx6ull-14x14-ebf.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6ull-14x14-ebf.dtb -b 0 -i arch/arm/boot/dts/ -Wno-unit_address_vs_reg -d arch/arm/boot/dts/.imx6ull-14x14-ebf.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6ull-14x14-ebf.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6ull-14x14-ebf.dtb.d.pre.tmp arch/arm/boot/dts/.imx6ull-14x14-ebf.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6ull-14x14-ebf.dtb.d

source_arch/arm/boot/dts/imx6ull-14x14-ebf.dtb := arch/arm/boot/dts/imx6ull-14x14-ebf.dts

deps_arch/arm/boot/dts/imx6ull-14x14-ebf.dtb := \
  arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/include/dt-bindings/input/linux-event-codes.h \
  arch/arm/boot/dts/imx6ull.dtsi \
  arch/arm/boot/dts/include/dt-bindings/clock/imx6ul-clock.h \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6ull-pinfunc.h \
  arch/arm/boot/dts/imx6ul-pinfunc.h \
  arch/arm/boot/dts/imx6ull-pinfunc-snvs.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/imx6ull-14x14-ebf.dtb: $(deps_arch/arm/boot/dts/imx6ull-14x14-ebf.dtb)

$(deps_arch/arm/boot/dts/imx6ull-14x14-ebf.dtb):