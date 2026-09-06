nonmatching func_800F42B0, 0x48

glabel func_800F42B0
    /* 26B0 800F42B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 26B4 800F42B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 26B8 800F42B8 C1CE030C */  jal        func_800F3B04
    /* 26BC 800F42BC 00000000 */   nop
    /* 26C0 800F42C0 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 26C4 800F42C4 00004490 */  lbu        $a0, 0x0($v0)
    /* 26C8 800F42C8 0000C390 */  lbu        $v1, 0x0($a2)
    /* 26CC 800F42CC 00000000 */  nop
    /* 26D0 800F42D0 24186400 */  and        $v1, $v1, $a0
    /* 26D4 800F42D4 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 26D8 800F42D8 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 26DC 800F42DC 01004490 */  lbu        $a0, 0x1($v0)
    /* 26E0 800F42E0 0100A390 */  lbu        $v1, 0x1($a1)
    /* 26E4 800F42E4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 26E8 800F42E8 24186400 */  and        $v1, $v1, $a0
    /* 26EC 800F42EC 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 26F0 800F42F0 0800E003 */  jr         $ra
    /* 26F4 800F42F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F42B0
