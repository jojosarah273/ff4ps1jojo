nonmatching func_8015CF18, 0x1A0

glabel func_8015CF18
    /* 6B318 8015CF18 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B31C 8015CF1C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B320 8015CF20 C7E5030C */  jal        func_800F971C
    /* 6B324 8015CF24 00000000 */   nop
    /* 6B328 8015CF28 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6B32C 8015CF2C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6B330 8015CF30 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6B334 8015CF34 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6B338 8015CF38 00006294 */  lhu        $v0, 0x0($v1)
    /* 6B33C 8015CF3C 00000000 */  nop
    /* 6B340 8015CF40 000082A4 */  sh         $v0, 0x0($a0)
    /* 6B344 8015CF44 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6B348 8015CF48 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6B34C 8015CF4C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 6B350 8015CF50 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 6B354 8015CF54 00006294 */  lhu        $v0, 0x0($v1)
    /* 6B358 8015CF58 00000000 */  nop
    /* 6B35C 8015CF5C 000082A4 */  sh         $v0, 0x0($a0)
  .L8015CF60:
    /* 6B360 8015CF60 DADA030C */  jal        func_800F6B68
    /* 6B364 8015CF64 1B320424 */   addiu     $a0, $zero, 0x321B
    /* 6B368 8015CF68 5DD5030C */  jal        func_800F5574
    /* 6B36C 8015CF6C CE000424 */   addiu     $a0, $zero, 0xCE
    /* 6B370 8015CF70 F5D4030C */  jal        func_800F53D4
    /* 6B374 8015CF74 00000000 */   nop
    /* 6B378 8015CF78 13004014 */  bnez       $v0, .L8015CFC8
    /* 6B37C 8015CF7C 00000000 */   nop
    /* 6B380 8015CF80 EFD8030C */  jal        func_800F63BC
    /* 6B384 8015CF84 00000000 */   nop
    /* 6B388 8015CF88 D9D8030C */  jal        func_800F6364
    /* 6B38C 8015CF8C 00000000 */   nop
    /* 6B390 8015CF90 D9D8030C */  jal        func_800F6364
    /* 6B394 8015CF94 00000000 */   nop
    /* 6B398 8015CF98 D9D8030C */  jal        func_800F6364
    /* 6B39C 8015CF9C 00000000 */   nop
    /* 6B3A0 8015CFA0 D9D8030C */  jal        func_800F6364
    /* 6B3A4 8015CFA4 00000000 */   nop
    /* 6B3A8 8015CFA8 56D6030C */  jal        func_800F5958
    /* 6B3AC 8015CFAC C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6B3B0 8015CFB0 F5D4030C */  jal        func_800F53D4
    /* 6B3B4 8015CFB4 00000000 */   nop
    /* 6B3B8 8015CFB8 E9FF4010 */  beqz       $v0, .L8015CF60
    /* 6B3BC 8015CFBC 00000000 */   nop
    /* 6B3C0 8015CFC0 2A740508 */  j          .L8015D0A8
    /* 6B3C4 8015CFC4 00000000 */   nop
  .L8015CFC8:
    /* 6B3C8 8015CFC8 DADA030C */  jal        func_800F6B68
    /* 6B3CC 8015CFCC 1C320424 */   addiu     $a0, $zero, 0x321C
    /* 6B3D0 8015CFD0 5DD5030C */  jal        func_800F5574
    /* 6B3D4 8015CFD4 01000424 */   addiu     $a0, $zero, 0x1
    /* 6B3D8 8015CFD8 F0D4030C */  jal        func_800F53C0
    /* 6B3DC 8015CFDC 00000000 */   nop
    /* 6B3E0 8015CFE0 31004010 */  beqz       $v0, .L8015D0A8
    /* 6B3E4 8015CFE4 00000000 */   nop
    /* 6B3E8 8015CFE8 20D5030C */  jal        func_800F5480
    /* 6B3EC 8015CFEC 00000000 */   nop
    /* 6B3F0 8015CFF0 DADA030C */  jal        func_800F6B68
    /* 6B3F4 8015CFF4 1C320424 */   addiu     $a0, $zero, 0x321C
    /* 6B3F8 8015CFF8 80E4030C */  jal        func_800F9200
    /* 6B3FC 8015CFFC 00000000 */   nop
    /* 6B400 8015D000 CCE4030C */  jal        func_800F9330
    /* 6B404 8015D004 00000000 */   nop
    /* 6B408 8015D008 16E0030C */  jal        func_800F8058
    /* 6B40C 8015D00C 01000424 */   addiu     $a0, $zero, 0x1
    /* 6B410 8015D010 DAE1030C */  jal        func_800F8768
    /* 6B414 8015D014 1C320424 */   addiu     $a0, $zero, 0x321C
    /* 6B418 8015D018 F5D4030C */  jal        func_800F53D4
    /* 6B41C 8015D01C 00000000 */   nop
    /* 6B420 8015D020 0F004010 */  beqz       $v0, .L8015D060
    /* 6B424 8015D024 00000000 */   nop
    /* 6B428 8015D028 3BE4030C */  jal        func_800F90EC
    /* 6B42C 8015D02C 1C320424 */   addiu     $a0, $zero, 0x321C
    /* 6B430 8015D030 3BE4030C */  jal        func_800F90EC
    /* 6B434 8015D034 1B320424 */   addiu     $a0, $zero, 0x321B
    /* 6B438 8015D038 DADA030C */  jal        func_800F6B68
    /* 6B43C 8015D03C 1A320424 */   addiu     $a0, $zero, 0x321A
    /* 6B440 8015D040 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6B444 8015D044 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6B448 8015D048 00000000 */  nop
    /* 6B44C 8015D04C 00006290 */  lbu        $v0, 0x0($v1)
    /* 6B450 8015D050 1A320424 */  addiu      $a0, $zero, 0x321A
    /* 6B454 8015D054 80004234 */  ori        $v0, $v0, 0x80
    /* 6B458 8015D058 DAE1030C */  jal        func_800F8768
    /* 6B45C 8015D05C 000062A0 */   sb        $v0, 0x0($v1)
  .L8015D060:
    /* 6B460 8015D060 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 6B464 8015D064 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 6B468 8015D068 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 6B46C 8015D06C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 6B470 8015D070 00004390 */  lbu        $v1, 0x0($v0)
    /* 6B474 8015D074 01000424 */  addiu      $a0, $zero, 0x1
    /* 6B478 8015D078 93E0030C */  jal        func_800F824C
    /* 6B47C 8015D07C 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 6B480 8015D080 53D9030C */  jal        func_800F654C
    /* 6B484 8015D084 06000424 */   addiu     $a0, $zero, 0x6
    /* 6B488 8015D088 0E43050C */  jal        func_80150C38
    /* 6B48C 8015D08C 00000000 */   nop
    /* 6B490 8015D090 68E5030C */  jal        func_800F95A0
    /* 6B494 8015D094 00000000 */   nop
    /* 6B498 8015D098 F7E4030C */  jal        func_800F93DC
    /* 6B49C 8015D09C 00000000 */   nop
    /* 6B4A0 8015D0A0 DAE1030C */  jal        func_800F8768
    /* 6B4A4 8015D0A4 1C320424 */   addiu     $a0, $zero, 0x321C
  .L8015D0A8:
    /* 6B4A8 8015D0A8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B4AC 8015D0AC 00000000 */  nop
    /* 6B4B0 8015D0B0 0800E003 */  jr         $ra
    /* 6B4B4 8015D0B4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015CF18
