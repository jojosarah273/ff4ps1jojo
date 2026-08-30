nonmatching func_800FF024, 0x88

glabel func_800FF024
    /* D424 800FF024 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* D428 800FF028 1000BFAF */  sw         $ra, 0x10($sp)
    /* D42C 800FF02C 65C4050C */  jal        func_80171194
    /* D430 800FF030 00000000 */   nop
    /* D434 800FF034 82C5050C */  jal        func_80171608
    /* D438 800FF038 00000000 */   nop
    /* D43C 800FF03C 72C6050C */  jal        func_801719C8
    /* D440 800FF040 00000000 */   nop
    /* D444 800FF044 34C9050C */  jal        func_801724D0
    /* D448 800FF048 00000000 */   nop
    /* D44C 800FF04C EACA050C */  jal        func_80172BA8
    /* D450 800FF050 00000000 */   nop
    /* D454 800FF054 02CC050C */  jal        func_80173008
    /* D458 800FF058 00000000 */   nop
    /* D45C 800FF05C E0CD050C */  jal        func_80173780
    /* D460 800FF060 00000000 */   nop
    /* D464 800FF064 7AC8050C */  jal        func_801721E8
    /* D468 800FF068 00000000 */   nop
    /* D46C 800FF06C 53D9030C */  jal        func_800F654C
    /* D470 800FF070 3E000424 */   addiu     $a0, $zero, 0x3E
    /* D474 800FF074 AD6D040C */  jal        func_8011B6B4
    /* D478 800FF078 00000000 */   nop
    /* D47C 800FF07C 5DD5030C */  jal        func_800F5574
    /* D480 800FF080 21200000 */   addu      $a0, $zero, $zero
    /* D484 800FF084 F5D4030C */  jal        func_800F53D4
    /* D488 800FF088 00000000 */   nop
    /* D48C 800FF08C 03004014 */  bnez       $v0, .L800FF09C
    /* D490 800FF090 00000000 */   nop
    /* D494 800FF094 E4C7050C */  jal        func_80171F90
    /* D498 800FF098 00000000 */   nop
  .L800FF09C:
    /* D49C 800FF09C 1000BF8F */  lw         $ra, 0x10($sp)
    /* D4A0 800FF0A0 00000000 */  nop
    /* D4A4 800FF0A4 0800E003 */  jr         $ra
    /* D4A8 800FF0A8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FF024
