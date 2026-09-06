nonmatching func_800F4DD0, 0x48

glabel func_800F4DD0
    /* 31D0 800F4DD0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 31D4 800F4DD4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 31D8 800F4DD8 25CF030C */  jal        func_800F3C94
    /* 31DC 800F4DDC 00000000 */   nop
    /* 31E0 800F4DE0 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 31E4 800F4DE4 00004490 */  lbu        $a0, 0x0($v0)
    /* 31E8 800F4DE8 0000C390 */  lbu        $v1, 0x0($a2)
    /* 31EC 800F4DEC 00000000 */  nop
    /* 31F0 800F4DF0 24186400 */  and        $v1, $v1, $a0
    /* 31F4 800F4DF4 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 31F8 800F4DF8 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 31FC 800F4DFC 01004490 */  lbu        $a0, 0x1($v0)
    /* 3200 800F4E00 0100A390 */  lbu        $v1, 0x1($a1)
    /* 3204 800F4E04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3208 800F4E08 24186400 */  and        $v1, $v1, $a0
    /* 320C 800F4E0C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 3210 800F4E10 0800E003 */  jr         $ra
    /* 3214 800F4E14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4DD0
