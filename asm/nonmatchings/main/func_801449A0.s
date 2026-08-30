nonmatching func_801449A0, 0x30

glabel func_801449A0
    /* 52DA0 801449A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 52DA4 801449A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 52DA8 801449A8 53D9030C */  jal        func_800F654C
    /* 52DAC 801449AC 01000424 */   addiu     $a0, $zero, 0x1
    /* 52DB0 801449B0 62E0030C */  jal        func_800F8188
    /* 52DB4 801449B4 46F40434 */   ori       $a0, $zero, 0xF446
    /* 52DB8 801449B8 3F11050C */  jal        func_801444FC
    /* 52DBC 801449BC 00000000 */   nop
    /* 52DC0 801449C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 52DC4 801449C4 00000000 */  nop
    /* 52DC8 801449C8 0800E003 */  jr         $ra
    /* 52DCC 801449CC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801449A0
