nonmatching func_80189750, 0x40

glabel func_80189750
    /* 97B50 80189750 5402848F */  lw         $a0, %gp_rel(D_8019EF50)($gp)
    /* 97B54 80189754 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 97B58 80189758 1000BFAF */  sw         $ra, 0x10($sp)
    /* 97B5C 8018975C 0E46060C */  jal        func_80191838
    /* 97B60 80189760 00000000 */   nop
    /* 97B64 80189764 5C02848F */  lw         $a0, %gp_rel(D_8019EF58)($gp)
    /* 97B68 80189768 2A4A060C */  jal        func_801928A8
    /* 97B6C 8018976C 00000000 */   nop
    /* 97B70 80189770 5802848F */  lw         $a0, %gp_rel(D_8019EF54)($gp)
    /* 97B74 80189774 1646060C */  jal        func_80191858
    /* 97B78 80189778 00000000 */   nop
    /* 97B7C 8018977C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 97B80 80189780 21100000 */  addu       $v0, $zero, $zero
    /* 97B84 80189784 2C0080AF */  sw         $zero, %gp_rel(D_8019ED28)($gp)
    /* 97B88 80189788 0800E003 */  jr         $ra
    /* 97B8C 8018978C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80189750
