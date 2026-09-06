nonmatching func_8014B42C, 0x28

glabel func_8014B42C
    /* 5982C 8014B42C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59830 8014B430 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59834 8014B434 8A0D050C */  jal        func_80143628
    /* 59838 8014B438 00000000 */   nop
    /* 5983C 8014B43C FD54020C */  jal        func_800953F4
    /* 59840 8014B440 00000000 */   nop
    /* 59844 8014B444 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59848 8014B448 00000000 */  nop
    /* 5984C 8014B44C 0800E003 */  jr         $ra
    /* 59850 8014B450 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B42C
