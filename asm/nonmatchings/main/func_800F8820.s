nonmatching func_800F8820, 0x3C

glabel func_800F8820
    /* 6C20 800F8820 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 6C24 800F8824 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6C28 800F8828 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6C2C 800F882C 00004590 */  lbu        $a1, 0x0($v0)
    /* 6C30 800F8830 E7CE030C */  jal        func_800F3B9C
    /* 6C34 800F8834 00000000 */   nop
    /* 6C38 800F8838 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 6C3C 800F883C 801F053C */  lui        $a1, (0x1F8003C8 >> 16)
    /* 6C40 800F8840 C803A590 */  lbu        $a1, (0x1F8003C8 & 0xFFFF)($a1)
    /* 6C44 800F8844 00006490 */  lbu        $a0, 0x0($v1)
    /* 6C48 800F8848 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6C4C 800F884C 21104400 */  addu       $v0, $v0, $a0
    /* 6C50 800F8850 000045A0 */  sb         $a1, 0x0($v0)
    /* 6C54 800F8854 0800E003 */  jr         $ra
    /* 6C58 800F8858 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8820
