nonmatching func_800F442C, 0x44

glabel func_800F442C
    /* 282C 800F442C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2830 800F4430 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2834 800F4434 9CCE030C */  jal        func_800F3A70
    /* 2838 800F4438 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 283C 800F443C C1CE030C */  jal        func_800F3B04
    /* 2840 800F4440 21204000 */   addu      $a0, $v0, $zero
    /* 2844 800F4444 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 2848 800F4448 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 284C 800F444C 00006494 */  lhu        $a0, 0x0($v1)
    /* 2850 800F4450 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2854 800F4454 21104400 */  addu       $v0, $v0, $a0
    /* 2858 800F4458 00004490 */  lbu        $a0, 0x0($v0)
    /* 285C 800F445C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2860 800F4460 24186400 */  and        $v1, $v1, $a0
    /* 2864 800F4464 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2868 800F4468 0800E003 */  jr         $ra
    /* 286C 800F446C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F442C
