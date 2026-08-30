nonmatching func_80131F68, 0x30

glabel func_80131F68
    /* 40368 80131F68 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4036C 80131F6C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 40370 80131F70 53D9030C */  jal        func_800F654C
    /* 40374 80131F74 08000424 */   addiu     $a0, $zero, 0x8
    /* 40378 80131F78 40DD030C */  jal        func_800F7500
    /* 4037C 80131F7C 03000424 */   addiu     $a0, $zero, 0x3
    /* 40380 80131F80 E6C7040C */  jal        func_80131F98
    /* 40384 80131F84 00000000 */   nop
    /* 40388 80131F88 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4038C 80131F8C 00000000 */  nop
    /* 40390 80131F90 0800E003 */  jr         $ra
    /* 40394 80131F94 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131F68
