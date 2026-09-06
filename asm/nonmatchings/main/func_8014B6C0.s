nonmatching func_8014B6C0, 0x28

glabel func_8014B6C0
    /* 59AC0 8014B6C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59AC4 8014B6C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59AC8 8014B6C8 1410050C */  jal        func_80144050
    /* 59ACC 8014B6CC 00000000 */   nop
    /* 59AD0 8014B6D0 FD54020C */  jal        func_800953F4
    /* 59AD4 8014B6D4 00000000 */   nop
    /* 59AD8 8014B6D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59ADC 8014B6DC 00000000 */  nop
    /* 59AE0 8014B6E0 0800E003 */  jr         $ra
    /* 59AE4 8014B6E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B6C0
