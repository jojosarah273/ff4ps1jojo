nonmatching func_800F4E50, 0x38

glabel func_800F4E50
    /* 3250 800F4E50 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 3254 800F4E54 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3258 800F4E58 1000BFAF */  sw         $ra, 0x10($sp)
    /* 325C 800F4E5C 00004594 */  lhu        $a1, 0x0($v0)
    /* 3260 800F4E60 31CF030C */  jal        func_800F3CC4
    /* 3264 800F4E64 00000000 */   nop
    /* 3268 800F4E68 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 326C 800F4E6C 00004490 */  lbu        $a0, 0x0($v0)
    /* 3270 800F4E70 0000A390 */  lbu        $v1, 0x0($a1)
    /* 3274 800F4E74 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3278 800F4E78 24186400 */  and        $v1, $v1, $a0
    /* 327C 800F4E7C 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 3280 800F4E80 0800E003 */  jr         $ra
    /* 3284 800F4E84 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4E50
