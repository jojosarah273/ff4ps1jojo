nonmatching func_800F62BC, 0x34

glabel func_800F62BC
    /* 46BC 800F62BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 46C0 800F62C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 46C4 800F62C4 0FCF030C */  jal        func_800F3C3C
    /* 46C8 800F62C8 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 46CC 800F62CC 00004390 */  lbu        $v1, 0x0($v0)
    /* 46D0 800F62D0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 46D4 800F62D4 01006324 */  addiu      $v1, $v1, 0x1
    /* 46D8 800F62D8 000043A0 */  sb         $v1, 0x0($v0)
    /* 46DC 800F62DC 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 46E0 800F62E0 FF006330 */  andi       $v1, $v1, 0xFF
    /* 46E4 800F62E4 000083AC */  sw         $v1, 0x0($a0)
    /* 46E8 800F62E8 0800E003 */  jr         $ra
    /* 46EC 800F62EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F62BC
