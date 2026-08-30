nonmatching func_801794A8, 0x58

glabel func_801794A8
    /* 878A8 801794A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 878AC 801794AC 01000224 */  addiu      $v0, $zero, 0x1
    /* 878B0 801794B0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 878B4 801794B4 580182A7 */  sh         $v0, %gp_rel(D_8019EE54)($gp)
    /* 878B8 801794B8 E550060C */  jal        func_80194394
    /* 878BC 801794BC 21200000 */   addu      $a0, $zero, $zero
    /* 878C0 801794C0 3A4A060C */  jal        func_801928E8
    /* 878C4 801794C4 21200000 */   addu      $a0, $zero, $zero
    /* 878C8 801794C8 B4E4050C */  jal        func_801792D0
    /* 878CC 801794CC 00000000 */   nop
    /* 878D0 801794D0 444C020C */  jal        func_80093110
    /* 878D4 801794D4 00000000 */   nop
    /* 878D8 801794D8 E550060C */  jal        func_80194394
    /* 878DC 801794DC 21200000 */   addu      $a0, $zero, $zero
    /* 878E0 801794E0 3A4A060C */  jal        func_801928E8
    /* 878E4 801794E4 21200000 */   addu      $a0, $zero, $zero
    /* 878E8 801794E8 B4E4050C */  jal        func_801792D0
    /* 878EC 801794EC 00000000 */   nop
    /* 878F0 801794F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 878F4 801794F4 580180A7 */  sh         $zero, %gp_rel(D_8019EE54)($gp)
    /* 878F8 801794F8 0800E003 */  jr         $ra
    /* 878FC 801794FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801794A8
