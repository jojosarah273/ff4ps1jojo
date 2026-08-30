nonmatching func_801224D0, 0x28

glabel func_801224D0
    /* 308D0 801224D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 308D4 801224D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 308D8 801224D8 93E0030C */  jal        func_800F824C
    /* 308DC 801224DC 43000424 */   addiu     $a0, $zero, 0x43
    /* 308E0 801224E0 9CDC030C */  jal        func_800F7270
    /* 308E4 801224E4 43000424 */   addiu     $a0, $zero, 0x43
    /* 308E8 801224E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 308EC 801224EC 00000000 */  nop
    /* 308F0 801224F0 0800E003 */  jr         $ra
    /* 308F4 801224F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801224D0
