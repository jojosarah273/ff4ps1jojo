nonmatching func_800F72E0, 0x48

glabel func_800F72E0
    /* 56E0 800F72E0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 56E4 800F72E4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 56E8 800F72E8 0FCF030C */  jal        func_800F3C3C
    /* 56EC 800F72EC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 56F0 800F72F0 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 56F4 800F72F4 6000858F */  lw         $a1, %gp_rel(D_8019ED5C)($gp)
    /* 56F8 800F72F8 00006494 */  lhu        $a0, 0x0($v1)
    /* 56FC 800F72FC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5700 800F7300 21104400 */  addu       $v0, $v0, $a0
    /* 5704 800F7304 00004390 */  lbu        $v1, 0x0($v0)
    /* 5708 800F7308 00000000 */  nop
    /* 570C 800F730C 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 5710 800F7310 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 5714 800F7314 01004390 */  lbu        $v1, 0x1($v0)
    /* 5718 800F7318 00000000 */  nop
    /* 571C 800F731C 010083A0 */  sb         $v1, 0x1($a0)
    /* 5720 800F7320 0800E003 */  jr         $ra
    /* 5724 800F7324 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F72E0
