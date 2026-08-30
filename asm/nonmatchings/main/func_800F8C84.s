nonmatching func_800F8C84, 0x14

glabel func_800F8C84
    /* 7084 800F8C84 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 7088 800F8C88 00000000 */  nop
    /* 708C 800F8C8C 00004390 */  lbu        $v1, 0x0($v0)
    /* 7090 800F8C90 0800E003 */  jr         $ra
    /* 7094 800F8C94 000083A0 */   sb        $v1, 0x0($a0)
endlabel func_800F8C84
