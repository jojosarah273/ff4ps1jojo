nonmatching func_8014EC18, 0x50

glabel func_8014EC18
    /* 5D018 8014EC18 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D01C 8014EC1C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D020 8014EC20 C7E5030C */  jal        func_800F971C
    /* 5D024 8014EC24 00000000 */   nop
    /* 5D028 8014EC28 20D5030C */  jal        func_800F5480
    /* 5D02C 8014EC2C 00000000 */   nop
    /* 5D030 8014EC30 0FCF030C */  jal        func_800F3C3C
    /* 5D034 8014EC34 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D038 8014EC38 D2DF030C */  jal        func_800F7F48
    /* 5D03C 8014EC3C 21204000 */   addu      $a0, $v0, $zero
    /* 5D040 8014EC40 93E0030C */  jal        func_800F824C
    /* 5D044 8014EC44 06000424 */   addiu     $a0, $zero, 0x6
    /* 5D048 8014EC48 8CD9030C */  jal        func_800F6630
    /* 5D04C 8014EC4C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D050 8014EC50 93E0030C */  jal        func_800F824C
    /* 5D054 8014EC54 07000424 */   addiu     $a0, $zero, 0x7
    /* 5D058 8014EC58 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D05C 8014EC5C 00000000 */  nop
    /* 5D060 8014EC60 0800E003 */  jr         $ra
    /* 5D064 8014EC64 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014EC18
