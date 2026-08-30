nonmatching func_8015EAB0, 0x50

glabel func_8015EAB0
    /* 6CEB0 8015EAB0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CEB4 8015EAB4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6CEB8 8015EAB8 91E5030C */  jal        func_800F9644
    /* 6CEBC 8015EABC 20000424 */   addiu     $a0, $zero, 0x20
    /* 6CEC0 8015EAC0 63D9030C */  jal        func_800F658C
    /* 6CEC4 8015EAC4 09270424 */   addiu     $a0, $zero, 0x2709
    /* 6CEC8 8015EAC8 6CE0030C */  jal        func_800F81B0
    /* 6CECC 8015EACC 07270424 */   addiu     $a0, $zero, 0x2707
    /* 6CED0 8015EAD0 63D9030C */  jal        func_800F658C
    /* 6CED4 8015EAD4 0D270424 */   addiu     $a0, $zero, 0x270D
    /* 6CED8 8015EAD8 6CE0030C */  jal        func_800F81B0
    /* 6CEDC 8015EADC 0B270424 */   addiu     $a0, $zero, 0x270B
    /* 6CEE0 8015EAE0 C7E5030C */  jal        func_800F971C
    /* 6CEE4 8015EAE4 00000000 */   nop
    /* 6CEE8 8015EAE8 98E5030C */  jal        func_800F9660
    /* 6CEEC 8015EAEC 20000424 */   addiu     $a0, $zero, 0x20
    /* 6CEF0 8015EAF0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6CEF4 8015EAF4 00000000 */  nop
    /* 6CEF8 8015EAF8 0800E003 */  jr         $ra
    /* 6CEFC 8015EAFC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015EAB0
