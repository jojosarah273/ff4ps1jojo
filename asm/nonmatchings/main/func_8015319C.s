nonmatching func_8015319C, 0x30

glabel func_8015319C
    /* 6159C 8015319C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 615A0 801531A0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 615A4 801531A4 77DC030C */  jal        func_800F71DC
    /* 615A8 801531A8 21200000 */   addu      $a0, $zero, $zero
    /* 615AC 801531AC 53D9030C */  jal        func_800F654C
    /* 615B0 801531B0 04000424 */   addiu     $a0, $zero, 0x4
    /* 615B4 801531B4 8948050C */  jal        func_80152224
    /* 615B8 801531B8 00000000 */   nop
    /* 615BC 801531BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 615C0 801531C0 00000000 */  nop
    /* 615C4 801531C4 0800E003 */  jr         $ra
    /* 615C8 801531C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015319C
