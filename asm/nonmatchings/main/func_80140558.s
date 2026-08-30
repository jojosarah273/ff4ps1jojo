nonmatching func_80140558, 0x20

glabel func_80140558
    /* 4E958 80140558 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4E95C 8014055C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4E960 80140560 5DC0010C */  jal        func_80070174
    /* 4E964 80140564 00000000 */   nop
    /* 4E968 80140568 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4E96C 8014056C 00000000 */  nop
    /* 4E970 80140570 0800E003 */  jr         $ra
    /* 4E974 80140574 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140558
