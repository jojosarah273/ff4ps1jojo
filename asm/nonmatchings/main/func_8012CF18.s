nonmatching func_8012CF18, 0x20C

glabel func_8012CF18
    /* 3B318 8012CF18 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3B31C 8012CF1C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3B320 8012CF20 EEE3030C */  jal        func_800F8FB8
    /* 3B324 8012CF24 45000424 */   addiu     $a0, $zero, 0x45
  .L8012CF28:
    /* 3B328 8012CF28 8CD9030C */  jal        func_800F6630
    /* 3B32C 8012CF2C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3B330 8012CF30 81B4040C */  jal        func_8012D204
    /* 3B334 8012CF34 00000000 */   nop
    /* 3B338 8012CF38 5DD5030C */  jal        func_800F5574
    /* 3B33C 8012CF3C 03000424 */   addiu     $a0, $zero, 0x3
    /* 3B340 8012CF40 F5D4030C */  jal        func_800F53D4
    /* 3B344 8012CF44 00000000 */   nop
    /* 3B348 8012CF48 17004014 */  bnez       $v0, .L8012CFA8
    /* 3B34C 8012CF4C 00000000 */   nop
    /* 3B350 8012CF50 5DD5030C */  jal        func_800F5574
    /* 3B354 8012CF54 11000424 */   addiu     $a0, $zero, 0x11
    /* 3B358 8012CF58 F5D4030C */  jal        func_800F53D4
    /* 3B35C 8012CF5C 00000000 */   nop
    /* 3B360 8012CF60 11004014 */  bnez       $v0, .L8012CFA8
    /* 3B364 8012CF64 00000000 */   nop
    /* 3B368 8012CF68 AFD8030C */  jal        func_800F62BC
    /* 3B36C 8012CF6C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3B370 8012CF70 8CD9030C */  jal        func_800F6630
    /* 3B374 8012CF74 45000424 */   addiu     $a0, $zero, 0x45
    /* 3B378 8012CF78 5DD5030C */  jal        func_800F5574
    /* 3B37C 8012CF7C 05000424 */   addiu     $a0, $zero, 0x5
    /* 3B380 8012CF80 F5D4030C */  jal        func_800F53D4
    /* 3B384 8012CF84 00000000 */   nop
    /* 3B388 8012CF88 E7FF4010 */  beqz       $v0, .L8012CF28
    /* 3B38C 8012CF8C 00000000 */   nop
  .L8012CF90:
    /* 3B390 8012CF90 91E5030C */  jal        func_800F9644
    /* 3B394 8012CF94 10000424 */   addiu     $a0, $zero, 0x10
    /* 3B398 8012CF98 94B0040C */  jal        func_8012C250
    /* 3B39C 8012CF9C 00000000 */   nop
    /* 3B3A0 8012CFA0 45B40408 */  j          .L8012D114
    /* 3B3A4 8012CFA4 00000000 */   nop
  .L8012CFA8:
    /* 3B3A8 8012CFA8 93E0030C */  jal        func_800F824C
    /* 3B3AC 8012CFAC ED000424 */   addiu     $a0, $zero, 0xED
    /* 3B3B0 8012CFB0 59D9030C */  jal        func_800F6564
    /* 3B3B4 8012CFB4 3B1B0424 */   addiu     $a0, $zero, 0x1B3B
    /* 3B3B8 8012CFB8 20D5030C */  jal        func_800F5480
    /* 3B3BC 8012CFBC 00000000 */   nop
    /* 3B3C0 8012CFC0 16E0030C */  jal        func_800F8058
    /* 3B3C4 8012CFC4 B6000424 */   addiu     $a0, $zero, 0xB6
    /* 3B3C8 8012CFC8 93E0030C */  jal        func_800F824C
    /* 3B3CC 8012CFCC 45000424 */   addiu     $a0, $zero, 0x45
    /* 3B3D0 8012CFD0 98E5030C */  jal        func_800F9660
    /* 3B3D4 8012CFD4 10000424 */   addiu     $a0, $zero, 0x10
    /* 3B3D8 8012CFD8 5BDD030C */  jal        func_800F756C
    /* 3B3DC 8012CFDC 41000424 */   addiu     $a0, $zero, 0x41
  .L8012CFE0:
    /* 3B3E0 8012CFE0 50DB030C */  jal        func_800F6D40
    /* 3B3E4 8012CFE4 C0150424 */   addiu     $a0, $zero, 0x15C0
    /* 3B3E8 8012CFE8 0FCF030C */  jal        func_800F3C3C
    /* 3B3EC 8012CFEC 45000424 */   addiu     $a0, $zero, 0x45
    /* 3B3F0 8012CFF0 35D5030C */  jal        func_800F54D4
    /* 3B3F4 8012CFF4 21204000 */   addu      $a0, $v0, $zero
    /* 3B3F8 8012CFF8 F5D4030C */  jal        func_800F53D4
    /* 3B3FC 8012CFFC 00000000 */   nop
    /* 3B400 8012D000 E3FF4014 */  bnez       $v0, .L8012CF90
    /* 3B404 8012D004 00000000 */   nop
    /* 3B408 8012D008 E4D8030C */  jal        func_800F6390
    /* 3B40C 8012D00C 00000000 */   nop
    /* 3B410 8012D010 7DD6030C */  jal        func_800F59F4
    /* 3B414 8012D014 18000424 */   addiu     $a0, $zero, 0x18
    /* 3B418 8012D018 F5D4030C */  jal        func_800F53D4
    /* 3B41C 8012D01C 00000000 */   nop
    /* 3B420 8012D020 EFFF4010 */  beqz       $v0, .L8012CFE0
    /* 3B424 8012D024 00000000 */   nop
    /* 3B428 8012D028 5BDD030C */  jal        func_800F756C
    /* 3B42C 8012D02C 41000424 */   addiu     $a0, $zero, 0x41
  .L8012D030:
    /* 3B430 8012D030 50DB030C */  jal        func_800F6D40
    /* 3B434 8012D034 C0150424 */   addiu     $a0, $zero, 0x15C0
    /* 3B438 8012D038 0DD9030C */  jal        func_800F6434
    /* 3B43C 8012D03C 02000424 */   addiu     $a0, $zero, 0x2
    /* 3B440 8012D040 09004014 */  bnez       $v0, .L8012D068
    /* 3B444 8012D044 00000000 */   nop
    /* 3B448 8012D048 E4D8030C */  jal        func_800F6390
    /* 3B44C 8012D04C 00000000 */   nop
    /* 3B450 8012D050 7DD6030C */  jal        func_800F59F4
    /* 3B454 8012D054 18000424 */   addiu     $a0, $zero, 0x18
    /* 3B458 8012D058 F5D4030C */  jal        func_800F53D4
    /* 3B45C 8012D05C 00000000 */   nop
    /* 3B460 8012D060 F3FF4010 */  beqz       $v0, .L8012D030
    /* 3B464 8012D064 00000000 */   nop
  .L8012D068:
    /* 3B468 8012D068 8CD9030C */  jal        func_800F6630
    /* 3B46C 8012D06C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3B470 8012D070 4CE2030C */  jal        func_800F8930
    /* 3B474 8012D074 C0150424 */   addiu     $a0, $zero, 0x15C0
    /* 3B478 8012D078 80E4030C */  jal        func_800F9200
    /* 3B47C 8012D07C 00000000 */   nop
    /* 3B480 8012D080 91E5030C */  jal        func_800F9644
    /* 3B484 8012D084 10000424 */   addiu     $a0, $zero, 0x10
    /* 3B488 8012D088 2B84040C */  jal        func_801210AC
    /* 3B48C 8012D08C 00000000 */   nop
    /* 3B490 8012D090 1A80023C */  lui        $v0, %hi(D_80199190)
    /* 3B494 8012D094 90914224 */  addiu      $v0, $v0, %lo(D_80199190)
    /* 3B498 8012D098 DC004494 */  lhu        $a0, 0xDC($v0)
    /* 3B49C 8012D09C 40DD030C */  jal        func_800F7500
    /* 3B4A0 8012D0A0 00000000 */   nop
    /* 3B4A4 8012D0A4 DD7E040C */  jal        func_8011FB74
    /* 3B4A8 8012D0A8 00000000 */   nop
    /* 3B4AC 8012D0AC 40DD030C */  jal        func_800F7500
    /* 3B4B0 8012D0B0 9A020424 */   addiu     $a0, $zero, 0x29A
    /* 3B4B4 8012D0B4 8CD9030C */  jal        func_800F6630
    /* 3B4B8 8012D0B8 ED000424 */   addiu     $a0, $zero, 0xED
    /* 3B4BC 8012D0BC 8382040C */  jal        func_80120A0C
    /* 3B4C0 8012D0C0 00000000 */   nop
    /* 3B4C4 8012D0C4 90D8030C */  jal        func_800F6240
    /* 3B4C8 8012D0C8 C81B0424 */   addiu     $a0, $zero, 0x1BC8
    /* 3B4CC 8012D0CC F7E4030C */  jal        func_800F93DC
    /* 3B4D0 8012D0D0 00000000 */   nop
    /* 3B4D4 8012D0D4 77DC030C */  jal        func_800F71DC
    /* 3B4D8 8012D0D8 9A030424 */   addiu     $a0, $zero, 0x39A
    /* 3B4DC 8012D0DC ECBE040C */  jal        func_8012FBB0
    /* 3B4E0 8012D0E0 00000000 */   nop
    /* 3B4E4 8012D0E4 DDE3030C */  jal        func_800F8F74
    /* 3B4E8 8012D0E8 C81B0424 */   addiu     $a0, $zero, 0x1BC8
    /* 3B4EC 8012D0EC DB82040C */  jal        func_80120B6C
    /* 3B4F0 8012D0F0 00000000 */   nop
    /* 3B4F4 8012D0F4 5CA4050C */  jal        func_80169170
    /* 3B4F8 8012D0F8 00000000 */   nop
    /* 3B4FC 8012D0FC 2A90040C */  jal        func_801240A8
    /* 3B500 8012D100 00000000 */   nop
    /* 3B504 8012D104 FC98040C */  jal        func_801263F0
    /* 3B508 8012D108 00000000 */   nop
    /* 3B50C 8012D10C 91E5030C */  jal        func_800F9644
    /* 3B510 8012D110 10000424 */   addiu     $a0, $zero, 0x10
  .L8012D114:
    /* 3B514 8012D114 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B518 8012D118 00000000 */  nop
    /* 3B51C 8012D11C 0800E003 */  jr         $ra
    /* 3B520 8012D120 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012CF18
