nonmatching func_800F78C4, 0x1C

glabel func_800F78C4
    /* 5CC4 800F78C4 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 5CC8 800F78C8 00008590 */  lbu        $a1, 0x0($a0)
    /* 5CCC 800F78CC 00004390 */  lbu        $v1, 0x0($v0)
    /* 5CD0 800F78D0 00000000 */  nop
    /* 5CD4 800F78D4 25186500 */  or         $v1, $v1, $a1
    /* 5CD8 800F78D8 0800E003 */  jr         $ra
    /* 5CDC 800F78DC 000043A0 */   sb        $v1, 0x0($v0)
endlabel func_800F78C4
