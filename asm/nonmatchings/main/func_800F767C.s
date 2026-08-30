nonmatching func_800F767C, 0x40

glabel func_800F767C
    /* 5A7C 800F767C 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 5A80 800F7680 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5A84 800F7684 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5A88 800F7688 00004394 */  lhu        $v1, 0x0($v0)
    /* 5A8C 800F768C C1CE030C */  jal        func_800F3B04
    /* 5A90 800F7690 21208300 */   addu      $a0, $a0, $v1
    /* 5A94 800F7694 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 5A98 800F7698 00004390 */  lbu        $v1, 0x0($v0)
    /* 5A9C 800F769C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5AA0 800F76A0 000083A0 */  sb         $v1, 0x0($a0)
    /* 5AA4 800F76A4 6400858F */  lw         $a1, %gp_rel(D_8019ED60)($gp)
    /* 5AA8 800F76A8 01004390 */  lbu        $v1, 0x1($v0)
    /* 5AAC 800F76AC 00000000 */  nop
    /* 5AB0 800F76B0 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 5AB4 800F76B4 0800E003 */  jr         $ra
    /* 5AB8 800F76B8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F767C
