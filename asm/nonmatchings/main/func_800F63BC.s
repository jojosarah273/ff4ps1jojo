nonmatching func_800F63BC, 0x2C

glabel func_800F63BC
    /* 47BC 800F63BC 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 47C0 800F63C0 00000000 */  nop
    /* 47C4 800F63C4 00006294 */  lhu        $v0, 0x0($v1)
    /* 47C8 800F63C8 00000000 */  nop
    /* 47CC 800F63CC 01004224 */  addiu      $v0, $v0, 0x1
    /* 47D0 800F63D0 000062A4 */  sh         $v0, 0x0($v1)
    /* 47D4 800F63D4 5C00848F */  lw         $a0, %gp_rel(D_8019ED58)($gp)
    /* 47D8 800F63D8 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 47DC 800F63DC 00008294 */  lhu        $v0, 0x0($a0)
    /* 47E0 800F63E0 0800E003 */  jr         $ra
    /* 47E4 800F63E4 000062AC */   sw        $v0, 0x0($v1)
endlabel func_800F63BC
