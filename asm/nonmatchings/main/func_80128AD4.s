nonmatching func_80128AD4, 0x68

glabel func_80128AD4
    /* 36ED4 80128AD4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 36ED8 80128AD8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 36EDC 80128ADC 9BE4030C */  jal        func_800F926C
    /* 36EE0 80128AE0 00000000 */   nop
    /* 36EE4 80128AE4 9DE0030C */  jal        func_800F8274
    /* 36EE8 80128AE8 45000424 */   addiu     $a0, $zero, 0x45
    /* 36EEC 80128AEC 98E5030C */  jal        func_800F9660
    /* 36EF0 80128AF0 20000424 */   addiu     $a0, $zero, 0x20
    /* 36EF4 80128AF4 53D9030C */  jal        func_800F654C
    /* 36EF8 80128AF8 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 36EFC 80128AFC 80E4030C */  jal        func_800F9200
    /* 36F00 80128B00 00000000 */   nop
    /* 36F04 80128B04 12E5030C */  jal        func_800F9448
    /* 36F08 80128B08 00000000 */   nop
    /* 36F0C 80128B0C 91E5030C */  jal        func_800F9644
    /* 36F10 80128B10 20000424 */   addiu     $a0, $zero, 0x20
    /* 36F14 80128B14 96D9030C */  jal        func_800F6658
    /* 36F18 80128B18 45000424 */   addiu     $a0, $zero, 0x45
    /* 36F1C 80128B1C 3282040C */  jal        func_801208C8
    /* 36F20 80128B20 00000000 */   nop
    /* 36F24 80128B24 12E5030C */  jal        func_800F9448
    /* 36F28 80128B28 00000000 */   nop
    /* 36F2C 80128B2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 36F30 80128B30 00000000 */  nop
    /* 36F34 80128B34 0800E003 */  jr         $ra
    /* 36F38 80128B38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80128AD4
