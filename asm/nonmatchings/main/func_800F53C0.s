nonmatching func_800F53C0, 0x14

glabel func_800F53C0
    /* 37C0 800F53C0 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 37C4 800F53C4 00000000 */  nop
    /* 37C8 800F53C8 00006290 */  lbu        $v0, 0x0($v1)
    /* 37CC 800F53CC 0800E003 */  jr         $ra
    /* 37D0 800F53D0 01004230 */   andi      $v0, $v0, 0x1
endlabel func_800F53C0
