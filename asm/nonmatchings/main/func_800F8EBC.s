nonmatching func_800F8EBC, 0x40

glabel func_800F8EBC
    /* 72BC 800F8EBC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 72C0 800F8EC0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 72C4 800F8EC4 0FCF030C */  jal        func_800F3C3C
    /* 72C8 800F8EC8 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 72CC 800F8ECC 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 72D0 800F8ED0 00000000 */  nop
    /* 72D4 800F8ED4 00006490 */  lbu        $a0, 0x0($v1)
    /* 72D8 800F8ED8 00000000 */  nop
    /* 72DC 800F8EDC 000044A0 */  sb         $a0, 0x0($v0)
    /* 72E0 800F8EE0 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 72E4 800F8EE4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 72E8 800F8EE8 01006490 */  lbu        $a0, 0x1($v1)
    /* 72EC 800F8EEC 00000000 */  nop
    /* 72F0 800F8EF0 010044A0 */  sb         $a0, 0x1($v0)
    /* 72F4 800F8EF4 0800E003 */  jr         $ra
    /* 72F8 800F8EF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8EBC
