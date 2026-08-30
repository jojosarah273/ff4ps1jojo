nonmatching func_8014BB3C, 0x30

glabel func_8014BB3C
    /* 59F3C 8014BB3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59F40 8014BB40 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59F44 8014BB44 53D9030C */  jal        func_800F654C
    /* 59F48 8014BB48 03000424 */   addiu     $a0, $zero, 0x3
    /* 59F4C 8014BB4C 62E0030C */  jal        func_800F8188
    /* 59F50 8014BB50 D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 59F54 8014BB54 452E050C */  jal        func_8014B914
    /* 59F58 8014BB58 00000000 */   nop
    /* 59F5C 8014BB5C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59F60 8014BB60 00000000 */  nop
    /* 59F64 8014BB64 0800E003 */  jr         $ra
    /* 59F68 8014BB68 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014BB3C
