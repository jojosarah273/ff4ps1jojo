nonmatching func_80131C50, 0x88

glabel func_80131C50
    /* 40050 80131C50 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 40054 80131C54 1000BFAF */  sw         $ra, 0x10($sp)
    /* 40058 80131C58 59D9030C */  jal        func_800F6564
    /* 4005C 80131C5C BD1B0424 */   addiu     $a0, $zero, 0x1BBD
    /* 40060 80131C60 0DD9030C */  jal        func_800F6434
    /* 40064 80131C64 02020424 */   addiu     $a0, $zero, 0x202
    /* 40068 80131C68 17004014 */  bnez       $v0, .L80131CC8
    /* 4006C 80131C6C 00000000 */   nop
    /* 40070 80131C70 8CD9030C */  jal        func_800F6630
    /* 40074 80131C74 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 40078 80131C78 AB93040C */  jal        func_80124EAC
    /* 4007C 80131C7C 00000000 */   nop
    /* 40080 80131C80 59D9030C */  jal        func_800F6564
    /* 40084 80131C84 931B0424 */   addiu     $a0, $zero, 0x1B93
    /* 40088 80131C88 93E0030C */  jal        func_800F824C
    /* 4008C 80131C8C 43000424 */   addiu     $a0, $zero, 0x43
    /* 40090 80131C90 91E5030C */  jal        func_800F9644
    /* 40094 80131C94 20000424 */   addiu     $a0, $zero, 0x20
    /* 40098 80131C98 F8DA030C */  jal        func_800F6BE0
    /* 4009C 80131C9C 0B000424 */   addiu     $a0, $zero, 0xB
    /* 400A0 80131CA0 04D5030C */  jal        func_800F5410
    /* 400A4 80131CA4 00000000 */   nop
    /* 400A8 80131CA8 0FCF030C */  jal        func_800F3C3C
    /* 400AC 80131CAC 43000424 */   addiu     $a0, $zero, 0x43
    /* 400B0 80131CB0 E5CF030C */  jal        func_800F3F94
    /* 400B4 80131CB4 21204000 */   addu      $a0, $v0, $zero
    /* 400B8 80131CB8 F7E1030C */  jal        func_800F87DC
    /* 400BC 80131CBC 0B000424 */   addiu     $a0, $zero, 0xB
    /* 400C0 80131CC0 98E5030C */  jal        func_800F9660
    /* 400C4 80131CC4 20000424 */   addiu     $a0, $zero, 0x20
  .L80131CC8:
    /* 400C8 80131CC8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 400CC 80131CCC 00000000 */  nop
    /* 400D0 80131CD0 0800E003 */  jr         $ra
    /* 400D4 80131CD4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131C50
