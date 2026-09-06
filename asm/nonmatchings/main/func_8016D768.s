nonmatching func_8016D768, 0x30

glabel func_8016D768
    /* 7BB68 8016D768 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7BB6C 8016D76C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7BB70 8016D770 9CDC030C */  jal        func_800F7270
    /* 7BB74 8016D774 36000424 */   addiu     $a0, $zero, 0x36
    /* 7BB78 8016D778 D9D8030C */  jal        func_800F6364
    /* 7BB7C 8016D77C 00000000 */   nop
    /* 7BB80 8016D780 5BE3030C */  jal        func_800F8D6C
    /* 7BB84 8016D784 36000424 */   addiu     $a0, $zero, 0x36
    /* 7BB88 8016D788 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7BB8C 8016D78C 00000000 */  nop
    /* 7BB90 8016D790 0800E003 */  jr         $ra
    /* 7BB94 8016D794 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016D768
