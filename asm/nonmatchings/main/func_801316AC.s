nonmatching func_801316AC, 0x34

glabel func_801316AC
    /* 3FAAC 801316AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3FAB0 801316B0 0F00043C */  lui        $a0, (0xF9801 >> 16)
    /* 3FAB4 801316B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3FAB8 801316B8 72D9030C */  jal        func_800F65C8
    /* 3FABC 801316BC 01988434 */   ori       $a0, $a0, (0xF9801 & 0xFFFF)
    /* 3FAC0 801316C0 62E0030C */  jal        func_800F8188
    /* 3FAC4 801316C4 911B0424 */   addiu     $a0, $zero, 0x1B91
    /* 3FAC8 801316C8 FCC5040C */  jal        func_801317F0
    /* 3FACC 801316CC 00000000 */   nop
    /* 3FAD0 801316D0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3FAD4 801316D4 00000000 */  nop
    /* 3FAD8 801316D8 0800E003 */  jr         $ra
    /* 3FADC 801316DC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801316AC
