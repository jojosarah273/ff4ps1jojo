nonmatching func_800F4ED8, 0x50

glabel func_800F4ED8
    /* 32D8 800F4ED8 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 32DC 800F4EDC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 32E0 800F4EE0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 32E4 800F4EE4 00004594 */  lhu        $a1, 0x0($v0)
    /* 32E8 800F4EE8 31CF030C */  jal        func_800F3CC4
    /* 32EC 800F4EEC 00000000 */   nop
    /* 32F0 800F4EF0 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 32F4 800F4EF4 00004490 */  lbu        $a0, 0x0($v0)
    /* 32F8 800F4EF8 0000C390 */  lbu        $v1, 0x0($a2)
    /* 32FC 800F4EFC 00000000 */  nop
    /* 3300 800F4F00 24186400 */  and        $v1, $v1, $a0
    /* 3304 800F4F04 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 3308 800F4F08 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 330C 800F4F0C 01004490 */  lbu        $a0, 0x1($v0)
    /* 3310 800F4F10 0100A390 */  lbu        $v1, 0x1($a1)
    /* 3314 800F4F14 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3318 800F4F18 24186400 */  and        $v1, $v1, $a0
    /* 331C 800F4F1C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 3320 800F4F20 0800E003 */  jr         $ra
    /* 3324 800F4F24 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4ED8
