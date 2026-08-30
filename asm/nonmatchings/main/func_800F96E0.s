nonmatching func_800F96E0, 0x14

glabel func_800F96E0
    /* 7AE0 800F96E0 4800828F */  lw         $v0, %gp_rel(D_8019ED44)($gp)
    /* 7AE4 800F96E4 5C00848F */  lw         $a0, %gp_rel(D_8019ED58)($gp)
    /* 7AE8 800F96E8 00004394 */  lhu        $v1, 0x0($v0)
    /* 7AEC 800F96EC 0800E003 */  jr         $ra
    /* 7AF0 800F96F0 000083A4 */   sh        $v1, 0x0($a0)
endlabel func_800F96E0
