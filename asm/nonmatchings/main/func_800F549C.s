nonmatching func_800F549C, 0x1C

glabel func_800F549C
    /* 389C 800F549C 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 38A0 800F54A0 00000000 */  nop
    /* 38A4 800F54A4 00006290 */  lbu        $v0, 0x0($v1)
    /* 38A8 800F54A8 00000000 */  nop
    /* 38AC 800F54AC 08004234 */  ori        $v0, $v0, 0x8
    /* 38B0 800F54B0 0800E003 */  jr         $ra
    /* 38B4 800F54B4 000062A0 */   sb        $v0, 0x0($v1)
endlabel func_800F549C
