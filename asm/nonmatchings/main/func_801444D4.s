nonmatching func_801444D4, 0x28

glabel func_801444D4
    /* 528D4 801444D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 528D8 801444D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 528DC 801444DC DDE3030C */  jal        func_800F8F74
    /* 528E0 801444E0 46F40434 */   ori       $a0, $zero, 0xF446
    /* 528E4 801444E4 3F11050C */  jal        func_801444FC
    /* 528E8 801444E8 00000000 */   nop
    /* 528EC 801444EC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 528F0 801444F0 00000000 */  nop
    /* 528F4 801444F4 0800E003 */  jr         $ra
    /* 528F8 801444F8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801444D4
