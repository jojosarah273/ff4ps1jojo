nonmatching func_800F9690, 0x14

glabel func_800F9690
    /* 7A90 800F9690 4800828F */  lw         $v0, %gp_rel(D_8019ED44)($gp)
    /* 7A94 800F9694 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* 7A98 800F9698 00004394 */  lhu        $v1, 0x0($v0)
    /* 7A9C 800F969C 0800E003 */  jr         $ra
    /* 7AA0 800F96A0 000083A4 */   sh        $v1, 0x0($a0)
endlabel func_800F9690
