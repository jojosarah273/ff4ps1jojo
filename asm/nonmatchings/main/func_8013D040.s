nonmatching func_8013D040, 0xEC

glabel func_8013D040
    /* 4B440 8013D040 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4B444 8013D044 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4B448 8013D048 58E2030C */  jal        func_800F8960
    /* 4B44C 8013D04C 42030424 */   addiu     $a0, $zero, 0x342
    /* 4B450 8013D050 8CD9030C */  jal        func_800F6630
    /* 4B454 8013D054 02000424 */   addiu     $a0, $zero, 0x2
    /* 4B458 8013D058 58E2030C */  jal        func_800F8960
    /* 4B45C 8013D05C 41030424 */   addiu     $a0, $zero, 0x341
    /* 4B460 8013D060 59D9030C */  jal        func_800F6564
    /* 4B464 8013D064 C06C0424 */   addiu     $a0, $zero, 0x6CC0
    /* 4B468 8013D068 0DD9030C */  jal        func_800F6434
    /* 4B46C 8013D06C 02020424 */   addiu     $a0, $zero, 0x202
    /* 4B470 8013D070 09004014 */  bnez       $v0, .L8013D098
    /* 4B474 8013D074 00000000 */   nop
    /* 4B478 8013D078 8CD9030C */  jal        func_800F6630
    /* 4B47C 8013D07C 21200000 */   addu      $a0, $zero, $zero
    /* 4B480 8013D080 58E2030C */  jal        func_800F8960
    /* 4B484 8013D084 40030424 */   addiu     $a0, $zero, 0x340
    /* 4B488 8013D088 8CD9030C */  jal        func_800F6630
    /* 4B48C 8013D08C 04000424 */   addiu     $a0, $zero, 0x4
    /* 4B490 8013D090 3DF40408 */  j          .L8013D0F4
    /* 4B494 8013D094 00000000 */   nop
  .L8013D098:
    /* 4B498 8013D098 8CD9030C */  jal        func_800F6630
    /* 4B49C 8013D09C 21200000 */   addu      $a0, $zero, $zero
    /* 4B4A0 8013D0A0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4B4A4 8013D0A4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4B4A8 8013D0A8 00000000 */  nop
    /* 4B4AC 8013D0AC 00006290 */  lbu        $v0, 0x0($v1)
    /* 4B4B0 8013D0B0 00000000 */  nop
    /* 4B4B4 8013D0B4 27100200 */  nor        $v0, $zero, $v0
    /* 4B4B8 8013D0B8 20D5030C */  jal        func_800F5480
    /* 4B4BC 8013D0BC 000062A0 */   sb        $v0, 0x0($v1)
    /* 4B4C0 8013D0C0 16E0030C */  jal        func_800F8058
    /* 4B4C4 8013D0C4 10000424 */   addiu     $a0, $zero, 0x10
    /* 4B4C8 8013D0C8 58E2030C */  jal        func_800F8960
    /* 4B4CC 8013D0CC 40030424 */   addiu     $a0, $zero, 0x340
    /* 4B4D0 8013D0D0 8CD9030C */  jal        func_800F6630
    /* 4B4D4 8013D0D4 04000424 */   addiu     $a0, $zero, 0x4
    /* 4B4D8 8013D0D8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4B4DC 8013D0DC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4B4E0 8013D0E0 00000000 */  nop
    /* 4B4E4 8013D0E4 00006290 */  lbu        $v0, 0x0($v1)
    /* 4B4E8 8013D0E8 00000000 */  nop
    /* 4B4EC 8013D0EC 40004238 */  xori       $v0, $v0, 0x40
    /* 4B4F0 8013D0F0 000062A0 */  sb         $v0, 0x0($v1)
  .L8013D0F4:
    /* 4B4F4 8013D0F4 58E2030C */  jal        func_800F8960
    /* 4B4F8 8013D0F8 43030424 */   addiu     $a0, $zero, 0x343
    /* 4B4FC 8013D0FC EFD8030C */  jal        func_800F63BC
    /* 4B500 8013D100 00000000 */   nop
    /* 4B504 8013D104 EFD8030C */  jal        func_800F63BC
    /* 4B508 8013D108 00000000 */   nop
    /* 4B50C 8013D10C EFD8030C */  jal        func_800F63BC
    /* 4B510 8013D110 00000000 */   nop
    /* 4B514 8013D114 EFD8030C */  jal        func_800F63BC
    /* 4B518 8013D118 00000000 */   nop
    /* 4B51C 8013D11C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4B520 8013D120 00000000 */  nop
    /* 4B524 8013D124 0800E003 */  jr         $ra
    /* 4B528 8013D128 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013D040
