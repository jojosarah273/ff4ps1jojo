nonmatching func_8014ECC8, 0x48

glabel func_8014ECC8
    /* 5D0C8 8014ECC8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D0CC 8014ECCC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D0D0 8014ECD0 C7E5030C */  jal        func_800F971C
    /* 5D0D4 8014ECD4 00000000 */   nop
    /* 5D0D8 8014ECD8 20D5030C */  jal        func_800F5480
    /* 5D0DC 8014ECDC 00000000 */   nop
    /* 5D0E0 8014ECE0 0FCF030C */  jal        func_800F3C3C
    /* 5D0E4 8014ECE4 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D0E8 8014ECE8 D2DF030C */  jal        func_800F7F48
    /* 5D0EC 8014ECEC 21204000 */   addu      $a0, $v0, $zero
    /* 5D0F0 8014ECF0 93E0030C */  jal        func_800F824C
    /* 5D0F4 8014ECF4 06000424 */   addiu     $a0, $zero, 0x6
    /* 5D0F8 8014ECF8 EEE3030C */  jal        func_800F8FB8
    /* 5D0FC 8014ECFC 07000424 */   addiu     $a0, $zero, 0x7
    /* 5D100 8014ED00 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D104 8014ED04 00000000 */  nop
    /* 5D108 8014ED08 0800E003 */  jr         $ra
    /* 5D10C 8014ED0C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014ECC8
