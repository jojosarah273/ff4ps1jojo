nonmatching func_800F96F4, 0x14

glabel func_800F96F4
    /* 7AF4 800F96F4 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 7AF8 800F96F8 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 7AFC 800F96FC 00004390 */  lbu        $v1, 0x0($v0)
    /* 7B00 800F9700 0800E003 */  jr         $ra
    /* 7B04 800F9704 000083A0 */   sb        $v1, 0x0($a0)
endlabel func_800F96F4
