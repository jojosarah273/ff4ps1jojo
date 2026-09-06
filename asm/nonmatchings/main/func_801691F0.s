nonmatching func_801691F0, 0x38

glabel func_801691F0
    /* 775F0 801691F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 775F4 801691F4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 775F8 801691F8 62E0030C */  jal        func_800F8188
    /* 775FC 801691FC 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 77600 80169200 53D9030C */  jal        func_800F654C
    /* 77604 80169204 01000424 */   addiu     $a0, $zero, 0x1
    /* 77608 80169208 62E0030C */  jal        func_800F8188
    /* 7760C 8016920C 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 77610 80169210 4AA4050C */  jal        func_80169128
    /* 77614 80169214 00000000 */   nop
    /* 77618 80169218 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7761C 8016921C 00000000 */  nop
    /* 77620 80169220 0800E003 */  jr         $ra
    /* 77624 80169224 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801691F0
