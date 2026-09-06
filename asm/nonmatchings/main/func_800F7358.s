nonmatching func_800F7358, 0x40

glabel func_800F7358
    /* 5758 800F7358 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 575C 800F735C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5760 800F7360 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5764 800F7364 00004394 */  lhu        $v1, 0x0($v0)
    /* 5768 800F7368 C1CE030C */  jal        func_800F3B04
    /* 576C 800F736C 21208300 */   addu      $a0, $a0, $v1
    /* 5770 800F7370 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 5774 800F7374 00004390 */  lbu        $v1, 0x0($v0)
    /* 5778 800F7378 1000BF8F */  lw         $ra, 0x10($sp)
    /* 577C 800F737C 000083A0 */  sb         $v1, 0x0($a0)
    /* 5780 800F7380 6000858F */  lw         $a1, %gp_rel(D_8019ED5C)($gp)
    /* 5784 800F7384 01004390 */  lbu        $v1, 0x1($v0)
    /* 5788 800F7388 00000000 */  nop
    /* 578C 800F738C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 5790 800F7390 0800E003 */  jr         $ra
    /* 5794 800F7394 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F7358
