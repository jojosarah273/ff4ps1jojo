nonmatching func_800F96CC, 0x14

glabel func_800F96CC
    /* 7ACC 800F96CC 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 7AD0 800F96D0 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 7AD4 800F96D4 00004390 */  lbu        $v1, 0x0($v0)
    /* 7AD8 800F96D8 0800E003 */  jr         $ra
    /* 7ADC 800F96DC 000083A0 */   sb        $v1, 0x0($a0)
endlabel func_800F96CC
