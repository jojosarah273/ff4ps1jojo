nonmatching func_800F68A0, 0x58

glabel func_800F68A0
    /* 4CA0 800F68A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4CA4 800F68A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4CA8 800F68A8 ADCE030C */  jal        func_800F3AB4
    /* 4CAC 800F68AC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4CB0 800F68B0 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 4CB4 800F68B4 00000000 */  nop
    /* 4CB8 800F68B8 00006594 */  lhu        $a1, 0x0($v1)
    /* 4CBC 800F68BC E7CE030C */  jal        func_800F3B9C
    /* 4CC0 800F68C0 21204000 */   addu      $a0, $v0, $zero
    /* 4CC4 800F68C4 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 4CC8 800F68C8 801F043C */  lui        $a0, (0x1F8003C0 >> 16)
    /* 4CCC 800F68CC 00006594 */  lhu        $a1, 0x0($v1)
    /* 4CD0 800F68D0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4CD4 800F68D4 21104500 */  addu       $v0, $v0, $a1
    /* 4CD8 800F68D8 00004690 */  lbu        $a2, 0x0($v0)
    /* 4CDC 800F68DC C0038434 */  ori        $a0, $a0, (0x1F8003C0 & 0xFFFF)
    /* 4CE0 800F68E0 080086A0 */  sb         $a2, 0x8($a0)
    /* 4CE4 800F68E4 01004390 */  lbu        $v1, 0x1($v0)
    /* 4CE8 800F68E8 00000000 */  nop
    /* 4CEC 800F68EC 090083A0 */  sb         $v1, 0x9($a0)
    /* 4CF0 800F68F0 0800E003 */  jr         $ra
    /* 4CF4 800F68F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F68A0
