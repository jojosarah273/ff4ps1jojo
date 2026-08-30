nonmatching func_800F8F74, 0x20

glabel func_800F8F74
    /* 7374 800F8F74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7378 800F8F78 1000BFAF */  sw         $ra, 0x10($sp)
    /* 737C 800F8F7C C1CE030C */  jal        func_800F3B04
    /* 7380 800F8F80 00000000 */   nop
    /* 7384 800F8F84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7388 800F8F88 000040A0 */  sb         $zero, 0x0($v0)
    /* 738C 800F8F8C 0800E003 */  jr         $ra
    /* 7390 800F8F90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8F74
