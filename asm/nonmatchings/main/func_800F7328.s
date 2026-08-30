nonmatching func_800F7328, 0x30

glabel func_800F7328
    /* 5728 800F7328 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 572C 800F732C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5730 800F7330 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5734 800F7334 00004390 */  lbu        $v1, 0x0($v0)
    /* 5738 800F7338 C1CE030C */  jal        func_800F3B04
    /* 573C 800F733C 21208300 */   addu      $a0, $a0, $v1
    /* 5740 800F7340 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 5744 800F7344 00004390 */  lbu        $v1, 0x0($v0)
    /* 5748 800F7348 1000BF8F */  lw         $ra, 0x10($sp)
    /* 574C 800F734C 000083A0 */  sb         $v1, 0x0($a0)
    /* 5750 800F7350 0800E003 */  jr         $ra
    /* 5754 800F7354 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F7328
