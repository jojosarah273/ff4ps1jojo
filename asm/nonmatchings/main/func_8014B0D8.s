nonmatching func_8014B0D8, 0x40

glabel func_8014B0D8
    /* 594D8 8014B0D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 594DC 8014B0DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 594E0 8014B0E0 59D9030C */  jal        func_800F6564
    /* 594E4 8014B0E4 C2340424 */   addiu     $a0, $zero, 0x34C2
    /* 594E8 8014B0E8 92D0030C */  jal        func_800F4248
    /* 594EC 8014B0EC 80000424 */   addiu     $a0, $zero, 0x80
    /* 594F0 8014B0F0 93E0030C */  jal        func_800F824C
    /* 594F4 8014B0F4 21200000 */   addu      $a0, $zero, $zero
    /* 594F8 8014B0F8 922C050C */  jal        func_8014B248
    /* 594FC 8014B0FC 00000000 */   nop
    /* 59500 8014B100 7F2E050C */  jal        func_8014B9FC
    /* 59504 8014B104 00000000 */   nop
    /* 59508 8014B108 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5950C 8014B10C 00000000 */  nop
    /* 59510 8014B110 0800E003 */  jr         $ra
    /* 59514 8014B114 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B0D8
