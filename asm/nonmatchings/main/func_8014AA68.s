nonmatching func_8014AA68, 0x40

glabel func_8014AA68
    /* 58E68 8014AA68 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58E6C 8014AA6C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58E70 8014AA70 53D9030C */  jal        func_800F654C
    /* 58E74 8014AA74 0A000424 */   addiu     $a0, $zero, 0xA
    /* 58E78 8014AA78 62E0030C */  jal        func_800F8188
    /* 58E7C 8014AA7C 7FF40434 */   ori       $a0, $zero, 0xF47F
    /* 58E80 8014AA80 C8F5040C */  jal        func_8013D720
    /* 58E84 8014AA84 00000000 */   nop
    /* 58E88 8014AA88 53D9030C */  jal        func_800F654C
    /* 58E8C 8014AA8C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 58E90 8014AA90 62E0030C */  jal        func_800F8188
    /* 58E94 8014AA94 7FF40434 */   ori       $a0, $zero, 0xF47F
    /* 58E98 8014AA98 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58E9C 8014AA9C 00000000 */  nop
    /* 58EA0 8014AAA0 0800E003 */  jr         $ra
    /* 58EA4 8014AAA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014AA68
