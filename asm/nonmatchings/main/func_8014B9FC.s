nonmatching func_8014B9FC, 0x38

glabel func_8014B9FC
    /* 59DFC 8014B9FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59E00 8014BA00 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59E04 8014BA04 59D9030C */  jal        func_800F6564
    /* 59E08 8014BA08 22350424 */   addiu     $a0, $zero, 0x3522
    /* 59E0C 8014BA0C 93E0030C */  jal        func_800F824C
    /* 59E10 8014BA10 02000424 */   addiu     $a0, $zero, 0x2
    /* 59E14 8014BA14 59D9030C */  jal        func_800F6564
    /* 59E18 8014BA18 97F30434 */   ori       $a0, $zero, 0xF397
    /* 59E1C 8014BA1C 8B36050C */  jal        func_8014DA2C
    /* 59E20 8014BA20 00000000 */   nop
    /* 59E24 8014BA24 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59E28 8014BA28 00000000 */  nop
    /* 59E2C 8014BA2C 0800E003 */  jr         $ra
    /* 59E30 8014BA30 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B9FC
