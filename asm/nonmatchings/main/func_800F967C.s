nonmatching func_800F967C, 0x14

glabel func_800F967C
    /* 7A7C 800F967C 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 7A80 800F9680 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 7A84 800F9684 00004390 */  lbu        $v1, 0x0($v0)
    /* 7A88 800F9688 0800E003 */  jr         $ra
    /* 7A8C 800F968C 000083A0 */   sb        $v1, 0x0($a0)
endlabel func_800F967C
