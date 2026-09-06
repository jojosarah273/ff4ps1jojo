nonmatching func_8014D080, 0xCC

glabel func_8014D080
    /* 5B480 8014D080 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B484 8014D084 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B488 8014D088 7525050C */  jal        func_801495D4
    /* 5B48C 8014D08C 00000000 */   nop
    /* 5B490 8014D090 E6D2010C */  jal        func_80074B98
    /* 5B494 8014D094 00000000 */   nop
    /* 5B498 8014D098 77DC030C */  jal        func_800F71DC
    /* 5B49C 8014D09C 21200000 */   addu      $a0, $zero, $zero
  .L8014D0A0:
    /* 5B4A0 8014D0A0 C1CE030C */  jal        func_800F3B04
    /* 5B4A4 8014D0A4 81F20434 */   ori       $a0, $zero, 0xF281
    /* 5B4A8 8014D0A8 CAD3030C */  jal        func_800F4F28
    /* 5B4AC 8014D0AC 21204000 */   addu      $a0, $v0, $zero
    /* 5B4B0 8014D0B0 EBD3030C */  jal        func_800F4FAC
    /* 5B4B4 8014D0B4 01010424 */   addiu     $a0, $zero, 0x101
    /* 5B4B8 8014D0B8 12004014 */  bnez       $v0, .L8014D104
    /* 5B4BC 8014D0BC 09F10434 */   ori       $a0, $zero, 0xF109
    /* 5B4C0 8014D0C0 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 5B4C4 8014D0C4 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 5B4C8 8014D0C8 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 5B4CC 8014D0CC 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 5B4D0 8014D0D0 00004390 */  lbu        $v1, 0x0($v0)
    /* 5B4D4 8014D0D4 62E0030C */  jal        func_800F8188
    /* 5B4D8 8014D0D8 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5B4DC 8014D0DC 53D9030C */  jal        func_800F654C
    /* 5B4E0 8014D0E0 07000424 */   addiu     $a0, $zero, 0x7
    /* 5B4E4 8014D0E4 62E0030C */  jal        func_800F8188
    /* 5B4E8 8014D0E8 0AF10434 */   ori       $a0, $zero, 0xF10A
    /* 5B4EC 8014D0EC CCE4030C */  jal        func_800F9330
    /* 5B4F0 8014D0F0 00000000 */   nop
    /* 5B4F4 8014D0F4 ACCF010C */  jal        func_80073EB0
    /* 5B4F8 8014D0F8 00000000 */   nop
    /* 5B4FC 8014D0FC 68E5030C */  jal        func_800F95A0
    /* 5B500 8014D100 00000000 */   nop
  .L8014D104:
    /* 5B504 8014D104 D9D8030C */  jal        func_800F6364
    /* 5B508 8014D108 00000000 */   nop
    /* 5B50C 8014D10C 56D6030C */  jal        func_800F5958
    /* 5B510 8014D110 08000424 */   addiu     $a0, $zero, 0x8
    /* 5B514 8014D114 F5D4030C */  jal        func_800F53D4
    /* 5B518 8014D118 00000000 */   nop
    /* 5B51C 8014D11C E0FF4010 */  beqz       $v0, .L8014D0A0
    /* 5B520 8014D120 00000000 */   nop
    /* 5B524 8014D124 28D1010C */  jal        func_800744A0
    /* 5B528 8014D128 00000000 */   nop
    /* 5B52C 8014D12C 6866020C */  jal        func_800999A0
    /* 5B530 8014D130 00000000 */   nop
    /* 5B534 8014D134 7D25050C */  jal        func_801495F4
    /* 5B538 8014D138 00000000 */   nop
    /* 5B53C 8014D13C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B540 8014D140 00000000 */  nop
    /* 5B544 8014D144 0800E003 */  jr         $ra
    /* 5B548 8014D148 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D080
