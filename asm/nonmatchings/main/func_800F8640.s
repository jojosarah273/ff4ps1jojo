nonmatching func_800F8640, 0x34

glabel func_800F8640
    /* 6A40 800F8640 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6A44 800F8644 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6A48 800F8648 0FCF030C */  jal        func_800F3C3C
    /* 6A4C 800F864C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6A50 800F8650 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 6A54 800F8654 801F053C */  lui        $a1, (0x1F8003C8 >> 16)
    /* 6A58 800F8658 C803A590 */  lbu        $a1, (0x1F8003C8 & 0xFFFF)($a1)
    /* 6A5C 800F865C 00006490 */  lbu        $a0, 0x0($v1)
    /* 6A60 800F8660 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6A64 800F8664 21104400 */  addu       $v0, $v0, $a0
    /* 6A68 800F8668 000045A0 */  sb         $a1, 0x0($v0)
    /* 6A6C 800F866C 0800E003 */  jr         $ra
    /* 6A70 800F8670 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8640
