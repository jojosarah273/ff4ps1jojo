nonmatching func_800F971C, 0x14

glabel func_800F971C
    /* 7B1C 800F971C 4C00828F */  lw         $v0, %gp_rel(D_8019ED48)($gp)
    /* 7B20 800F9720 4800848F */  lw         $a0, %gp_rel(D_8019ED44)($gp)
    /* 7B24 800F9724 00004394 */  lhu        $v1, 0x0($v0)
    /* 7B28 800F9728 0800E003 */  jr         $ra
    /* 7B2C 800F972C 000083A4 */   sh        $v1, 0x0($a0)
endlabel func_800F971C
