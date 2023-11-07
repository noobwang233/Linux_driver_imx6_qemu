	.arch armv7-a
	.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
	.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
	.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
	.eabi_attribute 26, 2	@ Tag_ABI_enum_size
	.eabi_attribute 30, 2	@ Tag_ABI_optimization_goals
	.eabi_attribute 34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute 18, 4	@ Tag_ABI_PCS_wchar_t
	.file	"bounds.c"
@ GNU C89 (Linaro GCC 6.2-2016.11) version 6.2.1 20161016 (arm-linux-gnueabihf)
@	compiled by GNU C version 4.8.4, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3, isl version none
@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed:  -nostdinc -I ./arch/arm/include
@ -I ./arch/arm/include/generated/uapi -I ./arch/arm/include/generated
@ -I ./include -I ./arch/arm/include/uapi -I ./include/uapi
@ -I ./include/generated/uapi -imultilib . -imultiarch arm-linux-gnueabihf
@ -iprefix /home/wta3wx/Linux/source_code/100ask_imx6ull-qemu/ToolChain/gcc-linaro-6.2.1-2016.11-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.2.1/
@ -isysroot /home/wta3wx/Linux/source_code/100ask_imx6ull-qemu/ToolChain/gcc-linaro-6.2.1-2016.11-x86_64_arm-linux-gnueabihf/bin/../arm-linux-gnueabihf/libc
@ -D __KERNEL__ -D __LINUX_ARM_ARCH__=7 -U arm -D CC_HAVE_ASM_GOTO
@ -D KBUILD_BASENAME="bounds" -D KBUILD_MODNAME="bounds"
@ -isystem /home/wta3wx/Linux/source_code/100ask_imx6ull-qemu/ToolChain/gcc-linaro-6.2.1-2016.11-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.2.1/include
@ -include ./include/linux/kconfig.h -MD kernel/.bounds.s.d kernel/bounds.c
@ -mlittle-endian -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -marm
@ -march=armv7-a -mfloat-abi=soft -mtune=cortex-a9 -mtls-dialect=gnu
@ -auxbase-strip kernel/bounds.s -g -O2 -Wall -Wundef -Wstrict-prototypes
@ -Wno-trigraphs -Werror=implicit-function-declaration -Wno-format-security
@ -Wno-frame-address -Wframe-larger-than=1024 -Wno-unused-but-set-variable
@ -Wunused-const-variable=0 -Wdeclaration-after-statement -Wno-pointer-sign
@ -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time
@ -Werror=incompatible-pointer-types -std=gnu90 -fno-strict-aliasing
@ -fno-common -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-sra -funwind-tables
@ -fno-delete-null-pointer-checks -fno-stack-protector -fomit-frame-pointer
@ -fno-var-tracking-assignments -fno-strict-overflow -fstack-check=no
@ -fconserve-stack -fverbose-asm --param allow-store-data-races=0
@ options enabled:  -faggressive-loop-optimizations -falign-jumps
@ -falign-labels -falign-loops -fauto-inc-dec -fbranch-count-reg
@ -fcaller-saves -fchkp-check-incomplete-type -fchkp-check-read
@ -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
@ -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
@ -fchkp-use-static-const-bounds -fchkp-use-wrappers
@ -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
@ -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
@ -fdevirtualize-speculatively -fearly-inlining
@ -feliminate-unused-debug-types -fexpensive-optimizations
@ -fforward-propagate -ffunction-cse -fgcse -fgcse-lm -fgnu-runtime
@ -fgnu-unique -fguess-branch-probability -fhoist-adjacent-loads -fident
@ -fif-conversion -fif-conversion2 -findirect-inlining -finline
@ -finline-atomics -finline-functions-called-once -finline-small-functions
@ -fipa-cp -fipa-cp-alignment -fipa-icf -fipa-icf-functions
@ -fipa-icf-variables -fipa-profile -fipa-pure-const -fipa-ra
@ -fipa-reference -fira-hoist-pressure -fira-share-save-slots
@ -fira-share-spill-slots -fisolate-erroneous-paths-dereference -fivopts
@ -fkeep-static-consts -fleading-underscore -flifetime-dse -flra-remat
@ -flto-odr-type-merging -fmath-errno -fmerge-constants
@ -fmerge-debug-strings -fmove-loop-invariants -fomit-frame-pointer
@ -foptimize-sibling-calls -foptimize-strlen -fpartial-inlining -fpeephole
@ -fpeephole2 -fplt -fprefetch-loop-arrays -freg-struct-return
@ -freorder-blocks -freorder-functions -frerun-cse-after-loop
@ -fsched-critical-path-heuristic -fsched-dep-count-heuristic
@ -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
@ -fsched-pressure -fsched-rank-heuristic -fsched-spec
@ -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-insns
@ -fschedule-insns2 -fsection-anchors -fsemantic-interposition
@ -fshow-column -fshrink-wrap -fsigned-zeros -fsplit-ivs-in-unroller
@ -fsplit-wide-types -fssa-backprop -fssa-phiopt -fstdarg-opt
@ -fstrict-volatile-bitfields -fsync-libcalls -fthread-jumps
@ -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce
@ -ftree-ccp -ftree-ch -ftree-coalesce-vars -ftree-copy-prop -ftree-cselim
@ -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
@ -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
@ -ftree-vrp -funit-at-a-time -funwind-tables -fvar-tracking -fverbose-asm
@ -fzero-initialized-in-bss -marm -mglibc -mlittle-endian
@ -mpic-data-is-text-relative -msched-prolog -munaligned-access
@ -mvectorize-with-neon-quad

	.text
.Ltext0:
	.align	2
	.global	foo
	.syntax unified
	.arm
	.fpu softvfp
	.type	foo, %function
foo:
	.fnstart
.LFB151:
	.file 1 "kernel/bounds.c"
	.loc 1 16 0
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	.loc 1 18 0
	.syntax divided
@ 18 "kernel/bounds.c" 1
	
->NR_PAGEFLAGS #21 __NR_PAGEFLAGS	@
@ 0 "" 2
	.loc 1 19 0
@ 19 "kernel/bounds.c" 1
	
->MAX_NR_ZONES #3 __MAX_NR_ZONES	@
@ 0 "" 2
	.loc 1 21 0
@ 21 "kernel/bounds.c" 1
	
->NR_CPUS_BITS #2 ilog2(CONFIG_NR_CPUS)	@
@ 0 "" 2
	.loc 1 23 0
@ 23 "kernel/bounds.c" 1
	
->SPINLOCK_SIZE #4 sizeof(spinlock_t)	@
@ 0 "" 2
	.arm
	.syntax unified
	bx	lr	@
.LFE151:
	.fnend
	.size	foo, .-foo
	.section	.debug_frame,"",%progbits
.Lframe0:
	.4byte	.LECIE0-.LSCIE0
.LSCIE0:
	.4byte	0xffffffff
	.byte	0x3
	.ascii	"\000"
	.uleb128 0x1
	.sleb128 -4
	.uleb128 0xe
	.byte	0xc
	.uleb128 0xd
	.uleb128 0
	.align	2
.LECIE0:
.LSFDE0:
	.4byte	.LEFDE0-.LASFDE0
.LASFDE0:
	.4byte	.Lframe0
	.4byte	.LFB151
	.4byte	.LFE151-.LFB151
	.align	2
.LEFDE0:
	.text
.Letext0:
	.file 2 "./include/linux/types.h"
	.file 3 "./arch/arm/include/asm/hwcap.h"
	.file 4 "./arch/arm/include/asm/barrier.h"
	.file 5 "./include/linux/init.h"
	.file 6 "./include/linux/printk.h"
	.file 7 "./include/linux/kernel.h"
	.file 8 "./include/linux/page-flags.h"
	.file 9 "./include/linux/mmzone.h"
	.file 10 "./include/linux/lockdep.h"
	.section	.debug_info,"",%progbits
.Ldebug_info0:
	.4byte	0x41f
	.2byte	0x4
	.4byte	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF99
	.byte	0x1
	.4byte	.LASF100
	.4byte	.LASF101
	.4byte	.Ltext0
	.4byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	.LASF0
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.4byte	.LASF2
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.4byte	.LASF3
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	.LASF4
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.4byte	.LASF5
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF9
	.uleb128 0x4
	.4byte	0x6b
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.4byte	.LASF10
	.uleb128 0x5
	.byte	0x4
	.4byte	0x6b
	.uleb128 0x6
	.4byte	.LASF12
	.byte	0x2
	.byte	0x1d
	.4byte	0x8f
	.uleb128 0x2
	.byte	0x1
	.byte	0x2
	.4byte	.LASF11
	.uleb128 0x7
	.byte	0x4
	.byte	0x2
	.byte	0xae
	.4byte	0xab
	.uleb128 0x8
	.4byte	.LASF102
	.byte	0x2
	.byte	0xaf
	.4byte	0x41
	.byte	0
	.byte	0
	.uleb128 0x6
	.4byte	.LASF13
	.byte	0x2
	.byte	0xb0
	.4byte	0x96
	.uleb128 0x9
	.4byte	.LASF14
	.byte	0x3
	.byte	0xd
	.4byte	0x48
	.uleb128 0x9
	.4byte	.LASF15
	.byte	0x3
	.byte	0xd
	.4byte	0x48
	.uleb128 0xa
	.uleb128 0x9
	.4byte	.LASF16
	.byte	0x4
	.byte	0x28
	.4byte	0xd8
	.uleb128 0x5
	.byte	0x4
	.4byte	0xcc
	.uleb128 0x6
	.4byte	.LASF17
	.byte	0x5
	.byte	0x73
	.4byte	0xe9
	.uleb128 0x5
	.byte	0x4
	.4byte	0xef
	.uleb128 0xb
	.4byte	0x41
	.uleb128 0xc
	.4byte	0xde
	.4byte	0xff
	.uleb128 0xd
	.byte	0
	.uleb128 0x9
	.4byte	.LASF18
	.byte	0x5
	.byte	0x76
	.4byte	0xf4
	.uleb128 0x9
	.4byte	.LASF19
	.byte	0x5
	.byte	0x76
	.4byte	0xf4
	.uleb128 0x9
	.4byte	.LASF20
	.byte	0x5
	.byte	0x77
	.4byte	0xf4
	.uleb128 0x9
	.4byte	.LASF21
	.byte	0x5
	.byte	0x77
	.4byte	0xf4
	.uleb128 0xc
	.4byte	0x6b
	.4byte	0x136
	.uleb128 0xd
	.byte	0
	.uleb128 0x9
	.4byte	.LASF22
	.byte	0x5
	.byte	0x7e
	.4byte	0x12b
	.uleb128 0x9
	.4byte	.LASF23
	.byte	0x5
	.byte	0x7f
	.4byte	0x7e
	.uleb128 0x9
	.4byte	.LASF24
	.byte	0x5
	.byte	0x80
	.4byte	0x48
	.uleb128 0x9
	.4byte	.LASF25
	.byte	0x5
	.byte	0x89
	.4byte	0x84
	.uleb128 0x9
	.4byte	.LASF26
	.byte	0x5
	.byte	0x8f
	.4byte	0xd8
	.uleb128 0x9
	.4byte	.LASF27
	.byte	0x5
	.byte	0x91
	.4byte	0x84
	.uleb128 0xc
	.4byte	0x72
	.4byte	0x183
	.uleb128 0xd
	.byte	0
	.uleb128 0x4
	.4byte	0x178
	.uleb128 0x9
	.4byte	.LASF28
	.byte	0x6
	.byte	0xa
	.4byte	0x183
	.uleb128 0x9
	.4byte	.LASF29
	.byte	0x6
	.byte	0xb
	.4byte	0x183
	.uleb128 0xc
	.4byte	0x41
	.4byte	0x1a9
	.uleb128 0xd
	.byte	0
	.uleb128 0x9
	.4byte	.LASF30
	.byte	0x6
	.byte	0x2f
	.4byte	0x19e
	.uleb128 0x9
	.4byte	.LASF31
	.byte	0x6
	.byte	0x43
	.4byte	0x12b
	.uleb128 0x9
	.4byte	.LASF32
	.byte	0x6
	.byte	0xb4
	.4byte	0x41
	.uleb128 0x9
	.4byte	.LASF33
	.byte	0x6
	.byte	0xb5
	.4byte	0x41
	.uleb128 0x9
	.4byte	.LASF34
	.byte	0x6
	.byte	0xb6
	.4byte	0x41
	.uleb128 0xe
	.4byte	.LASF36
	.uleb128 0x4
	.4byte	0x1e0
	.uleb128 0xf
	.4byte	.LASF35
	.byte	0x6
	.2byte	0x1c2
	.4byte	0x1e5
	.uleb128 0xe
	.4byte	.LASF37
	.uleb128 0xf
	.4byte	.LASF38
	.byte	0x7
	.2byte	0x104
	.4byte	0x1f6
	.uleb128 0x10
	.4byte	0x77
	.4byte	0x216
	.uleb128 0x11
	.4byte	0x41
	.byte	0
	.uleb128 0xf
	.4byte	.LASF39
	.byte	0x7
	.2byte	0x105
	.4byte	0x222
	.uleb128 0x5
	.byte	0x4
	.4byte	0x207
	.uleb128 0xf
	.4byte	.LASF40
	.byte	0x7
	.2byte	0x1bd
	.4byte	0x41
	.uleb128 0xf
	.4byte	.LASF41
	.byte	0x7
	.2byte	0x1be
	.4byte	0x41
	.uleb128 0xf
	.4byte	.LASF42
	.byte	0x7
	.2byte	0x1bf
	.4byte	0x41
	.uleb128 0xf
	.4byte	.LASF43
	.byte	0x7
	.2byte	0x1c0
	.4byte	0x41
	.uleb128 0xf
	.4byte	.LASF44
	.byte	0x7
	.2byte	0x1c1
	.4byte	0x41
	.uleb128 0xf
	.4byte	.LASF45
	.byte	0x7
	.2byte	0x1c2
	.4byte	0x41
	.uleb128 0xf
	.4byte	.LASF46
	.byte	0x7
	.2byte	0x1c3
	.4byte	0x41
	.uleb128 0xf
	.4byte	.LASF47
	.byte	0x7
	.2byte	0x1c4
	.4byte	0x41
	.uleb128 0xf
	.4byte	.LASF48
	.byte	0x7
	.2byte	0x1c6
	.4byte	0x84
	.uleb128 0xf
	.4byte	.LASF49
	.byte	0x7
	.2byte	0x1cd
	.4byte	0xab
	.uleb128 0xf
	.4byte	.LASF50
	.byte	0x7
	.2byte	0x1e1
	.4byte	0x41
	.uleb128 0xf
	.4byte	.LASF51
	.byte	0x7
	.2byte	0x1e3
	.4byte	0x84
	.uleb128 0x12
	.4byte	.LASF60
	.byte	0x4
	.4byte	0x48
	.byte	0x7
	.2byte	0x1e6
	.4byte	0x2e8
	.uleb128 0x13
	.4byte	.LASF52
	.byte	0
	.uleb128 0x13
	.4byte	.LASF53
	.byte	0x1
	.uleb128 0x13
	.4byte	.LASF54
	.byte	0x2
	.uleb128 0x13
	.4byte	.LASF55
	.byte	0x3
	.uleb128 0x13
	.4byte	.LASF56
	.byte	0x4
	.byte	0
	.uleb128 0xf
	.4byte	.LASF57
	.byte	0x7
	.2byte	0x1ec
	.4byte	0x2b8
	.uleb128 0xf
	.4byte	.LASF58
	.byte	0x7
	.2byte	0x1ff
	.4byte	0x183
	.uleb128 0xf
	.4byte	.LASF59
	.byte	0x7
	.2byte	0x20a
	.4byte	0x183
	.uleb128 0x14
	.4byte	.LASF61
	.byte	0x4
	.4byte	0x48
	.byte	0x8
	.byte	0x4a
	.4byte	0x3d1
	.uleb128 0x13
	.4byte	.LASF62
	.byte	0
	.uleb128 0x13
	.4byte	.LASF63
	.byte	0x1
	.uleb128 0x13
	.4byte	.LASF64
	.byte	0x2
	.uleb128 0x13
	.4byte	.LASF65
	.byte	0x3
	.uleb128 0x13
	.4byte	.LASF66
	.byte	0x4
	.uleb128 0x13
	.4byte	.LASF67
	.byte	0x5
	.uleb128 0x13
	.4byte	.LASF68
	.byte	0x6
	.uleb128 0x13
	.4byte	.LASF69
	.byte	0x7
	.uleb128 0x13
	.4byte	.LASF70
	.byte	0x8
	.uleb128 0x13
	.4byte	.LASF71
	.byte	0x9
	.uleb128 0x13
	.4byte	.LASF72
	.byte	0xa
	.uleb128 0x13
	.4byte	.LASF73
	.byte	0xb
	.uleb128 0x13
	.4byte	.LASF74
	.byte	0xc
	.uleb128 0x13
	.4byte	.LASF75
	.byte	0xd
	.uleb128 0x13
	.4byte	.LASF76
	.byte	0xe
	.uleb128 0x13
	.4byte	.LASF77
	.byte	0xf
	.uleb128 0x13
	.4byte	.LASF78
	.byte	0x10
	.uleb128 0x13
	.4byte	.LASF79
	.byte	0x11
	.uleb128 0x13
	.4byte	.LASF80
	.byte	0x12
	.uleb128 0x13
	.4byte	.LASF81
	.byte	0x13
	.uleb128 0x13
	.4byte	.LASF82
	.byte	0x14
	.uleb128 0x13
	.4byte	.LASF83
	.byte	0x15
	.uleb128 0x13
	.4byte	.LASF84
	.byte	0x8
	.uleb128 0x13
	.4byte	.LASF85
	.byte	0xc
	.uleb128 0x13
	.4byte	.LASF86
	.byte	0x8
	.uleb128 0x13
	.4byte	.LASF87
	.byte	0x4
	.uleb128 0x13
	.4byte	.LASF88
	.byte	0x8
	.uleb128 0x13
	.4byte	.LASF89
	.byte	0xb
	.uleb128 0x13
	.4byte	.LASF90
	.byte	0xc
	.uleb128 0x13
	.4byte	.LASF91
	.byte	0x11
	.byte	0
	.uleb128 0x12
	.4byte	.LASF92
	.byte	0x4
	.4byte	0x48
	.byte	0x9
	.2byte	0x122
	.4byte	0x3fb
	.uleb128 0x13
	.4byte	.LASF93
	.byte	0
	.uleb128 0x13
	.4byte	.LASF94
	.byte	0x1
	.uleb128 0x13
	.4byte	.LASF95
	.byte	0x2
	.uleb128 0x13
	.4byte	.LASF96
	.byte	0x3
	.byte	0
	.uleb128 0x9
	.4byte	.LASF97
	.byte	0xa
	.byte	0x10
	.4byte	0x41
	.uleb128 0x9
	.4byte	.LASF98
	.byte	0xa
	.byte	0x11
	.4byte	0x41
	.uleb128 0x15
	.ascii	"foo\000"
	.byte	0x1
	.byte	0xf
	.4byte	.LFB151
	.4byte	.LFE151-.LFB151
	.uleb128 0x1
	.byte	0x9c
	.byte	0
	.section	.debug_abbrev,"",%progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x13
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x15
	.byte	0
	.uleb128 0x27
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x15
	.byte	0
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x21
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x13
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",%progbits
	.4byte	0x1c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	.Ltext0
	.4byte	.Letext0-.Ltext0
	.4byte	0
	.4byte	0
	.section	.debug_line,"",%progbits
.Ldebug_line0:
	.section	.debug_str,"MS",%progbits,1
.LASF84:
	.ascii	"PG_checked\000"
.LASF92:
	.ascii	"zone_type\000"
.LASF35:
	.ascii	"kmsg_fops\000"
.LASF59:
	.ascii	"hex_asc_upper\000"
.LASF28:
	.ascii	"linux_banner\000"
.LASF43:
	.ascii	"panic_on_unrecovered_nmi\000"
.LASF6:
	.ascii	"long long unsigned int\000"
.LASF56:
	.ascii	"SYSTEM_RESTART\000"
.LASF39:
	.ascii	"panic_blink\000"
.LASF54:
	.ascii	"SYSTEM_HALT\000"
.LASF83:
	.ascii	"__NR_PAGEFLAGS\000"
.LASF5:
	.ascii	"long long int\000"
.LASF0:
	.ascii	"signed char\000"
.LASF21:
	.ascii	"__security_initcall_end\000"
.LASF23:
	.ascii	"saved_command_line\000"
.LASF46:
	.ascii	"sysctl_panic_on_rcu_stall\000"
.LASF74:
	.ascii	"PG_private_2\000"
.LASF52:
	.ascii	"SYSTEM_BOOTING\000"
.LASF61:
	.ascii	"pageflags\000"
.LASF100:
	.ascii	"kernel/bounds.c\000"
.LASF10:
	.ascii	"long int\000"
.LASF16:
	.ascii	"soc_mb\000"
.LASF45:
	.ascii	"panic_on_warn\000"
.LASF71:
	.ascii	"PG_arch_1\000"
.LASF49:
	.ascii	"panic_cpu\000"
.LASF29:
	.ascii	"linux_proc_banner\000"
.LASF48:
	.ascii	"crash_kexec_post_notifiers\000"
.LASF62:
	.ascii	"PG_locked\000"
.LASF67:
	.ascii	"PG_lru\000"
.LASF64:
	.ascii	"PG_referenced\000"
.LASF17:
	.ascii	"initcall_t\000"
.LASF36:
	.ascii	"file_operations\000"
.LASF91:
	.ascii	"PG_isolated\000"
.LASF4:
	.ascii	"unsigned int\000"
.LASF73:
	.ascii	"PG_private\000"
.LASF50:
	.ascii	"root_mountflags\000"
.LASF7:
	.ascii	"long unsigned int\000"
.LASF34:
	.ascii	"kptr_restrict\000"
.LASF37:
	.ascii	"atomic_notifier_head\000"
.LASF30:
	.ascii	"console_printk\000"
.LASF53:
	.ascii	"SYSTEM_RUNNING\000"
.LASF3:
	.ascii	"short unsigned int\000"
.LASF25:
	.ascii	"rodata_enabled\000"
.LASF12:
	.ascii	"bool\000"
.LASF87:
	.ascii	"PG_savepinned\000"
.LASF33:
	.ascii	"dmesg_restrict\000"
.LASF19:
	.ascii	"__con_initcall_end\000"
.LASF97:
	.ascii	"prove_locking\000"
.LASF99:
	.ascii	"GNU C89 6.2.1 20161016 -mlittle-endian -mabi=aapcs-"
	.ascii	"linux -mno-thumb-interwork -mfpu=vfp -marm -march=a"
	.ascii	"rmv7-a -mfloat-abi=soft -mtune=cortex-a9 -mtls-dial"
	.ascii	"ect=gnu -g -O2 -std=gnu90 -fno-strict-aliasing -fno"
	.ascii	"-common -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-sra -"
	.ascii	"funwind-tables -fno-delete-null-pointer-checks -fno"
	.ascii	"-stack-protector -fomit-frame-pointer -fno-var-trac"
	.ascii	"king-assignments -fno-strict-overflow -fstack-check"
	.ascii	"=no -fconserve-stack --param allow-store-data-races"
	.ascii	"=0\000"
.LASF79:
	.ascii	"PG_reclaim\000"
.LASF63:
	.ascii	"PG_error\000"
.LASF8:
	.ascii	"sizetype\000"
.LASF86:
	.ascii	"PG_pinned\000"
.LASF47:
	.ascii	"sysctl_panic_on_stackoverflow\000"
.LASF24:
	.ascii	"reset_devices\000"
.LASF57:
	.ascii	"system_state\000"
.LASF75:
	.ascii	"PG_writeback\000"
.LASF98:
	.ascii	"lock_stat\000"
.LASF82:
	.ascii	"PG_mlocked\000"
.LASF41:
	.ascii	"panic_timeout\000"
.LASF90:
	.ascii	"PG_double_map\000"
.LASF95:
	.ascii	"ZONE_MOVABLE\000"
.LASF20:
	.ascii	"__security_initcall_start\000"
.LASF38:
	.ascii	"panic_notifier_list\000"
.LASF78:
	.ascii	"PG_mappedtodisk\000"
.LASF15:
	.ascii	"elf_hwcap2\000"
.LASF93:
	.ascii	"ZONE_NORMAL\000"
.LASF65:
	.ascii	"PG_uptodate\000"
.LASF11:
	.ascii	"_Bool\000"
.LASF1:
	.ascii	"unsigned char\000"
.LASF60:
	.ascii	"system_states\000"
.LASF77:
	.ascii	"PG_swapcache\000"
.LASF27:
	.ascii	"initcall_debug\000"
.LASF2:
	.ascii	"short int\000"
.LASF102:
	.ascii	"counter\000"
.LASF69:
	.ascii	"PG_slab\000"
.LASF96:
	.ascii	"__MAX_NR_ZONES\000"
.LASF94:
	.ascii	"ZONE_HIGHMEM\000"
.LASF66:
	.ascii	"PG_dirty\000"
.LASF55:
	.ascii	"SYSTEM_POWER_OFF\000"
.LASF40:
	.ascii	"oops_in_progress\000"
.LASF9:
	.ascii	"char\000"
.LASF13:
	.ascii	"atomic_t\000"
.LASF76:
	.ascii	"PG_head\000"
.LASF89:
	.ascii	"PG_slob_free\000"
.LASF81:
	.ascii	"PG_unevictable\000"
.LASF42:
	.ascii	"panic_on_oops\000"
.LASF22:
	.ascii	"boot_command_line\000"
.LASF70:
	.ascii	"PG_owner_priv_1\000"
.LASF32:
	.ascii	"printk_delay_msec\000"
.LASF51:
	.ascii	"early_boot_irqs_disabled\000"
.LASF44:
	.ascii	"panic_on_io_nmi\000"
.LASF72:
	.ascii	"PG_reserved\000"
.LASF14:
	.ascii	"elf_hwcap\000"
.LASF68:
	.ascii	"PG_active\000"
.LASF58:
	.ascii	"hex_asc\000"
.LASF85:
	.ascii	"PG_fscache\000"
.LASF88:
	.ascii	"PG_foreign\000"
.LASF18:
	.ascii	"__con_initcall_start\000"
.LASF101:
	.ascii	"/home/wta3wx/Linux/source_code/100ask_imx6ull-qemu/"
	.ascii	"linux-4.9.88\000"
.LASF26:
	.ascii	"late_time_init\000"
.LASF80:
	.ascii	"PG_swapbacked\000"
.LASF31:
	.ascii	"devkmsg_log_str\000"
	.ident	"GCC: (Linaro GCC 6.2-2016.11) 6.2.1 20161016"
	.section	.note.GNU-stack,"",%progbits
