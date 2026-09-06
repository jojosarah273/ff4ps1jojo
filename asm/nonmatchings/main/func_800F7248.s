nonmatching func_800F7248, 0x28

glabel func_800F7248
    /* 5648 800F7248 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 564C 800F724C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5650 800F7250 0FCF030C */  jal        func_800F3C3C
    /* 5654 800F7254 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 5658 800F7258 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 565C 800F725C 00004390 */  lbu        $v1, 0x0($v0)
    /* 5660 800F7260 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5664 800F7264 000083A0 */  sb         $v1, 0x0($a0)
    /* 5668 800F7268 0800E003 */  jr         $ra
    /* 566C 800F726C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F7248
