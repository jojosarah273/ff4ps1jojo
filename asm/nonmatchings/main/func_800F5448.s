nonmatching func_800F5448, 0x1C

glabel func_800F5448
    /* 3848 800F5448 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 384C 800F544C 00000000 */  nop
    /* 3850 800F5450 00006290 */  lbu        $v0, 0x0($v1)
    /* 3854 800F5454 00000000 */  nop
    /* 3858 800F5458 FB004230 */  andi       $v0, $v0, 0xFB
    /* 385C 800F545C 0800E003 */  jr         $ra
    /* 3860 800F5460 000062A0 */   sb        $v0, 0x0($v1)
endlabel func_800F5448
