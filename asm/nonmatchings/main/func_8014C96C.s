nonmatching func_8014C96C, 0x28

glabel func_8014C96C
    /* 5AD6C 8014C96C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5AD70 8014C970 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5AD74 8014C974 53D9030C */  jal        func_800F654C
    /* 5AD78 8014C978 01000424 */   addiu     $a0, $zero, 0x1
    /* 5AD7C 8014C97C 62E0030C */  jal        func_800F8188
    /* 5AD80 8014C980 A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 5AD84 8014C984 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5AD88 8014C988 00000000 */  nop
    /* 5AD8C 8014C98C 0800E003 */  jr         $ra
    /* 5AD90 8014C990 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014C96C
