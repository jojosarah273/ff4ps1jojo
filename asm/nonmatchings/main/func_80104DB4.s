nonmatching func_80104DB4, 0x60

glabel func_80104DB4
    /* 131B4 80104DB4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 131B8 80104DB8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 131BC 80104DBC 59D9030C */  jal        func_800F6564
    /* 131C0 80104DC0 06170424 */   addiu     $a0, $zero, 0x1706
    /* 131C4 80104DC4 93E0030C */  jal        func_800F824C
    /* 131C8 80104DC8 0C000424 */   addiu     $a0, $zero, 0xC
    /* 131CC 80104DCC 8C14040C */  jal        func_80105230
    /* 131D0 80104DD0 00000000 */   nop
    /* 131D4 80104DD4 40E3030C */  jal        func_800F8D00
    /* 131D8 80104DD8 FE060424 */   addiu     $a0, $zero, 0x6FE
    /* 131DC 80104DDC D614040C */  jal        func_80105358
    /* 131E0 80104DE0 00000000 */   nop
    /* 131E4 80104DE4 53D9030C */  jal        func_800F654C
    /* 131E8 80104DE8 45000424 */   addiu     $a0, $zero, 0x45
    /* 131EC 80104DEC 01F6030C */  jal        func_800FD804
    /* 131F0 80104DF0 00000000 */   nop
    /* 131F4 80104DF4 53D9030C */  jal        func_800F654C
    /* 131F8 80104DF8 01000424 */   addiu     $a0, $zero, 0x1
    /* 131FC 80104DFC 93E0030C */  jal        func_800F824C
    /* 13200 80104E00 D4000424 */   addiu     $a0, $zero, 0xD4
    /* 13204 80104E04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 13208 80104E08 00000000 */  nop
    /* 1320C 80104E0C 0800E003 */  jr         $ra
    /* 13210 80104E10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80104DB4
