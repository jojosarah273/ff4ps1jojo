nonmatching func_800F92D8, 0x2C

glabel func_800F92D8
    /* 76D8 800F92D8 0D80033C */  lui        $v1, %hi(D_800D0000)
    /* 76DC 800F92DC 5000848F */  lw         $a0, %gp_rel(D_8019ED4C)($gp)
    /* 76E0 800F92E0 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 76E4 800F92E4 00008294 */  lhu        $v0, 0x0($a0)
    /* 76E8 800F92E8 0000A690 */  lbu        $a2, 0x0($a1)
    /* 76EC 800F92EC 21184300 */  addu       $v1, $v0, $v1
    /* 76F0 800F92F0 000066A0 */  sb         $a2, %lo(D_800D0000)($v1)
    /* 76F4 800F92F4 5000848F */  lw         $a0, %gp_rel(D_8019ED4C)($gp)
    /* 76F8 800F92F8 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 76FC 800F92FC 0800E003 */  jr         $ra
    /* 7700 800F9300 000082A4 */   sh        $v0, 0x0($a0)
endlabel func_800F92D8
