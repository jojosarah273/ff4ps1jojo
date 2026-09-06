nonmatching func_8010EB14, 0x578

glabel func_8010EB14
    /* 1CF14 8010EB14 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 1CF18 8010EB18 2400BFAF */  sw         $ra, 0x24($sp)
    /* 1CF1C 8010EB1C 2000B2AF */  sw         $s2, 0x20($sp)
    /* 1CF20 8010EB20 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 1CF24 8010EB24 18D8050C */  jal        func_80176060
    /* 1CF28 8010EB28 1800B0AF */   sw        $s0, 0x18($sp)
    /* 1CF2C 8010EB2C 53D9030C */  jal        func_800F654C
    /* 1CF30 8010EB30 09000424 */   addiu     $a0, $zero, 0x9
    /* 1CF34 8010EB34 62E0030C */  jal        func_800F8188
    /* 1CF38 8010EB38 05210424 */   addiu     $a0, $zero, 0x2105
    /* 1CF3C 8010EB3C 77DC030C */  jal        func_800F71DC
    /* 1CF40 8010EB40 00200424 */   addiu     $a0, $zero, 0x2000
    /* 1CF44 8010EB44 5BE3030C */  jal        func_800F8D6C
    /* 1CF48 8010EB48 47000424 */   addiu     $a0, $zero, 0x47
    /* 1CF4C 8010EB4C 77DC030C */  jal        func_800F71DC
    /* 1CF50 8010EB50 00100424 */   addiu     $a0, $zero, 0x1000
    /* 1CF54 8010EB54 5BE3030C */  jal        func_800F8D6C
    /* 1CF58 8010EB58 45000424 */   addiu     $a0, $zero, 0x45
    /* 1CF5C 8010EB5C 53D9030C */  jal        func_800F654C
    /* 1CF60 8010EB60 0A000424 */   addiu     $a0, $zero, 0xA
    /* 1CF64 8010EB64 93E0030C */  jal        func_800F824C
    /* 1CF68 8010EB68 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 1CF6C 8010EB6C 77DC030C */  jal        func_800F71DC
    /* 1CF70 8010EB70 00F00434 */   ori       $a0, $zero, 0xF000
    /* 1CF74 8010EB74 5BE3030C */  jal        func_800F8D6C
    /* 1CF78 8010EB78 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1CF7C 8010EB7C ACD9050C */  jal        func_801766B0
    /* 1CF80 8010EB80 FF031124 */   addiu     $s1, $zero, 0x3FF
    /* 1CF84 8010EB84 53D9030C */  jal        func_800F654C
    /* 1CF88 8010EB88 80000424 */   addiu     $a0, $zero, 0x80
    /* 1CF8C 8010EB8C 62E0030C */  jal        func_800F8188
    /* 1CF90 8010EB90 15210424 */   addiu     $a0, $zero, 0x2115
    /* 1CF94 8010EB94 FF200324 */  addiu      $v1, $zero, 0x20FF
    /* 1CF98 8010EB98 1D80123C */  lui        $s2, %hi(D_801CFD68)
    /* 1CF9C 8010EB9C 68FD4226 */  addiu      $v0, $s2, %lo(D_801CFD68)
    /* 1CFA0 8010EBA0 FE5F4224 */  addiu      $v0, $v0, 0x5FFE
  .L8010EBA4:
    /* 1CFA4 8010EBA4 000043A4 */  sh         $v1, 0x0($v0)
    /* 1CFA8 8010EBA8 FFFF3126 */  addiu      $s1, $s1, -0x1
    /* 1CFAC 8010EBAC FDFF2106 */  bgez       $s1, .L8010EBA4
    /* 1CFB0 8010EBB0 FEFF4224 */   addiu     $v0, $v0, -0x2
    /* 1CFB4 8010EBB4 53D9030C */  jal        func_800F654C
    /* 1CFB8 8010EBB8 6A000424 */   addiu     $a0, $zero, 0x6A
    /* 1CFBC 8010EBBC 93E0030C */  jal        func_800F824C
    /* 1CFC0 8010EBC0 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 1CFC4 8010EBC4 CC20040C */  jal        func_80108330
    /* 1CFC8 8010EBC8 002C1024 */   addiu     $s0, $zero, 0x2C00
    /* 1CFCC 8010EBCC EEE3030C */  jal        func_800F8FB8
    /* 1CFD0 8010EBD0 BA000424 */   addiu     $a0, $zero, 0xBA
    /* 1CFD4 8010EBD4 1621040C */  jal        func_80108458
    /* 1CFD8 8010EBD8 00000000 */   nop
    /* 1CFDC 8010EBDC AFD8030C */  jal        func_800F62BC
    /* 1CFE0 8010EBE0 ED000424 */   addiu     $a0, $zero, 0xED
    /* 1CFE4 8010EBE4 C226040C */  jal        func_80109B08
    /* 1CFE8 8010EBE8 00000000 */   nop
    /* 1CFEC 8010EBEC 1621040C */  jal        func_80108458
    /* 1CFF0 8010EBF0 00000000 */   nop
    /* 1CFF4 8010EBF4 AFD8030C */  jal        func_800F62BC
    /* 1CFF8 8010EBF8 ED000424 */   addiu     $a0, $zero, 0xED
    /* 1CFFC 8010EBFC C226040C */  jal        func_80109B08
    /* 1D000 8010EC00 00000000 */   nop
    /* 1D004 8010EC04 EEE3030C */  jal        func_800F8FB8
    /* 1D008 8010EC08 DD000424 */   addiu     $a0, $zero, 0xDD
    /* 1D00C 8010EC0C EEE3030C */  jal        func_800F8FB8
    /* 1D010 8010EC10 ED000424 */   addiu     $a0, $zero, 0xED
    /* 1D014 8010EC14 53D9030C */  jal        func_800F654C
    /* 1D018 8010EC18 80000424 */   addiu     $a0, $zero, 0x80
    /* 1D01C 8010EC1C 62E0030C */  jal        func_800F8188
    /* 1D020 8010EC20 15210424 */   addiu     $a0, $zero, 0x2115
    /* 1D024 8010EC24 77DC030C */  jal        func_800F71DC
    /* 1D028 8010EC28 21200000 */   addu      $a0, $zero, $zero
  .L8010EC2C:
    /* 1D02C 8010EC2C 91E5030C */  jal        func_800F9644
    /* 1D030 8010EC30 20000424 */   addiu     $a0, $zero, 0x20
    /* 1D034 8010EC34 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1D038 8010EC38 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1D03C 8010EC3C 1A80053C */  lui        $a1, %hi(D_8019ED44)
    /* 1D040 8010EC40 44EDA58C */  lw         $a1, %lo(D_8019ED44)($a1)
    /* 1D044 8010EC44 00006294 */  lhu        $v0, 0x0($v1)
    /* 1D048 8010EC48 C0010424 */  addiu      $a0, $zero, 0x1C0
    /* 1D04C 8010EC4C 99D0030C */  jal        func_800F4264
    /* 1D050 8010EC50 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 1D054 8010EC54 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 1D058 8010EC58 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 1D05C 8010EC5C 00000000 */  nop
    /* 1D060 8010EC60 00006294 */  lhu        $v0, 0x0($v1)
    /* 1D064 8010EC64 00000000 */  nop
    /* 1D068 8010EC68 02110200 */  srl        $v0, $v0, 4
    /* 1D06C 8010EC6C 000062A4 */  sh         $v0, 0x0($v1)
    /* 1D070 8010EC70 1A80053C */  lui        $a1, %hi(D_8019ED44)
    /* 1D074 8010EC74 44EDA58C */  lw         $a1, %lo(D_8019ED44)($a1)
    /* 1D078 8010EC78 00000000 */  nop
    /* 1D07C 8010EC7C 0000A294 */  lhu        $v0, 0x0($a1)
    /* 1D080 8010EC80 20000424 */  addiu      $a0, $zero, 0x20
    /* 1D084 8010EC84 20004234 */  ori        $v0, $v0, 0x20
    /* 1D088 8010EC88 98E5030C */  jal        func_800F9660
    /* 1D08C 8010EC8C 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 1D090 8010EC90 40201000 */  sll        $a0, $s0, 1
    /* 1D094 8010EC94 01000226 */  addiu      $v0, $s0, 0x1
    /* 1D098 8010EC98 FFFF5030 */  andi       $s0, $v0, 0xFFFF
    /* 1D09C 8010EC9C 68FD5126 */  addiu      $s1, $s2, %lo(D_801CFD68)
    /* 1D0A0 8010ECA0 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1D0A4 8010ECA4 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1D0A8 8010ECA8 21209100 */  addu       $a0, $a0, $s1
    /* 1D0AC 8010ECAC 0000A290 */  lbu        $v0, 0x0($a1)
    /* 1D0B0 8010ECB0 00008390 */  lbu        $v1, 0x0($a0)
    /* 1D0B4 8010ECB4 00120200 */  sll        $v0, $v0, 8
    /* 1D0B8 8010ECB8 25186200 */  or         $v1, $v1, $v0
    /* 1D0BC 8010ECBC D9D8030C */  jal        func_800F6364
    /* 1D0C0 8010ECC0 000083A4 */   sh        $v1, 0x0($a0)
    /* 1D0C4 8010ECC4 56D6030C */  jal        func_800F5958
    /* 1D0C8 8010ECC8 00020424 */   addiu     $a0, $zero, 0x200
    /* 1D0CC 8010ECCC F5D4030C */  jal        func_800F53D4
    /* 1D0D0 8010ECD0 00000000 */   nop
    /* 1D0D4 8010ECD4 D5FF4010 */  beqz       $v0, .L8010EC2C
    /* 1D0D8 8010ECD8 00000000 */   nop
    /* 1D0DC 8010ECDC 53D9030C */  jal        func_800F654C
    /* 1D0E0 8010ECE0 21200000 */   addu      $a0, $zero, $zero
    /* 1D0E4 8010ECE4 52CF030C */  jal        func_800F3D48
    /* 1D0E8 8010ECE8 00000000 */   nop
    /* 1D0EC 8010ECEC 00402426 */  addiu      $a0, $s1, 0x4000
    /* 1D0F0 8010ECF0 00020524 */  addiu      $a1, $zero, 0x200
    /* 1D0F4 8010ECF4 00010624 */  addiu      $a2, $zero, 0x100
    /* 1D0F8 8010ECF8 3EFE050C */  jal        func_8017F8F8
    /* 1D0FC 8010ECFC 02000724 */   addiu     $a3, $zero, 0x2
    /* 1D100 8010ED00 1A80023C */  lui        $v0, %hi(D_8019A7FC)
    /* 1D104 8010ED04 FCA74224 */  addiu      $v0, $v0, %lo(D_8019A7FC)
    /* 1D108 8010ED08 02005224 */  addiu      $s2, $v0, 0x2
    /* 1D10C 8010ED0C 1A80033C */  lui        $v1, %hi(D_8019A774)
    /* 1D110 8010ED10 74A77024 */  addiu      $s0, $v1, %lo(D_8019A774)
    /* 1D114 8010ED14 10001124 */  addiu      $s1, $zero, 0x10
  .L8010ED18:
    /* 1D118 8010ED18 1000A427 */  addiu      $a0, $sp, 0x10
    /* 1D11C 8010ED1C FEFF4586 */  lh         $a1, -0x2($s2)
    /* 1D120 8010ED20 00004686 */  lh         $a2, 0x0($s2)
    /* 1D124 8010ED24 04005226 */  addiu      $s2, $s2, 0x4
    /* 1D128 8010ED28 00000296 */  lhu        $v0, 0x0($s0)
    /* 1D12C 8010ED2C 02000396 */  lhu        $v1, 0x2($s0)
    /* 1D130 8010ED30 04000796 */  lhu        $a3, 0x4($s0)
    /* 1D134 8010ED34 06000896 */  lhu        $t0, 0x6($s0)
    /* 1D138 8010ED38 08001026 */  addiu      $s0, $s0, 0x8
    /* 1D13C 8010ED3C FFFF3126 */  addiu      $s1, $s1, -0x1
    /* 1D140 8010ED40 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 1D144 8010ED44 1200A3A7 */  sh         $v1, 0x12($sp)
    /* 1D148 8010ED48 1400A7A7 */  sh         $a3, 0x14($sp)
    /* 1D14C 8010ED4C C051060C */  jal        func_80194700
    /* 1D150 8010ED50 1600A8A7 */   sh        $t0, 0x16($sp)
    /* 1D154 8010ED54 E550060C */  jal        func_80194394
    /* 1D158 8010ED58 21200000 */   addu      $a0, $zero, $zero
    /* 1D15C 8010ED5C EEFF2106 */  bgez       $s1, .L8010ED18
    /* 1D160 8010ED60 00000000 */   nop
    /* 1D164 8010ED64 77DC030C */  jal        func_800F71DC
    /* 1D168 8010ED68 21200000 */   addu      $a0, $zero, $zero
  .L8010ED6C:
    /* 1D16C 8010ED6C 53D9030C */  jal        func_800F654C
    /* 1D170 8010ED70 21200000 */   addu      $a0, $zero, $zero
    /* 1D174 8010ED74 DAE1030C */  jal        func_800F8768
    /* 1D178 8010ED78 DD0C0424 */   addiu     $a0, $zero, 0xCDD
    /* 1D17C 8010ED7C DAE1030C */  jal        func_800F8768
    /* 1D180 8010ED80 E10C0424 */   addiu     $a0, $zero, 0xCE1
    /* 1D184 8010ED84 53D9030C */  jal        func_800F654C
    /* 1D188 8010ED88 40000424 */   addiu     $a0, $zero, 0x40
    /* 1D18C 8010ED8C DAE1030C */  jal        func_800F8768
    /* 1D190 8010ED90 DE0C0424 */   addiu     $a0, $zero, 0xCDE
    /* 1D194 8010ED94 DAE1030C */  jal        func_800F8768
    /* 1D198 8010ED98 E20C0424 */   addiu     $a0, $zero, 0xCE2
    /* 1D19C 8010ED9C 1A80033C */  lui        $v1, %hi(D_8019ED5C)
    /* 1D1A0 8010EDA0 5CED638C */  lw         $v1, %lo(D_8019ED5C)($v1)
    /* 1D1A4 8010EDA4 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 1D1A8 8010EDA8 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 1D1AC 8010EDAC 00006290 */  lbu        $v0, 0x0($v1)
    /* 1D1B0 8010EDB0 04D5030C */  jal        func_800F5410
    /* 1D1B4 8010EDB4 000082A0 */   sb        $v0, 0x0($a0)
    /* 1D1B8 8010EDB8 02D0030C */  jal        func_800F4008
    /* 1D1BC 8010EDBC 08000424 */   addiu     $a0, $zero, 0x8
    /* 1D1C0 8010EDC0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 1D1C4 8010EDC4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 1D1C8 8010EDC8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 1D1CC 8010EDCC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 1D1D0 8010EDD0 00004394 */  lhu        $v1, 0x0($v0)
    /* 1D1D4 8010EDD4 40000424 */  addiu      $a0, $zero, 0x40
    /* 1D1D8 8010EDD8 5DD5030C */  jal        func_800F5574
    /* 1D1DC 8010EDDC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 1D1E0 8010EDE0 F5D4030C */  jal        func_800F53D4
    /* 1D1E4 8010EDE4 00000000 */   nop
    /* 1D1E8 8010EDE8 E0FF4010 */  beqz       $v0, .L8010ED6C
    /* 1D1EC 8010EDEC 00010224 */   addiu     $v0, $zero, 0x100
    /* 1D1F0 8010EDF0 C8FF0324 */  addiu      $v1, $zero, -0x38
    /* 1D1F4 8010EDF4 1A80013C */  lui        $at, %hi(D_8019EE64)
    /* 1D1F8 8010EDF8 64EE22A4 */  sh         $v0, %lo(D_8019EE64)($at)
    /* 1D1FC 8010EDFC 1A80013C */  lui        $at, %hi(D_8019EE6C)
    /* 1D200 8010EE00 6CEE23A4 */  sh         $v1, %lo(D_8019EE6C)($at)
    /* 1D204 8010EE04 53D9030C */  jal        func_800F654C
    /* 1D208 8010EE08 81000424 */   addiu     $a0, $zero, 0x81
    /* 1D20C 8010EE0C 62E0030C */  jal        func_800F8188
    /* 1D210 8010EE10 00420424 */   addiu     $a0, $zero, 0x4200
    /* 1D214 8010EE14 53D9030C */  jal        func_800F654C
    /* 1D218 8010EE18 03000424 */   addiu     $a0, $zero, 0x3
    /* 1D21C 8010EE1C 17F6030C */  jal        func_800FD85C
    /* 1D220 8010EE20 00000000 */   nop
    /* 1D224 8010EE24 EEE3030C */  jal        func_800F8FB8
    /* 1D228 8010EE28 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 1D22C 8010EE2C EEE3030C */  jal        func_800F8FB8
    /* 1D230 8010EE30 2F000424 */   addiu     $a0, $zero, 0x2F
  .L8010EE34:
    /* 1D234 8010EE34 EEE3030C */  jal        func_800F8FB8
    /* 1D238 8010EE38 20000424 */   addiu     $a0, $zero, 0x20
    /* 1D23C 8010EE3C EEE3030C */  jal        func_800F8FB8
    /* 1D240 8010EE40 21000424 */   addiu     $a0, $zero, 0x21
  .L8010EE44:
    /* 1D244 8010EE44 ECF9030C */  jal        func_800FE7B0
    /* 1D248 8010EE48 00000000 */   nop
    /* 1D24C 8010EE4C 8CD9030C */  jal        func_800F6630
    /* 1D250 8010EE50 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 1D254 8010EE54 50D4030C */  jal        func_800F5140
    /* 1D258 8010EE58 00000000 */   nop
    /* 1D25C 8010EE5C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 1D260 8010EE60 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 1D264 8010EE64 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 1D268 8010EE68 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 1D26C 8010EE6C 00004394 */  lhu        $v1, 0x0($v0)
    /* 1D270 8010EE70 20000424 */  addiu      $a0, $zero, 0x20
    /* 1D274 8010EE74 91E5030C */  jal        func_800F9644
    /* 1D278 8010EE78 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 1D27C 8010EE7C 96D9030C */  jal        func_800F6658
    /* 1D280 8010EE80 20000424 */   addiu     $a0, $zero, 0x20
    /* 1D284 8010EE84 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 1D288 8010EE88 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 1D28C 8010EE8C 00000000 */  nop
    /* 1D290 8010EE90 00006294 */  lhu        $v0, 0x0($v1)
    /* 1D294 8010EE94 22000424 */  addiu      $a0, $zero, 0x22
    /* 1D298 8010EE98 C2100200 */  srl        $v0, $v0, 3
    /* 1D29C 8010EE9C 9DE0030C */  jal        func_800F8274
    /* 1D2A0 8010EEA0 000062A4 */   sh        $v0, 0x0($v1)
    /* 1D2A4 8010EEA4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 1D2A8 8010EEA8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 1D2AC 8010EEAC 00000000 */  nop
    /* 1D2B0 8010EEB0 00006294 */  lhu        $v0, 0x0($v1)
    /* 1D2B4 8010EEB4 22000424 */  addiu      $a0, $zero, 0x22
    /* 1D2B8 8010EEB8 40110200 */  sll        $v0, $v0, 5
    /* 1D2BC 8010EEBC 0FCF030C */  jal        func_800F3C3C
    /* 1D2C0 8010EEC0 000062A4 */   sh        $v0, 0x0($v1)
    /* 1D2C4 8010EEC4 5ADE030C */  jal        func_800F7968
    /* 1D2C8 8010EEC8 21204000 */   addu      $a0, $v0, $zero
    /* 1D2CC 8010EECC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 1D2D0 8010EED0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 1D2D4 8010EED4 1400043C */  lui        $a0, (0x14F996 >> 16)
    /* 1D2D8 8010EED8 00004594 */  lhu        $a1, 0x0($v0)
    /* 1D2DC 8010EEDC E7CE030C */  jal        func_800F3B9C
    /* 1D2E0 8010EEE0 96F98434 */   ori       $a0, $a0, (0x14F996 & 0xFFFF)
    /* 1D2E4 8010EEE4 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1D2E8 8010EEE8 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1D2EC 8010EEEC 00000000 */  nop
    /* 1D2F0 8010EEF0 00006494 */  lhu        $a0, 0x0($v1)
    /* 1D2F4 8010EEF4 5ADE030C */  jal        func_800F7968
    /* 1D2F8 8010EEF8 21204400 */   addu      $a0, $v0, $a0
    /* 1D2FC 8010EEFC 9DE0030C */  jal        func_800F8274
    /* 1D300 8010EF00 22000424 */   addiu     $a0, $zero, 0x22
    /* 1D304 8010EF04 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1D308 8010EF08 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1D30C 8010EF0C 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 1D310 8010EF10 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 1D314 8010EF14 00006294 */  lhu        $v0, 0x0($v1)
    /* 1D318 8010EF18 00000000 */  nop
    /* 1D31C 8010EF1C 000082A4 */  sh         $v0, 0x0($a0)
    /* 1D320 8010EF20 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 1D324 8010EF24 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 1D328 8010EF28 00000000 */  nop
    /* 1D32C 8010EF2C 00006294 */  lhu        $v0, 0x0($v1)
    /* 1D330 8010EF30 00000000 */  nop
    /* 1D334 8010EF34 80100200 */  sll        $v0, $v0, 2
    /* 1D338 8010EF38 000062A4 */  sh         $v0, 0x0($v1)
    /* 1D33C 8010EF3C 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 1D340 8010EF40 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 1D344 8010EF44 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1D348 8010EF48 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1D34C 8010EF4C 00008294 */  lhu        $v0, 0x0($a0)
    /* 1D350 8010EF50 22000424 */  addiu      $a0, $zero, 0x22
    /* 1D354 8010EF54 96D9030C */  jal        func_800F6658
    /* 1D358 8010EF58 000062A4 */   sh        $v0, 0x0($v1)
    /* 1D35C 8010EF5C F7E1030C */  jal        func_800F87DC
    /* 1D360 8010EF60 E10C0424 */   addiu     $a0, $zero, 0xCE1
    /* 1D364 8010EF64 56D9030C */  jal        func_800F6558
    /* 1D368 8010EF68 21200000 */   addu      $a0, $zero, $zero
    /* 1D36C 8010EF6C 98E5030C */  jal        func_800F9660
    /* 1D370 8010EF70 20000424 */   addiu     $a0, $zero, 0x20
    /* 1D374 8010EF74 AFD8030C */  jal        func_800F62BC
    /* 1D378 8010EF78 20000424 */   addiu     $a0, $zero, 0x20
    /* 1D37C 8010EF7C 2AD8030C */  jal        func_800F60A8
    /* 1D380 8010EF80 02020424 */   addiu     $a0, $zero, 0x202
    /* 1D384 8010EF84 AFFF4014 */  bnez       $v0, .L8010EE44
    /* 1D388 8010EF88 00000000 */   nop
    /* 1D38C 8010EF8C AFD8030C */  jal        func_800F62BC
    /* 1D390 8010EF90 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 1D394 8010EF94 8CD9030C */  jal        func_800F6630
    /* 1D398 8010EF98 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 1D39C 8010EF9C 5DD5030C */  jal        func_800F5574
    /* 1D3A0 8010EFA0 08000424 */   addiu     $a0, $zero, 0x8
    /* 1D3A4 8010EFA4 F5D4030C */  jal        func_800F53D4
    /* 1D3A8 8010EFA8 00000000 */   nop
    /* 1D3AC 8010EFAC A1FF4010 */  beqz       $v0, .L8010EE34
    /* 1D3B0 8010EFB0 00000000 */   nop
    /* 1D3B4 8010EFB4 53D9030C */  jal        func_800F654C
    /* 1D3B8 8010EFB8 03000424 */   addiu     $a0, $zero, 0x3
    /* 1D3BC 8010EFBC 45F6030C */  jal        func_800FD914
    /* 1D3C0 8010EFC0 10001124 */   addiu     $s1, $zero, 0x10
    /* 1D3C4 8010EFC4 1A80013C */  lui        $at, %hi(D_8019EE64)
    /* 1D3C8 8010EFC8 64EE20A4 */  sh         $zero, %lo(D_8019EE64)($at)
    /* 1D3CC 8010EFCC 1A80013C */  lui        $at, %hi(D_8019EE6C)
    /* 1D3D0 8010EFD0 6CEE20A4 */  sh         $zero, %lo(D_8019EE6C)($at)
    /* 1D3D4 8010EFD4 C4D1050C */  jal        func_80174710
    /* 1D3D8 8010EFD8 00000000 */   nop
    /* 1D3DC 8010EFDC 7DD1050C */  jal        func_801745F4
    /* 1D3E0 8010EFE0 00000000 */   nop
    /* 1D3E4 8010EFE4 53D9030C */  jal        func_800F654C
    /* 1D3E8 8010EFE8 81000424 */   addiu     $a0, $zero, 0x81
    /* 1D3EC 8010EFEC 62E0030C */  jal        func_800F8188
    /* 1D3F0 8010EFF0 00420424 */   addiu     $a0, $zero, 0x4200
    /* 1D3F4 8010EFF4 977A040C */  jal        func_8011EA5C
    /* 1D3F8 8010EFF8 00000000 */   nop
    /* 1D3FC 8010EFFC 1D80043C */  lui        $a0, %hi(D_801D3D68)
    /* 1D400 8010F000 683D8424 */  addiu      $a0, $a0, %lo(D_801D3D68)
    /* 1D404 8010F004 00020524 */  addiu      $a1, $zero, 0x200
    /* 1D408 8010F008 00010624 */  addiu      $a2, $zero, 0x100
    /* 1D40C 8010F00C 3EFE050C */  jal        func_8017F8F8
    /* 1D410 8010F010 02000724 */   addiu     $a3, $zero, 0x2
    /* 1D414 8010F014 1A80023C */  lui        $v0, %hi(D_8019A7FC)
    /* 1D418 8010F018 FCA74224 */  addiu      $v0, $v0, %lo(D_8019A7FC)
    /* 1D41C 8010F01C 02005224 */  addiu      $s2, $v0, 0x2
    /* 1D420 8010F020 1A80033C */  lui        $v1, %hi(D_8019A774)
    /* 1D424 8010F024 74A77024 */  addiu      $s0, $v1, %lo(D_8019A774)
  .L8010F028:
    /* 1D428 8010F028 1000A427 */  addiu      $a0, $sp, 0x10
    /* 1D42C 8010F02C FEFF4586 */  lh         $a1, -0x2($s2)
    /* 1D430 8010F030 00004686 */  lh         $a2, 0x0($s2)
    /* 1D434 8010F034 04005226 */  addiu      $s2, $s2, 0x4
    /* 1D438 8010F038 00000296 */  lhu        $v0, 0x0($s0)
    /* 1D43C 8010F03C 02000396 */  lhu        $v1, 0x2($s0)
    /* 1D440 8010F040 04000796 */  lhu        $a3, 0x4($s0)
    /* 1D444 8010F044 06000896 */  lhu        $t0, 0x6($s0)
    /* 1D448 8010F048 08001026 */  addiu      $s0, $s0, 0x8
    /* 1D44C 8010F04C FFFF3126 */  addiu      $s1, $s1, -0x1
    /* 1D450 8010F050 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 1D454 8010F054 1200A3A7 */  sh         $v1, 0x12($sp)
    /* 1D458 8010F058 1400A7A7 */  sh         $a3, 0x14($sp)
    /* 1D45C 8010F05C C051060C */  jal        func_80194700
    /* 1D460 8010F060 1600A8A7 */   sh        $t0, 0x16($sp)
    /* 1D464 8010F064 E550060C */  jal        func_80194394
    /* 1D468 8010F068 21200000 */   addu      $a0, $zero, $zero
    /* 1D46C 8010F06C EEFF2106 */  bgez       $s1, .L8010F028
    /* 1D470 8010F070 00000000 */   nop
    /* 1D474 8010F074 2400BF8F */  lw         $ra, 0x24($sp)
    /* 1D478 8010F078 2000B28F */  lw         $s2, 0x20($sp)
    /* 1D47C 8010F07C 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 1D480 8010F080 1800B08F */  lw         $s0, 0x18($sp)
    /* 1D484 8010F084 0800E003 */  jr         $ra
    /* 1D488 8010F088 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8010EB14
