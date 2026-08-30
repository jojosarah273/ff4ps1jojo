nonmatching func_80131644, 0x34

glabel func_80131644
    /* 3FA44 80131644 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3FA48 80131648 0F00043C */  lui        $a0, (0xF97F5 >> 16)
    /* 3FA4C 8013164C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3FA50 80131650 72D9030C */  jal        func_800F65C8
    /* 3FA54 80131654 F5978434 */   ori       $a0, $a0, (0xF97F5 & 0xFFFF)
    /* 3FA58 80131658 62E0030C */  jal        func_800F8188
    /* 3FA5C 8013165C 911B0424 */   addiu     $a0, $zero, 0x1B91
    /* 3FA60 80131660 FCC5040C */  jal        func_801317F0
    /* 3FA64 80131664 00000000 */   nop
    /* 3FA68 80131668 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3FA6C 8013166C 00000000 */  nop
    /* 3FA70 80131670 0800E003 */  jr         $ra
    /* 3FA74 80131674 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131644
