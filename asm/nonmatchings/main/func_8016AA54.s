nonmatching func_8016AA54, 0x30

glabel func_8016AA54
    /* 78E54 8016AA54 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 78E58 8016AA58 1000BFAF */  sw         $ra, 0x10($sp)
    /* 78E5C 8016AA5C 50D4030C */  jal        func_800F5140
    /* 78E60 8016AA60 00000000 */   nop
    /* 78E64 8016AA64 93E0030C */  jal        func_800F824C
    /* 78E68 8016AA68 52000424 */   addiu     $a0, $zero, 0x52
    /* 78E6C 8016AA6C E2DB050C */  jal        func_80176F88
    /* 78E70 8016AA70 00000000 */   nop
    /* 78E74 8016AA74 1000BF8F */  lw         $ra, 0x10($sp)
    /* 78E78 8016AA78 00000000 */  nop
    /* 78E7C 8016AA7C 0800E003 */  jr         $ra
    /* 78E80 8016AA80 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016AA54
