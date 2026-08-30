nonmatching func_801773D4, 0x28

glabel func_801773D4
    /* 857D4 801773D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 857D8 801773D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 857DC 801773DC 93E0030C */  jal        func_800F824C
    /* 857E0 801773E0 43000424 */   addiu     $a0, $zero, 0x43
    /* 857E4 801773E4 9CDC030C */  jal        func_800F7270
    /* 857E8 801773E8 43000424 */   addiu     $a0, $zero, 0x43
    /* 857EC 801773EC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 857F0 801773F0 00000000 */  nop
    /* 857F4 801773F4 0800E003 */  jr         $ra
    /* 857F8 801773F8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801773D4
