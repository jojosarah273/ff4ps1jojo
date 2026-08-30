nonmatching func_8010E58C, 0x2EC

glabel func_8010E58C
    /* 1C98C 8010E58C E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 1C990 8010E590 1800BFAF */  sw         $ra, 0x18($sp)
    /* 1C994 8010E594 FEEC030C */  jal        func_800FB3F8
    /* 1C998 8010E598 00000000 */   nop
    /* 1C99C 8010E59C FA0F040C */  jal        func_80103FE8
    /* 1C9A0 8010E5A0 00000000 */   nop
    /* 1C9A4 8010E5A4 1000A427 */  addiu      $a0, $sp, 0x10
    /* 1C9A8 8010E5A8 FF000524 */  addiu      $a1, $zero, 0xFF
    /* 1C9AC 8010E5AC FF000624 */  addiu      $a2, $zero, 0xFF
    /* 1C9B0 8010E5B0 FF000724 */  addiu      $a3, $zero, 0xFF
    /* 1C9B4 8010E5B4 10000224 */  addiu      $v0, $zero, 0x10
    /* 1C9B8 8010E5B8 01000324 */  addiu      $v1, $zero, 0x1
    /* 1C9BC 8010E5BC 00010824 */  addiu      $t0, $zero, 0x100
    /* 1C9C0 8010E5C0 0D80013C */  lui        $at, %hi(D_800D212C)
    /* 1C9C4 8010E5C4 2C2122A0 */  sb         $v0, %lo(D_800D212C)($at)
    /* 1C9C8 8010E5C8 F0000224 */  addiu      $v0, $zero, 0xF0
    /* 1C9CC 8010E5CC 000083A3 */  sb         $v1, %gp_rel(D_8019ECFC)($gp)
    /* 1C9D0 8010E5D0 1000A8A7 */  sh         $t0, 0x10($sp)
    /* 1C9D4 8010E5D4 1200A0A7 */  sh         $zero, 0x12($sp)
    /* 1C9D8 8010E5D8 1400A8A7 */  sh         $t0, 0x14($sp)
    /* 1C9DC 8010E5DC 4651060C */  jal        func_80194518
    /* 1C9E0 8010E5E0 1600A2A7 */   sh        $v0, 0x16($sp)
    /* 1C9E4 8010E5E4 E550060C */  jal        func_80194394
    /* 1C9E8 8010E5E8 21200000 */   addu      $a0, $zero, $zero
    /* 1C9EC 8010E5EC 1D80043C */  lui        $a0, %hi(D_801D7D68)
    /* 1C9F0 8010E5F0 687D8424 */  addiu      $a0, $a0, %lo(D_801D7D68)
    /* 1C9F4 8010E5F4 00030524 */  addiu      $a1, $zero, 0x300
    /* 1C9F8 8010E5F8 21300000 */  addu       $a2, $zero, $zero
    /* 1C9FC 8010E5FC 3EFE050C */  jal        func_8017F8F8
    /* 1CA00 8010E600 FFFF0724 */   addiu     $a3, $zero, -0x1
    /* 1CA04 8010E604 53D9030C */  jal        func_800F654C
    /* 1CA08 8010E608 22000424 */   addiu     $a0, $zero, 0x22
    /* 1CA0C 8010E60C 62E0030C */  jal        func_800F8188
    /* 1CA10 8010E610 23210424 */   addiu     $a0, $zero, 0x2123
    /* 1CA14 8010E614 53D9030C */  jal        func_800F654C
    /* 1CA18 8010E618 21200000 */   addu      $a0, $zero, $zero
    /* 1CA1C 8010E61C 62E0030C */  jal        func_800F8188
    /* 1CA20 8010E620 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 1CA24 8010E624 53D9030C */  jal        func_800F654C
    /* 1CA28 8010E628 F7000424 */   addiu     $a0, $zero, 0xF7
    /* 1CA2C 8010E62C 7F00043C */  lui        $a0, (0x7F5A00 >> 16)
    /* 1CA30 8010E630 7AE0030C */  jal        func_800F81E8
    /* 1CA34 8010E634 005A8434 */   ori       $a0, $a0, (0x7F5A00 & 0xFFFF)
    /* 1CA38 8010E638 53D9030C */  jal        func_800F654C
    /* 1CA3C 8010E63C 80000424 */   addiu     $a0, $zero, 0x80
    /* 1CA40 8010E640 7F00043C */  lui        $a0, (0x7F5A01 >> 16)
    /* 1CA44 8010E644 7AE0030C */  jal        func_800F81E8
    /* 1CA48 8010E648 015A8434 */   ori       $a0, $a0, (0x7F5A01 & 0xFFFF)
    /* 1CA4C 8010E64C 53D9030C */  jal        func_800F654C
    /* 1CA50 8010E650 EB000424 */   addiu     $a0, $zero, 0xEB
    /* 1CA54 8010E654 7F00043C */  lui        $a0, (0x7F5A02 >> 16)
    /* 1CA58 8010E658 7AE0030C */  jal        func_800F81E8
    /* 1CA5C 8010E65C 025A8434 */   ori       $a0, $a0, (0x7F5A02 & 0xFFFF)
    /* 1CA60 8010E660 53D9030C */  jal        func_800F654C
    /* 1CA64 8010E664 F7000424 */   addiu     $a0, $zero, 0xF7
    /* 1CA68 8010E668 7F00043C */  lui        $a0, (0x7F5A03 >> 16)
    /* 1CA6C 8010E66C 7AE0030C */  jal        func_800F81E8
    /* 1CA70 8010E670 035A8434 */   ori       $a0, $a0, (0x7F5A03 & 0xFFFF)
    /* 1CA74 8010E674 53D9030C */  jal        func_800F654C
    /* 1CA78 8010E678 78000424 */   addiu     $a0, $zero, 0x78
    /* 1CA7C 8010E67C 7F00043C */  lui        $a0, (0x7F5A04 >> 16)
    /* 1CA80 8010E680 7AE0030C */  jal        func_800F81E8
    /* 1CA84 8010E684 045A8434 */   ori       $a0, $a0, (0x7F5A04 & 0xFFFF)
    /* 1CA88 8010E688 53D9030C */  jal        func_800F654C
    /* 1CA8C 8010E68C EC000424 */   addiu     $a0, $zero, 0xEC
    /* 1CA90 8010E690 7F00043C */  lui        $a0, (0x7F5A05 >> 16)
    /* 1CA94 8010E694 7AE0030C */  jal        func_800F81E8
    /* 1CA98 8010E698 055A8434 */   ori       $a0, $a0, (0x7F5A05 & 0xFFFF)
    /* 1CA9C 8010E69C 53D9030C */  jal        func_800F654C
    /* 1CAA0 8010E6A0 21200000 */   addu      $a0, $zero, $zero
    /* 1CAA4 8010E6A4 7F00043C */  lui        $a0, (0x7F5A06 >> 16)
    /* 1CAA8 8010E6A8 7AE0030C */  jal        func_800F81E8
    /* 1CAAC 8010E6AC 065A8434 */   ori       $a0, $a0, (0x7F5A06 & 0xFFFF)
    /* 1CAB0 8010E6B0 53D9030C */  jal        func_800F654C
    /* 1CAB4 8010E6B4 41000424 */   addiu     $a0, $zero, 0x41
    /* 1CAB8 8010E6B8 62E0030C */  jal        func_800F8188
    /* 1CABC 8010E6BC 60430424 */   addiu     $a0, $zero, 0x4360
    /* 1CAC0 8010E6C0 53D9030C */  jal        func_800F654C
    /* 1CAC4 8010E6C4 26000424 */   addiu     $a0, $zero, 0x26
    /* 1CAC8 8010E6C8 62E0030C */  jal        func_800F8188
    /* 1CACC 8010E6CC 61430424 */   addiu     $a0, $zero, 0x4361
    /* 1CAD0 8010E6D0 77DC030C */  jal        func_800F71DC
    /* 1CAD4 8010E6D4 005A0424 */   addiu     $a0, $zero, 0x5A00
    /* 1CAD8 8010E6D8 40E3030C */  jal        func_800F8D00
    /* 1CADC 8010E6DC 62430424 */   addiu     $a0, $zero, 0x4362
    /* 1CAE0 8010E6E0 53D9030C */  jal        func_800F654C
    /* 1CAE4 8010E6E4 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 1CAE8 8010E6E8 62E0030C */  jal        func_800F8188
    /* 1CAEC 8010E6EC 64430424 */   addiu     $a0, $zero, 0x4364
    /* 1CAF0 8010E6F0 53D9030C */  jal        func_800F654C
    /* 1CAF4 8010E6F4 16000424 */   addiu     $a0, $zero, 0x16
    /* 1CAF8 8010E6F8 62E0030C */  jal        func_800F8188
    /* 1CAFC 8010E6FC 67430424 */   addiu     $a0, $zero, 0x4367
    /* 1CB00 8010E700 53D9030C */  jal        func_800F654C
    /* 1CB04 8010E704 03000424 */   addiu     $a0, $zero, 0x3
    /* 1CB08 8010E708 62E0030C */  jal        func_800F8188
    /* 1CB0C 8010E70C 00170424 */   addiu     $a0, $zero, 0x1700
    /* 1CB10 8010E710 53D9030C */  jal        func_800F654C
    /* 1CB14 8010E714 21200000 */   addu      $a0, $zero, $zero
    /* 1CB18 8010E718 62E0030C */  jal        func_800F8188
    /* 1CB1C 8010E71C 00210424 */   addiu     $a0, $zero, 0x2100
    /* 1CB20 8010E720 53D9030C */  jal        func_800F654C
    /* 1CB24 8010E724 81000424 */   addiu     $a0, $zero, 0x81
    /* 1CB28 8010E728 62E0030C */  jal        func_800F8188
    /* 1CB2C 8010E72C 00420424 */   addiu     $a0, $zero, 0x4200
    /* 1CB30 8010E730 EEE3030C */  jal        func_800F8FB8
    /* 1CB34 8010E734 24000424 */   addiu     $a0, $zero, 0x24
  .L8010E738:
    /* 1CB38 8010E738 ECF9030C */  jal        func_800FE7B0
    /* 1CB3C 8010E73C 00000000 */   nop
    /* 1CB40 8010E740 53D9030C */  jal        func_800F654C
    /* 1CB44 8010E744 40000424 */   addiu     $a0, $zero, 0x40
    /* 1CB48 8010E748 62E0030C */  jal        func_800F8188
    /* 1CB4C 8010E74C 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 1CB50 8010E750 8CD9030C */  jal        func_800F6630
    /* 1CB54 8010E754 24000424 */   addiu     $a0, $zero, 0x24
    /* 1CB58 8010E758 62E0030C */  jal        func_800F8188
    /* 1CB5C 8010E75C 00210424 */   addiu     $a0, $zero, 0x2100
    /* 1CB60 8010E760 1E3A040C */  jal        func_8010E878
    /* 1CB64 8010E764 00000000 */   nop
    /* 1CB68 8010E768 AFD8030C */  jal        func_800F62BC
    /* 1CB6C 8010E76C 24000424 */   addiu     $a0, $zero, 0x24
    /* 1CB70 8010E770 8CD9030C */  jal        func_800F6630
    /* 1CB74 8010E774 24000424 */   addiu     $a0, $zero, 0x24
    /* 1CB78 8010E778 5DD5030C */  jal        func_800F5574
    /* 1CB7C 8010E77C 10000424 */   addiu     $a0, $zero, 0x10
    /* 1CB80 8010E780 F5D4030C */  jal        func_800F53D4
    /* 1CB84 8010E784 00000000 */   nop
    /* 1CB88 8010E788 EBFF4010 */  beqz       $v0, .L8010E738
    /* 1CB8C 8010E78C 00000000 */   nop
  .L8010E790:
    /* 1CB90 8010E790 ECF9030C */  jal        func_800FE7B0
    /* 1CB94 8010E794 00000000 */   nop
    /* 1CB98 8010E798 53D9030C */  jal        func_800F654C
    /* 1CB9C 8010E79C 40000424 */   addiu     $a0, $zero, 0x40
    /* 1CBA0 8010E7A0 62E0030C */  jal        func_800F8188
    /* 1CBA4 8010E7A4 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 1CBA8 8010E7A8 1E3A040C */  jal        func_8010E878
    /* 1CBAC 8010E7AC 00000000 */   nop
    /* 1CBB0 8010E7B0 8CD9030C */  jal        func_800F6630
    /* 1CBB4 8010E7B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 1CBB8 8010E7B8 0DD9030C */  jal        func_800F6434
    /* 1CBBC 8010E7BC 02020424 */   addiu     $a0, $zero, 0x202
    /* 1CBC0 8010E7C0 07004014 */  bnez       $v0, .L8010E7E0
    /* 1CBC4 8010E7C4 00000000 */   nop
    /* 1CBC8 8010E7C8 8CD9030C */  jal        func_800F6630
    /* 1CBCC 8010E7CC 03000424 */   addiu     $a0, $zero, 0x3
    /* 1CBD0 8010E7D0 0DD9030C */  jal        func_800F6434
    /* 1CBD4 8010E7D4 02020424 */   addiu     $a0, $zero, 0x202
    /* 1CBD8 8010E7D8 EDFF4010 */  beqz       $v0, .L8010E790
    /* 1CBDC 8010E7DC 00000000 */   nop
  .L8010E7E0:
    /* 1CBE0 8010E7E0 53D9030C */  jal        func_800F654C
    /* 1CBE4 8010E7E4 0F000424 */   addiu     $a0, $zero, 0xF
    /* 1CBE8 8010E7E8 93E0030C */  jal        func_800F824C
    /* 1CBEC 8010E7EC 24000424 */   addiu     $a0, $zero, 0x24
  .L8010E7F0:
    /* 1CBF0 8010E7F0 ECF9030C */  jal        func_800FE7B0
    /* 1CBF4 8010E7F4 00000000 */   nop
    /* 1CBF8 8010E7F8 53D9030C */  jal        func_800F654C
    /* 1CBFC 8010E7FC 40000424 */   addiu     $a0, $zero, 0x40
    /* 1CC00 8010E800 62E0030C */  jal        func_800F8188
    /* 1CC04 8010E804 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 1CC08 8010E808 8CD9030C */  jal        func_800F6630
    /* 1CC0C 8010E80C 24000424 */   addiu     $a0, $zero, 0x24
    /* 1CC10 8010E810 62E0030C */  jal        func_800F8188
    /* 1CC14 8010E814 00210424 */   addiu     $a0, $zero, 0x2100
    /* 1CC18 8010E818 1E3A040C */  jal        func_8010E878
    /* 1CC1C 8010E81C 00000000 */   nop
    /* 1CC20 8010E820 68D7030C */  jal        func_800F5DA0
    /* 1CC24 8010E824 24000424 */   addiu     $a0, $zero, 0x24
    /* 1CC28 8010E828 8CD9030C */  jal        func_800F6630
    /* 1CC2C 8010E82C 24000424 */   addiu     $a0, $zero, 0x24
    /* 1CC30 8010E830 0DD9030C */  jal        func_800F6434
    /* 1CC34 8010E834 02020424 */   addiu     $a0, $zero, 0x202
    /* 1CC38 8010E838 EDFF4014 */  bnez       $v0, .L8010E7F0
    /* 1CC3C 8010E83C 00000000 */   nop
    /* 1CC40 8010E840 53D9030C */  jal        func_800F654C
    /* 1CC44 8010E844 33000424 */   addiu     $a0, $zero, 0x33
    /* 1CC48 8010E848 62E0030C */  jal        func_800F8188
    /* 1CC4C 8010E84C 23210424 */   addiu     $a0, $zero, 0x2123
    /* 1CC50 8010E850 53D9030C */  jal        func_800F654C
    /* 1CC54 8010E854 21200000 */   addu      $a0, $zero, $zero
    /* 1CC58 8010E858 62E0030C */  jal        func_800F8188
    /* 1CC5C 8010E85C 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 1CC60 8010E860 977A040C */  jal        func_8011EA5C
    /* 1CC64 8010E864 00000000 */   nop
    /* 1CC68 8010E868 1800BF8F */  lw         $ra, 0x18($sp)
    /* 1CC6C 8010E86C 000080A3 */  sb         $zero, %gp_rel(D_8019ECFC)($gp)
    /* 1CC70 8010E870 0800E003 */  jr         $ra
    /* 1CC74 8010E874 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8010E58C
