nonmatching func_800F764C, 0x30

glabel func_800F764C
    /* 5A4C 800F764C 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 5A50 800F7650 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5A54 800F7654 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5A58 800F7658 00004390 */  lbu        $v1, 0x0($v0)
    /* 5A5C 800F765C C1CE030C */  jal        func_800F3B04
    /* 5A60 800F7660 21208300 */   addu      $a0, $a0, $v1
    /* 5A64 800F7664 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 5A68 800F7668 00004390 */  lbu        $v1, 0x0($v0)
    /* 5A6C 800F766C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5A70 800F7670 000083A0 */  sb         $v1, 0x0($a0)
    /* 5A74 800F7674 0800E003 */  jr         $ra
    /* 5A78 800F7678 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F764C
