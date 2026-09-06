nonmatching func_8015FC5C, 0x70

glabel func_8015FC5C
    /* 6E05C 8015FC5C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6E060 8015FC60 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6E064 8015FC64 59D9030C */  jal        func_800F6564
    /* 6E068 8015FC68 9D260424 */   addiu     $a0, $zero, 0x269D
    /* 6E06C 8015FC6C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E070 8015FC70 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E074 8015FC74 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E078 8015FC78 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E07C 8015FC7C 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E080 8015FC80 02390424 */  addiu      $a0, $zero, 0x3902
    /* 6E084 8015FC84 40E3030C */  jal        func_800F8D00
    /* 6E088 8015FC88 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6E08C 8015FC8C C1CE030C */  jal        func_800F3B04
    /* 6E090 8015FC90 02390424 */   addiu     $a0, $zero, 0x3902
    /* 6E094 8015FC94 CAD3030C */  jal        func_800F4F28
    /* 6E098 8015FC98 21204000 */   addu      $a0, $v0, $zero
    /* 6E09C 8015FC9C D3D3030C */  jal        func_800F4F4C
    /* 6E0A0 8015FCA0 00000000 */   nop
    /* 6E0A4 8015FCA4 C1CE030C */  jal        func_800F3B04
    /* 6E0A8 8015FCA8 03390424 */   addiu     $a0, $zero, 0x3903
    /* 6E0AC 8015FCAC 90DE030C */  jal        func_800F7A40
    /* 6E0B0 8015FCB0 21204000 */   addu      $a0, $v0, $zero
    /* 6E0B4 8015FCB4 1886010C */  jal        func_80061860
    /* 6E0B8 8015FCB8 00000000 */   nop
    /* 6E0BC 8015FCBC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6E0C0 8015FCC0 00000000 */  nop
    /* 6E0C4 8015FCC4 0800E003 */  jr         $ra
    /* 6E0C8 8015FCC8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015FC5C
