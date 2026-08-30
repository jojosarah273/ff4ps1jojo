nonmatching func_800F4280, 0x30

glabel func_800F4280
    /* 2680 800F4280 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2684 800F4284 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2688 800F4288 C1CE030C */  jal        func_800F3B04
    /* 268C 800F428C 00000000 */   nop
    /* 2690 800F4290 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 2694 800F4294 00004590 */  lbu        $a1, 0x0($v0)
    /* 2698 800F4298 00006490 */  lbu        $a0, 0x0($v1)
    /* 269C 800F429C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 26A0 800F42A0 24208500 */  and        $a0, $a0, $a1
    /* 26A4 800F42A4 000064A0 */  sb         $a0, 0x0($v1)
    /* 26A8 800F42A8 0800E003 */  jr         $ra
    /* 26AC 800F42AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4280
