nonmatching func_8016EEDC, 0xAC

glabel func_8016EEDC
    /* 7D2DC 8016EEDC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7D2E0 8016EEE0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7D2E4 8016EEE4 91E5030C */  jal        func_800F9644
    /* 7D2E8 8016EEE8 10000424 */   addiu     $a0, $zero, 0x10
    /* 7D2EC 8016EEEC 98E5030C */  jal        func_800F9660
    /* 7D2F0 8016EEF0 20000424 */   addiu     $a0, $zero, 0x20
    /* 7D2F4 8016EEF4 0D80063C */  lui        $a2, %hi(D_800D0000)
    /* 7D2F8 8016EEF8 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 7D2FC 8016EEFC 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 7D300 8016EF00 1A80043C */  lui        $a0, %hi(D_8019ED68)
    /* 7D304 8016EF04 68ED848C */  lw         $a0, %lo(D_8019ED68)($a0)
    /* 7D308 8016EF08 00006294 */  lhu        $v0, 0x0($v1)
    /* 7D30C 8016EF0C 00008590 */  lbu        $a1, 0x0($a0)
    /* 7D310 8016EF10 21104600 */  addu       $v0, $v0, $a2
    /* 7D314 8016EF14 000045A0 */  sb         $a1, %lo(D_800D0000)($v0)
    /* 7D318 8016EF18 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 7D31C 8016EF1C 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 7D320 8016EF20 00000000 */  nop
    /* 7D324 8016EF24 00006294 */  lhu        $v0, 0x0($v1)
    /* 7D328 8016EF28 00000000 */  nop
    /* 7D32C 8016EF2C FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 7D330 8016EF30 9BE4030C */  jal        func_800F926C
    /* 7D334 8016EF34 000062A4 */   sh        $v0, 0x0($v1)
    /* 7D338 8016EF38 A6E4030C */  jal        func_800F9298
    /* 7D33C 8016EF3C 00000000 */   nop
    /* 7D340 8016EF40 53D9030C */  jal        func_800F654C
    /* 7D344 8016EF44 21200000 */   addu      $a0, $zero, $zero
    /* 7D348 8016EF48 7AE0030C */  jal        func_800F81E8
    /* 7D34C 8016EF4C 64000424 */   addiu     $a0, $zero, 0x64
    /* 7D350 8016EF50 53D9030C */  jal        func_800F654C
    /* 7D354 8016EF54 50000424 */   addiu     $a0, $zero, 0x50
    /* 7D358 8016EF58 7AE0030C */  jal        func_800F81E8
    /* 7D35C 8016EF5C 6A000424 */   addiu     $a0, $zero, 0x6A
    /* 7D360 8016EF60 53D9030C */  jal        func_800F654C
    /* 7D364 8016EF64 13000424 */   addiu     $a0, $zero, 0x13
    /* 7D368 8016EF68 7AE0030C */  jal        func_800F81E8
    /* 7D36C 8016EF6C 6B000424 */   addiu     $a0, $zero, 0x6B
    /* 7D370 8016EF70 E2BB050C */  jal        func_8016EF88
    /* 7D374 8016EF74 00000000 */   nop
    /* 7D378 8016EF78 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7D37C 8016EF7C 00000000 */  nop
    /* 7D380 8016EF80 0800E003 */  jr         $ra
    /* 7D384 8016EF84 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016EEDC
