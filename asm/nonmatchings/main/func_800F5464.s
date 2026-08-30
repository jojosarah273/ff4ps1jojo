nonmatching func_800F5464, 0x1C

glabel func_800F5464
    /* 3864 800F5464 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 3868 800F5468 00000000 */  nop
    /* 386C 800F546C 00006290 */  lbu        $v0, 0x0($v1)
    /* 3870 800F5470 00000000 */  nop
    /* 3874 800F5474 BF004230 */  andi       $v0, $v0, 0xBF
    /* 3878 800F5478 0800E003 */  jr         $ra
    /* 387C 800F547C 000062A0 */   sb        $v0, 0x0($v1)
endlabel func_800F5464
