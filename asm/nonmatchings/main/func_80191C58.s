nonmatching func_80191C58, 0x20

glabel func_80191C58
    /* A0058 80191C58 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A005C 80191C5C 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0060 80191C60 1E47060C */  jal        func_80191C78
    /* A0064 80191C64 00000000 */   nop
    /* A0068 80191C68 1000BF8F */  lw         $ra, 0x10($sp)
    /* A006C 80191C6C 0100422C */  sltiu      $v0, $v0, 0x1
    /* A0070 80191C70 0800E003 */  jr         $ra
    /* A0074 80191C74 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80191C58
