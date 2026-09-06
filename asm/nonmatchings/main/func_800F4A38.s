nonmatching func_800F4A38, 0x44

glabel func_800F4A38
    /* 2E38 800F4A38 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 2E3C 800F4A3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2E40 800F4A40 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2E44 800F4A44 00004590 */  lbu        $a1, 0x0($v0)
    /* 2E48 800F4A48 E7CE030C */  jal        func_800F3B9C
    /* 2E4C 800F4A4C 00000000 */   nop
    /* 2E50 800F4A50 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 2E54 800F4A54 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2E58 800F4A58 00006490 */  lbu        $a0, 0x0($v1)
    /* 2E5C 800F4A5C 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2E60 800F4A60 21104400 */  addu       $v0, $v0, $a0
    /* 2E64 800F4A64 00004490 */  lbu        $a0, 0x0($v0)
    /* 2E68 800F4A68 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2E6C 800F4A6C 24186400 */  and        $v1, $v1, $a0
    /* 2E70 800F4A70 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2E74 800F4A74 0800E003 */  jr         $ra
    /* 2E78 800F4A78 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4A38
