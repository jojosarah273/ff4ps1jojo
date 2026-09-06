nonmatching func_800F8D00, 0x40

glabel func_800F8D00
    /* 7100 800F8D00 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7104 800F8D04 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7108 800F8D08 C1CE030C */  jal        func_800F3B04
    /* 710C 800F8D0C 00000000 */   nop
    /* 7110 800F8D10 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 7114 800F8D14 00000000 */  nop
    /* 7118 800F8D18 00006490 */  lbu        $a0, 0x0($v1)
    /* 711C 800F8D1C 00000000 */  nop
    /* 7120 800F8D20 000044A0 */  sb         $a0, 0x0($v0)
    /* 7124 800F8D24 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 7128 800F8D28 1000BF8F */  lw         $ra, 0x10($sp)
    /* 712C 800F8D2C 01006490 */  lbu        $a0, 0x1($v1)
    /* 7130 800F8D30 00000000 */  nop
    /* 7134 800F8D34 010044A0 */  sb         $a0, 0x1($v0)
    /* 7138 800F8D38 0800E003 */  jr         $ra
    /* 713C 800F8D3C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8D00
