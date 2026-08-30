nonmatching func_800F40CC, 0x1C

glabel func_800F40CC
    /* 24CC 800F40CC 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 24D0 800F40D0 00008590 */  lbu        $a1, 0x0($a0)
    /* 24D4 800F40D4 00004390 */  lbu        $v1, 0x0($v0)
    /* 24D8 800F40D8 00000000 */  nop
    /* 24DC 800F40DC 24186500 */  and        $v1, $v1, $a1
    /* 24E0 800F40E0 0800E003 */  jr         $ra
    /* 24E4 800F40E4 000043A0 */   sb        $v1, 0x0($v0)
endlabel func_800F40CC
