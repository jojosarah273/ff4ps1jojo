nonmatching func_80131678, 0x34

glabel func_80131678
    /* 3FA78 80131678 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3FA7C 8013167C 0F00043C */  lui        $a0, (0xF97FB >> 16)
    /* 3FA80 80131680 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3FA84 80131684 72D9030C */  jal        func_800F65C8
    /* 3FA88 80131688 FB978434 */   ori       $a0, $a0, (0xF97FB & 0xFFFF)
    /* 3FA8C 8013168C 62E0030C */  jal        func_800F8188
    /* 3FA90 80131690 911B0424 */   addiu     $a0, $zero, 0x1B91
    /* 3FA94 80131694 FCC5040C */  jal        func_801317F0
    /* 3FA98 80131698 00000000 */   nop
    /* 3FA9C 8013169C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3FAA0 801316A0 00000000 */  nop
    /* 3FAA4 801316A4 0800E003 */  jr         $ra
    /* 3FAA8 801316A8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131678
