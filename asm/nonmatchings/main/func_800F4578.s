nonmatching func_800F4578, 0x50

glabel func_800F4578
    /* 2978 800F4578 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 297C 800F457C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2980 800F4580 ADCE030C */  jal        func_800F3AB4
    /* 2984 800F4584 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2988 800F4588 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 298C 800F458C 00000000 */  nop
    /* 2990 800F4590 00006594 */  lhu        $a1, 0x0($v1)
    /* 2994 800F4594 E7CE030C */  jal        func_800F3B9C
    /* 2998 800F4598 21204000 */   addu      $a0, $v0, $zero
    /* 299C 800F459C 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 29A0 800F45A0 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 29A4 800F45A4 00006494 */  lhu        $a0, 0x0($v1)
    /* 29A8 800F45A8 0000A390 */  lbu        $v1, 0x0($a1)
    /* 29AC 800F45AC 21104400 */  addu       $v0, $v0, $a0
    /* 29B0 800F45B0 00004490 */  lbu        $a0, 0x0($v0)
    /* 29B4 800F45B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29B8 800F45B8 24186400 */  and        $v1, $v1, $a0
    /* 29BC 800F45BC 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 29C0 800F45C0 0800E003 */  jr         $ra
    /* 29C4 800F45C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4578
