nonmatching func_800F43A0, 0x48

glabel func_800F43A0
    /* 27A0 800F43A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 27A4 800F43A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 27A8 800F43A8 0FCF030C */  jal        func_800F3C3C
    /* 27AC 800F43AC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 27B0 800F43B0 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 27B4 800F43B4 00004490 */  lbu        $a0, 0x0($v0)
    /* 27B8 800F43B8 0000C390 */  lbu        $v1, 0x0($a2)
    /* 27BC 800F43BC 00000000 */  nop
    /* 27C0 800F43C0 24186400 */  and        $v1, $v1, $a0
    /* 27C4 800F43C4 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 27C8 800F43C8 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 27CC 800F43CC 01004490 */  lbu        $a0, 0x1($v0)
    /* 27D0 800F43D0 0100A390 */  lbu        $v1, 0x1($a1)
    /* 27D4 800F43D4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 27D8 800F43D8 24186400 */  and        $v1, $v1, $a0
    /* 27DC 800F43DC 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 27E0 800F43E0 0800E003 */  jr         $ra
    /* 27E4 800F43E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F43A0
