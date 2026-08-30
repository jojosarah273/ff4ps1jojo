nonmatching func_801376B0, 0x40

glabel func_801376B0
    /* 45AB0 801376B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 45AB4 801376B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 45AB8 801376B8 91E5030C */  jal        func_800F9644
    /* 45ABC 801376BC 20000424 */   addiu     $a0, $zero, 0x20
    /* 45AC0 801376C0 56D9030C */  jal        func_800F6558
    /* 45AC4 801376C4 0F000424 */   addiu     $a0, $zero, 0xF
    /* 45AC8 801376C8 77DC030C */  jal        func_800F71DC
    /* 45ACC 801376CC 00030424 */   addiu     $a0, $zero, 0x300
    /* 45AD0 801376D0 59CF030C */  jal        func_800F3D64
    /* 45AD4 801376D4 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 45AD8 801376D8 98E5030C */  jal        func_800F9660
    /* 45ADC 801376DC 20000424 */   addiu     $a0, $zero, 0x20
    /* 45AE0 801376E0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 45AE4 801376E4 00000000 */  nop
    /* 45AE8 801376E8 0800E003 */  jr         $ra
    /* 45AEC 801376EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801376B0
