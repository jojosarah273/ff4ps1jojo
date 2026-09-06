nonmatching func_800F8458, 0x58

glabel func_800F8458
    /* 6858 800F8458 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 685C 800F845C FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 6860 800F8460 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6864 800F8464 ADCE030C */  jal        func_800F3AB4
    /* 6868 800F8468 1000B0AF */   sw        $s0, 0x10($sp)
    /* 686C 800F846C 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 6870 800F8470 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6874 800F8474 00006590 */  lbu        $a1, 0x0($v1)
    /* 6878 800F8478 E7CE030C */  jal        func_800F3B9C
    /* 687C 800F847C 21204000 */   addu      $a0, $v0, $zero
    /* 6880 800F8480 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6884 800F8484 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 6888 800F8488 08000592 */  lbu        $a1, 0x8($s0)
    /* 688C 800F848C 00006490 */  lbu        $a0, 0x0($v1)
    /* 6890 800F8490 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6894 800F8494 21104400 */  addu       $v0, $v0, $a0
    /* 6898 800F8498 000045A0 */  sb         $a1, 0x0($v0)
    /* 689C 800F849C 09000392 */  lbu        $v1, 0x9($s0)
    /* 68A0 800F84A0 1000B08F */  lw         $s0, 0x10($sp)
    /* 68A4 800F84A4 010043A0 */  sb         $v1, 0x1($v0)
    /* 68A8 800F84A8 0800E003 */  jr         $ra
    /* 68AC 800F84AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8458
