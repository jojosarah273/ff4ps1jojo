nonmatching func_800F542C, 0x1C

glabel func_800F542C
    /* 382C 800F542C 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 3830 800F5430 00000000 */  nop
    /* 3834 800F5434 00006290 */  lbu        $v0, 0x0($v1)
    /* 3838 800F5438 00000000 */  nop
    /* 383C 800F543C F7004230 */  andi       $v0, $v0, 0xF7
    /* 3840 800F5440 0800E003 */  jr         $ra
    /* 3844 800F5444 000062A0 */   sb        $v0, 0x0($v1)
endlabel func_800F542C
