nonmatching func_800F9304, 0x2C

glabel func_800F9304
    /* 7704 800F9304 0D80033C */  lui        $v1, %hi(D_800D0000)
    /* 7708 800F9308 5000848F */  lw         $a0, %gp_rel(D_8019ED4C)($gp)
    /* 770C 800F930C 6000858F */  lw         $a1, %gp_rel(D_8019ED5C)($gp)
    /* 7710 800F9310 00008294 */  lhu        $v0, 0x0($a0)
    /* 7714 800F9314 0000A690 */  lbu        $a2, 0x0($a1)
    /* 7718 800F9318 21184300 */  addu       $v1, $v0, $v1
    /* 771C 800F931C 000066A0 */  sb         $a2, %lo(D_800D0000)($v1)
    /* 7720 800F9320 5000848F */  lw         $a0, %gp_rel(D_8019ED4C)($gp)
    /* 7724 800F9324 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 7728 800F9328 0800E003 */  jr         $ra
    /* 772C 800F932C 000082A4 */   sh        $v0, 0x0($a0)
endlabel func_800F9304
