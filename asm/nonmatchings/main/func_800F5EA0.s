nonmatching func_800F5EA0, 0x2C

glabel func_800F5EA0
    /* 42A0 800F5EA0 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 42A4 800F5EA4 00000000 */  nop
    /* 42A8 800F5EA8 00006294 */  lhu        $v0, 0x0($v1)
    /* 42AC 800F5EAC 00000000 */  nop
    /* 42B0 800F5EB0 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 42B4 800F5EB4 000062A4 */  sh         $v0, 0x0($v1)
    /* 42B8 800F5EB8 5C00848F */  lw         $a0, %gp_rel(D_8019ED58)($gp)
    /* 42BC 800F5EBC 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 42C0 800F5EC0 00008294 */  lhu        $v0, 0x0($a0)
    /* 42C4 800F5EC4 0800E003 */  jr         $ra
    /* 42C8 800F5EC8 000062AC */   sw        $v0, 0x0($v1)
endlabel func_800F5EA0
