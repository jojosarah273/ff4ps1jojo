nonmatching func_8016ED64, 0xAC

glabel func_8016ED64
    /* 7D164 8016ED64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7D168 8016ED68 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7D16C 8016ED6C 91E5030C */  jal        func_800F9644
    /* 7D170 8016ED70 10000424 */   addiu     $a0, $zero, 0x10
    /* 7D174 8016ED74 98E5030C */  jal        func_800F9660
    /* 7D178 8016ED78 20000424 */   addiu     $a0, $zero, 0x20
    /* 7D17C 8016ED7C 0D80063C */  lui        $a2, %hi(D_800D0000)
    /* 7D180 8016ED80 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 7D184 8016ED84 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 7D188 8016ED88 1A80043C */  lui        $a0, %hi(D_8019ED68)
    /* 7D18C 8016ED8C 68ED848C */  lw         $a0, %lo(D_8019ED68)($a0)
    /* 7D190 8016ED90 00006294 */  lhu        $v0, 0x0($v1)
    /* 7D194 8016ED94 00008590 */  lbu        $a1, 0x0($a0)
    /* 7D198 8016ED98 21104600 */  addu       $v0, $v0, $a2
    /* 7D19C 8016ED9C 000045A0 */  sb         $a1, %lo(D_800D0000)($v0)
    /* 7D1A0 8016EDA0 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 7D1A4 8016EDA4 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 7D1A8 8016EDA8 00000000 */  nop
    /* 7D1AC 8016EDAC 00006294 */  lhu        $v0, 0x0($v1)
    /* 7D1B0 8016EDB0 00000000 */  nop
    /* 7D1B4 8016EDB4 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 7D1B8 8016EDB8 9BE4030C */  jal        func_800F926C
    /* 7D1BC 8016EDBC 000062A4 */   sh        $v0, 0x0($v1)
    /* 7D1C0 8016EDC0 A6E4030C */  jal        func_800F9298
    /* 7D1C4 8016EDC4 00000000 */   nop
    /* 7D1C8 8016EDC8 53D9030C */  jal        func_800F654C
    /* 7D1CC 8016EDCC 02000424 */   addiu     $a0, $zero, 0x2
    /* 7D1D0 8016EDD0 7AE0030C */  jal        func_800F81E8
    /* 7D1D4 8016EDD4 64000424 */   addiu     $a0, $zero, 0x64
    /* 7D1D8 8016EDD8 53D9030C */  jal        func_800F654C
    /* 7D1DC 8016EDDC F0000424 */   addiu     $a0, $zero, 0xF0
    /* 7D1E0 8016EDE0 7AE0030C */  jal        func_800F81E8
    /* 7D1E4 8016EDE4 6A000424 */   addiu     $a0, $zero, 0x6A
    /* 7D1E8 8016EDE8 53D9030C */  jal        func_800F654C
    /* 7D1EC 8016EDEC 0D000424 */   addiu     $a0, $zero, 0xD
    /* 7D1F0 8016EDF0 7AE0030C */  jal        func_800F81E8
    /* 7D1F4 8016EDF4 6B000424 */   addiu     $a0, $zero, 0x6B
    /* 7D1F8 8016EDF8 E2BB050C */  jal        func_8016EF88
    /* 7D1FC 8016EDFC 00000000 */   nop
    /* 7D200 8016EE00 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7D204 8016EE04 00000000 */  nop
    /* 7D208 8016EE08 0800E003 */  jr         $ra
    /* 7D20C 8016EE0C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016ED64
