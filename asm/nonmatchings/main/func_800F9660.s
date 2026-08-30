nonmatching func_800F9660, 0x1C

glabel func_800F9660
    /* 7A60 800F9660 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 7A64 800F9664 00000000 */  nop
    /* 7A68 800F9668 00006290 */  lbu        $v0, 0x0($v1)
    /* 7A6C 800F966C 00000000 */  nop
    /* 7A70 800F9670 25104400 */  or         $v0, $v0, $a0
    /* 7A74 800F9674 0800E003 */  jr         $ra
    /* 7A78 800F9678 000062A0 */   sb        $v0, 0x0($v1)
endlabel func_800F9660
