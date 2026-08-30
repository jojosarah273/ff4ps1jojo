nonmatching func_80197BB4, 0x30

glabel func_80197BB4
    /* A5FB4 80197BB4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A5FB8 80197BB8 1000BFAF */  sw         $ra, 0x10($sp)
    /* A5FBC 80197BBC 465F060C */  jal        func_80197D18
    /* A5FC0 80197BC0 00000000 */   nop
    /* A5FC4 80197BC4 E65D060C */  jal        func_80197798
    /* A5FC8 80197BC8 21200000 */   addu      $a0, $zero, $zero
    /* A5FCC 80197BCC 565F060C */  jal        func_80197D58
    /* A5FD0 80197BD0 00000000 */   nop
    /* A5FD4 80197BD4 1000BF8F */  lw         $ra, 0x10($sp)
    /* A5FD8 80197BD8 01000224 */  addiu      $v0, $zero, 0x1
    /* A5FDC 80197BDC 0800E003 */  jr         $ra
    /* A5FE0 80197BE0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80197BB4
