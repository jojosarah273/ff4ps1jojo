nonmatching func_8015E6DC, 0x7C

glabel func_8015E6DC
    /* 6CADC 8015E6DC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CAE0 8015E6E0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6CAE4 8015E6E4 53D9030C */  jal        func_800F654C
    /* 6CAE8 8015E6E8 80000424 */   addiu     $a0, $zero, 0x80
    /* 6CAEC 8015E6EC DAE1030C */  jal        func_800F8768
    /* 6CAF0 8015E6F0 50200424 */   addiu     $a0, $zero, 0x2050
    /* 6CAF4 8015E6F4 3BE4030C */  jal        func_800F90EC
    /* 6CAF8 8015E6F8 53200424 */   addiu     $a0, $zero, 0x2053
    /* 6CAFC 8015E6FC 8CD9030C */  jal        func_800F6630
    /* 6CB00 8015E700 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 6CB04 8015E704 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6CB08 8015E708 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6CB0C 8015E70C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6CB10 8015E710 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6CB14 8015E714 00004394 */  lhu        $v1, 0x0($v0)
    /* 6CB18 8015E718 C7E5030C */  jal        func_800F971C
    /* 6CB1C 8015E71C 000083A4 */   sh        $v1, 0x0($a0)
    /* 6CB20 8015E720 264C050C */  jal        func_80153098
    /* 6CB24 8015E724 00000000 */   nop
    /* 6CB28 8015E728 9CDC030C */  jal        func_800F7270
    /* 6CB2C 8015E72C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6CB30 8015E730 DAE1030C */  jal        func_800F8768
    /* 6CB34 8015E734 54200424 */   addiu     $a0, $zero, 0x2054
    /* 6CB38 8015E738 77DC030C */  jal        func_800F71DC
    /* 6CB3C 8015E73C 01000424 */   addiu     $a0, $zero, 0x1
    /* 6CB40 8015E740 5BE3030C */  jal        func_800F8D6C
    /* 6CB44 8015E744 D4000424 */   addiu     $a0, $zero, 0xD4
    /* 6CB48 8015E748 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6CB4C 8015E74C 00000000 */  nop
    /* 6CB50 8015E750 0800E003 */  jr         $ra
    /* 6CB54 8015E754 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015E6DC
