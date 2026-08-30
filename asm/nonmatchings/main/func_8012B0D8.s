nonmatching func_8012B0D8, 0x28

glabel func_8012B0D8
    /* 394D8 8012B0D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 394DC 8012B0DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 394E0 8012B0E0 40DD030C */  jal        func_800F7500
    /* 394E4 8012B0E4 10030424 */   addiu     $a0, $zero, 0x310
    /* 394E8 8012B0E8 40AC040C */  jal        func_8012B100
    /* 394EC 8012B0EC 00000000 */   nop
    /* 394F0 8012B0F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 394F4 8012B0F4 00000000 */  nop
    /* 394F8 8012B0F8 0800E003 */  jr         $ra
    /* 394FC 8012B0FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012B0D8
