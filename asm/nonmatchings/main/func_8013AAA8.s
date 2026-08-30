nonmatching func_8013AAA8, 0x48

glabel func_8013AAA8
    /* 48EA8 8013AAA8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 48EAC 8013AAAC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 48EB0 8013AAB0 53D9030C */  jal        func_800F654C
    /* 48EB4 8013AAB4 90000424 */   addiu     $a0, $zero, 0x90
    /* 48EB8 8013AAB8 62E0030C */  jal        func_800F8188
    /* 48EBC 8013AABC 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 48EC0 8013AAC0 59D9030C */  jal        func_800F6564
    /* 48EC4 8013AAC4 B6160424 */   addiu     $a0, $zero, 0x16B6
    /* 48EC8 8013AAC8 92D0030C */  jal        func_800F4248
    /* 48ECC 8013AACC 01000424 */   addiu     $a0, $zero, 0x1
    /* 48ED0 8013AAD0 62E0030C */  jal        func_800F8188
    /* 48ED4 8013AAD4 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 48ED8 8013AAD8 4AA4050C */  jal        func_80169128
    /* 48EDC 8013AADC 00000000 */   nop
    /* 48EE0 8013AAE0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 48EE4 8013AAE4 00000000 */  nop
    /* 48EE8 8013AAE8 0800E003 */  jr         $ra
    /* 48EEC 8013AAEC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013AAA8
