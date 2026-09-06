nonmatching func_8013ED14, 0x104

glabel func_8013ED14
    /* 4D114 8013ED14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4D118 8013ED18 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4D11C 8013ED1C 53D9030C */  jal        func_800F654C
    /* 4D120 8013ED20 21200000 */   addu      $a0, $zero, $zero
    /* 4D124 8013ED24 93E0030C */  jal        func_800F824C
    /* 4D128 8013ED28 04000424 */   addiu     $a0, $zero, 0x4
  .L8013ED2C:
    /* 4D12C 8013ED2C 1600043C */  lui        $a0, (0x16ED80 >> 16)
    /* 4D130 8013ED30 1ADB030C */  jal        func_800F6C68
    /* 4D134 8013ED34 80ED8434 */   ori       $a0, $a0, (0x16ED80 & 0xFFFF)
    /* 4D138 8013ED38 93E0030C */  jal        func_800F824C
    /* 4D13C 8013ED3C 02000424 */   addiu     $a0, $zero, 0x2
    /* 4D140 8013ED40 92D0030C */  jal        func_800F4248
    /* 4D144 8013ED44 80000424 */   addiu     $a0, $zero, 0x80
    /* 4D148 8013ED48 93E0030C */  jal        func_800F824C
    /* 4D14C 8013ED4C 03000424 */   addiu     $a0, $zero, 0x3
    /* 4D150 8013ED50 8CD9030C */  jal        func_800F6630
    /* 4D154 8013ED54 02000424 */   addiu     $a0, $zero, 0x2
    /* 4D158 8013ED58 92D0030C */  jal        func_800F4248
    /* 4D15C 8013ED5C 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 4D160 8013ED60 7AD8030C */  jal        func_800F61E8
    /* 4D164 8013ED64 00000000 */   nop
    /* 4D168 8013ED68 58E2030C */  jal        func_800F8960
    /* 4D16C 8013ED6C FD6C0424 */   addiu     $a0, $zero, 0x6CFD
    /* 4D170 8013ED70 EFD8030C */  jal        func_800F63BC
    /* 4D174 8013ED74 00000000 */   nop
    /* 4D178 8013ED78 8CD9030C */  jal        func_800F6630
    /* 4D17C 8013ED7C 02000424 */   addiu     $a0, $zero, 0x2
    /* 4D180 8013ED80 92D0030C */  jal        func_800F4248
    /* 4D184 8013ED84 40000424 */   addiu     $a0, $zero, 0x40
    /* 4D188 8013ED88 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4D18C 8013ED8C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4D190 8013ED90 00000000 */  nop
    /* 4D194 8013ED94 00006290 */  lbu        $v0, 0x0($v1)
    /* 4D198 8013ED98 00000000 */  nop
    /* 4D19C 8013ED9C 02110200 */  srl        $v0, $v0, 4
    /* 4D1A0 8013EDA0 04D5030C */  jal        func_800F5410
    /* 4D1A4 8013EDA4 000062A0 */   sb        $v0, 0x0($v1)
    /* 4D1A8 8013EDA8 02D0030C */  jal        func_800F4008
    /* 4D1AC 8013EDAC 04000424 */   addiu     $a0, $zero, 0x4
    /* 4D1B0 8013EDB0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4D1B4 8013EDB4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4D1B8 8013EDB8 00000000 */  nop
    /* 4D1BC 8013EDBC 00006290 */  lbu        $v0, 0x0($v1)
    /* 4D1C0 8013EDC0 03000424 */  addiu      $a0, $zero, 0x3
    /* 4D1C4 8013EDC4 02004234 */  ori        $v0, $v0, 0x2
    /* 4D1C8 8013EDC8 0FCF030C */  jal        func_800F3C3C
    /* 4D1CC 8013EDCC 000062A0 */   sb        $v0, 0x0($v1)
    /* 4D1D0 8013EDD0 31DE030C */  jal        func_800F78C4
    /* 4D1D4 8013EDD4 21204000 */   addu      $a0, $v0, $zero
    /* 4D1D8 8013EDD8 58E2030C */  jal        func_800F8960
    /* 4D1DC 8013EDDC FD6C0424 */   addiu     $a0, $zero, 0x6CFD
    /* 4D1E0 8013EDE0 EFD8030C */  jal        func_800F63BC
    /* 4D1E4 8013EDE4 00000000 */   nop
    /* 4D1E8 8013EDE8 D9D8030C */  jal        func_800F6364
    /* 4D1EC 8013EDEC 00000000 */   nop
    /* 4D1F0 8013EDF0 68D7030C */  jal        func_800F5DA0
    /* 4D1F4 8013EDF4 04000424 */   addiu     $a0, $zero, 0x4
    /* 4D1F8 8013EDF8 E3D6030C */  jal        func_800F5B8C
    /* 4D1FC 8013EDFC 02020424 */   addiu     $a0, $zero, 0x202
    /* 4D200 8013EE00 CAFF4014 */  bnez       $v0, .L8013ED2C
    /* 4D204 8013EE04 00000000 */   nop
    /* 4D208 8013EE08 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4D20C 8013EE0C 00000000 */  nop
    /* 4D210 8013EE10 0800E003 */  jr         $ra
    /* 4D214 8013EE14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013ED14
