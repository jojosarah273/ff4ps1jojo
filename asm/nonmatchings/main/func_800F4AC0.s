nonmatching func_800F4AC0, 0x5C

glabel func_800F4AC0
    /* 2EC0 800F4AC0 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 2EC4 800F4AC4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2EC8 800F4AC8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2ECC 800F4ACC 00004590 */  lbu        $a1, 0x0($v0)
    /* 2ED0 800F4AD0 E7CE030C */  jal        func_800F3B9C
    /* 2ED4 800F4AD4 00000000 */   nop
    /* 2ED8 800F4AD8 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 2EDC 800F4ADC 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 2EE0 800F4AE0 00006490 */  lbu        $a0, 0x0($v1)
    /* 2EE4 800F4AE4 0000C390 */  lbu        $v1, 0x0($a2)
    /* 2EE8 800F4AE8 21104400 */  addu       $v0, $v0, $a0
    /* 2EEC 800F4AEC 00004490 */  lbu        $a0, 0x0($v0)
    /* 2EF0 800F4AF0 00000000 */  nop
    /* 2EF4 800F4AF4 24186400 */  and        $v1, $v1, $a0
    /* 2EF8 800F4AF8 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 2EFC 800F4AFC 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2F00 800F4B00 01004490 */  lbu        $a0, 0x1($v0)
    /* 2F04 800F4B04 0100A390 */  lbu        $v1, 0x1($a1)
    /* 2F08 800F4B08 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2F0C 800F4B0C 24186400 */  and        $v1, $v1, $a0
    /* 2F10 800F4B10 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 2F14 800F4B14 0800E003 */  jr         $ra
    /* 2F18 800F4B18 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4AC0
