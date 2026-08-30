nonmatching func_8011F030, 0xE8

glabel func_8011F030
    /* 2D430 8011F030 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2D434 8011F034 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2D438 8011F038 91E5030C */  jal        func_800F9644
    /* 2D43C 8011F03C 20000424 */   addiu     $a0, $zero, 0x20
    /* 2D440 8011F040 96D9030C */  jal        func_800F6658
    /* 2D444 8011F044 29000424 */   addiu     $a0, $zero, 0x29
    /* 2D448 8011F048 04D5030C */  jal        func_800F5410
    /* 2D44C 8011F04C 00000000 */   nop
    /* 2D450 8011F050 0FCF030C */  jal        func_800F3C3C
    /* 2D454 8011F054 2B000424 */   addiu     $a0, $zero, 0x2B
    /* 2D458 8011F058 E5CF030C */  jal        func_800F3F94
    /* 2D45C 8011F05C 21204000 */   addu      $a0, $v0, $zero
    /* 2D460 8011F060 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2D464 8011F064 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2D468 8011F068 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 2D46C 8011F06C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 2D470 8011F070 00004394 */  lhu        $v1, 0x0($v0)
    /* 2D474 8011F074 2D000424 */  addiu      $a0, $zero, 0x2D
    /* 2D478 8011F078 96D9030C */  jal        func_800F6658
    /* 2D47C 8011F07C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2D480 8011F080 9DE0030C */  jal        func_800F8274
    /* 2D484 8011F084 31000424 */   addiu     $a0, $zero, 0x31
    /* 2D488 8011F088 98E5030C */  jal        func_800F9660
    /* 2D48C 8011F08C 20000424 */   addiu     $a0, $zero, 0x20
    /* 2D490 8011F090 53D9030C */  jal        func_800F654C
    /* 2D494 8011F094 F7000424 */   addiu     $a0, $zero, 0xF7
    /* 2D498 8011F098 467C040C */  jal        func_8011F118
    /* 2D49C 8011F09C 00000000 */   nop
    /* 2D4A0 8011F0A0 80E4030C */  jal        func_800F9200
    /* 2D4A4 8011F0A4 00000000 */   nop
    /* 2D4A8 8011F0A8 8CD9030C */  jal        func_800F6630
    /* 2D4AC 8011F0AC 33000424 */   addiu     $a0, $zero, 0x33
    /* 2D4B0 8011F0B0 0DD9030C */  jal        func_800F6434
    /* 2D4B4 8011F0B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 2D4B8 8011F0B8 05004014 */  bnez       $v0, .L8011F0D0
    /* 2D4BC 8011F0BC 00000000 */   nop
    /* 2D4C0 8011F0C0 F7E4030C */  jal        func_800F93DC
    /* 2D4C4 8011F0C4 00000000 */   nop
    /* 2D4C8 8011F0C8 427C0408 */  j          .L8011F108
    /* 2D4CC 8011F0CC 00000000 */   nop
  .L8011F0D0:
    /* 2D4D0 8011F0D0 F7E4030C */  jal        func_800F93DC
    /* 2D4D4 8011F0D4 00000000 */   nop
  .L8011F0D8:
    /* 2D4D8 8011F0D8 847C040C */  jal        func_8011F210
    /* 2D4DC 8011F0DC 00000000 */   nop
    /* 2D4E0 8011F0E0 68D7030C */  jal        func_800F5DA0
    /* 2D4E4 8011F0E4 32000424 */   addiu     $a0, $zero, 0x32
    /* 2D4E8 8011F0E8 E3D6030C */  jal        func_800F5B8C
    /* 2D4EC 8011F0EC 02020424 */   addiu     $a0, $zero, 0x202
    /* 2D4F0 8011F0F0 F9FF4014 */  bnez       $v0, .L8011F0D8
    /* 2D4F4 8011F0F4 00000000 */   nop
    /* 2D4F8 8011F0F8 53D9030C */  jal        func_800F654C
    /* 2D4FC 8011F0FC FC000424 */   addiu     $a0, $zero, 0xFC
    /* 2D500 8011F100 467C040C */  jal        func_8011F118
    /* 2D504 8011F104 00000000 */   nop
  .L8011F108:
    /* 2D508 8011F108 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2D50C 8011F10C 00000000 */  nop
    /* 2D510 8011F110 0800E003 */  jr         $ra
    /* 2D514 8011F114 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F030
