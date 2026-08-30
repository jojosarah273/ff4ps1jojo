nonmatching func_800F84B0, 0x58

glabel func_800F84B0
    /* 68B0 800F84B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 68B4 800F84B4 FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 68B8 800F84B8 1400BFAF */  sw         $ra, 0x14($sp)
    /* 68BC 800F84BC ADCE030C */  jal        func_800F3AB4
    /* 68C0 800F84C0 1000B0AF */   sw        $s0, 0x10($sp)
    /* 68C4 800F84C4 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 68C8 800F84C8 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 68CC 800F84CC 00006594 */  lhu        $a1, 0x0($v1)
    /* 68D0 800F84D0 E7CE030C */  jal        func_800F3B9C
    /* 68D4 800F84D4 21204000 */   addu      $a0, $v0, $zero
    /* 68D8 800F84D8 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 68DC 800F84DC 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 68E0 800F84E0 08000592 */  lbu        $a1, 0x8($s0)
    /* 68E4 800F84E4 00006494 */  lhu        $a0, 0x0($v1)
    /* 68E8 800F84E8 1400BF8F */  lw         $ra, 0x14($sp)
    /* 68EC 800F84EC 21104400 */  addu       $v0, $v0, $a0
    /* 68F0 800F84F0 000045A0 */  sb         $a1, 0x0($v0)
    /* 68F4 800F84F4 09000392 */  lbu        $v1, 0x9($s0)
    /* 68F8 800F84F8 1000B08F */  lw         $s0, 0x10($sp)
    /* 68FC 800F84FC 010043A0 */  sb         $v1, 0x1($v0)
    /* 6900 800F8500 0800E003 */  jr         $ra
    /* 6904 800F8504 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F84B0
