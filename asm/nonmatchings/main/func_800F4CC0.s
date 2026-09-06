nonmatching func_800F4CC0, 0x50

glabel func_800F4CC0
    /* 30C0 800F4CC0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30C4 800F4CC4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30C8 800F4CC8 9CCE030C */  jal        func_800F3A70
    /* 30CC 800F4CCC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 30D0 800F4CD0 C1CE030C */  jal        func_800F3B04
    /* 30D4 800F4CD4 21204000 */   addu      $a0, $v0, $zero
    /* 30D8 800F4CD8 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 30DC 800F4CDC 00004490 */  lbu        $a0, 0x0($v0)
    /* 30E0 800F4CE0 0000C390 */  lbu        $v1, 0x0($a2)
    /* 30E4 800F4CE4 00000000 */  nop
    /* 30E8 800F4CE8 24186400 */  and        $v1, $v1, $a0
    /* 30EC 800F4CEC 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 30F0 800F4CF0 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 30F4 800F4CF4 01004490 */  lbu        $a0, 0x1($v0)
    /* 30F8 800F4CF8 0100A390 */  lbu        $v1, 0x1($a1)
    /* 30FC 800F4CFC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3100 800F4D00 24186400 */  and        $v1, $v1, $a0
    /* 3104 800F4D04 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 3108 800F4D08 0800E003 */  jr         $ra
    /* 310C 800F4D0C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4CC0
