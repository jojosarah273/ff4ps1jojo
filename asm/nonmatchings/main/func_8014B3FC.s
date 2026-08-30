nonmatching func_8014B3FC, 0x30

glabel func_8014B3FC
    /* 597FC 8014B3FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59800 8014B400 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59804 8014B404 90D8030C */  jal        func_800F6240
    /* 59808 8014B408 85F20434 */   ori       $a0, $zero, 0xF285
    /* 5980C 8014B40C 8A0D050C */  jal        func_80143628
    /* 59810 8014B410 00000000 */   nop
    /* 59814 8014B414 FD54020C */  jal        func_800953F4
    /* 59818 8014B418 00000000 */   nop
    /* 5981C 8014B41C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59820 8014B420 00000000 */  nop
    /* 59824 8014B424 0800E003 */  jr         $ra
    /* 59828 8014B428 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B3FC
