nonmatching func_801495D4, 0x20

glabel func_801495D4
    /* 579D4 801495D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 579D8 801495D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 579DC 801495DC 239A050C */  jal        func_8016688C
    /* 579E0 801495E0 00000000 */   nop
    /* 579E4 801495E4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 579E8 801495E8 00000000 */  nop
    /* 579EC 801495EC 0800E003 */  jr         $ra
    /* 579F0 801495F0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801495D4
