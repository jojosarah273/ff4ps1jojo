nonmatching func_80122F2C, 0xC8

glabel func_80122F2C
    /* 3132C 80122F2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 31330 80122F30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 31334 80122F34 91E5030C */  jal        func_800F9644
    /* 31338 80122F38 20000424 */   addiu     $a0, $zero, 0x20
    /* 3133C 80122F3C CCE4030C */  jal        func_800F9330
    /* 31340 80122F40 00000000 */   nop
    /* 31344 80122F44 5BE3030C */  jal        func_800F8D6C
    /* 31348 80122F48 45000424 */   addiu     $a0, $zero, 0x45
    /* 3134C 80122F4C 04D5030C */  jal        func_800F5410
    /* 31350 80122F50 00000000 */   nop
    /* 31354 80122F54 0FCF030C */  jal        func_800F3C3C
    /* 31358 80122F58 45000424 */   addiu     $a0, $zero, 0x45
    /* 3135C 80122F5C E5CF030C */  jal        func_800F3F94
    /* 31360 80122F60 21204000 */   addu      $a0, $v0, $zero
    /* 31364 80122F64 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 31368 80122F68 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3136C 80122F6C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 31370 80122F70 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 31374 80122F74 00004394 */  lhu        $v1, 0x0($v0)
    /* 31378 80122F78 48000424 */  addiu      $a0, $zero, 0x48
    /* 3137C 80122F7C D9D9030C */  jal        func_800F6764
    /* 31380 80122F80 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 31384 80122F84 FE7C040C */  jal        func_8011F3F8
    /* 31388 80122F88 00000000 */   nop
    /* 3138C 80122F8C 98E5030C */  jal        func_800F9660
    /* 31390 80122F90 20000424 */   addiu     $a0, $zero, 0x20
    /* 31394 80122F94 8CD9030C */  jal        func_800F6630
    /* 31398 80122F98 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 3139C 80122F9C DAE1030C */  jal        func_800F8768
    /* 313A0 80122FA0 21200000 */   addu      $a0, $zero, $zero
    /* 313A4 80122FA4 8CD9030C */  jal        func_800F6630
    /* 313A8 80122FA8 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 313AC 80122FAC DAE1030C */  jal        func_800F8768
    /* 313B0 80122FB0 02000424 */   addiu     $a0, $zero, 0x2
    /* 313B4 80122FB4 8CD9030C */  jal        func_800F6630
    /* 313B8 80122FB8 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 313BC 80122FBC DAE1030C */  jal        func_800F8768
    /* 313C0 80122FC0 04000424 */   addiu     $a0, $zero, 0x4
    /* 313C4 80122FC4 8CD9030C */  jal        func_800F6630
    /* 313C8 80122FC8 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 313CC 80122FCC DAE1030C */  jal        func_800F8768
    /* 313D0 80122FD0 06000424 */   addiu     $a0, $zero, 0x6
    /* 313D4 80122FD4 91E5030C */  jal        func_800F9644
    /* 313D8 80122FD8 20000424 */   addiu     $a0, $zero, 0x20
    /* 313DC 80122FDC 68E5030C */  jal        func_800F95A0
    /* 313E0 80122FE0 00000000 */   nop
    /* 313E4 80122FE4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 313E8 80122FE8 00000000 */  nop
    /* 313EC 80122FEC 0800E003 */  jr         $ra
    /* 313F0 80122FF0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80122F2C
