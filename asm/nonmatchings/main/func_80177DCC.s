nonmatching func_80177DCC, 0x20

glabel func_80177DCC
    /* 861CC 80177DCC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 861D0 80177DD0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 861D4 80177DD4 79DE050C */  jal        func_801779E4
    /* 861D8 80177DD8 21200000 */   addu      $a0, $zero, $zero
    /* 861DC 80177DDC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 861E0 80177DE0 00000000 */  nop
    /* 861E4 80177DE4 0800E003 */  jr         $ra
    /* 861E8 80177DE8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80177DCC
