nonmatching func_800F8F94, 0x24

glabel func_800F8F94
    /* 7394 800F8F94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7398 800F8F98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 739C 800F8F9C C1CE030C */  jal        func_800F3B04
    /* 73A0 800F8FA0 00000000 */   nop
    /* 73A4 800F8FA4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 73A8 800F8FA8 000040A0 */  sb         $zero, 0x0($v0)
    /* 73AC 800F8FAC 010040A0 */  sb         $zero, 0x1($v0)
    /* 73B0 800F8FB0 0800E003 */  jr         $ra
    /* 73B4 800F8FB4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8F94
