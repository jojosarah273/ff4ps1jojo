nonmatching func_80191818, 0x20

glabel func_80191818
    /* 9FC18 80191818 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9FC1C 8019181C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9FC20 80191820 1F42060C */  jal        func_8019087C
    /* 9FC24 80191824 00000000 */   nop
    /* 9FC28 80191828 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9FC2C 8019182C 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9FC30 80191830 0800E003 */  jr         $ra
    /* 9FC34 80191834 00000000 */   nop
endlabel func_80191818
