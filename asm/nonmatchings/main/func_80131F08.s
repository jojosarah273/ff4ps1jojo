nonmatching func_80131F08, 0x30

glabel func_80131F08
    /* 40308 80131F08 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4030C 80131F0C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 40310 80131F10 53D9030C */  jal        func_800F654C
    /* 40314 80131F14 10000424 */   addiu     $a0, $zero, 0x10
    /* 40318 80131F18 40DD030C */  jal        func_800F7500
    /* 4031C 80131F1C 03000424 */   addiu     $a0, $zero, 0x3
    /* 40320 80131F20 E6C7040C */  jal        func_80131F98
    /* 40324 80131F24 00000000 */   nop
    /* 40328 80131F28 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4032C 80131F2C 00000000 */  nop
    /* 40330 80131F30 0800E003 */  jr         $ra
    /* 40334 80131F34 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131F08
