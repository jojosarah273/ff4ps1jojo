nonmatching func_80121D8C, 0x80

glabel func_80121D8C
    /* 3018C 80121D8C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30190 80121D90 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30194 80121D94 8CD9030C */  jal        func_800F6630
    /* 30198 80121D98 65000424 */   addiu     $a0, $zero, 0x65
    /* 3019C 80121D9C 20D5030C */  jal        func_800F5480
    /* 301A0 80121DA0 00000000 */   nop
    /* 301A4 80121DA4 0FCF030C */  jal        func_800F3C3C
    /* 301A8 80121DA8 63000424 */   addiu     $a0, $zero, 0x63
    /* 301AC 80121DAC D2DF030C */  jal        func_800F7F48
    /* 301B0 80121DB0 21204000 */   addu      $a0, $v0, $zero
    /* 301B4 80121DB4 33D7030C */  jal        func_800F5CCC
    /* 301B8 80121DB8 00000000 */   nop
    /* 301BC 80121DBC 93E0030C */  jal        func_800F824C
    /* 301C0 80121DC0 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 301C4 80121DC4 53D9030C */  jal        func_800F654C
    /* 301C8 80121DC8 FA000424 */   addiu     $a0, $zero, 0xFA
    /* 301CC 80121DCC DAE1030C */  jal        func_800F8768
    /* 301D0 80121DD0 21200000 */   addu      $a0, $zero, $zero
    /* 301D4 80121DD4 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 301D8 80121DD8 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 301DC 80121DDC 00000000 */  nop
    /* 301E0 80121DE0 00006294 */  lhu        $v0, 0x0($v1)
    /* 301E4 80121DE4 FF000424 */  addiu      $a0, $zero, 0xFF
    /* 301E8 80121DE8 02004224 */  addiu      $v0, $v0, 0x2
    /* 301EC 80121DEC 53D9030C */  jal        func_800F654C
    /* 301F0 80121DF0 000062A4 */   sh        $v0, 0x0($v1)
    /* 301F4 80121DF4 8387040C */  jal        func_80121E0C
    /* 301F8 80121DF8 00000000 */   nop
    /* 301FC 80121DFC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30200 80121E00 00000000 */  nop
    /* 30204 80121E04 0800E003 */  jr         $ra
    /* 30208 80121E08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121D8C
