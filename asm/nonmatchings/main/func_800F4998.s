nonmatching func_800F4998, 0x50

glabel func_800F4998
    /* 2D98 800F4998 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 2D9C 800F499C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DA0 800F49A0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DA4 800F49A4 00004390 */  lbu        $v1, 0x0($v0)
    /* 2DA8 800F49A8 C1CE030C */  jal        func_800F3B04
    /* 2DAC 800F49AC 21208300 */   addu      $a0, $a0, $v1
    /* 2DB0 800F49B0 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 2DB4 800F49B4 00004490 */  lbu        $a0, 0x0($v0)
    /* 2DB8 800F49B8 0000C390 */  lbu        $v1, 0x0($a2)
    /* 2DBC 800F49BC 00000000 */  nop
    /* 2DC0 800F49C0 24186400 */  and        $v1, $v1, $a0
    /* 2DC4 800F49C4 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 2DC8 800F49C8 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2DCC 800F49CC 01004490 */  lbu        $a0, 0x1($v0)
    /* 2DD0 800F49D0 0100A390 */  lbu        $v1, 0x1($a1)
    /* 2DD4 800F49D4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DD8 800F49D8 24186400 */  and        $v1, $v1, $a0
    /* 2DDC 800F49DC 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 2DE0 800F49E0 0800E003 */  jr         $ra
    /* 2DE4 800F49E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4998
