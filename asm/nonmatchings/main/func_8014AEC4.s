nonmatching func_8014AEC4, 0x78

glabel func_8014AEC4
    /* 592C4 8014AEC4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 592C8 8014AEC8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 592CC 8014AECC 84DC030C */  jal        func_800F7210
    /* 592D0 8014AED0 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 592D4 8014AED4 40E3030C */  jal        func_800F8D00
    /* 592D8 8014AED8 2FF40434 */   ori       $a0, $zero, 0xF42F
    /* 592DC 8014AEDC 59D9030C */  jal        func_800F6564
    /* 592E0 8014AEE0 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 592E4 8014AEE4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 592E8 8014AEE8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 592EC 8014AEEC 00000000 */  nop
    /* 592F0 8014AEF0 00006290 */  lbu        $v0, 0x0($v1)
    /* 592F4 8014AEF4 C4340424 */  addiu      $a0, $zero, 0x34C4
    /* 592F8 8014AEF8 80004238 */  xori       $v0, $v0, 0x80
    /* 592FC 8014AEFC 62E0030C */  jal        func_800F8188
    /* 59300 8014AF00 000062A0 */   sb        $v0, 0x0($v1)
    /* 59304 8014AF04 59D9030C */  jal        func_800F6564
    /* 59308 8014AF08 49000424 */   addiu     $a0, $zero, 0x49
    /* 5930C 8014AF0C 62E0030C */  jal        func_800F8188
    /* 59310 8014AF10 31F40434 */   ori       $a0, $zero, 0xF431
    /* 59314 8014AF14 112C050C */  jal        func_8014B044
    /* 59318 8014AF18 00000000 */   nop
    /* 5931C 8014AF1C 59D9030C */  jal        func_800F6564
    /* 59320 8014AF20 23350424 */   addiu     $a0, $zero, 0x3523
    /* 59324 8014AF24 62E0030C */  jal        func_800F8188
    /* 59328 8014AF28 C5340424 */   addiu     $a0, $zero, 0x34C5
    /* 5932C 8014AF2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59330 8014AF30 00000000 */  nop
    /* 59334 8014AF34 0800E003 */  jr         $ra
    /* 59338 8014AF38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014AEC4
