nonmatching func_8012219C, 0x28

glabel func_8012219C
    /* 3059C 8012219C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 305A0 801221A0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 305A4 801221A4 53D9030C */  jal        func_800F654C
    /* 305A8 801221A8 12000424 */   addiu     $a0, $zero, 0x12
    /* 305AC 801221AC 7188040C */  jal        func_801221C4
    /* 305B0 801221B0 00000000 */   nop
    /* 305B4 801221B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 305B8 801221B8 00000000 */  nop
    /* 305BC 801221BC 0800E003 */  jr         $ra
    /* 305C0 801221C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012219C
