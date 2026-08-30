nonmatching func_8016EF88, 0x9F4

glabel func_8016EF88
    /* 7D388 8016EF88 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7D38C 8016EF8C 1A80033C */  lui        $v1, %hi(D_8019A36C)
    /* 7D390 8016EF90 6CA36490 */  lbu        $a0, %lo(D_8019A36C)($v1)
    /* 7D394 8016EF94 01000224 */  addiu      $v0, $zero, 0x1
    /* 7D398 8016EF98 1400BFAF */  sw         $ra, 0x14($sp)
    /* 7D39C 8016EF9C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 7D3A0 8016EFA0 0C0082A3 */  sb         $v0, %gp_rel(D_8019ED08)($gp)
    /* 7D3A4 8016EFA4 1A80013C */  lui        $at, %hi(D_8019EE5C)
    /* 7D3A8 8016EFA8 5CEE20AC */  sw         $zero, %lo(D_8019EE5C)($at)
    /* 7D3AC 8016EFAC 0C008010 */  beqz       $a0, .L8016EFE0
    /* 7D3B0 8016EFB0 21300000 */   addu      $a2, $zero, $zero
    /* 7D3B4 8016EFB4 0680053C */  lui        $a1, (0x80068000 >> 16)
    /* 7D3B8 8016EFB8 0080A534 */  ori        $a1, $a1, (0x80068000 & 0xFFFF)
    /* 7D3BC 8016EFBC 6CA36724 */  addiu      $a3, $v1, %lo(D_8019A36C)
    /* 7D3C0 8016EFC0 2118C500 */  addu       $v1, $a2, $a1
  .L8016EFC4:
    /* 7D3C4 8016EFC4 0100C624 */  addiu      $a2, $a2, 0x1
    /* 7D3C8 8016EFC8 2110C700 */  addu       $v0, $a2, $a3
    /* 7D3CC 8016EFCC 367364A0 */  sb         $a0, 0x7336($v1)
    /* 7D3D0 8016EFD0 00004490 */  lbu        $a0, 0x0($v0)
    /* 7D3D4 8016EFD4 00000000 */  nop
    /* 7D3D8 8016EFD8 FAFF8014 */  bnez       $a0, .L8016EFC4
    /* 7D3DC 8016EFDC 2118C500 */   addu      $v1, $a2, $a1
  .L8016EFE0:
    /* 7D3E0 8016EFE0 0680023C */  lui        $v0, (0x80068000 >> 16)
    /* 7D3E4 8016EFE4 00804234 */  ori        $v0, $v0, (0x80068000 & 0xFFFF)
    /* 7D3E8 8016EFE8 2110C200 */  addu       $v0, $a2, $v0
    /* 7D3EC 8016EFEC B4AD050C */  jal        func_8016B6D0
    /* 7D3F0 8016EFF0 367340A0 */   sb        $zero, 0x7336($v0)
    /* 7D3F4 8016EFF4 94AD050C */  jal        func_8016B650
    /* 7D3F8 8016EFF8 00000000 */   nop
    /* 7D3FC 8016EFFC A5AB050C */  jal        func_8016AE94
    /* 7D400 8016F000 00000000 */   nop
    /* 7D404 8016F004 D6A7050C */  jal        func_80169F58
    /* 7D408 8016F008 00000000 */   nop
    /* 7D40C 8016F00C 85A5050C */  jal        func_80169614
    /* 7D410 8016F010 00000000 */   nop
    /* 7D414 8016F014 29A5050C */  jal        func_801694A4
    /* 7D418 8016F018 00000000 */   nop
    /* 7D41C 8016F01C 86A6050C */  jal        func_80169A18
    /* 7D420 8016F020 00000000 */   nop
    /* 7D424 8016F024 EEE3030C */  jal        func_800F8FB8
    /* 7D428 8016F028 95000424 */   addiu     $a0, $zero, 0x95
    /* 7D42C 8016F02C 77DC030C */  jal        func_800F71DC
    /* 7D430 8016F030 00800434 */   ori       $a0, $zero, 0x8000
    /* 7D434 8016F034 5BE3030C */  jal        func_800F8D6C
    /* 7D438 8016F038 57000424 */   addiu     $a0, $zero, 0x57
    /* 7D43C 8016F03C C7E5030C */  jal        func_800F971C
    /* 7D440 8016F040 00000000 */   nop
    /* 7D444 8016F044 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7D448 8016F048 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7D44C 8016F04C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7D450 8016F050 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7D454 8016F054 00004394 */  lhu        $v1, 0x0($v0)
    /* 7D458 8016F058 66000424 */  addiu      $a0, $zero, 0x66
    /* 7D45C 8016F05C 5BE3030C */  jal        func_800F8D6C
    /* 7D460 8016F060 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7D464 8016F064 8CD9030C */  jal        func_800F6630
    /* 7D468 8016F068 64000424 */   addiu     $a0, $zero, 0x64
    /* 7D46C 8016F06C 5DD5030C */  jal        func_800F5574
    /* 7D470 8016F070 01000424 */   addiu     $a0, $zero, 0x1
    /* 7D474 8016F074 F5D4030C */  jal        func_800F53D4
    /* 7D478 8016F078 00000000 */   nop
    /* 7D47C 8016F07C 17004014 */  bnez       $v0, .L8016F0DC
    /* 7D480 8016F080 00000000 */   nop
    /* 7D484 8016F084 5DD5030C */  jal        func_800F5574
    /* 7D488 8016F088 02000424 */   addiu     $a0, $zero, 0x2
    /* 7D48C 8016F08C F5D4030C */  jal        func_800F53D4
    /* 7D490 8016F090 00000000 */   nop
    /* 7D494 8016F094 07004014 */  bnez       $v0, .L8016F0B4
    /* 7D498 8016F098 00000000 */   nop
    /* 7D49C 8016F09C 82A8050C */  jal        func_8016A208
    /* 7D4A0 8016F0A0 00000000 */   nop
    /* 7D4A4 8016F0A4 C5AA050C */  jal        func_8016AB14
    /* 7D4A8 8016F0A8 00000000 */   nop
    /* 7D4AC 8016F0AC 37BC0508 */  j          .L8016F0DC
    /* 7D4B0 8016F0B0 00000000 */   nop
  .L8016F0B4:
    /* 7D4B4 8016F0B4 77DC030C */  jal        func_800F71DC
    /* 7D4B8 8016F0B8 50000424 */   addiu     $a0, $zero, 0x50
    /* 7D4BC 8016F0BC 5BE3030C */  jal        func_800F8D6C
    /* 7D4C0 8016F0C0 96000424 */   addiu     $a0, $zero, 0x96
    /* 7D4C4 8016F0C4 20A8050C */  jal        func_8016A080
    /* 7D4C8 8016F0C8 00000000 */   nop
    /* 7D4CC 8016F0CC 38B7050C */  jal        func_8016DCE0
    /* 7D4D0 8016F0D0 00000000 */   nop
    /* 7D4D4 8016F0D4 C5AA050C */  jal        func_8016AB14
    /* 7D4D8 8016F0D8 00000000 */   nop
  .L8016F0DC:
    /* 7D4DC 8016F0DC DDE3030C */  jal        func_800F8F74
    /* 7D4E0 8016F0E0 1F7D0424 */   addiu     $a0, $zero, 0x7D1F
    /* 7D4E4 8016F0E4 DDE3030C */  jal        func_800F8F74
    /* 7D4E8 8016F0E8 207D0424 */   addiu     $a0, $zero, 0x7D20
    /* 7D4EC 8016F0EC DDE3030C */  jal        func_800F8F74
    /* 7D4F0 8016F0F0 03330424 */   addiu     $a0, $zero, 0x3303
    /* 7D4F4 8016F0F4 AFD8030C */  jal        func_800F62BC
    /* 7D4F8 8016F0F8 63000424 */   addiu     $a0, $zero, 0x63
    /* 7D4FC 8016F0FC 53D9030C */  jal        func_800F654C
    /* 7D500 8016F100 11000424 */   addiu     $a0, $zero, 0x11
    /* 7D504 8016F104 62E0030C */  jal        func_800F8188
    /* 7D508 8016F108 287D0424 */   addiu     $a0, $zero, 0x7D28
    /* 7D50C 8016F10C 7AE0030C */  jal        func_800F81E8
    /* 7D510 8016F110 2C210424 */   addiu     $a0, $zero, 0x212C
    /* 7D514 8016F114 53D9030C */  jal        func_800F654C
    /* 7D518 8016F118 81000424 */   addiu     $a0, $zero, 0x81
    /* 7D51C 8016F11C 7AE0030C */  jal        func_800F81E8
    /* 7D520 8016F120 00420424 */   addiu     $a0, $zero, 0x4200
    /* 7D524 8016F124 A4A4050C */  jal        func_80169290
    /* 7D528 8016F128 00000000 */   nop
    /* 7D52C 8016F12C C7E5030C */  jal        func_800F971C
    /* 7D530 8016F130 00000000 */   nop
    /* 7D534 8016F134 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7D538 8016F138 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7D53C 8016F13C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7D540 8016F140 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7D544 8016F144 00004394 */  lhu        $v1, 0x0($v0)
    /* 7D548 8016F148 68000424 */  addiu      $a0, $zero, 0x68
    /* 7D54C 8016F14C 40E3030C */  jal        func_800F8D00
    /* 7D550 8016F150 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8016F154:
    /* 7D554 8016F154 D1AE050C */  jal        func_8016BB44
    /* 7D558 8016F158 00000000 */   nop
    /* 7D55C 8016F15C 84DC030C */  jal        func_800F7210
    /* 7D560 8016F160 68000424 */   addiu     $a0, $zero, 0x68
    /* 7D564 8016F164 D9D8030C */  jal        func_800F6364
    /* 7D568 8016F168 00000000 */   nop
    /* 7D56C 8016F16C 40E3030C */  jal        func_800F8D00
    /* 7D570 8016F170 68000424 */   addiu     $a0, $zero, 0x68
    /* 7D574 8016F174 C1CE030C */  jal        func_800F3B04
    /* 7D578 8016F178 6A000424 */   addiu     $a0, $zero, 0x6A
    /* 7D57C 8016F17C ABD5030C */  jal        func_800F56AC
    /* 7D580 8016F180 21204000 */   addu      $a0, $v0, $zero
    /* 7D584 8016F184 F0D4030C */  jal        func_800F53C0
    /* 7D588 8016F188 00000000 */   nop
    /* 7D58C 8016F18C F1FF4010 */  beqz       $v0, .L8016F154
    /* 7D590 8016F190 00000000 */   nop
    /* 7D594 8016F194 8CD9030C */  jal        func_800F6630
    /* 7D598 8016F198 64000424 */   addiu     $a0, $zero, 0x64
    /* 7D59C 8016F19C 5DD5030C */  jal        func_800F5574
    /* 7D5A0 8016F1A0 02000424 */   addiu     $a0, $zero, 0x2
    /* 7D5A4 8016F1A4 F5D4030C */  jal        func_800F53D4
    /* 7D5A8 8016F1A8 00000000 */   nop
    /* 7D5AC 8016F1AC CB014010 */  beqz       $v0, .L8016F8DC
    /* 7D5B0 8016F1B0 10000224 */   addiu     $v0, $zero, 0x10
    /* 7D5B4 8016F1B4 90D8030C */  jal        func_800F6240
    /* 7D5B8 8016F1B8 1F7D0424 */   addiu     $a0, $zero, 0x7D1F
    /* 7D5BC 8016F1BC 77DC030C */  jal        func_800F71DC
    /* 7D5C0 8016F1C0 00010424 */   addiu     $a0, $zero, 0x100
  .L8016F1C4:
    /* 7D5C4 8016F1C4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 7D5C8 8016F1C8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 7D5CC 8016F1CC 00000000 */  nop
    /* 7D5D0 8016F1D0 00004394 */  lhu        $v1, 0x0($v0)
    /* 7D5D4 8016F1D4 1A80013C */  lui        $at, %hi(D_8019EE58)
    /* 7D5D8 8016F1D8 58EE23AC */  sw         $v1, %lo(D_8019EE58)($at)
    /* 7D5DC 8016F1DC D1AE050C */  jal        func_8016BB44
    /* 7D5E0 8016F1E0 00000000 */   nop
    /* 7D5E4 8016F1E4 77AB050C */  jal        func_8016ADDC
    /* 7D5E8 8016F1E8 00000000 */   nop
    /* 7D5EC 8016F1EC 1A80033C */  lui        $v1, %hi(D_8019ED5C)
    /* 7D5F0 8016F1F0 5CED638C */  lw         $v1, %lo(D_8019ED5C)($v1)
    /* 7D5F4 8016F1F4 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 7D5F8 8016F1F8 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 7D5FC 8016F1FC 00006290 */  lbu        $v0, 0x0($v1)
    /* 7D600 8016F200 20D5030C */  jal        func_800F5480
    /* 7D604 8016F204 000082A0 */   sb        $v0, 0x0($a0)
    /* 7D608 8016F208 16E0030C */  jal        func_800F8058
    /* 7D60C 8016F20C 08000424 */   addiu     $a0, $zero, 0x8
    /* 7D610 8016F210 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7D614 8016F214 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7D618 8016F218 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7D61C 8016F21C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7D620 8016F220 00004394 */  lhu        $v1, 0x0($v0)
    /* 7D624 8016F224 78000424 */  addiu      $a0, $zero, 0x78
    /* 7D628 8016F228 56D6030C */  jal        func_800F5958
    /* 7D62C 8016F22C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7D630 8016F230 F5D4030C */  jal        func_800F53D4
    /* 7D634 8016F234 00000000 */   nop
    /* 7D638 8016F238 E2FF4010 */  beqz       $v0, .L8016F1C4
    /* 7D63C 8016F23C 00000000 */   nop
    /* 7D640 8016F240 C7E5030C */  jal        func_800F971C
    /* 7D644 8016F244 7F001024 */   addiu     $s0, $zero, 0x7F
    /* 7D648 8016F248 9C000424 */  addiu      $a0, $zero, 0x9C
    /* 7D64C 8016F24C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7D650 8016F250 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7D654 8016F254 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7D658 8016F258 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7D65C 8016F25C 00004394 */  lhu        $v1, 0x0($v0)
    /* 7D660 8016F260 5BE3030C */  jal        func_800F8D6C
    /* 7D664 8016F264 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7D668 8016F268 77DC030C */  jal        func_800F71DC
    /* 7D66C 8016F26C 01000424 */   addiu     $a0, $zero, 0x1
    /* 7D670 8016F270 21C0050C */  jal        func_80170084
    /* 7D674 8016F274 00000000 */   nop
    /* 7D678 8016F278 77DC030C */  jal        func_800F71DC
    /* 7D67C 8016F27C 00010424 */   addiu     $a0, $zero, 0x100
    /* 7D680 8016F280 5BE3030C */  jal        func_800F8D6C
    /* 7D684 8016F284 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 7D688 8016F288 C7E5030C */  jal        func_800F971C
    /* 7D68C 8016F28C 00000000 */   nop
    /* 7D690 8016F290 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7D694 8016F294 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7D698 8016F298 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7D69C 8016F29C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7D6A0 8016F2A0 00004394 */  lhu        $v1, 0x0($v0)
    /* 7D6A4 8016F2A4 9A000424 */  addiu      $a0, $zero, 0x9A
    /* 7D6A8 8016F2A8 5BE3030C */  jal        func_800F8D6C
    /* 7D6AC 8016F2AC 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8016F2B0:
    /* 7D6B0 8016F2B0 1A80023C */  lui        $v0, %hi(D_8019EE58)
    /* 7D6B4 8016F2B4 58EE428C */  lw         $v0, %lo(D_8019EE58)($v0)
    /* 7D6B8 8016F2B8 1A80033C */  lui        $v1, %hi(D_8019EE5C)
    /* 7D6BC 8016F2BC 5CEE638C */  lw         $v1, %lo(D_8019EE5C)($v1)
    /* 7D6C0 8016F2C0 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 7D6C4 8016F2C4 BAFF6324 */  addiu      $v1, $v1, -0x46
    /* 7D6C8 8016F2C8 1A80013C */  lui        $at, %hi(D_8019EE58)
    /* 7D6CC 8016F2CC 58EE22AC */  sw         $v0, %lo(D_8019EE58)($at)
    /* 7D6D0 8016F2D0 1A80013C */  lui        $at, %hi(D_8019EE5C)
    /* 7D6D4 8016F2D4 5CEE23AC */  sw         $v1, %lo(D_8019EE5C)($at)
    /* 7D6D8 8016F2D8 D1AE050C */  jal        func_8016BB44
    /* 7D6DC 8016F2DC 00000000 */   nop
    /* 7D6E0 8016F2E0 91E5030C */  jal        func_800F9644
    /* 7D6E4 8016F2E4 20000424 */   addiu     $a0, $zero, 0x20
    /* 7D6E8 8016F2E8 96D9030C */  jal        func_800F6658
    /* 7D6EC 8016F2EC 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 7D6F0 8016F2F0 20D5030C */  jal        func_800F5480
    /* 7D6F4 8016F2F4 00000000 */   nop
    /* 7D6F8 8016F2F8 34E0030C */  jal        func_800F80D0
    /* 7D6FC 8016F2FC 08000424 */   addiu     $a0, $zero, 0x8
    /* 7D700 8016F300 9DE0030C */  jal        func_800F8274
    /* 7D704 8016F304 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 7D708 8016F308 75D7030C */  jal        func_800F5DD4
    /* 7D70C 8016F30C 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 7D710 8016F310 75D7030C */  jal        func_800F5DD4
    /* 7D714 8016F314 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 7D718 8016F318 96D9030C */  jal        func_800F6658
    /* 7D71C 8016F31C 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 7D720 8016F320 9DE0030C */  jal        func_800F8274
    /* 7D724 8016F324 0E000424 */   addiu     $a0, $zero, 0xE
    /* 7D728 8016F328 96D9030C */  jal        func_800F6658
    /* 7D72C 8016F32C 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 7D730 8016F330 04D5030C */  jal        func_800F5410
    /* 7D734 8016F334 00000000 */   nop
    /* 7D738 8016F338 19D0030C */  jal        func_800F4064
    /* 7D73C 8016F33C 80000424 */   addiu     $a0, $zero, 0x80
    /* 7D740 8016F340 E5B6050C */  jal        func_8016DB94
    /* 7D744 8016F344 00000000 */   nop
    /* 7D748 8016F348 91E5030C */  jal        func_800F9644
    /* 7D74C 8016F34C 20000424 */   addiu     $a0, $zero, 0x20
    /* 7D750 8016F350 96D9030C */  jal        func_800F6658
    /* 7D754 8016F354 14000424 */   addiu     $a0, $zero, 0x14
    /* 7D758 8016F358 9DE0030C */  jal        func_800F8274
    /* 7D75C 8016F35C 21200000 */   addu      $a0, $zero, $zero
    /* 7D760 8016F360 9DE0030C */  jal        func_800F8274
    /* 7D764 8016F364 06000424 */   addiu     $a0, $zero, 0x6
    /* 7D768 8016F368 96D9030C */  jal        func_800F6658
    /* 7D76C 8016F36C 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 7D770 8016F370 9DE0030C */  jal        func_800F8274
    /* 7D774 8016F374 0E000424 */   addiu     $a0, $zero, 0xE
    /* 7D778 8016F378 96D9030C */  jal        func_800F6658
    /* 7D77C 8016F37C 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 7D780 8016F380 E5B6050C */  jal        func_8016DB94
    /* 7D784 8016F384 00000000 */   nop
    /* 7D788 8016F388 91E5030C */  jal        func_800F9644
    /* 7D78C 8016F38C 20000424 */   addiu     $a0, $zero, 0x20
    /* 7D790 8016F390 BCD8030C */  jal        func_800F62F0
    /* 7D794 8016F394 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 7D798 8016F398 96D9030C */  jal        func_800F6658
    /* 7D79C 8016F39C 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 7D7A0 8016F3A0 99D0030C */  jal        func_800F4264
    /* 7D7A4 8016F3A4 03000424 */   addiu     $a0, $zero, 0x3
    /* 7D7A8 8016F3A8 7AD0030C */  jal        func_800F41E8
    /* 7D7AC 8016F3AC 02020424 */   addiu     $a0, $zero, 0x202
    /* 7D7B0 8016F3B0 10004014 */  bnez       $v0, .L8016F3F4
    /* 7D7B4 8016F3B4 00000000 */   nop
    /* 7D7B8 8016F3B8 63D9030C */  jal        func_800F658C
    /* 7D7BC 8016F3BC 05210424 */   addiu     $a0, $zero, 0x2105
    /* 7D7C0 8016F3C0 3BD9030C */  jal        func_800F64EC
    /* 7D7C4 8016F3C4 02000424 */   addiu     $a0, $zero, 0x2
    /* 7D7C8 8016F3C8 0A004014 */  bnez       $v0, .L8016F3F4
    /* 7D7CC 8016F3CC 00000000 */   nop
    /* 7D7D0 8016F3D0 20D5030C */  jal        func_800F5480
    /* 7D7D4 8016F3D4 00000000 */   nop
    /* 7D7D8 8016F3D8 34E0030C */  jal        func_800F80D0
    /* 7D7DC 8016F3DC 21040424 */   addiu     $a0, $zero, 0x421
    /* 7D7E0 8016F3E0 6CE0030C */  jal        func_800F81B0
    /* 7D7E4 8016F3E4 05210424 */   addiu     $a0, $zero, 0x2105
    /* 7D7E8 8016F3E8 FFDC050C */  jal        func_801773FC
    /* 7D7EC 8016F3EC 21200002 */   addu      $a0, $s0, $zero
    /* 7D7F0 8016F3F0 FFFF1026 */  addiu      $s0, $s0, -0x1
  .L8016F3F4:
    /* 7D7F4 8016F3F4 96D9030C */  jal        func_800F6658
    /* 7D7F8 8016F3F8 14000424 */   addiu     $a0, $zero, 0x14
    /* 7D7FC 8016F3FC 9DE0030C */  jal        func_800F8274
    /* 7D800 8016F400 02000424 */   addiu     $a0, $zero, 0x2
    /* 7D804 8016F404 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7D808 8016F408 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7D80C 8016F40C 00000000 */  nop
    /* 7D810 8016F410 00006294 */  lhu        $v0, 0x0($v1)
    /* 7D814 8016F414 04000424 */  addiu      $a0, $zero, 0x4
    /* 7D818 8016F418 27100200 */  nor        $v0, $zero, $v0
    /* 7D81C 8016F41C 9DE0030C */  jal        func_800F8274
    /* 7D820 8016F420 000062A4 */   sh        $v0, 0x0($v1)
    /* 7D824 8016F424 2FC0050C */  jal        func_801700BC
    /* 7D828 8016F428 00000000 */   nop
    /* 7D82C 8016F42C 98E5030C */  jal        func_800F9660
    /* 7D830 8016F430 20000424 */   addiu     $a0, $zero, 0x20
    /* 7D834 8016F434 59D9030C */  jal        func_800F6564
    /* 7D838 8016F438 05210424 */   addiu     $a0, $zero, 0x2105
    /* 7D83C 8016F43C 0DD9030C */  jal        func_800F6434
    /* 7D840 8016F440 02020424 */   addiu     $a0, $zero, 0x202
    /* 7D844 8016F444 9AFF4014 */  bnez       $v0, .L8016F2B0
    /* 7D848 8016F448 00040224 */   addiu     $v0, $zero, 0x400
    /* 7D84C 8016F44C 1A80013C */  lui        $at, %hi(D_8019EE58)
    /* 7D850 8016F450 58EE22AC */  sw         $v0, %lo(D_8019EE58)($at)
    /* 7D854 8016F454 1A80013C */  lui        $at, %hi(D_8019EE5C)
    /* 7D858 8016F458 5CEE20AC */  sw         $zero, %lo(D_8019EE5C)($at)
    /* 7D85C 8016F45C D1AE050C */  jal        func_8016BB44
    /* 7D860 8016F460 00000000 */   nop
    /* 7D864 8016F464 53D9030C */  jal        func_800F654C
    /* 7D868 8016F468 10000424 */   addiu     $a0, $zero, 0x10
    /* 7D86C 8016F46C 62E0030C */  jal        func_800F8188
    /* 7D870 8016F470 287D0424 */   addiu     $a0, $zero, 0x7D28
    /* 7D874 8016F474 77DC030C */  jal        func_800F71DC
    /* 7D878 8016F478 FF7F0424 */   addiu     $a0, $zero, 0x7FFF
    /* 7D87C 8016F47C 40E3030C */  jal        func_800F8D00
    /* 7D880 8016F480 05210424 */   addiu     $a0, $zero, 0x2105
    /* 7D884 8016F484 77DC030C */  jal        func_800F71DC
    /* 7D888 8016F488 C00C0424 */   addiu     $a0, $zero, 0xCC0
    /* 7D88C 8016F48C 40E3030C */  jal        func_800F8D00
    /* 7D890 8016F490 07210424 */   addiu     $a0, $zero, 0x2107
    /* 7D894 8016F494 C7E5030C */  jal        func_800F971C
    /* 7D898 8016F498 00000000 */   nop
    /* 7D89C 8016F49C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7D8A0 8016F4A0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7D8A4 8016F4A4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7D8A8 8016F4A8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7D8AC 8016F4AC 00006294 */  lhu        $v0, 0x0($v1)
    /* 7D8B0 8016F4B0 D1AE050C */  jal        func_8016BB44
    /* 7D8B4 8016F4B4 000082A4 */   sh        $v0, 0x0($a0)
    /* 7D8B8 8016F4B8 C7E5030C */  jal        func_800F971C
    /* 7D8BC 8016F4BC 00000000 */   nop
  .L8016F4C0:
    /* 7D8C0 8016F4C0 DAE1030C */  jal        func_800F8768
    /* 7D8C4 8016F4C4 193D0424 */   addiu     $a0, $zero, 0x3D19
    /* 7D8C8 8016F4C8 D9D8030C */  jal        func_800F6364
    /* 7D8CC 8016F4CC 00000000 */   nop
    /* 7D8D0 8016F4D0 56D6030C */  jal        func_800F5958
    /* 7D8D4 8016F4D4 00100424 */   addiu     $a0, $zero, 0x1000
    /* 7D8D8 8016F4D8 F5D4030C */  jal        func_800F53D4
    /* 7D8DC 8016F4DC 00000000 */   nop
    /* 7D8E0 8016F4E0 F7FF4010 */  beqz       $v0, .L8016F4C0
    /* 7D8E4 8016F4E4 00000000 */   nop
    /* 7D8E8 8016F4E8 D1AE050C */  jal        func_8016BB44
    /* 7D8EC 8016F4EC 00000000 */   nop
    /* 7D8F0 8016F4F0 C7E5030C */  jal        func_800F971C
    /* 7D8F4 8016F4F4 00000000 */   nop
  .L8016F4F8:
    /* 7D8F8 8016F4F8 DAE1030C */  jal        func_800F8768
    /* 7D8FC 8016F4FC 193D0424 */   addiu     $a0, $zero, 0x3D19
    /* 7D900 8016F500 D9D8030C */  jal        func_800F6364
    /* 7D904 8016F504 00000000 */   nop
    /* 7D908 8016F508 56D6030C */  jal        func_800F5958
    /* 7D90C 8016F50C 00200424 */   addiu     $a0, $zero, 0x2000
    /* 7D910 8016F510 F5D4030C */  jal        func_800F53D4
    /* 7D914 8016F514 00000000 */   nop
    /* 7D918 8016F518 F7FF4010 */  beqz       $v0, .L8016F4F8
    /* 7D91C 8016F51C 00000000 */   nop
    /* 7D920 8016F520 D1AE050C */  jal        func_8016BB44
    /* 7D924 8016F524 00000000 */   nop
    /* 7D928 8016F528 C7E5030C */  jal        func_800F971C
    /* 7D92C 8016F52C 00000000 */   nop
  .L8016F530:
    /* 7D930 8016F530 DAE1030C */  jal        func_800F8768
    /* 7D934 8016F534 193D0424 */   addiu     $a0, $zero, 0x3D19
    /* 7D938 8016F538 D9D8030C */  jal        func_800F6364
    /* 7D93C 8016F53C 00000000 */   nop
    /* 7D940 8016F540 56D6030C */  jal        func_800F5958
    /* 7D944 8016F544 00300424 */   addiu     $a0, $zero, 0x3000
    /* 7D948 8016F548 F5D4030C */  jal        func_800F53D4
    /* 7D94C 8016F54C 00000000 */   nop
    /* 7D950 8016F550 F7FF4010 */  beqz       $v0, .L8016F530
    /* 7D954 8016F554 00000000 */   nop
    /* 7D958 8016F558 D1AE050C */  jal        func_8016BB44
    /* 7D95C 8016F55C 00000000 */   nop
    /* 7D960 8016F560 C7E5030C */  jal        func_800F971C
    /* 7D964 8016F564 00000000 */   nop
  .L8016F568:
    /* 7D968 8016F568 DAE1030C */  jal        func_800F8768
    /* 7D96C 8016F56C 193D0424 */   addiu     $a0, $zero, 0x3D19
    /* 7D970 8016F570 D9D8030C */  jal        func_800F6364
    /* 7D974 8016F574 00000000 */   nop
    /* 7D978 8016F578 56D6030C */  jal        func_800F5958
    /* 7D97C 8016F57C 00400424 */   addiu     $a0, $zero, 0x4000
    /* 7D980 8016F580 F5D4030C */  jal        func_800F53D4
    /* 7D984 8016F584 00000000 */   nop
    /* 7D988 8016F588 F7FF4010 */  beqz       $v0, .L8016F568
    /* 7D98C 8016F58C 00000000 */   nop
    /* 7D990 8016F590 53D9030C */  jal        func_800F654C
    /* 7D994 8016F594 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 7D998 8016F598 93E0030C */  jal        func_800F824C
    /* 7D99C 8016F59C 21200000 */   addu      $a0, $zero, $zero
    /* 7D9A0 8016F5A0 53D9030C */  jal        func_800F654C
    /* 7D9A4 8016F5A4 CC000424 */   addiu     $a0, $zero, 0xCC
    /* 7D9A8 8016F5A8 93E0030C */  jal        func_800F824C
    /* 7D9AC 8016F5AC 02000424 */   addiu     $a0, $zero, 0x2
    /* 7D9B0 8016F5B0 C7E5030C */  jal        func_800F971C
    /* 7D9B4 8016F5B4 00000000 */   nop
    /* 7D9B8 8016F5B8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7D9BC 8016F5BC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7D9C0 8016F5C0 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7D9C4 8016F5C4 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7D9C8 8016F5C8 00004394 */  lhu        $v1, 0x0($v0)
    /* 7D9CC 8016F5CC 00000000 */  nop
    /* 7D9D0 8016F5D0 000083A4 */  sh         $v1, 0x0($a0)
  .L8016F5D4:
    /* 7D9D4 8016F5D4 8CD9030C */  jal        func_800F6630
    /* 7D9D8 8016F5D8 21200000 */   addu      $a0, $zero, $zero
    /* 7D9DC 8016F5DC DAE1030C */  jal        func_800F8768
    /* 7D9E0 8016F5E0 A3430424 */   addiu     $a0, $zero, 0x43A3
    /* 7D9E4 8016F5E4 8CD9030C */  jal        func_800F6630
    /* 7D9E8 8016F5E8 02000424 */   addiu     $a0, $zero, 0x2
    /* 7D9EC 8016F5EC DAE1030C */  jal        func_800F8768
    /* 7D9F0 8016F5F0 23440424 */   addiu     $a0, $zero, 0x4423
    /* 7D9F4 8016F5F4 AFD8030C */  jal        func_800F62BC
    /* 7D9F8 8016F5F8 21200000 */   addu      $a0, $zero, $zero
    /* 7D9FC 8016F5FC AFD8030C */  jal        func_800F62BC
    /* 7DA00 8016F600 02000424 */   addiu     $a0, $zero, 0x2
    /* 7DA04 8016F604 D9D8030C */  jal        func_800F6364
    /* 7DA08 8016F608 00000000 */   nop
    /* 7DA0C 8016F60C 56D6030C */  jal        func_800F5958
    /* 7DA10 8016F610 0C000424 */   addiu     $a0, $zero, 0xC
    /* 7DA14 8016F614 F5D4030C */  jal        func_800F53D4
    /* 7DA18 8016F618 00000000 */   nop
    /* 7DA1C 8016F61C EDFF4010 */  beqz       $v0, .L8016F5D4
    /* 7DA20 8016F620 00000000 */   nop
    /* 7DA24 8016F624 D1AE050C */  jal        func_8016BB44
    /* 7DA28 8016F628 00000000 */   nop
    /* 7DA2C 8016F62C C7E5030C */  jal        func_800F971C
    /* 7DA30 8016F630 00000000 */   nop
    /* 7DA34 8016F634 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7DA38 8016F638 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7DA3C 8016F63C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7DA40 8016F640 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7DA44 8016F644 00004394 */  lhu        $v1, 0x0($v0)
    /* 7DA48 8016F648 66000424 */  addiu      $a0, $zero, 0x66
    /* 7DA4C 8016F64C 5BE3030C */  jal        func_800F8D6C
    /* 7DA50 8016F650 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7DA54 8016F654 5BE3030C */  jal        func_800F8D6C
    /* 7DA58 8016F658 92000424 */   addiu     $a0, $zero, 0x92
    /* 7DA5C 8016F65C 77DC030C */  jal        func_800F71DC
    /* 7DA60 8016F660 70000424 */   addiu     $a0, $zero, 0x70
    /* 7DA64 8016F664 5BE3030C */  jal        func_800F8D6C
    /* 7DA68 8016F668 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 7DA6C 8016F66C 77DC030C */  jal        func_800F71DC
    /* 7DA70 8016F670 193D0424 */   addiu     $a0, $zero, 0x3D19
    /* 7DA74 8016F674 5BE3030C */  jal        func_800F8D6C
    /* 7DA78 8016F678 90000424 */   addiu     $a0, $zero, 0x90
    /* 7DA7C 8016F67C 90D8030C */  jal        func_800F6240
    /* 7DA80 8016F680 207D0424 */   addiu     $a0, $zero, 0x7D20
  .L8016F684:
    /* 7DA84 8016F684 D1AE050C */  jal        func_8016BB44
    /* 7DA88 8016F688 00000000 */   nop
    /* 7DA8C 8016F68C 59D9030C */  jal        func_800F6564
    /* 7DA90 8016F690 207D0424 */   addiu     $a0, $zero, 0x7D20
    /* 7DA94 8016F694 0DD9030C */  jal        func_800F6434
    /* 7DA98 8016F698 02020424 */   addiu     $a0, $zero, 0x202
    /* 7DA9C 8016F69C F9FF4014 */  bnez       $v0, .L8016F684
    /* 7DAA0 8016F6A0 00000000 */   nop
    /* 7DAA4 8016F6A4 77DC030C */  jal        func_800F71DC
    /* 7DAA8 8016F6A8 21200000 */   addu      $a0, $zero, $zero
    /* 7DAAC 8016F6AC 5BE3030C */  jal        func_800F8D6C
    /* 7DAB0 8016F6B0 02000424 */   addiu     $a0, $zero, 0x2
    /* 7DAB4 8016F6B4 5BE3030C */  jal        func_800F8D6C
    /* 7DAB8 8016F6B8 04000424 */   addiu     $a0, $zero, 0x4
    /* 7DABC 8016F6BC 77DC030C */  jal        func_800F71DC
    /* 7DAC0 8016F6C0 00400424 */   addiu     $a0, $zero, 0x4000
    /* 7DAC4 8016F6C4 5BE3030C */  jal        func_800F8D6C
    /* 7DAC8 8016F6C8 21200000 */   addu      $a0, $zero, $zero
    /* 7DACC 8016F6CC 5BE3030C */  jal        func_800F8D6C
    /* 7DAD0 8016F6D0 06000424 */   addiu     $a0, $zero, 0x6
    /* 7DAD4 8016F6D4 2FC0050C */  jal        func_801700BC
    /* 7DAD8 8016F6D8 00000000 */   nop
    /* 7DADC 8016F6DC D1AE050C */  jal        func_8016BB44
    /* 7DAE0 8016F6E0 00000000 */   nop
    /* 7DAE4 8016F6E4 53D9030C */  jal        func_800F654C
    /* 7DAE8 8016F6E8 80000424 */   addiu     $a0, $zero, 0x80
    /* 7DAEC 8016F6EC 93E0030C */  jal        func_800F824C
    /* 7DAF0 8016F6F0 A0000424 */   addiu     $a0, $zero, 0xA0
    /* 7DAF4 8016F6F4 53D9030C */  jal        func_800F654C
    /* 7DAF8 8016F6F8 11000424 */   addiu     $a0, $zero, 0x11
    /* 7DAFC 8016F6FC 62E0030C */  jal        func_800F8188
    /* 7DB00 8016F700 287D0424 */   addiu     $a0, $zero, 0x7D28
    /* 7DB04 8016F704 C7E5030C */  jal        func_800F971C
    /* 7DB08 8016F708 00000000 */   nop
    /* 7DB0C 8016F70C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7DB10 8016F710 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7DB14 8016F714 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7DB18 8016F718 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7DB1C 8016F71C 00004394 */  lhu        $v1, 0x0($v0)
    /* 7DB20 8016F720 9C000424 */  addiu      $a0, $zero, 0x9C
    /* 7DB24 8016F724 5BE3030C */  jal        func_800F8D6C
    /* 7DB28 8016F728 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7DB2C 8016F72C 77DC030C */  jal        func_800F71DC
    /* 7DB30 8016F730 00080424 */   addiu     $a0, $zero, 0x800
    /* 7DB34 8016F734 5BE3030C */  jal        func_800F8D6C
    /* 7DB38 8016F738 9E000424 */   addiu     $a0, $zero, 0x9E
  .L8016F73C:
    /* 7DB3C 8016F73C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 7DB40 8016F740 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 7DB44 8016F744 00000000 */  nop
    /* 7DB48 8016F748 00006294 */  lhu        $v0, 0x0($v1)
    /* 7DB4C 8016F74C 00000000 */  nop
    /* 7DB50 8016F750 42100200 */  srl        $v0, $v0, 1
    /* 7DB54 8016F754 1A80013C */  lui        $at, %hi(D_8019EE58)
    /* 7DB58 8016F758 58EE22AC */  sw         $v0, %lo(D_8019EE58)($at)
    /* 7DB5C 8016F75C D1AE050C */  jal        func_8016BB44
    /* 7DB60 8016F760 00000000 */   nop
    /* 7DB64 8016F764 91E5030C */  jal        func_800F9644
    /* 7DB68 8016F768 20000424 */   addiu     $a0, $zero, 0x20
    /* 7DB6C 8016F76C 96D9030C */  jal        func_800F6658
    /* 7DB70 8016F770 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 7DB74 8016F774 20D5030C */  jal        func_800F5480
    /* 7DB78 8016F778 00000000 */   nop
    /* 7DB7C 8016F77C 34E0030C */  jal        func_800F80D0
    /* 7DB80 8016F780 10000424 */   addiu     $a0, $zero, 0x10
    /* 7DB84 8016F784 9DE0030C */  jal        func_800F8274
    /* 7DB88 8016F788 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 7DB8C 8016F78C 96D9030C */  jal        func_800F6658
    /* 7DB90 8016F790 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 7DB94 8016F794 9DE0030C */  jal        func_800F8274
    /* 7DB98 8016F798 0E000424 */   addiu     $a0, $zero, 0xE
    /* 7DB9C 8016F79C 96D9030C */  jal        func_800F6658
    /* 7DBA0 8016F7A0 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 7DBA4 8016F7A4 04D5030C */  jal        func_800F5410
    /* 7DBA8 8016F7A8 00000000 */   nop
    /* 7DBAC 8016F7AC 19D0030C */  jal        func_800F4064
    /* 7DBB0 8016F7B0 80000424 */   addiu     $a0, $zero, 0x80
    /* 7DBB4 8016F7B4 E5B6050C */  jal        func_8016DB94
    /* 7DBB8 8016F7B8 00000000 */   nop
    /* 7DBBC 8016F7BC 91E5030C */  jal        func_800F9644
    /* 7DBC0 8016F7C0 20000424 */   addiu     $a0, $zero, 0x20
    /* 7DBC4 8016F7C4 96D9030C */  jal        func_800F6658
    /* 7DBC8 8016F7C8 14000424 */   addiu     $a0, $zero, 0x14
    /* 7DBCC 8016F7CC 9DE0030C */  jal        func_800F8274
    /* 7DBD0 8016F7D0 21200000 */   addu      $a0, $zero, $zero
    /* 7DBD4 8016F7D4 9DE0030C */  jal        func_800F8274
    /* 7DBD8 8016F7D8 06000424 */   addiu     $a0, $zero, 0x6
    /* 7DBDC 8016F7DC 96D9030C */  jal        func_800F6658
    /* 7DBE0 8016F7E0 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 7DBE4 8016F7E4 9DE0030C */  jal        func_800F8274
    /* 7DBE8 8016F7E8 0E000424 */   addiu     $a0, $zero, 0xE
    /* 7DBEC 8016F7EC 96D9030C */  jal        func_800F6658
    /* 7DBF0 8016F7F0 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 7DBF4 8016F7F4 E5B6050C */  jal        func_8016DB94
    /* 7DBF8 8016F7F8 00000000 */   nop
    /* 7DBFC 8016F7FC 91E5030C */  jal        func_800F9644
    /* 7DC00 8016F800 20000424 */   addiu     $a0, $zero, 0x20
    /* 7DC04 8016F804 96D9030C */  jal        func_800F6658
    /* 7DC08 8016F808 14000424 */   addiu     $a0, $zero, 0x14
    /* 7DC0C 8016F80C 9DE0030C */  jal        func_800F8274
    /* 7DC10 8016F810 02000424 */   addiu     $a0, $zero, 0x2
    /* 7DC14 8016F814 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7DC18 8016F818 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7DC1C 8016F81C 00000000 */  nop
    /* 7DC20 8016F820 00006294 */  lhu        $v0, 0x0($v1)
    /* 7DC24 8016F824 04000424 */  addiu      $a0, $zero, 0x4
    /* 7DC28 8016F828 27100200 */  nor        $v0, $zero, $v0
    /* 7DC2C 8016F82C 9DE0030C */  jal        func_800F8274
    /* 7DC30 8016F830 000062A4 */   sh        $v0, 0x0($v1)
    /* 7DC34 8016F834 2FC0050C */  jal        func_801700BC
    /* 7DC38 8016F838 00000000 */   nop
    /* 7DC3C 8016F83C 98E5030C */  jal        func_800F9660
    /* 7DC40 8016F840 20000424 */   addiu     $a0, $zero, 0x20
    /* 7DC44 8016F844 9CDC030C */  jal        func_800F7270
    /* 7DC48 8016F848 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 7DC4C 8016F84C 56D6030C */  jal        func_800F5958
    /* 7DC50 8016F850 00020424 */   addiu     $a0, $zero, 0x200
    /* 7DC54 8016F854 F5D4030C */  jal        func_800F53D4
    /* 7DC58 8016F858 00000000 */   nop
    /* 7DC5C 8016F85C B7FF4010 */  beqz       $v0, .L8016F73C
    /* 7DC60 8016F860 00000000 */   nop
    /* 7DC64 8016F864 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 7DC68 8016F868 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 7DC6C 8016F86C 00000000 */  nop
    /* 7DC70 8016F870 00006294 */  lhu        $v0, 0x0($v1)
    /* 7DC74 8016F874 00000000 */  nop
    /* 7DC78 8016F878 42100200 */  srl        $v0, $v0, 1
    /* 7DC7C 8016F87C 1A80013C */  lui        $at, %hi(D_8019EE58)
    /* 7DC80 8016F880 58EE22AC */  sw         $v0, %lo(D_8019EE58)($at)
    /* 7DC84 8016F884 77DC030C */  jal        func_800F71DC
    /* 7DC88 8016F888 B4000424 */   addiu     $a0, $zero, 0xB4
    /* 7DC8C 8016F88C 21C0050C */  jal        func_80170084
    /* 7DC90 8016F890 00000000 */   nop
    /* 7DC94 8016F894 53D9030C */  jal        func_800F654C
    /* 7DC98 8016F898 01000424 */   addiu     $a0, $zero, 0x1
    /* 7DC9C 8016F89C 7AE0030C */  jal        func_800F81E8
    /* 7DCA0 8016F8A0 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 7DCA4 8016F8A4 53D9030C */  jal        func_800F654C
    /* 7DCA8 8016F8A8 15000424 */   addiu     $a0, $zero, 0x15
    /* 7DCAC 8016F8AC 7AE0030C */  jal        func_800F81E8
    /* 7DCB0 8016F8B0 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 7DCB4 8016F8B4 4AA4050C */  jal        func_80169128
    /* 7DCB8 8016F8B8 00000000 */   nop
    /* 7DCBC 8016F8BC 24B9050C */  jal        func_8016E490
    /* 7DCC0 8016F8C0 00000000 */   nop
    /* 7DCC4 8016F8C4 90D8030C */  jal        func_800F6240
    /* 7DCC8 8016F8C8 257D0424 */   addiu     $a0, $zero, 0x7D25
  .L8016F8CC:
    /* 7DCCC 8016F8CC D1AE050C */  jal        func_8016BB44
    /* 7DCD0 8016F8D0 00000000 */   nop
    /* 7DCD4 8016F8D4 33BE0508 */  j          .L8016F8CC
    /* 7DCD8 8016F8D8 00000000 */   nop
  .L8016F8DC:
    /* 7DCDC 8016F8DC 0E80013C */  lui        $at, %hi(D_800DA128)
    /* 7DCE0 8016F8E0 28A122A0 */  sb         $v0, %lo(D_800DA128)($at)
    /* 7DCE4 8016F8E4 8AA4050C */  jal        func_80169228
    /* 7DCE8 8016F8E8 00000000 */   nop
    /* 7DCEC 8016F8EC C7E5030C */  jal        func_800F971C
    /* 7DCF0 8016F8F0 00000000 */   nop
    /* 7DCF4 8016F8F4 7AE0030C */  jal        func_800F81E8
    /* 7DCF8 8016F8F8 00420424 */   addiu     $a0, $zero, 0x4200
    /* 7DCFC 8016F8FC 7AE0030C */  jal        func_800F81E8
    /* 7DD00 8016F900 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 7DD04 8016F904 7AE0030C */  jal        func_800F81E8
    /* 7DD08 8016F908 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 7DD0C 8016F90C 53D9030C */  jal        func_800F654C
    /* 7DD10 8016F910 80000424 */   addiu     $a0, $zero, 0x80
    /* 7DD14 8016F914 7AE0030C */  jal        func_800F81E8
    /* 7DD18 8016F918 00210424 */   addiu     $a0, $zero, 0x2100
    /* 7DD1C 8016F91C 2EE5030C */  jal        func_800F94B8
    /* 7DD20 8016F920 00000000 */   nop
    /* 7DD24 8016F924 12E5030C */  jal        func_800F9448
    /* 7DD28 8016F928 00000000 */   nop
    /* 7DD2C 8016F92C 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 7DD30 8016F930 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 7DD34 8016F934 1400BF8F */  lw         $ra, 0x14($sp)
    /* 7DD38 8016F938 00008294 */  lhu        $v0, 0x0($a0)
    /* 7DD3C 8016F93C 1000B08F */  lw         $s0, 0x10($sp)
    /* 7DD40 8016F940 01004224 */  addiu      $v0, $v0, 0x1
    /* 7DD44 8016F944 000082A4 */  sh         $v0, 0x0($a0)
    /* 7DD48 8016F948 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 7DD4C 8016F94C 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 7DD50 8016F950 0D80043C */  lui        $a0, %hi(D_800D0000)
    /* 7DD54 8016F954 00006294 */  lhu        $v0, 0x0($v1)
    /* 7DD58 8016F958 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 7DD5C 8016F95C 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 7DD60 8016F960 21104400 */  addu       $v0, $v0, $a0
    /* 7DD64 8016F964 00004390 */  lbu        $v1, %lo(D_800D0000)($v0)
    /* 7DD68 8016F968 00000000 */  nop
    /* 7DD6C 8016F96C 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 7DD70 8016F970 0C0080A3 */  sb         $zero, %gp_rel(D_8019ED08)($gp)
    /* 7DD74 8016F974 0800E003 */  jr         $ra
    /* 7DD78 8016F978 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016EF88
