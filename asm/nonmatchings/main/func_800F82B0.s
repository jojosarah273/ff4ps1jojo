nonmatching func_800F82B0, 0x3C

glabel func_800F82B0
    /* 66B0 800F82B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 66B4 800F82B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 66B8 800F82B8 9CCE030C */  jal        func_800F3A70
    /* 66BC 800F82BC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 66C0 800F82C0 C1CE030C */  jal        func_800F3B04
    /* 66C4 800F82C4 21204000 */   addu      $a0, $v0, $zero
    /* 66C8 800F82C8 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 66CC 800F82CC 801F053C */  lui        $a1, (0x1F8003C8 >> 16)
    /* 66D0 800F82D0 C803A590 */  lbu        $a1, (0x1F8003C8 & 0xFFFF)($a1)
    /* 66D4 800F82D4 00006490 */  lbu        $a0, 0x0($v1)
    /* 66D8 800F82D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 66DC 800F82DC 21104400 */  addu       $v0, $v0, $a0
    /* 66E0 800F82E0 000045A0 */  sb         $a1, 0x0($v0)
    /* 66E4 800F82E4 0800E003 */  jr         $ra
    /* 66E8 800F82E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F82B0
