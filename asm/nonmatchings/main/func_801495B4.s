nonmatching func_801495B4, 0x20

glabel func_801495B4
    /* 579B4 801495B4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 579B8 801495B8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 579BC 801495BC FC99050C */  jal        func_801667F0
    /* 579C0 801495C0 00000000 */   nop
    /* 579C4 801495C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 579C8 801495C8 00000000 */  nop
    /* 579CC 801495CC 0800E003 */  jr         $ra
    /* 579D0 801495D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801495B4
