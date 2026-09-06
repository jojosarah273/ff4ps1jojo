nonmatching func_800F4E88, 0x50

glabel func_800F4E88
    /* 3288 800F4E88 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 328C 800F4E8C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3290 800F4E90 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3294 800F4E94 00004590 */  lbu        $a1, 0x0($v0)
    /* 3298 800F4E98 31CF030C */  jal        func_800F3CC4
    /* 329C 800F4E9C 00000000 */   nop
    /* 32A0 800F4EA0 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 32A4 800F4EA4 00004490 */  lbu        $a0, 0x0($v0)
    /* 32A8 800F4EA8 0000C390 */  lbu        $v1, 0x0($a2)
    /* 32AC 800F4EAC 00000000 */  nop
    /* 32B0 800F4EB0 24186400 */  and        $v1, $v1, $a0
    /* 32B4 800F4EB4 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 32B8 800F4EB8 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 32BC 800F4EBC 01004490 */  lbu        $a0, 0x1($v0)
    /* 32C0 800F4EC0 0100A390 */  lbu        $v1, 0x1($a1)
    /* 32C4 800F4EC4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 32C8 800F4EC8 24186400 */  and        $v1, $v1, $a0
    /* 32CC 800F4ECC 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 32D0 800F4ED0 0800E003 */  jr         $ra
    /* 32D4 800F4ED4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4E88
