nonmatching func_800F814C, 0x14

glabel func_800F814C
    /* 654C 800F814C 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 6550 800F8150 00000000 */  nop
    /* 6554 800F8154 00004390 */  lbu        $v1, 0x0($v0)
    /* 6558 800F8158 0800E003 */  jr         $ra
    /* 655C 800F815C 000083A0 */   sb        $v1, 0x0($a0)
endlabel func_800F814C
