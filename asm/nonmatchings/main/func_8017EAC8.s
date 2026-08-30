nonmatching func_8017EAC8, 0x680

glabel func_8017EAC8
    /* 8CEC8 8017EAC8 D0FDBD27 */  addiu      $sp, $sp, -0x230
    /* 8CECC 8017EACC 1002B0AF */  sw         $s0, 0x210($sp)
    /* 8CED0 8017EAD0 21800000 */  addu       $s0, $zero, $zero
    /* 8CED4 8017EAD4 21C00000 */  addu       $t8, $zero, $zero
    /* 8CED8 8017EAD8 21C80000 */  addu       $t9, $zero, $zero
    /* 8CEDC 8017EADC 21300000 */  addu       $a2, $zero, $zero
    /* 8CEE0 8017EAE0 2C02BFAF */  sw         $ra, 0x22C($sp)
    /* 8CEE4 8017EAE4 2802B6AF */  sw         $s6, 0x228($sp)
    /* 8CEE8 8017EAE8 2402B5AF */  sw         $s5, 0x224($sp)
    /* 8CEEC 8017EAEC 2002B4AF */  sw         $s4, 0x220($sp)
    /* 8CEF0 8017EAF0 1C02B3AF */  sw         $s3, 0x21C($sp)
    /* 8CEF4 8017EAF4 1802B2AF */  sw         $s2, 0x218($sp)
    /* 8CEF8 8017EAF8 1402B1AF */  sw         $s1, 0x214($sp)
    /* 8CEFC 8017EAFC 0D800E3C */  lui        $t6, %hi(D_800D2131)
    /* 8CF00 8017EB00 3121CE91 */  lbu        $t6, %lo(D_800D2131)($t6)
    /* 8CF04 8017EB04 00000000 */  nop
    /* 8CF08 8017EB08 1F00C231 */  andi       $v0, $t6, 0x1F
    /* 8CF0C 8017EB0C 1E004010 */  beqz       $v0, .L8017EB88
    /* 8CF10 8017EB10 21A88000 */   addu      $s5, $a0, $zero
    /* 8CF14 8017EB14 0D80023C */  lui        $v0, %hi(D_800D2130)
    /* 8CF18 8017EB18 30214290 */  lbu        $v0, %lo(D_800D2130)($v0)
    /* 8CF1C 8017EB1C 00000000 */  nop
    /* 8CF20 8017EB20 02004230 */  andi       $v0, $v0, 0x2
    /* 8CF24 8017EB24 18004014 */  bnez       $v0, .L8017EB88
    /* 8CF28 8017EB28 0F00C231 */   andi      $v0, $t6, 0xF
    /* 8CF2C 8017EB2C 1000C331 */  andi       $v1, $t6, 0x10
    /* 8CF30 8017EB30 02006010 */  beqz       $v1, .L8017EB3C
    /* 8CF34 8017EB34 2B300200 */   sltu      $a2, $zero, $v0
    /* 8CF38 8017EB38 0200C634 */  ori        $a2, $a2, 0x2
  .L8017EB3C:
    /* 8CF3C 8017EB3C 8000C231 */  andi       $v0, $t6, 0x80
    /* 8CF40 8017EB40 0E004010 */  beqz       $v0, .L8017EB7C
    /* 8CF44 8017EB44 00000000 */   nop
    /* 8CF48 8017EB48 82018297 */  lhu        $v0, %gp_rel(D_8019EE7E)($gp)
    /* 8CF4C 8017EB4C 80018397 */  lhu        $v1, %gp_rel(D_8019EE7C)($gp)
    /* 8CF50 8017EB50 23100200 */  negu       $v0, $v0
    /* 8CF54 8017EB54 00140200 */  sll        $v0, $v0, 16
    /* 8CF58 8017EB58 03CC0200 */  sra        $t9, $v0, 16
    /* 8CF5C 8017EB5C 23180300 */  negu       $v1, $v1
    /* 8CF60 8017EB60 001C0300 */  sll        $v1, $v1, 16
    /* 8CF64 8017EB64 7E018297 */  lhu        $v0, %gp_rel(D_8019EE7A)($gp)
    /* 8CF68 8017EB68 03C40300 */  sra        $t8, $v1, 16
    /* 8CF6C 8017EB6C 23100200 */  negu       $v0, $v0
    /* 8CF70 8017EB70 00140200 */  sll        $v0, $v0, 16
    /* 8CF74 8017EB74 E2FA0508 */  j          .L8017EB88
    /* 8CF78 8017EB78 03840200 */   sra       $s0, $v0, 16
  .L8017EB7C:
    /* 8CF7C 8017EB7C 82019987 */  lh         $t9, %gp_rel(D_8019EE7E)($gp)
    /* 8CF80 8017EB80 80019887 */  lh         $t8, %gp_rel(D_8019EE7C)($gp)
    /* 8CF84 8017EB84 7E019087 */  lh         $s0, %gp_rel(D_8019EE7A)($gp)
  .L8017EB88:
    /* 8CF88 8017EB88 8888043C */  lui        $a0, (0x88888889 >> 16)
    /* 8CF8C 8017EB8C 89888434 */  ori        $a0, $a0, (0x88888889 & 0xFFFF)
    /* 8CF90 8017EB90 21780000 */  addu       $t7, $zero, $zero
    /* 8CF94 8017EB94 1000B127 */  addiu      $s1, $sp, 0x10
    /* 8CF98 8017EB98 0D800E3C */  lui        $t6, %hi(D_800D2100)
    /* 8CF9C 8017EB9C 0021CE91 */  lbu        $t6, %lo(D_800D2100)($t6)
    /* 8CFA0 8017EBA0 0100D430 */  andi       $s4, $a2, 0x1
    /* 8CFA4 8017EBA4 0F00CE31 */  andi       $t6, $t6, 0xF
    /* 8CFA8 8017EBA8 002A0E00 */  sll        $a1, $t6, 8
    /* 8CFAC 8017EBAC 1800A400 */  mult       $a1, $a0
    /* 8CFB0 8017EBB0 1A80163C */  lui        $s6, %hi(D_8019EFA8)
    /* 8CFB4 8017EBB4 A8EFD226 */  addiu      $s2, $s6, %lo(D_8019EFA8)
    /* 8CFB8 8017EBB8 0200D330 */  andi       $s3, $a2, 0x2
    /* 8CFBC 8017EBBC 00020224 */  addiu      $v0, $zero, 0x200
    /* 8CFC0 8017EBC0 D0010324 */  addiu      $v1, $zero, 0x1D0
    /* 8CFC4 8017EBC4 1A80013C */  lui        $at, %hi(D_8019ED38)
    /* 8CFC8 8017EBC8 38ED22A4 */  sh         $v0, %lo(D_8019ED38)($at)
    /* 8CFCC 8017EBCC 00010224 */  addiu      $v0, $zero, 0x100
    /* 8CFD0 8017EBD0 1A80013C */  lui        $at, %hi(D_8019ED3A)
    /* 8CFD4 8017EBD4 3AED23A4 */  sh         $v1, %lo(D_8019ED3A)($at)
    /* 8CFD8 8017EBD8 01000324 */  addiu      $v1, $zero, 0x1
    /* 8CFDC 8017EBDC 1A80013C */  lui        $at, %hi(D_8019ED3C)
    /* 8CFE0 8017EBE0 3CED22A4 */  sh         $v0, %lo(D_8019ED3C)($at)
    /* 8CFE4 8017EBE4 1A80013C */  lui        $at, %hi(D_8019ED3E)
    /* 8CFE8 8017EBE8 3EED23A4 */  sh         $v1, %lo(D_8019ED3E)($at)
    /* 8CFEC 8017EBEC 10200000 */  mfhi       $a0
    /* 8CFF0 8017EBF0 21208500 */  addu       $a0, $a0, $a1
    /* 8CFF4 8017EBF4 C3200400 */  sra        $a0, $a0, 3
    /* 8CFF8 8017EBF8 C32F0500 */  sra        $a1, $a1, 31
    /* 8CFFC 8017EBFC 23208500 */  subu       $a0, $a0, $a1
    /* 8D000 8017EC00 FFFF8E30 */  andi       $t6, $a0, 0xFFFF
  .L8017EC04:
    /* 8D004 8017EC04 80280F00 */  sll        $a1, $t7, 2
    /* 8D008 8017EC08 2120B500 */  addu       $a0, $a1, $s5
    /* 8D00C 8017EC0C 21282502 */  addu       $a1, $s1, $a1
    /* 8D010 8017EC10 01008290 */  lbu        $v0, 0x1($a0)
    /* 8D014 8017EC14 00008990 */  lbu        $t1, 0x0($a0)
    /* 8D018 8017EC18 02008390 */  lbu        $v1, 0x2($a0)
    /* 8D01C 8017EC1C 00120200 */  sll        $v0, $v0, 8
    /* 8D020 8017EC20 25482201 */  or         $t1, $t1, $v0
    /* 8D024 8017EC24 001C0300 */  sll        $v1, $v1, 16
    /* 8D028 8017EC28 03008290 */  lbu        $v0, 0x3($a0)
    /* 8D02C 8017EC2C 25482301 */  or         $t1, $t1, $v1
    /* 8D030 8017EC30 00160200 */  sll        $v0, $v0, 24
    /* 8D034 8017EC34 25482201 */  or         $t1, $t1, $v0
    /* 8D038 8017EC38 1F002831 */  andi       $t0, $t1, 0x1F
    /* 8D03C 8017EC3C 42110900 */  srl        $v0, $t1, 5
    /* 8D040 8017EC40 1F004730 */  andi       $a3, $v0, 0x1F
    /* 8D044 8017EC44 821A0900 */  srl        $v1, $t1, 10
    /* 8D048 8017EC48 1F006D30 */  andi       $t5, $v1, 0x1F
    /* 8D04C 8017EC4C 02140900 */  srl        $v0, $t1, 16
    /* 8D050 8017EC50 1F004B30 */  andi       $t3, $v0, 0x1F
    /* 8D054 8017EC54 421D0900 */  srl        $v1, $t1, 21
    /* 8D058 8017EC58 1F006A30 */  andi       $t2, $v1, 0x1F
    /* 8D05C 8017EC5C 82160900 */  srl        $v0, $t1, 26
    /* 8D060 8017EC60 1F004C30 */  andi       $t4, $v0, 0x1F
    /* 8D064 8017EC64 3A008012 */  beqz       $s4, .L8017ED50
    /* 8D068 8017EC68 0000A9AC */   sw        $t1, 0x0($a1)
    /* 8D06C 8017EC6C 4000E22D */  sltiu      $v0, $t7, 0x40
    /* 8D070 8017EC70 37004010 */  beqz       $v0, .L8017ED50
    /* 8D074 8017EC74 2110B001 */   addu      $v0, $t5, $s0
    /* 8D078 8017EC78 00140200 */  sll        $v0, $v0, 16
    /* 8D07C 8017EC7C 036C0200 */  sra        $t5, $v0, 16
    /* 8D080 8017EC80 0300A105 */  bgez       $t5, .L8017EC90
    /* 8D084 8017EC84 2000A229 */   slti      $v0, $t5, 0x20
    /* 8D088 8017EC88 21680000 */  addu       $t5, $zero, $zero
    /* 8D08C 8017EC8C 2000A229 */  slti       $v0, $t5, 0x20
  .L8017EC90:
    /* 8D090 8017EC90 02004014 */  bnez       $v0, .L8017EC9C
    /* 8D094 8017EC94 21109001 */   addu      $v0, $t4, $s0
    /* 8D098 8017EC98 1F000D24 */  addiu      $t5, $zero, 0x1F
  .L8017EC9C:
    /* 8D09C 8017EC9C 00140200 */  sll        $v0, $v0, 16
    /* 8D0A0 8017ECA0 03640200 */  sra        $t4, $v0, 16
    /* 8D0A4 8017ECA4 03008105 */  bgez       $t4, .L8017ECB4
    /* 8D0A8 8017ECA8 20008229 */   slti      $v0, $t4, 0x20
    /* 8D0AC 8017ECAC 21600000 */  addu       $t4, $zero, $zero
    /* 8D0B0 8017ECB0 20008229 */  slti       $v0, $t4, 0x20
  .L8017ECB4:
    /* 8D0B4 8017ECB4 02004014 */  bnez       $v0, .L8017ECC0
    /* 8D0B8 8017ECB8 2110F800 */   addu      $v0, $a3, $t8
    /* 8D0BC 8017ECBC 1F000C24 */  addiu      $t4, $zero, 0x1F
  .L8017ECC0:
    /* 8D0C0 8017ECC0 00140200 */  sll        $v0, $v0, 16
    /* 8D0C4 8017ECC4 033C0200 */  sra        $a3, $v0, 16
    /* 8D0C8 8017ECC8 0300E104 */  bgez       $a3, .L8017ECD8
    /* 8D0CC 8017ECCC 2000E228 */   slti      $v0, $a3, 0x20
    /* 8D0D0 8017ECD0 21380000 */  addu       $a3, $zero, $zero
    /* 8D0D4 8017ECD4 2000E228 */  slti       $v0, $a3, 0x20
  .L8017ECD8:
    /* 8D0D8 8017ECD8 02004014 */  bnez       $v0, .L8017ECE4
    /* 8D0DC 8017ECDC 21105801 */   addu      $v0, $t2, $t8
    /* 8D0E0 8017ECE0 1F000724 */  addiu      $a3, $zero, 0x1F
  .L8017ECE4:
    /* 8D0E4 8017ECE4 00140200 */  sll        $v0, $v0, 16
    /* 8D0E8 8017ECE8 03540200 */  sra        $t2, $v0, 16
    /* 8D0EC 8017ECEC 03004105 */  bgez       $t2, .L8017ECFC
    /* 8D0F0 8017ECF0 20004229 */   slti      $v0, $t2, 0x20
    /* 8D0F4 8017ECF4 21500000 */  addu       $t2, $zero, $zero
    /* 8D0F8 8017ECF8 20004229 */  slti       $v0, $t2, 0x20
  .L8017ECFC:
    /* 8D0FC 8017ECFC 02004014 */  bnez       $v0, .L8017ED08
    /* 8D100 8017ED00 21101901 */   addu      $v0, $t0, $t9
    /* 8D104 8017ED04 1F000A24 */  addiu      $t2, $zero, 0x1F
  .L8017ED08:
    /* 8D108 8017ED08 00140200 */  sll        $v0, $v0, 16
    /* 8D10C 8017ED0C 03440200 */  sra        $t0, $v0, 16
    /* 8D110 8017ED10 03000105 */  bgez       $t0, .L8017ED20
    /* 8D114 8017ED14 20000229 */   slti      $v0, $t0, 0x20
    /* 8D118 8017ED18 21400000 */  addu       $t0, $zero, $zero
    /* 8D11C 8017ED1C 20000229 */  slti       $v0, $t0, 0x20
  .L8017ED20:
    /* 8D120 8017ED20 02004014 */  bnez       $v0, .L8017ED2C
    /* 8D124 8017ED24 21107901 */   addu      $v0, $t3, $t9
    /* 8D128 8017ED28 1F000824 */  addiu      $t0, $zero, 0x1F
  .L8017ED2C:
    /* 8D12C 8017ED2C 00140200 */  sll        $v0, $v0, 16
    /* 8D130 8017ED30 035C0200 */  sra        $t3, $v0, 16
    /* 8D134 8017ED34 03006105 */  bgez       $t3, .L8017ED44
    /* 8D138 8017ED38 20006229 */   slti      $v0, $t3, 0x20
    /* 8D13C 8017ED3C 21580000 */  addu       $t3, $zero, $zero
    /* 8D140 8017ED40 20006229 */  slti       $v0, $t3, 0x20
  .L8017ED44:
    /* 8D144 8017ED44 02004014 */  bnez       $v0, .L8017ED50
    /* 8D148 8017ED48 00000000 */   nop
    /* 8D14C 8017ED4C 1F000B24 */  addiu      $t3, $zero, 0x1F
  .L8017ED50:
    /* 8D150 8017ED50 3C006012 */  beqz       $s3, .L8017EE44
    /* 8D154 8017ED54 4800E22D */   sltiu     $v0, $t7, 0x48
    /* 8D158 8017ED58 3B004014 */  bnez       $v0, .L8017EE48
    /* 8D15C 8017ED5C 18000E01 */   mult      $t0, $t6
    /* 8D160 8017ED60 8000E22D */  sltiu      $v0, $t7, 0x80
    /* 8D164 8017ED64 37004010 */  beqz       $v0, .L8017EE44
    /* 8D168 8017ED68 2110B001 */   addu      $v0, $t5, $s0
    /* 8D16C 8017ED6C 00140200 */  sll        $v0, $v0, 16
    /* 8D170 8017ED70 036C0200 */  sra        $t5, $v0, 16
    /* 8D174 8017ED74 0300A105 */  bgez       $t5, .L8017ED84
    /* 8D178 8017ED78 2000A229 */   slti      $v0, $t5, 0x20
    /* 8D17C 8017ED7C 21680000 */  addu       $t5, $zero, $zero
    /* 8D180 8017ED80 2000A229 */  slti       $v0, $t5, 0x20
  .L8017ED84:
    /* 8D184 8017ED84 02004014 */  bnez       $v0, .L8017ED90
    /* 8D188 8017ED88 21109001 */   addu      $v0, $t4, $s0
    /* 8D18C 8017ED8C 1F000D24 */  addiu      $t5, $zero, 0x1F
  .L8017ED90:
    /* 8D190 8017ED90 00140200 */  sll        $v0, $v0, 16
    /* 8D194 8017ED94 03640200 */  sra        $t4, $v0, 16
    /* 8D198 8017ED98 03008105 */  bgez       $t4, .L8017EDA8
    /* 8D19C 8017ED9C 20008229 */   slti      $v0, $t4, 0x20
    /* 8D1A0 8017EDA0 21600000 */  addu       $t4, $zero, $zero
    /* 8D1A4 8017EDA4 20008229 */  slti       $v0, $t4, 0x20
  .L8017EDA8:
    /* 8D1A8 8017EDA8 02004014 */  bnez       $v0, .L8017EDB4
    /* 8D1AC 8017EDAC 2110F800 */   addu      $v0, $a3, $t8
    /* 8D1B0 8017EDB0 1F000C24 */  addiu      $t4, $zero, 0x1F
  .L8017EDB4:
    /* 8D1B4 8017EDB4 00140200 */  sll        $v0, $v0, 16
    /* 8D1B8 8017EDB8 033C0200 */  sra        $a3, $v0, 16
    /* 8D1BC 8017EDBC 0300E104 */  bgez       $a3, .L8017EDCC
    /* 8D1C0 8017EDC0 2000E228 */   slti      $v0, $a3, 0x20
    /* 8D1C4 8017EDC4 21380000 */  addu       $a3, $zero, $zero
    /* 8D1C8 8017EDC8 2000E228 */  slti       $v0, $a3, 0x20
  .L8017EDCC:
    /* 8D1CC 8017EDCC 02004014 */  bnez       $v0, .L8017EDD8
    /* 8D1D0 8017EDD0 21105801 */   addu      $v0, $t2, $t8
    /* 8D1D4 8017EDD4 1F000724 */  addiu      $a3, $zero, 0x1F
  .L8017EDD8:
    /* 8D1D8 8017EDD8 00140200 */  sll        $v0, $v0, 16
    /* 8D1DC 8017EDDC 03540200 */  sra        $t2, $v0, 16
    /* 8D1E0 8017EDE0 03004105 */  bgez       $t2, .L8017EDF0
    /* 8D1E4 8017EDE4 20004229 */   slti      $v0, $t2, 0x20
    /* 8D1E8 8017EDE8 21500000 */  addu       $t2, $zero, $zero
    /* 8D1EC 8017EDEC 20004229 */  slti       $v0, $t2, 0x20
  .L8017EDF0:
    /* 8D1F0 8017EDF0 02004014 */  bnez       $v0, .L8017EDFC
    /* 8D1F4 8017EDF4 21101901 */   addu      $v0, $t0, $t9
    /* 8D1F8 8017EDF8 1F000A24 */  addiu      $t2, $zero, 0x1F
  .L8017EDFC:
    /* 8D1FC 8017EDFC 00140200 */  sll        $v0, $v0, 16
    /* 8D200 8017EE00 03440200 */  sra        $t0, $v0, 16
    /* 8D204 8017EE04 03000105 */  bgez       $t0, .L8017EE14
    /* 8D208 8017EE08 20000229 */   slti      $v0, $t0, 0x20
    /* 8D20C 8017EE0C 21400000 */  addu       $t0, $zero, $zero
    /* 8D210 8017EE10 20000229 */  slti       $v0, $t0, 0x20
  .L8017EE14:
    /* 8D214 8017EE14 02004014 */  bnez       $v0, .L8017EE20
    /* 8D218 8017EE18 21107901 */   addu      $v0, $t3, $t9
    /* 8D21C 8017EE1C 1F000824 */  addiu      $t0, $zero, 0x1F
  .L8017EE20:
    /* 8D220 8017EE20 00140200 */  sll        $v0, $v0, 16
    /* 8D224 8017EE24 035C0200 */  sra        $t3, $v0, 16
    /* 8D228 8017EE28 03006105 */  bgez       $t3, .L8017EE38
    /* 8D22C 8017EE2C 20006229 */   slti      $v0, $t3, 0x20
    /* 8D230 8017EE30 21580000 */  addu       $t3, $zero, $zero
    /* 8D234 8017EE34 20006229 */  slti       $v0, $t3, 0x20
  .L8017EE38:
    /* 8D238 8017EE38 03004014 */  bnez       $v0, .L8017EE48
    /* 8D23C 8017EE3C 18000E01 */   mult      $t0, $t6
    /* 8D240 8017EE40 1F000B24 */  addiu      $t3, $zero, 0x1F
  .L8017EE44:
    /* 8D244 8017EE44 18000E01 */  mult       $t0, $t6
  .L8017EE48:
    /* 8D248 8017EE48 12180000 */  mflo       $v1
    /* 8D24C 8017EE4C 00000000 */  nop
    /* 8D250 8017EE50 00000000 */  nop
    /* 8D254 8017EE54 1800EE00 */  mult       $a3, $t6
    /* 8D258 8017EE58 12100000 */  mflo       $v0
    /* 8D25C 8017EE5C 00000000 */  nop
    /* 8D260 8017EE60 00000000 */  nop
    /* 8D264 8017EE64 1800AE01 */  mult       $t5, $t6
    /* 8D268 8017EE68 12200000 */  mflo       $a0
    /* 8D26C 8017EE6C 00000000 */  nop
    /* 8D270 8017EE70 00000000 */  nop
    /* 8D274 8017EE74 18006E01 */  mult       $t3, $t6
    /* 8D278 8017EE78 12280000 */  mflo       $a1
    /* 8D27C 8017EE7C 00000000 */  nop
    /* 8D280 8017EE80 00000000 */  nop
    /* 8D284 8017EE84 18004E01 */  mult       $t2, $t6
    /* 8D288 8017EE88 001A0300 */  sll        $v1, $v1, 8
    /* 8D28C 8017EE8C 034C0300 */  sra        $t1, $v1, 16
    /* 8D290 8017EE90 00120200 */  sll        $v0, $v0, 8
    /* 8D294 8017EE94 033C0200 */  sra        $a3, $v0, 16
    /* 8D298 8017EE98 40110700 */  sll        $v0, $a3, 5
    /* 8D29C 8017EE9C 12300000 */  mflo       $a2
    /* 8D2A0 8017EEA0 25482201 */  or         $t1, $t1, $v0
    /* 8D2A4 8017EEA4 00220400 */  sll        $a0, $a0, 8
    /* 8D2A8 8017EEA8 18008E01 */  mult       $t4, $t6
    /* 8D2AC 8017EEAC 036C0400 */  sra        $t5, $a0, 16
    /* 8D2B0 8017EEB0 80120D00 */  sll        $v0, $t5, 10
    /* 8D2B4 8017EEB4 25482201 */  or         $t1, $t1, $v0
    /* 8D2B8 8017EEB8 002A0500 */  sll        $a1, $a1, 8
    /* 8D2BC 8017EEBC 035C0500 */  sra        $t3, $a1, 16
    /* 8D2C0 8017EEC0 00140B00 */  sll        $v0, $t3, 16
    /* 8D2C4 8017EEC4 25482201 */  or         $t1, $t1, $v0
    /* 8D2C8 8017EEC8 00320600 */  sll        $a2, $a2, 8
    /* 8D2CC 8017EECC 03540600 */  sra        $t2, $a2, 16
    /* 8D2D0 8017EED0 40150A00 */  sll        $v0, $t2, 21
    /* 8D2D4 8017EED4 25482201 */  or         $t1, $t1, $v0
    /* 8D2D8 8017EED8 12180000 */  mflo       $v1
    /* 8D2DC 8017EEDC 001A0300 */  sll        $v1, $v1, 8
    /* 8D2E0 8017EEE0 03640300 */  sra        $t4, $v1, 16
    /* 8D2E4 8017EEE4 801E0C00 */  sll        $v1, $t4, 26
    /* 8D2E8 8017EEE8 25482301 */  or         $t1, $t1, $v1
    /* 8D2EC 8017EEEC FFFF2231 */  andi       $v0, $t1, 0xFFFF
    /* 8D2F0 8017EEF0 02004014 */  bnez       $v0, .L8017EEFC
    /* 8D2F4 8017EEF4 FFFF023C */   lui       $v0, (0xFFFF0000 >> 16)
    /* 8D2F8 8017EEF8 21042935 */  ori        $t1, $t1, 0x421
  .L8017EEFC:
    /* 8D2FC 8017EEFC 24102201 */  and        $v0, $t1, $v0
    /* 8D300 8017EF00 03004014 */  bnez       $v0, .L8017EF10
    /* 8D304 8017EF04 0080043C */   lui       $a0, (0x80008000 >> 16)
    /* 8D308 8017EF08 2104023C */  lui        $v0, (0x4210000 >> 16)
    /* 8D30C 8017EF0C 25482201 */  or         $t1, $t1, $v0
  .L8017EF10:
    /* 8D310 8017EF10 00808434 */  ori        $a0, $a0, (0x80008000 & 0xFFFF)
    /* 8D314 8017EF14 8000E325 */  addiu      $v1, $t7, 0x80
    /* 8D318 8017EF18 80280F00 */  sll        $a1, $t7, 2
    /* 8D31C 8017EF1C 0100E225 */  addiu      $v0, $t7, 0x1
    /* 8D320 8017EF20 FFFF4F30 */  andi       $t7, $v0, 0xFFFF
    /* 8D324 8017EF24 80180300 */  sll        $v1, $v1, 2
    /* 8D328 8017EF28 21187200 */  addu       $v1, $v1, $s2
    /* 8D32C 8017EF2C 25202401 */  or         $a0, $t1, $a0
    /* 8D330 8017EF30 2128B200 */  addu       $a1, $a1, $s2
    /* 8D334 8017EF34 8000E22D */  sltiu      $v0, $t7, 0x80
    /* 8D338 8017EF38 000064AC */  sw         $a0, 0x0($v1)
    /* 8D33C 8017EF3C 31FF4014 */  bnez       $v0, .L8017EC04
    /* 8D340 8017EF40 0000A9AC */   sw        $t1, 0x0($a1)
    /* 8D344 8017EF44 21780000 */  addu       $t7, $zero, $zero
  .L8017EF48:
    /* 8D348 8017EF48 80100F00 */  sll        $v0, $t7, 2
    /* 8D34C 8017EF4C 21802202 */  addu       $s0, $s1, $v0
    /* 8D350 8017EF50 0000098E */  lw         $t1, 0x0($s0)
    /* 8D354 8017EF54 00000000 */  nop
    /* 8D358 8017EF58 1F002831 */  andi       $t0, $t1, 0x1F
    /* 8D35C 8017EF5C 18000E01 */  mult       $t0, $t6
    /* 8D360 8017EF60 12400000 */  mflo       $t0
    /* 8D364 8017EF64 42110900 */  srl        $v0, $t1, 5
    /* 8D368 8017EF68 1F004730 */  andi       $a3, $v0, 0x1F
    /* 8D36C 8017EF6C 1800EE00 */  mult       $a3, $t6
    /* 8D370 8017EF70 12380000 */  mflo       $a3
    /* 8D374 8017EF74 82120900 */  srl        $v0, $t1, 10
    /* 8D378 8017EF78 1F004D30 */  andi       $t5, $v0, 0x1F
    /* 8D37C 8017EF7C 1800AE01 */  mult       $t5, $t6
    /* 8D380 8017EF80 12180000 */  mflo       $v1
    /* 8D384 8017EF84 02140900 */  srl        $v0, $t1, 16
    /* 8D388 8017EF88 1F004B30 */  andi       $t3, $v0, 0x1F
    /* 8D38C 8017EF8C 18006E01 */  mult       $t3, $t6
    /* 8D390 8017EF90 12200000 */  mflo       $a0
    /* 8D394 8017EF94 42150900 */  srl        $v0, $t1, 21
    /* 8D398 8017EF98 1F004A30 */  andi       $t2, $v0, 0x1F
    /* 8D39C 8017EF9C 18004E01 */  mult       $t2, $t6
    /* 8D3A0 8017EFA0 82160900 */  srl        $v0, $t1, 26
    /* 8D3A4 8017EFA4 1F004C30 */  andi       $t4, $v0, 0x1F
    /* 8D3A8 8017EFA8 12280000 */  mflo       $a1
    /* 8D3AC 8017EFAC 024A0800 */  srl        $t1, $t0, 8
    /* 8D3B0 8017EFB0 023A0700 */  srl        $a3, $a3, 8
    /* 8D3B4 8017EFB4 18008E01 */  mult       $t4, $t6
    /* 8D3B8 8017EFB8 40110700 */  sll        $v0, $a3, 5
    /* 8D3BC 8017EFBC 25482201 */  or         $t1, $t1, $v0
    /* 8D3C0 8017EFC0 026A0300 */  srl        $t5, $v1, 8
    /* 8D3C4 8017EFC4 80120D00 */  sll        $v0, $t5, 10
    /* 8D3C8 8017EFC8 25482201 */  or         $t1, $t1, $v0
    /* 8D3CC 8017EFCC 025A0400 */  srl        $t3, $a0, 8
    /* 8D3D0 8017EFD0 00140B00 */  sll        $v0, $t3, 16
    /* 8D3D4 8017EFD4 25482201 */  or         $t1, $t1, $v0
    /* 8D3D8 8017EFD8 02520500 */  srl        $t2, $a1, 8
    /* 8D3DC 8017EFDC 40150A00 */  sll        $v0, $t2, 21
    /* 8D3E0 8017EFE0 25482201 */  or         $t1, $t1, $v0
    /* 8D3E4 8017EFE4 12300000 */  mflo       $a2
    /* 8D3E8 8017EFE8 02620600 */  srl        $t4, $a2, 8
    /* 8D3EC 8017EFEC 801E0C00 */  sll        $v1, $t4, 26
    /* 8D3F0 8017EFF0 25482301 */  or         $t1, $t1, $v1
    /* 8D3F4 8017EFF4 FFFF2231 */  andi       $v0, $t1, 0xFFFF
    /* 8D3F8 8017EFF8 02004014 */  bnez       $v0, .L8017F004
    /* 8D3FC 8017EFFC FFFF023C */   lui       $v0, (0xFFFF0000 >> 16)
    /* 8D400 8017F000 21042935 */  ori        $t1, $t1, 0x421
  .L8017F004:
    /* 8D404 8017F004 24102201 */  and        $v0, $t1, $v0
    /* 8D408 8017F008 04004014 */  bnez       $v0, .L8017F01C
    /* 8D40C 8017F00C 0100E225 */   addiu     $v0, $t7, 0x1
    /* 8D410 8017F010 2104023C */  lui        $v0, (0x4210000 >> 16)
    /* 8D414 8017F014 25482201 */  or         $t1, $t1, $v0
    /* 8D418 8017F018 0100E225 */  addiu      $v0, $t7, 0x1
  .L8017F01C:
    /* 8D41C 8017F01C FFFF4F30 */  andi       $t7, $v0, 0xFFFF
    /* 8D420 8017F020 4000E32D */  sltiu      $v1, $t7, 0x40
    /* 8D424 8017F024 C8FF6014 */  bnez       $v1, .L8017EF48
    /* 8D428 8017F028 000009AE */   sw        $t1, 0x0($s0)
    /* 8D42C 8017F02C 1A80043C */  lui        $a0, %hi(D_8019ED38)
    /* 8D430 8017F030 38ED8424 */  addiu      $a0, $a0, %lo(D_8019ED38)
    /* 8D434 8017F034 1A80103C */  lui        $s0, %hi(D_8019F1A8)
    /* 8D438 8017F038 A8F11026 */  addiu      $s0, $s0, %lo(D_8019F1A8)
    /* 8D43C 8017F03C 9051060C */  jal        func_80194640
    /* 8D440 8017F040 21280002 */   addu      $a1, $s0, $zero
    /* 8D444 8017F044 1A80043C */  lui        $a0, %hi(D_8019ED38)
    /* 8D448 8017F048 38ED8424 */  addiu      $a0, $a0, %lo(D_8019ED38)
    /* 8D44C 8017F04C 00FE1026 */  addiu      $s0, $s0, -0x200
    /* 8D450 8017F050 00020224 */  addiu      $v0, $zero, 0x200
    /* 8D454 8017F054 C0010324 */  addiu      $v1, $zero, 0x1C0
    /* 8D458 8017F058 1A80013C */  lui        $at, %hi(D_8019ED38)
    /* 8D45C 8017F05C 38ED22A4 */  sh         $v0, %lo(D_8019ED38)($at)
    /* 8D460 8017F060 1A80013C */  lui        $at, %hi(D_8019ED3A)
    /* 8D464 8017F064 3AED23A4 */  sh         $v1, %lo(D_8019ED3A)($at)
    /* 8D468 8017F068 9051060C */  jal        func_80194640
    /* 8D46C 8017F06C 21280002 */   addu      $a1, $s0, $zero
    /* 8D470 8017F070 21780000 */  addu       $t7, $zero, $zero
    /* 8D474 8017F074 21382002 */  addu       $a3, $s1, $zero
  .L8017F078:
    /* 8D478 8017F078 C0200F00 */  sll        $a0, $t7, 3
    /* 8D47C 8017F07C 21308000 */  addu       $a2, $a0, $zero
    /* 8D480 8017F080 0100E225 */  addiu      $v0, $t7, 0x1
    /* 8D484 8017F084 FFFF4F30 */  andi       $t7, $v0, 0xFFFF
    /* 8D488 8017F088 00018324 */  addiu      $v1, $a0, 0x100
    /* 8D48C 8017F08C 80180300 */  sll        $v1, $v1, 2
    /* 8D490 8017F090 2110E400 */  addu       $v0, $a3, $a0
    /* 8D494 8017F094 21187000 */  addu       $v1, $v1, $s0
    /* 8D498 8017F098 01018424 */  addiu      $a0, $a0, 0x101
    /* 8D49C 8017F09C 80200400 */  sll        $a0, $a0, 2
    /* 8D4A0 8017F0A0 0400C634 */  ori        $a2, $a2, 0x4
    /* 8D4A4 8017F0A4 2130E600 */  addu       $a2, $a3, $a2
    /* 8D4A8 8017F0A8 0000458C */  lw         $a1, 0x0($v0)
    /* 8D4AC 8017F0AC 21209000 */  addu       $a0, $a0, $s0
    /* 8D4B0 8017F0B0 000065AC */  sw         $a1, 0x0($v1)
    /* 8D4B4 8017F0B4 0000C38C */  lw         $v1, 0x0($a2)
    /* 8D4B8 8017F0B8 0800E22D */  sltiu      $v0, $t7, 0x8
    /* 8D4BC 8017F0BC EEFF4014 */  bnez       $v0, .L8017F078
    /* 8D4C0 8017F0C0 000083AC */   sw        $v1, 0x0($a0)
    /* 8D4C4 8017F0C4 21780000 */  addu       $t7, $zero, $zero
    /* 8D4C8 8017F0C8 1A80023C */  lui        $v0, %hi(D_8019EFA8)
    /* 8D4CC 8017F0CC A8EF4624 */  addiu      $a2, $v0, %lo(D_8019EFA8)
    /* 8D4D0 8017F0D0 FFFF053C */  lui        $a1, (0xFFFF0000 >> 16)
  .L8017F0D4:
    /* 8D4D4 8017F0D4 80200F00 */  sll        $a0, $t7, 2
    /* 8D4D8 8017F0D8 21208600 */  addu       $a0, $a0, $a2
    /* 8D4DC 8017F0DC 0800E325 */  addiu      $v1, $t7, 0x8
    /* 8D4E0 8017F0E0 FFFF6F30 */  andi       $t7, $v1, 0xFFFF
    /* 8D4E4 8017F0E4 0000828C */  lw         $v0, 0x0($a0)
    /* 8D4E8 8017F0E8 4001E32D */  sltiu      $v1, $t7, 0x140
    /* 8D4EC 8017F0EC 24104500 */  and        $v0, $v0, $a1
    /* 8D4F0 8017F0F0 F8FF6014 */  bnez       $v1, .L8017F0D4
    /* 8D4F4 8017F0F4 000082AC */   sw        $v0, 0x0($a0)
    /* 8D4F8 8017F0F8 1A80043C */  lui        $a0, %hi(D_8019ED38)
    /* 8D4FC 8017F0FC 38ED8424 */  addiu      $a0, $a0, %lo(D_8019ED38)
    /* 8D500 8017F100 10000224 */  addiu      $v0, $zero, 0x10
    /* 8D504 8017F104 28000324 */  addiu      $v1, $zero, 0x28
    /* 8D508 8017F108 1A80013C */  lui        $at, %hi(D_8019ED3C)
    /* 8D50C 8017F10C 3CED22A4 */  sh         $v0, %lo(D_8019ED3C)($at)
    /* 8D510 8017F110 1A80013C */  lui        $at, %hi(D_8019ED3E)
    /* 8D514 8017F114 3EED23A4 */  sh         $v1, %lo(D_8019ED3E)($at)
    /* 8D518 8017F118 9051060C */  jal        func_80194640
    /* 8D51C 8017F11C A8EFC526 */   addiu     $a1, $s6, %lo(D_8019EFA8)
    /* 8D520 8017F120 2C02BF8F */  lw         $ra, 0x22C($sp)
    /* 8D524 8017F124 2802B68F */  lw         $s6, 0x228($sp)
    /* 8D528 8017F128 2402B58F */  lw         $s5, 0x224($sp)
    /* 8D52C 8017F12C 2002B48F */  lw         $s4, 0x220($sp)
    /* 8D530 8017F130 1C02B38F */  lw         $s3, 0x21C($sp)
    /* 8D534 8017F134 1802B28F */  lw         $s2, 0x218($sp)
    /* 8D538 8017F138 1402B18F */  lw         $s1, 0x214($sp)
    /* 8D53C 8017F13C 1002B08F */  lw         $s0, 0x210($sp)
    /* 8D540 8017F140 0800E003 */  jr         $ra
    /* 8D544 8017F144 3002BD27 */   addiu     $sp, $sp, 0x230
endlabel func_8017EAC8
