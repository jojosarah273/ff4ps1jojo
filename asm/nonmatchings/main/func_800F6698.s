nonmatching func_800F6698, 0x40

glabel func_800F6698
    /* 4A98 800F6698 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4A9C 800F669C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4AA0 800F66A0 9CCE030C */  jal        func_800F3A70
    /* 4AA4 800F66A4 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4AA8 800F66A8 C1CE030C */  jal        func_800F3B04
    /* 4AAC 800F66AC 21204000 */   addu      $a0, $v0, $zero
    /* 4AB0 800F66B0 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 4AB4 800F66B4 00000000 */  nop
    /* 4AB8 800F66B8 00006490 */  lbu        $a0, 0x0($v1)
    /* 4ABC 800F66BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4AC0 800F66C0 21104400 */  addu       $v0, $v0, $a0
    /* 4AC4 800F66C4 00004390 */  lbu        $v1, 0x0($v0)
    /* 4AC8 800F66C8 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4ACC 800F66CC C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4AD0 800F66D0 0800E003 */  jr         $ra
    /* 4AD4 800F66D4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6698
