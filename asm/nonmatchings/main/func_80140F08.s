nonmatching func_80140F08, 0x60

glabel func_80140F08
    /* 4F308 80140F08 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F30C 80140F0C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F310 80140F10 DA03050C */  jal        func_80140F68
    /* 4F314 80140F14 00000000 */   nop
    /* 4F318 80140F18 90D8030C */  jal        func_800F6240
    /* 4F31C 80140F1C 4CF40434 */   ori       $a0, $zero, 0xF44C
    /* 4F320 80140F20 59D9030C */  jal        func_800F6564
    /* 4F324 80140F24 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F328 80140F28 0DD9030C */  jal        func_800F6434
    /* 4F32C 80140F2C 02020424 */   addiu     $a0, $zero, 0x202
    /* 4F330 80140F30 05004014 */  bnez       $v0, .L80140F48
    /* 4F334 80140F34 00000000 */   nop
    /* 4F338 80140F38 53D9030C */  jal        func_800F654C
    /* 4F33C 80140F3C 05000424 */   addiu     $a0, $zero, 0x5
    /* 4F340 80140F40 CD04050C */  jal        func_80141334
    /* 4F344 80140F44 00000000 */   nop
  .L80140F48:
    /* 4F348 80140F48 AA03050C */  jal        func_80140EA8
    /* 4F34C 80140F4C 00000000 */   nop
    /* 4F350 80140F50 90D8030C */  jal        func_800F6240
    /* 4F354 80140F54 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F358 80140F58 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F35C 80140F5C 00000000 */  nop
    /* 4F360 80140F60 0800E003 */  jr         $ra
    /* 4F364 80140F64 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140F08
