nonmatching func_800F824C, 0x28

glabel func_800F824C
    /* 664C 800F824C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6650 800F8250 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6654 800F8254 0FCF030C */  jal        func_800F3C3C
    /* 6658 800F8258 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 665C 800F825C 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 6660 800F8260 C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6664 800F8264 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6668 800F8268 000043A0 */  sb         $v1, 0x0($v0)
    /* 666C 800F826C 0800E003 */  jr         $ra
    /* 6670 800F8270 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F824C
