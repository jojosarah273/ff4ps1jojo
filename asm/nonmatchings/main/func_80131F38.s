nonmatching func_80131F38, 0x30

glabel func_80131F38
    /* 40338 80131F38 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4033C 80131F3C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 40340 80131F40 53D9030C */  jal        func_800F654C
    /* 40344 80131F44 20000424 */   addiu     $a0, $zero, 0x20
    /* 40348 80131F48 40DD030C */  jal        func_800F7500
    /* 4034C 80131F4C 03000424 */   addiu     $a0, $zero, 0x3
    /* 40350 80131F50 E6C7040C */  jal        func_80131F98
    /* 40354 80131F54 00000000 */   nop
    /* 40358 80131F58 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4035C 80131F5C 00000000 */  nop
    /* 40360 80131F60 0800E003 */  jr         $ra
    /* 40364 80131F64 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131F38
