nonmatching func_800FCC0C, 0x78

glabel func_800FCC0C
    /* B00C 800FCC0C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* B010 800FCC10 1000BFAF */  sw         $ra, 0x10($sp)
    /* B014 800FCC14 93E0030C */  jal        func_800F824C
    /* B018 800FCC18 09000424 */   addiu     $a0, $zero, 0x9
    /* B01C 800FCC1C 93E0030C */  jal        func_800F824C
    /* B020 800FCC20 07000424 */   addiu     $a0, $zero, 0x7
    /* B024 800FCC24 0FCF030C */  jal        func_800F3C3C
    /* B028 800FCC28 09000424 */   addiu     $a0, $zero, 0x9
    /* B02C 800FCC2C 32DF030C */  jal        func_800F7CC8
    /* B030 800FCC30 21204000 */   addu      $a0, $v0, $zero
    /* B034 800FCC34 43DF030C */  jal        func_800F7D0C
    /* B038 800FCC38 00000000 */   nop
    /* B03C 800FCC3C 0FCF030C */  jal        func_800F3C3C
    /* B040 800FCC40 08000424 */   addiu     $a0, $zero, 0x8
    /* B044 800FCC44 32DF030C */  jal        func_800F7CC8
    /* B048 800FCC48 21204000 */   addu      $a0, $v0, $zero
    /* B04C 800FCC4C 43DF030C */  jal        func_800F7D0C
    /* B050 800FCC50 00000000 */   nop
    /* B054 800FCC54 0FCF030C */  jal        func_800F3C3C
    /* B058 800FCC58 07000424 */   addiu     $a0, $zero, 0x7
    /* B05C 800FCC5C 32DF030C */  jal        func_800F7CC8
    /* B060 800FCC60 21204000 */   addu      $a0, $v0, $zero
    /* B064 800FCC64 43DF030C */  jal        func_800F7D0C
    /* B068 800FCC68 00000000 */   nop
    /* B06C 800FCC6C 8CD9030C */  jal        func_800F6630
    /* B070 800FCC70 08000424 */   addiu     $a0, $zero, 0x8
    /* B074 800FCC74 1000BF8F */  lw         $ra, 0x10($sp)
    /* B078 800FCC78 00000000 */  nop
    /* B07C 800FCC7C 0800E003 */  jr         $ra
    /* B080 800FCC80 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FCC0C
