nonmatching func_8013B840, 0x4C

glabel func_8013B840
    /* 49C40 8013B840 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 49C44 8013B844 1000BFAF */  sw         $ra, 0x10($sp)
    /* 49C48 8013B848 3489040C */  jal        func_801224D0
    /* 49C4C 8013B84C 00000000 */   nop
    /* 49C50 8013B850 1400043C */  lui        $a0, (0x14FF9D >> 16)
    /* 49C54 8013B854 1ADB030C */  jal        func_800F6C68
    /* 49C58 8013B858 9DFF8434 */   ori       $a0, $a0, (0x14FF9D & 0xFFFF)
    /* 49C5C 8013B85C AB93040C */  jal        func_80124EAC
    /* 49C60 8013B860 00000000 */   nop
    /* 49C64 8013B864 DADA030C */  jal        func_800F6B68
    /* 49C68 8013B868 21200000 */   addu      $a0, $zero, $zero
    /* 49C6C 8013B86C 92D0030C */  jal        func_800F4248
    /* 49C70 8013B870 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 49C74 8013B874 3AD0030C */  jal        func_800F40E8
    /* 49C78 8013B878 00000000 */   nop
    /* 49C7C 8013B87C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 49C80 8013B880 00000000 */  nop
    /* 49C84 8013B884 0800E003 */  jr         $ra
    /* 49C88 8013B888 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B840
