nonmatching func_800F926C, 0x2C

glabel func_800F926C
    /* 766C 800F926C 0D80033C */  lui        $v1, %hi(D_800D0000)
    /* 7670 800F9270 5000848F */  lw         $a0, %gp_rel(D_8019ED4C)($gp)
    /* 7674 800F9274 7400858F */  lw         $a1, %gp_rel(D_8019ED70)($gp)
    /* 7678 800F9278 00008294 */  lhu        $v0, 0x0($a0)
    /* 767C 800F927C 0000A690 */  lbu        $a2, 0x0($a1)
    /* 7680 800F9280 21184300 */  addu       $v1, $v0, $v1
    /* 7684 800F9284 000066A0 */  sb         $a2, %lo(D_800D0000)($v1)
    /* 7688 800F9288 5000848F */  lw         $a0, %gp_rel(D_8019ED4C)($gp)
    /* 768C 800F928C FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 7690 800F9290 0800E003 */  jr         $ra
    /* 7694 800F9294 000082A4 */   sh        $v0, 0x0($a0)
endlabel func_800F926C
