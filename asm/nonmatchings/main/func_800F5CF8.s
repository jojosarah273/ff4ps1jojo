nonmatching func_800F5CF8, 0x2C

glabel func_800F5CF8
    /* 40F8 800F5CF8 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 40FC 800F5CFC 00000000 */  nop
    /* 4100 800F5D00 00006294 */  lhu        $v0, 0x0($v1)
    /* 4104 800F5D04 00000000 */  nop
    /* 4108 800F5D08 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 410C 800F5D0C 000062A4 */  sh         $v0, 0x0($v1)
    /* 4110 800F5D10 4800848F */  lw         $a0, %gp_rel(D_8019ED44)($gp)
    /* 4114 800F5D14 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 4118 800F5D18 00008294 */  lhu        $v0, 0x0($a0)
    /* 411C 800F5D1C 0800E003 */  jr         $ra
    /* 4120 800F5D20 000062AC */   sw        $v0, 0x0($v1)
endlabel func_800F5CF8
