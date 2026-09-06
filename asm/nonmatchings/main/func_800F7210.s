nonmatching func_800F7210, 0x38

glabel func_800F7210
    /* 5610 800F7210 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5614 800F7214 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5618 800F7218 C1CE030C */  jal        func_800F3B04
    /* 561C 800F721C 00000000 */   nop
    /* 5620 800F7220 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 5624 800F7224 00004390 */  lbu        $v1, 0x0($v0)
    /* 5628 800F7228 1000BF8F */  lw         $ra, 0x10($sp)
    /* 562C 800F722C 000083A0 */  sb         $v1, 0x0($a0)
    /* 5630 800F7230 6000858F */  lw         $a1, %gp_rel(D_8019ED5C)($gp)
    /* 5634 800F7234 01004390 */  lbu        $v1, 0x1($v0)
    /* 5638 800F7238 00000000 */  nop
    /* 563C 800F723C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 5640 800F7240 0800E003 */  jr         $ra
    /* 5644 800F7244 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F7210
