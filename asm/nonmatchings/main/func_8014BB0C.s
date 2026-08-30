nonmatching func_8014BB0C, 0x30

glabel func_8014BB0C
    /* 59F0C 8014BB0C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59F10 8014BB10 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59F14 8014BB14 53D9030C */  jal        func_800F654C
    /* 59F18 8014BB18 02000424 */   addiu     $a0, $zero, 0x2
    /* 59F1C 8014BB1C 62E0030C */  jal        func_800F8188
    /* 59F20 8014BB20 D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 59F24 8014BB24 452E050C */  jal        func_8014B914
    /* 59F28 8014BB28 00000000 */   nop
    /* 59F2C 8014BB2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59F30 8014BB30 00000000 */  nop
    /* 59F34 8014BB34 0800E003 */  jr         $ra
    /* 59F38 8014BB38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014BB0C
