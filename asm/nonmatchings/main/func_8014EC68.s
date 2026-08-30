nonmatching func_8014EC68, 0x30

glabel func_8014EC68
    /* 5D068 8014EC68 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D06C 8014EC6C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D070 8014EC70 EEE3030C */  jal        func_800F8FB8
    /* 5D074 8014EC74 06000424 */   addiu     $a0, $zero, 0x6
    /* 5D078 8014EC78 8CD9030C */  jal        func_800F6630
    /* 5D07C 8014EC7C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D080 8014EC80 93E0030C */  jal        func_800F824C
    /* 5D084 8014EC84 07000424 */   addiu     $a0, $zero, 0x7
    /* 5D088 8014EC88 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D08C 8014EC8C 00000000 */  nop
    /* 5D090 8014EC90 0800E003 */  jr         $ra
    /* 5D094 8014EC94 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014EC68
