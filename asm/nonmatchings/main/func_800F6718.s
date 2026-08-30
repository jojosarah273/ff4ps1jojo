nonmatching func_800F6718, 0x4C

glabel func_800F6718
    /* 4B18 800F6718 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4B1C 800F671C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4B20 800F6720 9CCE030C */  jal        func_800F3A70
    /* 4B24 800F6724 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4B28 800F6728 C1CE030C */  jal        func_800F3B04
    /* 4B2C 800F672C 21204000 */   addu      $a0, $v0, $zero
    /* 4B30 800F6730 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 4B34 800F6734 801F043C */  lui        $a0, (0x1F8003C0 >> 16)
    /* 4B38 800F6738 00006590 */  lbu        $a1, 0x0($v1)
    /* 4B3C 800F673C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4B40 800F6740 21104500 */  addu       $v0, $v0, $a1
    /* 4B44 800F6744 00004690 */  lbu        $a2, 0x0($v0)
    /* 4B48 800F6748 C0038434 */  ori        $a0, $a0, (0x1F8003C0 & 0xFFFF)
    /* 4B4C 800F674C 080086A0 */  sb         $a2, 0x8($a0)
    /* 4B50 800F6750 01004390 */  lbu        $v1, 0x1($v0)
    /* 4B54 800F6754 00000000 */  nop
    /* 4B58 800F6758 090083A0 */  sb         $v1, 0x9($a0)
    /* 4B5C 800F675C 0800E003 */  jr         $ra
    /* 4B60 800F6760 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6718
