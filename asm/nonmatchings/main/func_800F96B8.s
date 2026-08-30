nonmatching func_800F96B8, 0x14

glabel func_800F96B8
    /* 7AB8 800F96B8 4800828F */  lw         $v0, %gp_rel(D_8019ED44)($gp)
    /* 7ABC 800F96BC 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* 7AC0 800F96C0 00004394 */  lhu        $v1, 0x0($v0)
    /* 7AC4 800F96C4 0800E003 */  jr         $ra
    /* 7AC8 800F96C8 000083A4 */   sh        $v1, 0x0($a0)
endlabel func_800F96B8
