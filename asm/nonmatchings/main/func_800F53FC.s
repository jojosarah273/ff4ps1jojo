nonmatching func_800F53FC, 0x14

glabel func_800F53FC
    /* 37FC 800F53FC 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 3800 800F5400 00000000 */  nop
    /* 3804 800F5404 00006290 */  lbu        $v0, 0x0($v1)
    /* 3808 800F5408 0800E003 */  jr         $ra
    /* 380C 800F540C 80004230 */   andi      $v0, $v0, 0x80
endlabel func_800F53FC
