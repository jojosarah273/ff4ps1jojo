nonmatching func_801495F4, 0x20

glabel func_801495F4
    /* 579F4 801495F4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 579F8 801495F8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 579FC 801495FC 3B9A050C */  jal        func_801668EC
    /* 57A00 80149600 00000000 */   nop
    /* 57A04 80149604 1000BF8F */  lw         $ra, 0x10($sp)
    /* 57A08 80149608 00000000 */  nop
    /* 57A0C 8014960C 0800E003 */  jr         $ra
    /* 57A10 80149610 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801495F4
