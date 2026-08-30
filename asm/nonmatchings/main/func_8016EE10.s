nonmatching func_8016EE10, 0xCC

glabel func_8016EE10
    /* 7D210 8016EE10 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7D214 8016EE14 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7D218 8016EE18 91E5030C */  jal        func_800F9644
    /* 7D21C 8016EE1C 10000424 */   addiu     $a0, $zero, 0x10
    /* 7D220 8016EE20 98E5030C */  jal        func_800F9660
    /* 7D224 8016EE24 20000424 */   addiu     $a0, $zero, 0x20
    /* 7D228 8016EE28 0D80063C */  lui        $a2, %hi(D_800D0000)
    /* 7D22C 8016EE2C 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 7D230 8016EE30 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 7D234 8016EE34 1A80043C */  lui        $a0, %hi(D_8019ED68)
    /* 7D238 8016EE38 68ED848C */  lw         $a0, %lo(D_8019ED68)($a0)
    /* 7D23C 8016EE3C 00006294 */  lhu        $v0, 0x0($v1)
    /* 7D240 8016EE40 00008590 */  lbu        $a1, 0x0($a0)
    /* 7D244 8016EE44 21104600 */  addu       $v0, $v0, $a2
    /* 7D248 8016EE48 000045A0 */  sb         $a1, %lo(D_800D0000)($v0)
    /* 7D24C 8016EE4C 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 7D250 8016EE50 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 7D254 8016EE54 00000000 */  nop
    /* 7D258 8016EE58 00006294 */  lhu        $v0, 0x0($v1)
    /* 7D25C 8016EE5C 00000000 */  nop
    /* 7D260 8016EE60 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 7D264 8016EE64 9BE4030C */  jal        func_800F926C
    /* 7D268 8016EE68 000062A4 */   sh        $v0, 0x0($v1)
    /* 7D26C 8016EE6C A6E4030C */  jal        func_800F9298
    /* 7D270 8016EE70 00000000 */   nop
    /* 7D274 8016EE74 77DC030C */  jal        func_800F71DC
    /* 7D278 8016EE78 08000424 */   addiu     $a0, $zero, 0x8
    /* 7D27C 8016EE7C 40E3030C */  jal        func_800F8D00
    /* 7D280 8016EE80 A1000424 */   addiu     $a0, $zero, 0xA1
    /* 7D284 8016EE84 77DC030C */  jal        func_800F71DC
    /* 7D288 8016EE88 F2FF0434 */   ori       $a0, $zero, 0xFFF2
    /* 7D28C 8016EE8C 40E3030C */  jal        func_800F8D00
    /* 7D290 8016EE90 A3000424 */   addiu     $a0, $zero, 0xA3
    /* 7D294 8016EE94 53D9030C */  jal        func_800F654C
    /* 7D298 8016EE98 01000424 */   addiu     $a0, $zero, 0x1
    /* 7D29C 8016EE9C 7AE0030C */  jal        func_800F81E8
    /* 7D2A0 8016EEA0 64000424 */   addiu     $a0, $zero, 0x64
    /* 7D2A4 8016EEA4 53D9030C */  jal        func_800F654C
    /* 7D2A8 8016EEA8 80000424 */   addiu     $a0, $zero, 0x80
    /* 7D2AC 8016EEAC 7AE0030C */  jal        func_800F81E8
    /* 7D2B0 8016EEB0 6A000424 */   addiu     $a0, $zero, 0x6A
    /* 7D2B4 8016EEB4 53D9030C */  jal        func_800F654C
    /* 7D2B8 8016EEB8 0A000424 */   addiu     $a0, $zero, 0xA
    /* 7D2BC 8016EEBC 7AE0030C */  jal        func_800F81E8
    /* 7D2C0 8016EEC0 6B000424 */   addiu     $a0, $zero, 0x6B
    /* 7D2C4 8016EEC4 E2BB050C */  jal        func_8016EF88
    /* 7D2C8 8016EEC8 00000000 */   nop
    /* 7D2CC 8016EECC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7D2D0 8016EED0 00000000 */  nop
    /* 7D2D4 8016EED4 0800E003 */  jr         $ra
    /* 7D2D8 8016EED8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016EE10
