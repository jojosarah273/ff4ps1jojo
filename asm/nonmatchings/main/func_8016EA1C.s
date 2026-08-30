nonmatching func_8016EA1C, 0x20

glabel func_8016EA1C
    /* 7CE1C 8016EA1C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7CE20 8016EA20 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7CE24 8016EA24 AFBA050C */  jal        func_8016EABC
    /* 7CE28 8016EA28 00000000 */   nop
    /* 7CE2C 8016EA2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7CE30 8016EA30 00000000 */  nop
    /* 7CE34 8016EA34 0800E003 */  jr         $ra
    /* 7CE38 8016EA38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016EA1C
