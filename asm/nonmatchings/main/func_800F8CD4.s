nonmatching func_800F8CD4, 0x2C

glabel func_800F8CD4
    /* 70D4 800F8CD4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 70D8 800F8CD8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 70DC 800F8CDC C1CE030C */  jal        func_800F3B04
    /* 70E0 800F8CE0 00000000 */   nop
    /* 70E4 800F8CE4 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 70E8 800F8CE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 70EC 800F8CEC 00006490 */  lbu        $a0, 0x0($v1)
    /* 70F0 800F8CF0 00000000 */  nop
    /* 70F4 800F8CF4 000044A0 */  sb         $a0, 0x0($v0)
    /* 70F8 800F8CF8 0800E003 */  jr         $ra
    /* 70FC 800F8CFC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8CD4
