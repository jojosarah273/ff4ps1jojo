nonmatching func_8014B5F8, 0x28

glabel func_8014B5F8
    /* 599F8 8014B5F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 599FC 8014B5FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59A00 8014B600 420E050C */  jal        func_80143908
    /* 59A04 8014B604 00000000 */   nop
    /* 59A08 8014B608 FD54020C */  jal        func_800953F4
    /* 59A0C 8014B60C 00000000 */   nop
    /* 59A10 8014B610 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59A14 8014B614 00000000 */  nop
    /* 59A18 8014B618 0800E003 */  jr         $ra
    /* 59A1C 8014B61C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B5F8
