nonmatching func_8014B620, 0x28

glabel func_8014B620
    /* 59A20 8014B620 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59A24 8014B624 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59A28 8014B628 210F050C */  jal        func_80143C84
    /* 59A2C 8014B62C 00000000 */   nop
    /* 59A30 8014B630 FD54020C */  jal        func_800953F4
    /* 59A34 8014B634 00000000 */   nop
    /* 59A38 8014B638 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59A3C 8014B63C 00000000 */  nop
    /* 59A40 8014B640 0800E003 */  jr         $ra
    /* 59A44 8014B644 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B620
