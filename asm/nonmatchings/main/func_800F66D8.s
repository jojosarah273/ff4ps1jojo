nonmatching func_800F66D8, 0x40

glabel func_800F66D8
    /* 4AD8 800F66D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4ADC 800F66DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4AE0 800F66E0 9CCE030C */  jal        func_800F3A70
    /* 4AE4 800F66E4 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4AE8 800F66E8 C1CE030C */  jal        func_800F3B04
    /* 4AEC 800F66EC 21204000 */   addu      $a0, $v0, $zero
    /* 4AF0 800F66F0 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 4AF4 800F66F4 00000000 */  nop
    /* 4AF8 800F66F8 00006494 */  lhu        $a0, 0x0($v1)
    /* 4AFC 800F66FC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4B00 800F6700 21104400 */  addu       $v0, $v0, $a0
    /* 4B04 800F6704 00004390 */  lbu        $v1, 0x0($v0)
    /* 4B08 800F6708 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4B0C 800F670C C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4B10 800F6710 0800E003 */  jr         $ra
    /* 4B14 800F6714 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F66D8
