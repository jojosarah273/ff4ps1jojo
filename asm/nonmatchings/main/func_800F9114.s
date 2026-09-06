nonmatching func_800F9114, 0x2C

glabel func_800F9114
    /* 7514 800F9114 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 7518 800F9118 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 751C 800F911C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7520 800F9120 00004390 */  lbu        $v1, 0x0($v0)
    /* 7524 800F9124 C1CE030C */  jal        func_800F3B04
    /* 7528 800F9128 21208300 */   addu      $a0, $a0, $v1
    /* 752C 800F912C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7530 800F9130 000040A0 */  sb         $zero, 0x0($v0)
    /* 7534 800F9134 010040A0 */  sb         $zero, 0x1($v0)
    /* 7538 800F9138 0800E003 */  jr         $ra
    /* 753C 800F913C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F9114
