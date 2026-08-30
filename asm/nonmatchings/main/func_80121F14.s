nonmatching func_80121F14, 0x50

glabel func_80121F14
    /* 30314 80121F14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30318 80121F18 1000BFAF */  sw         $ra, 0x10($sp)
  .L80121F1C:
    /* 3031C 80121F1C DAE1030C */  jal        func_800F8768
    /* 30320 80121F20 21200000 */   addu      $a0, $zero, $zero
    /* 30324 80121F24 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 30328 80121F28 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3032C 80121F2C 00000000 */  nop
    /* 30330 80121F30 00006294 */  lhu        $v0, 0x0($v1)
    /* 30334 80121F34 1D000424 */  addiu      $a0, $zero, 0x1D
    /* 30338 80121F38 02004224 */  addiu      $v0, $v0, 0x2
    /* 3033C 80121F3C 68D7030C */  jal        func_800F5DA0
    /* 30340 80121F40 000062A4 */   sh        $v0, 0x0($v1)
    /* 30344 80121F44 E3D6030C */  jal        func_800F5B8C
    /* 30348 80121F48 02020424 */   addiu     $a0, $zero, 0x202
    /* 3034C 80121F4C F3FF4014 */  bnez       $v0, .L80121F1C
    /* 30350 80121F50 00000000 */   nop
    /* 30354 80121F54 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30358 80121F58 00000000 */  nop
    /* 3035C 80121F5C 0800E003 */  jr         $ra
    /* 30360 80121F60 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121F14
