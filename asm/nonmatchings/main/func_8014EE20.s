nonmatching func_8014EE20, 0x29C

glabel func_8014EE20
    /* 5D220 8014EE20 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D224 8014EE24 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D228 8014EE28 59D9030C */  jal        func_800F6564
    /* 5D22C 8014EE2C 2EF40434 */   ori       $a0, $zero, 0xF42E
    /* 5D230 8014EE30 0DD9030C */  jal        func_800F6434
    /* 5D234 8014EE34 02000424 */   addiu     $a0, $zero, 0x2
    /* 5D238 8014EE38 9C004014 */  bnez       $v0, .L8014F0AC
    /* 5D23C 8014EE3C 00000000 */   nop
    /* 5D240 8014EE40 59D9030C */  jal        func_800F6564
    /* 5D244 8014EE44 79F20434 */   ori       $a0, $zero, 0xF279
    /* 5D248 8014EE48 0DD9030C */  jal        func_800F6434
    /* 5D24C 8014EE4C 02020424 */   addiu     $a0, $zero, 0x202
    /* 5D250 8014EE50 67004014 */  bnez       $v0, .L8014EFF0
    /* 5D254 8014EE54 00000000 */   nop
    /* 5D258 8014EE58 59D9030C */  jal        func_800F6564
    /* 5D25C 8014EE5C 83F20434 */   ori       $a0, $zero, 0xF283
    /* 5D260 8014EE60 0DD9030C */  jal        func_800F6434
    /* 5D264 8014EE64 02000424 */   addiu     $a0, $zero, 0x2
    /* 5D268 8014EE68 90004014 */  bnez       $v0, .L8014F0AC
    /* 5D26C 8014EE6C 00000000 */   nop
    /* 5D270 8014EE70 77DC030C */  jal        func_800F71DC
    /* 5D274 8014EE74 21200000 */   addu      $a0, $zero, $zero
    /* 5D278 8014EE78 59D9030C */  jal        func_800F6564
    /* 5D27C 8014EE7C 84F20434 */   ori       $a0, $zero, 0xF284
    /* 5D280 8014EE80 93E0030C */  jal        func_800F824C
    /* 5D284 8014EE84 0E000424 */   addiu     $a0, $zero, 0xE
  .L8014EE88:
    /* 5D288 8014EE88 0FCF030C */  jal        func_800F3C3C
    /* 5D28C 8014EE8C 0E000424 */   addiu     $a0, $zero, 0xE
    /* 5D290 8014EE90 CAD3030C */  jal        func_800F4F28
    /* 5D294 8014EE94 21204000 */   addu      $a0, $v0, $zero
    /* 5D298 8014EE98 EBD3030C */  jal        func_800F4FAC
    /* 5D29C 8014EE9C 01010424 */   addiu     $a0, $zero, 0x101
    /* 5D2A0 8014EEA0 49004014 */  bnez       $v0, .L8014EFC8
    /* 5D2A4 8014EEA4 20000424 */   addiu     $a0, $zero, 0x20
    /* 5D2A8 8014EEA8 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 5D2AC 8014EEAC 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 5D2B0 8014EEB0 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 5D2B4 8014EEB4 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 5D2B8 8014EEB8 00004390 */  lbu        $v1, 0x0($v0)
    /* 5D2BC 8014EEBC 91E5030C */  jal        func_800F9644
    /* 5D2C0 8014EEC0 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5D2C4 8014EEC4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5D2C8 8014EEC8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5D2CC 8014EECC 00000000 */  nop
    /* 5D2D0 8014EED0 00006294 */  lhu        $v0, 0x0($v1)
    /* 5D2D4 8014EED4 00000000 */  nop
    /* 5D2D8 8014EED8 40110200 */  sll        $v0, $v0, 5
    /* 5D2DC 8014EEDC 000062A4 */  sh         $v0, 0x0($v1)
    /* 5D2E0 8014EEE0 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 5D2E4 8014EEE4 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 5D2E8 8014EEE8 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5D2EC 8014EEEC 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5D2F0 8014EEF0 00008294 */  lhu        $v0, 0x0($a0)
    /* 5D2F4 8014EEF4 8EEE0434 */  ori        $a0, $zero, 0xEE8E
    /* 5D2F8 8014EEF8 7ADB030C */  jal        func_800F6DE8
    /* 5D2FC 8014EEFC 000062A4 */   sh        $v0, 0x0($v1)
    /* 5D300 8014EF00 8BE4030C */  jal        func_800F922C
    /* 5D304 8014EF04 00000000 */   nop
    /* 5D308 8014EF08 E7E4030C */  jal        func_800F939C
    /* 5D30C 8014EF0C 00000000 */   nop
    /* 5D310 8014EF10 56D9030C */  jal        func_800F6558
    /* 5D314 8014EF14 0D000424 */   addiu     $a0, $zero, 0xD
    /* 5D318 8014EF18 9DE0030C */  jal        func_800F8274
    /* 5D31C 8014EF1C 10000424 */   addiu     $a0, $zero, 0x10
    /* 5D320 8014EF20 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5D324 8014EF24 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5D328 8014EF28 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 5D32C 8014EF2C 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 5D330 8014EF30 00006294 */  lhu        $v0, 0x0($v1)
    /* 5D334 8014EF34 04D5030C */  jal        func_800F5410
    /* 5D338 8014EF38 000082A4 */   sh        $v0, 0x0($a0)
    /* 5D33C 8014EF3C 19D0030C */  jal        func_800F4064
    /* 5D340 8014EF40 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 5D344 8014EF44 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5D348 8014EF48 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5D34C 8014EF4C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 5D350 8014EF50 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 5D354 8014EF54 00006294 */  lhu        $v0, 0x0($v1)
    /* 5D358 8014EF58 00000000 */  nop
    /* 5D35C 8014EF5C 000082A4 */  sh         $v0, 0x0($a0)
  .L8014EF60:
    /* 5D360 8014EF60 7ADB030C */  jal        func_800F6DE8
    /* 5D364 8014EF64 70EE0434 */   ori       $a0, $zero, 0xEE70
    /* 5D368 8014EF68 75E2030C */  jal        func_800F89D4
    /* 5D36C 8014EF6C 72EE0434 */   ori       $a0, $zero, 0xEE72
    /* 5D370 8014EF70 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5D374 8014EF74 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5D378 8014EF78 00000000 */  nop
    /* 5D37C 8014EF7C 00006294 */  lhu        $v0, 0x0($v1)
    /* 5D380 8014EF80 10000424 */  addiu      $a0, $zero, 0x10
    /* 5D384 8014EF84 FEFF4224 */  addiu      $v0, $v0, -0x2
    /* 5D388 8014EF88 75D7030C */  jal        func_800F5DD4
    /* 5D38C 8014EF8C 000062A4 */   sh        $v0, 0x0($v1)
    /* 5D390 8014EF90 19D7030C */  jal        func_800F5C64
    /* 5D394 8014EF94 02020424 */   addiu     $a0, $zero, 0x202
    /* 5D398 8014EF98 F1FF4014 */  bnez       $v0, .L8014EF60
    /* 5D39C 8014EF9C 00000000 */   nop
    /* 5D3A0 8014EFA0 83E5030C */  jal        func_800F960C
    /* 5D3A4 8014EFA4 00000000 */   nop
    /* 5D3A8 8014EFA8 04E5030C */  jal        func_800F9410
    /* 5D3AC 8014EFAC 00000000 */   nop
    /* 5D3B0 8014EFB0 75E2030C */  jal        func_800F89D4
    /* 5D3B4 8014EFB4 74EE0434 */   ori       $a0, $zero, 0xEE74
    /* 5D3B8 8014EFB8 C7E5030C */  jal        func_800F971C
    /* 5D3BC 8014EFBC 00000000 */   nop
    /* 5D3C0 8014EFC0 98E5030C */  jal        func_800F9660
    /* 5D3C4 8014EFC4 20000424 */   addiu     $a0, $zero, 0x20
  .L8014EFC8:
    /* 5D3C8 8014EFC8 D9D8030C */  jal        func_800F6364
    /* 5D3CC 8014EFCC 00000000 */   nop
    /* 5D3D0 8014EFD0 56D6030C */  jal        func_800F5958
    /* 5D3D4 8014EFD4 05000424 */   addiu     $a0, $zero, 0x5
    /* 5D3D8 8014EFD8 F5D4030C */  jal        func_800F53D4
    /* 5D3DC 8014EFDC 00000000 */   nop
    /* 5D3E0 8014EFE0 A9FF4010 */  beqz       $v0, .L8014EE88
    /* 5D3E4 8014EFE4 00000000 */   nop
    /* 5D3E8 8014EFE8 2B3C0508 */  j          .L8014F0AC
    /* 5D3EC 8014EFEC 00000000 */   nop
  .L8014EFF0:
    /* 5D3F0 8014EFF0 59D9030C */  jal        func_800F6564
    /* 5D3F4 8014EFF4 81F20434 */   ori       $a0, $zero, 0xF281
    /* 5D3F8 8014EFF8 5DD5030C */  jal        func_800F5574
    /* 5D3FC 8014EFFC 03000424 */   addiu     $a0, $zero, 0x3
    /* 5D400 8014F000 F5D4030C */  jal        func_800F53D4
    /* 5D404 8014F004 00000000 */   nop
    /* 5D408 8014F008 28004010 */  beqz       $v0, .L8014F0AC
    /* 5D40C 8014F00C 00000000 */   nop
    /* 5D410 8014F010 91E5030C */  jal        func_800F9644
    /* 5D414 8014F014 20000424 */   addiu     $a0, $zero, 0x20
    /* 5D418 8014F018 63D9030C */  jal        func_800F658C
    /* 5D41C 8014F01C 3EEE0434 */   ori       $a0, $zero, 0xEE3E
    /* 5D420 8014F020 8BE4030C */  jal        func_800F922C
    /* 5D424 8014F024 00000000 */   nop
    /* 5D428 8014F028 77DC030C */  jal        func_800F71DC
    /* 5D42C 8014F02C 0C000424 */   addiu     $a0, $zero, 0xC
  .L8014F030:
    /* 5D430 8014F030 F8DA030C */  jal        func_800F6BE0
    /* 5D434 8014F034 30EE0434 */   ori       $a0, $zero, 0xEE30
    /* 5D438 8014F038 F7E1030C */  jal        func_800F87DC
    /* 5D43C 8014F03C 32EE0434 */   ori       $a0, $zero, 0xEE32
    /* 5D440 8014F040 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5D444 8014F044 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5D448 8014F048 00000000 */  nop
    /* 5D44C 8014F04C 00006294 */  lhu        $v0, 0x0($v1)
    /* 5D450 8014F050 00000000 */  nop
    /* 5D454 8014F054 FEFF4224 */  addiu      $v0, $v0, -0x2
    /* 5D458 8014F058 000062A4 */  sh         $v0, 0x0($v1)
    /* 5D45C 8014F05C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5D460 8014F060 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5D464 8014F064 1A80033C */  lui        $v1, %hi(D_8019ED50)
    /* 5D468 8014F068 50ED638C */  lw         $v1, %lo(D_8019ED50)($v1)
    /* 5D46C 8014F06C 00008294 */  lhu        $v0, 0x0($a0)
    /* 5D470 8014F070 02020424 */  addiu      $a0, $zero, 0x202
    /* 5D474 8014F074 19D7030C */  jal        func_800F5C64
    /* 5D478 8014F078 000062AC */   sw        $v0, 0x0($v1)
    /* 5D47C 8014F07C ECFF4014 */  bnez       $v0, .L8014F030
    /* 5D480 8014F080 00000000 */   nop
    /* 5D484 8014F084 04E5030C */  jal        func_800F9410
    /* 5D488 8014F088 00000000 */   nop
    /* 5D48C 8014F08C 6CE0030C */  jal        func_800F81B0
    /* 5D490 8014F090 32EE0434 */   ori       $a0, $zero, 0xEE32
    /* 5D494 8014F094 6CE0030C */  jal        func_800F81B0
    /* 5D498 8014F098 42EE0434 */   ori       $a0, $zero, 0xEE42
    /* 5D49C 8014F09C C7E5030C */  jal        func_800F971C
    /* 5D4A0 8014F0A0 00000000 */   nop
    /* 5D4A4 8014F0A4 98E5030C */  jal        func_800F9660
    /* 5D4A8 8014F0A8 20000424 */   addiu     $a0, $zero, 0x20
  .L8014F0AC:
    /* 5D4AC 8014F0AC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D4B0 8014F0B0 00000000 */  nop
    /* 5D4B4 8014F0B4 0800E003 */  jr         $ra
    /* 5D4B8 8014F0B8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014EE20
