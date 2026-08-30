nonmatching func_8015FCF4, 0x20

glabel func_8015FCF4
    /* 6E0F4 8015FCF4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6E0F8 8015FCF8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6E0FC 8015FCFC 49D7030C */  jal        func_800F5D24
    /* 6E100 8015FD00 81380424 */   addiu     $a0, $zero, 0x3881
    /* 6E104 8015FD04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6E108 8015FD08 00000000 */  nop
    /* 6E10C 8015FD0C 0800E003 */  jr         $ra
    /* 6E110 8015FD10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015FCF4
