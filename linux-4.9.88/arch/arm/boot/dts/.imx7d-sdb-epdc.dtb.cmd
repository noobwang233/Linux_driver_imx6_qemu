cmd_arch/arm/boot/dts/imx7d-sdb-epdc.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx7d-sdb-epdc.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx7d-sdb-epdc.dtb.dts.tmp arch/arm/boot/dts/imx7d-sdb-epdc.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx7d-sdb-epdc.dtb -b 0 -i arch/arm/boot/dts/ -Wno-unit_address_vs_reg -d arch/arm/boot/dts/.imx7d-sdb-epdc.dtb.d.dtc.tmp arch/arm/boot/dts/.imx7d-sdb-epdc.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx7d-sdb-epdc.dtb.d.pre.tmp arch/arm/boot/dts/.imx7d-sdb-epdc.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx7d-sdb-epdc.dtb.d

source_arch/arm/boot/dts/imx7d-sdb-epdc.dtb := arch/arm/boot/dts/imx7d-sdb-epdc.dts

deps_arch/arm/boot/dts/imx7d-sdb-epdc.dtb := \
  arch/arm/boot/dts/imx7d-sdb.dts \
  arch/arm/boot/dts/imx7d.dtsi \
  arch/arm/boot/dts/imx7s.dtsi \
  arch/arm/boot/dts/include/dt-bindings/clock/imx7d-clock.h \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/include/dt-bindings/input/linux-event-codes.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx7d-pinfunc.h \
  arch/arm/boot/dts/imx7d-pinfunc-lpsr.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx7d-sdb-epdc.dtsi \

arch/arm/boot/dts/imx7d-sdb-epdc.dtb: $(deps_arch/arm/boot/dts/imx7d-sdb-epdc.dtb)

$(deps_arch/arm/boot/dts/imx7d-sdb-epdc.dtb):
