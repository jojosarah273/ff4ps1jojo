nonmatching func_800F44CC, 0x5C

glabel func_800F44CC
    /* 28CC 800F44CC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 28D0 800F44D0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 28D4 800F44D4 9CCE030C */  jal        func_800F3A70
    /* 28D8 800F44D8 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 28DC 800F44DC C1CE030C */  jal        func_800F3B04
    /* 28E0 800F44E0 21204000 */   addu      $a0, $v0, $zero
    /* 28E4 800F44E4 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 28E8 800F44E8 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 28EC 800F44EC 00006494 */  lhu        $a0, 0x0($v1)
    /* 28F0 800F44F0 0000C390 */  lbu        $v1, 0x0($a2)
    /* 28F4 800F44F4 21104400 */  addu       $v0, $v0, $a0
    /* 28F8 800F44F8 00004490 */  lbu        $a0, 0x0($v0)
    /* 28FC 800F44FC 00000000 */  nop
    /* 2900 800F4500 24186400 */  and        $v1, $v1, $a0
    /* 2904 800F4504 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 2908 800F4508 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 290C 800F450C 01004490 */  lbu        $a0, 0x1($v0)
    /* 2910 800F4510 0100A390 */  lbu        $v1, 0x1($a1)
    /* 2914 800F4514 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2918 800F4518 24186400 */  and        $v1, $v1, $a0
    /* 291C 800F451C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 2920 800F4520 0800E003 */  jr         $ra
    /* 2924 800F4524 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F44CC
