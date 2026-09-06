nonmatching func_8014D414, 0x28

glabel func_8014D414
    /* 5B814 8014D414 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B818 8014D418 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B81C 8014D41C C7E5030C */  jal        func_800F971C
    /* 5B820 8014D420 00000000 */   nop
    /* 5B824 8014D424 4035050C */  jal        func_8014D500
    /* 5B828 8014D428 00000000 */   nop
    /* 5B82C 8014D42C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B830 8014D430 00000000 */  nop
    /* 5B834 8014D434 0800E003 */  jr         $ra
    /* 5B838 8014D438 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D414
