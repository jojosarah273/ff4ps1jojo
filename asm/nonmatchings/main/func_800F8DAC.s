nonmatching func_800F8DAC, 0x34

glabel func_800F8DAC
    /* 71AC 800F8DAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 71B0 800F8DB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 71B4 800F8DB4 0FCF030C */  jal        func_800F3C3C
    /* 71B8 800F8DB8 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 71BC 800F8DBC 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 71C0 800F8DC0 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 71C4 800F8DC4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 71C8 800F8DC8 00006590 */  lbu        $a1, 0x0($v1)
    /* 71CC 800F8DCC 00008690 */  lbu        $a2, 0x0($a0)
    /* 71D0 800F8DD0 21104500 */  addu       $v0, $v0, $a1
    /* 71D4 800F8DD4 000046A0 */  sb         $a2, 0x0($v0)
    /* 71D8 800F8DD8 0800E003 */  jr         $ra
    /* 71DC 800F8DDC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8DAC
