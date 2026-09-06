nonmatching func_80129AAC, 0x28

glabel func_80129AAC
    /* 37EAC 80129AAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 37EB0 80129AB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 37EB4 80129AB4 9CDC030C */  jal        func_800F7270
    /* 37EB8 80129AB8 41000424 */   addiu     $a0, $zero, 0x41
    /* 37EBC 80129ABC 44A6040C */  jal        func_80129910
    /* 37EC0 80129AC0 00000000 */   nop
    /* 37EC4 80129AC4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 37EC8 80129AC8 00000000 */  nop
    /* 37ECC 80129ACC 0800E003 */  jr         $ra
    /* 37ED0 80129AD0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80129AAC
