nonmatching func_800F6630, 0x28

glabel func_800F6630
    /* 4A30 800F6630 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4A34 800F6634 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4A38 800F6638 0FCF030C */  jal        func_800F3C3C
    /* 4A3C 800F663C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4A40 800F6640 00004390 */  lbu        $v1, 0x0($v0)
    /* 4A44 800F6644 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4A48 800F6648 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4A4C 800F664C C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4A50 800F6650 0800E003 */  jr         $ra
    /* 4A54 800F6654 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6630
