nonmatching func_800F96A4, 0x14

glabel func_800F96A4
    /* 7AA4 800F96A4 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 7AA8 800F96A8 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 7AAC 800F96AC 00004390 */  lbu        $v1, 0x0($v0)
    /* 7AB0 800F96B0 0800E003 */  jr         $ra
    /* 7AB4 800F96B4 000083A0 */   sb        $v1, 0x0($a0)
endlabel func_800F96A4
