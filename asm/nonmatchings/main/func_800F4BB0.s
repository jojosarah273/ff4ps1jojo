nonmatching func_800F4BB0, 0x38

glabel func_800F4BB0
    /* 2FB0 800F4BB0 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 2FB4 800F4BB4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FB8 800F4BB8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2FBC 800F4BBC 00004394 */  lhu        $v1, 0x0($v0)
    /* 2FC0 800F4BC0 C1CE030C */  jal        func_800F3B04
    /* 2FC4 800F4BC4 21208300 */   addu      $a0, $a0, $v1
    /* 2FC8 800F4BC8 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2FCC 800F4BCC 00004490 */  lbu        $a0, 0x0($v0)
    /* 2FD0 800F4BD0 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2FD4 800F4BD4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2FD8 800F4BD8 24186400 */  and        $v1, $v1, $a0
    /* 2FDC 800F4BDC 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2FE0 800F4BE0 0800E003 */  jr         $ra
    /* 2FE4 800F4BE4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4BB0
