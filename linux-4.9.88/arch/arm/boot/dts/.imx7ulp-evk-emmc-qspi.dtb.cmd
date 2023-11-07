cmd_arch/arm/boot/dts/imx7ulp-evk-emmc-qspi.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx7ulp-evk-emmc-qspi.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx7ulp-evk-emmc-qspi.dtb.dts.tmp arch/arm/boot/dts/imx7ulp-evk-emmc-qspi.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx7ulp-evk-emmc-qspi.dtb -b 0 -i arch/arm/boot/dts/ -Wno-unit_address_vs_reg -d arch/arm/boot/dts/.imx7ulp-evk-emmc-qspi.dtb.d.dtc.tmp arch/arm/boot/dts/.imx7ulp-evk-emmc-qspi.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx7ulp-evk-emmc-qspi.dtb.d.pre.tmp arch/arm/boot/dts/.imx7ulp-evk-emmc-qspi.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx7ulp-evk-emmc-qspi.dtb.d

source_arch/arm/boot/dts/imx7ulp-evk-emmc-qspi.dtb := arch/arm/boot/dts/imx7ulp-evk-emmc-qspi.dts

deps_arch/arm/boot/dts/imx7ulp-evk-emmc-qspi.dtb := \
  arch/arm/boot/dts/imx7ulp-evk-qspi.dts \
  arch/arm/boot/dts/imx7ulp-evk.dts \
  arch/arm/boot/dts/imx7ulp.dtsi \
  arch/arm/boot/dts/include/dt-bindings/clock/imx7ulp-clock.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/pwm/pwm.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx7ulp-pinfunc.h \
  arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/include/dt-bindings/input/linux-event-codes.h \

arch/arm/boot/dts/imx7ulp-evk-emmc-qspi.dtb: $(deps_arch/arm/boot/dts/imx7ulp-evk-emmc-qspi.dtb)

$(deps_arch/arm/boot/dts/imx7ulp-evk-emmc-qspi.dtb):
