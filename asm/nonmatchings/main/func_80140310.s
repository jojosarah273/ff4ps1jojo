nonmatching func_80140310, 0x40

glabel func_80140310
    /* 4E710 80140310 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4E714 80140314 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4E718 80140318 CCE4030C */  jal        func_800F9330
    /* 4E71C 8014031C 00000000 */   nop
    /* 4E720 80140320 91E5030C */  jal        func_800F9644
    /* 4E724 80140324 20000424 */   addiu     $a0, $zero, 0x20
    /* 4E728 80140328 63D9030C */  jal        func_800F658C
    /* 4E72C 8014032C 08F40434 */   ori       $a0, $zero, 0xF408
    /* 4E730 80140330 9DE0030C */  jal        func_800F8274
    /* 4E734 80140334 02000424 */   addiu     $a0, $zero, 0x2
    /* 4E738 80140338 8900050C */  jal        func_80140224
    /* 4E73C 8014033C 00000000 */   nop
    /* 4E740 80140340 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4E744 80140344 00000000 */  nop
    /* 4E748 80140348 0800E003 */  jr         $ra
    /* 4E74C 8014034C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140310
