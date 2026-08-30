nonmatching func_800F6848, 0x58

glabel func_800F6848
    /* 4C48 800F6848 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4C4C 800F684C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4C50 800F6850 ADCE030C */  jal        func_800F3AB4
    /* 4C54 800F6854 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4C58 800F6858 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 4C5C 800F685C 00000000 */  nop
    /* 4C60 800F6860 00006590 */  lbu        $a1, 0x0($v1)
    /* 4C64 800F6864 E7CE030C */  jal        func_800F3B9C
    /* 4C68 800F6868 21204000 */   addu      $a0, $v0, $zero
    /* 4C6C 800F686C 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 4C70 800F6870 801F043C */  lui        $a0, (0x1F8003C0 >> 16)
    /* 4C74 800F6874 00006590 */  lbu        $a1, 0x0($v1)
    /* 4C78 800F6878 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4C7C 800F687C 21104500 */  addu       $v0, $v0, $a1
    /* 4C80 800F6880 00004690 */  lbu        $a2, 0x0($v0)
    /* 4C84 800F6884 C0038434 */  ori        $a0, $a0, (0x1F8003C0 & 0xFFFF)
    /* 4C88 800F6888 080086A0 */  sb         $a2, 0x8($a0)
    /* 4C8C 800F688C 01004390 */  lbu        $v1, 0x1($v0)
    /* 4C90 800F6890 00000000 */  nop
    /* 4C94 800F6894 090083A0 */  sb         $v1, 0x9($a0)
    /* 4C98 800F6898 0800E003 */  jr         $ra
    /* 4C9C 800F689C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6848
