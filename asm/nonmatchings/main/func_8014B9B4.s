nonmatching func_8014B9B4, 0x48

glabel func_8014B9B4
    /* 59DB4 8014B9B4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59DB8 8014B9B8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59DBC 8014B9BC 59D9030C */  jal        func_800F6564
    /* 59DC0 8014B9C0 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 59DC4 8014B9C4 92D0030C */  jal        func_800F4248
    /* 59DC8 8014B9C8 80000424 */   addiu     $a0, $zero, 0x80
    /* 59DCC 8014B9CC 93E0030C */  jal        func_800F824C
    /* 59DD0 8014B9D0 21200000 */   addu      $a0, $zero, $zero
    /* 59DD4 8014B9D4 59D9030C */  jal        func_800F6564
    /* 59DD8 8014B9D8 C5340424 */   addiu     $a0, $zero, 0x34C5
    /* 59DDC 8014B9DC 93E0030C */  jal        func_800F824C
    /* 59DE0 8014B9E0 01000424 */   addiu     $a0, $zero, 0x1
    /* 59DE4 8014B9E4 7F2E050C */  jal        func_8014B9FC
    /* 59DE8 8014B9E8 00000000 */   nop
    /* 59DEC 8014B9EC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59DF0 8014B9F0 00000000 */  nop
    /* 59DF4 8014B9F4 0800E003 */  jr         $ra
    /* 59DF8 8014B9F8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B9B4
