nonmatching func_800F5E48, 0x2C

glabel func_800F5E48
    /* 4248 800F5E48 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 424C 800F5E4C 00000000 */  nop
    /* 4250 800F5E50 00006294 */  lhu        $v0, 0x0($v1)
    /* 4254 800F5E54 00000000 */  nop
    /* 4258 800F5E58 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 425C 800F5E5C 000062A4 */  sh         $v0, 0x0($v1)
    /* 4260 800F5E60 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* 4264 800F5E64 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 4268 800F5E68 00008294 */  lhu        $v0, 0x0($a0)
    /* 426C 800F5E6C 0800E003 */  jr         $ra
    /* 4270 800F5E70 000062AC */   sw        $v0, 0x0($v1)
endlabel func_800F5E48
