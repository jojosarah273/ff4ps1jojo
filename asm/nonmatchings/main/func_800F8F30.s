nonmatching func_800F8F30, 0x44

glabel func_800F8F30
    /* 7330 800F8F30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7334 800F8F34 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7338 800F8F38 0FCF030C */  jal        func_800F3C3C
    /* 733C 800F8F3C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 7340 800F8F40 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 7344 800F8F44 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 7348 800F8F48 00006594 */  lhu        $a1, 0x0($v1)
    /* 734C 800F8F4C 00008690 */  lbu        $a2, 0x0($a0)
    /* 7350 800F8F50 21104500 */  addu       $v0, $v0, $a1
    /* 7354 800F8F54 000046A0 */  sb         $a2, 0x0($v0)
    /* 7358 800F8F58 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 735C 800F8F5C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7360 800F8F60 01006490 */  lbu        $a0, 0x1($v1)
    /* 7364 800F8F64 00000000 */  nop
    /* 7368 800F8F68 010044A0 */  sb         $a0, 0x1($v0)
    /* 736C 800F8F6C 0800E003 */  jr         $ra
    /* 7370 800F8F70 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8F30
