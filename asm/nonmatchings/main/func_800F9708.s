nonmatching func_800F9708, 0x14

glabel func_800F9708
    /* 7B08 800F9708 4800828F */  lw         $v0, %gp_rel(D_8019ED44)($gp)
    /* 7B0C 800F970C 5C00848F */  lw         $a0, %gp_rel(D_8019ED58)($gp)
    /* 7B10 800F9710 00004394 */  lhu        $v1, 0x0($v0)
    /* 7B14 800F9714 0800E003 */  jr         $ra
    /* 7B18 800F9718 000083A4 */   sh        $v1, 0x0($a0)
endlabel func_800F9708
