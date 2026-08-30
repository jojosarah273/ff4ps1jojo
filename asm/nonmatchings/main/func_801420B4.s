nonmatching func_801420B4, 0x20

glabel func_801420B4
    /* 504B4 801420B4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 504B8 801420B8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 504BC 801420BC 1908050C */  jal        func_80142064
    /* 504C0 801420C0 00000000 */   nop
    /* 504C4 801420C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 504C8 801420C8 00000000 */  nop
    /* 504CC 801420CC 0800E003 */  jr         $ra
    /* 504D0 801420D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801420B4
