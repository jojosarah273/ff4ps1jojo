nonmatching func_800F8E24, 0x2C

glabel func_800F8E24
    /* 7224 800F8E24 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7228 800F8E28 1000BFAF */  sw         $ra, 0x10($sp)
    /* 722C 800F8E2C C1CE030C */  jal        func_800F3B04
    /* 7230 800F8E30 00000000 */   nop
    /* 7234 800F8E34 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 7238 800F8E38 1000BF8F */  lw         $ra, 0x10($sp)
    /* 723C 800F8E3C 00006490 */  lbu        $a0, 0x0($v1)
    /* 7240 800F8E40 00000000 */  nop
    /* 7244 800F8E44 000044A0 */  sb         $a0, 0x0($v0)
    /* 7248 800F8E48 0800E003 */  jr         $ra
    /* 724C 800F8E4C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8E24
