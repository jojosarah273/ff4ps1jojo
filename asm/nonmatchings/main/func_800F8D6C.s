nonmatching func_800F8D6C, 0x40

glabel func_800F8D6C
    /* 716C 800F8D6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7170 800F8D70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7174 800F8D74 0FCF030C */  jal        func_800F3C3C
    /* 7178 800F8D78 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 717C 800F8D7C 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 7180 800F8D80 00000000 */  nop
    /* 7184 800F8D84 00006490 */  lbu        $a0, 0x0($v1)
    /* 7188 800F8D88 00000000 */  nop
    /* 718C 800F8D8C 000044A0 */  sb         $a0, 0x0($v0)
    /* 7190 800F8D90 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 7194 800F8D94 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7198 800F8D98 01006490 */  lbu        $a0, 0x1($v1)
    /* 719C 800F8D9C 00000000 */  nop
    /* 71A0 800F8DA0 010044A0 */  sb         $a0, 0x1($v0)
    /* 71A4 800F8DA4 0800E003 */  jr         $ra
    /* 71A8 800F8DA8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8D6C
