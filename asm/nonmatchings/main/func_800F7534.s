nonmatching func_800F7534, 0x38

glabel func_800F7534
    /* 5934 800F7534 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5938 800F7538 1000BFAF */  sw         $ra, 0x10($sp)
    /* 593C 800F753C C1CE030C */  jal        func_800F3B04
    /* 5940 800F7540 00000000 */   nop
    /* 5944 800F7544 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 5948 800F7548 00004390 */  lbu        $v1, 0x0($v0)
    /* 594C 800F754C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5950 800F7550 000083A0 */  sb         $v1, 0x0($a0)
    /* 5954 800F7554 6400858F */  lw         $a1, %gp_rel(D_8019ED60)($gp)
    /* 5958 800F7558 01004390 */  lbu        $v1, 0x1($v0)
    /* 595C 800F755C 00000000 */  nop
    /* 5960 800F7560 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 5964 800F7564 0800E003 */  jr         $ra
    /* 5968 800F7568 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F7534
