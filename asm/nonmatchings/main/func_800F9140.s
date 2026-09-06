nonmatching func_800F9140, 0x2C

glabel func_800F9140
    /* 7540 800F9140 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 7544 800F9144 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7548 800F9148 1000BFAF */  sw         $ra, 0x10($sp)
    /* 754C 800F914C 00004394 */  lhu        $v1, 0x0($v0)
    /* 7550 800F9150 C1CE030C */  jal        func_800F3B04
    /* 7554 800F9154 21208300 */   addu      $a0, $a0, $v1
    /* 7558 800F9158 1000BF8F */  lw         $ra, 0x10($sp)
    /* 755C 800F915C 000040A0 */  sb         $zero, 0x0($v0)
    /* 7560 800F9160 010040A0 */  sb         $zero, 0x1($v0)
    /* 7564 800F9164 0800E003 */  jr         $ra
    /* 7568 800F9168 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F9140
