nonmatching func_800F8E50, 0x40

glabel func_800F8E50
    /* 7250 800F8E50 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7254 800F8E54 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7258 800F8E58 C1CE030C */  jal        func_800F3B04
    /* 725C 800F8E5C 00000000 */   nop
    /* 7260 800F8E60 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 7264 800F8E64 00000000 */  nop
    /* 7268 800F8E68 00006490 */  lbu        $a0, 0x0($v1)
    /* 726C 800F8E6C 00000000 */  nop
    /* 7270 800F8E70 000044A0 */  sb         $a0, 0x0($v0)
    /* 7274 800F8E74 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 7278 800F8E78 1000BF8F */  lw         $ra, 0x10($sp)
    /* 727C 800F8E7C 01006490 */  lbu        $a0, 0x1($v1)
    /* 7280 800F8E80 00000000 */  nop
    /* 7284 800F8E84 010044A0 */  sb         $a0, 0x1($v0)
    /* 7288 800F8E88 0800E003 */  jr         $ra
    /* 728C 800F8E8C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8E50
