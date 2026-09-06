nonmatching func_800F8DE0, 0x44

glabel func_800F8DE0
    /* 71E0 800F8DE0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 71E4 800F8DE4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 71E8 800F8DE8 0FCF030C */  jal        func_800F3C3C
    /* 71EC 800F8DEC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 71F0 800F8DF0 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 71F4 800F8DF4 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 71F8 800F8DF8 00006594 */  lhu        $a1, 0x0($v1)
    /* 71FC 800F8DFC 00008690 */  lbu        $a2, 0x0($a0)
    /* 7200 800F8E00 21104500 */  addu       $v0, $v0, $a1
    /* 7204 800F8E04 000046A0 */  sb         $a2, 0x0($v0)
    /* 7208 800F8E08 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 720C 800F8E0C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7210 800F8E10 01006490 */  lbu        $a0, 0x1($v1)
    /* 7214 800F8E14 00000000 */  nop
    /* 7218 800F8E18 010044A0 */  sb         $a0, 0x1($v0)
    /* 721C 800F8E1C 0800E003 */  jr         $ra
    /* 7220 800F8E20 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8DE0
