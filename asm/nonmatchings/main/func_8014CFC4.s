nonmatching func_8014CFC4, 0xBC

glabel func_8014CFC4
    /* 5B3C4 8014CFC4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B3C8 8014CFC8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B3CC 8014CFCC 59D9030C */  jal        func_800F6564
    /* 5B3D0 8014CFD0 D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 5B3D4 8014CFD4 5DD5030C */  jal        func_800F5574
    /* 5B3D8 8014CFD8 02000424 */   addiu     $a0, $zero, 0x2
    /* 5B3DC 8014CFDC F5D4030C */  jal        func_800F53D4
    /* 5B3E0 8014CFE0 00000000 */   nop
    /* 5B3E4 8014CFE4 07004014 */  bnez       $v0, .L8014D004
    /* 5B3E8 8014CFE8 00000000 */   nop
    /* 5B3EC 8014CFEC 5DD5030C */  jal        func_800F5574
    /* 5B3F0 8014CFF0 03000424 */   addiu     $a0, $zero, 0x3
    /* 5B3F4 8014CFF4 F5D4030C */  jal        func_800F53D4
    /* 5B3F8 8014CFF8 00000000 */   nop
    /* 5B3FC 8014CFFC 1C004010 */  beqz       $v0, .L8014D070
    /* 5B400 8014D000 00000000 */   nop
  .L8014D004:
    /* 5B404 8014D004 53D9030C */  jal        func_800F654C
    /* 5B408 8014D008 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5B40C 8014D00C 62E0030C */  jal        func_800F8188
    /* 5B410 8014D010 7AF20434 */   ori       $a0, $zero, 0xF27A
    /* 5B414 8014D014 C7E5030C */  jal        func_800F971C
    /* 5B418 8014D018 00000000 */   nop
    /* 5B41C 8014D01C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5B420 8014D020 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5B424 8014D024 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 5B428 8014D028 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 5B42C 8014D02C 00004394 */  lhu        $v1, 0x0($v0)
    /* 5B430 8014D030 00000000 */  nop
    /* 5B434 8014D034 000083A4 */  sh         $v1, 0x0($a0)
  .L8014D038:
    /* 5B438 8014D038 58E2030C */  jal        func_800F8960
    /* 5B43C 8014D03C 51F20434 */   ori       $a0, $zero, 0xF251
    /* 5B440 8014D040 EFD8030C */  jal        func_800F63BC
    /* 5B444 8014D044 00000000 */   nop
    /* 5B448 8014D048 A4D6030C */  jal        func_800F5A90
    /* 5B44C 8014D04C 10000424 */   addiu     $a0, $zero, 0x10
    /* 5B450 8014D050 F5D4030C */  jal        func_800F53D4
    /* 5B454 8014D054 00000000 */   nop
    /* 5B458 8014D058 F7FF4010 */  beqz       $v0, .L8014D038
    /* 5B45C 8014D05C 00000000 */   nop
    /* 5B460 8014D060 59D9030C */  jal        func_800F6564
    /* 5B464 8014D064 A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 5B468 8014D068 0939050C */  jal        func_8014E424
    /* 5B46C 8014D06C 00000000 */   nop
  .L8014D070:
    /* 5B470 8014D070 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B474 8014D074 00000000 */  nop
    /* 5B478 8014D078 0800E003 */  jr         $ra
    /* 5B47C 8014D07C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014CFC4
