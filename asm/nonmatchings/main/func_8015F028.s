nonmatching func_8015F028, 0x1A8

glabel func_8015F028
    /* 6D428 8015F028 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6D42C 8015F02C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6D430 8015F030 53D9030C */  jal        func_800F654C
    /* 6D434 8015F034 01000424 */   addiu     $a0, $zero, 0x1
    /* 6D438 8015F038 62E0030C */  jal        func_800F8188
    /* 6D43C 8015F03C 4D350424 */   addiu     $a0, $zero, 0x354D
    /* 6D440 8015F040 734C050C */  jal        func_801531CC
    /* 6D444 8015F044 00000000 */   nop
    /* 6D448 8015F048 5DD5030C */  jal        func_800F5574
    /* 6D44C 8015F04C 32000424 */   addiu     $a0, $zero, 0x32
    /* 6D450 8015F050 F0D4030C */  jal        func_800F53C0
    /* 6D454 8015F054 00000000 */   nop
    /* 6D458 8015F058 1D004010 */  beqz       $v0, .L8015F0D0
    /* 6D45C 8015F05C 00000000 */   nop
    /* 6D460 8015F060 C7E5030C */  jal        func_800F971C
    /* 6D464 8015F064 00000000 */   nop
    /* 6D468 8015F068 62E0030C */  jal        func_800F8188
    /* 6D46C 8015F06C 50350424 */   addiu     $a0, $zero, 0x3550
    /* 6D470 8015F070 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6D474 8015F074 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6D478 8015F078 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6D47C 8015F07C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6D480 8015F080 00004394 */  lhu        $v1, 0x0($v0)
    /* 6D484 8015F084 A9000424 */  addiu      $a0, $zero, 0xA9
    /* 6D488 8015F088 5BE3030C */  jal        func_800F8D6C
    /* 6D48C 8015F08C 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8015F090:
    /* 6D490 8015F090 9382050C */  jal        func_80160A4C
    /* 6D494 8015F094 00000000 */   nop
    /* 6D498 8015F098 C34C050C */  jal        func_8015330C
    /* 6D49C 8015F09C 00000000 */   nop
    /* 6D4A0 8015F0A0 AFD8030C */  jal        func_800F62BC
    /* 6D4A4 8015F0A4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D4A8 8015F0A8 8CD9030C */  jal        func_800F6630
    /* 6D4AC 8015F0AC A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D4B0 8015F0B0 5DD5030C */  jal        func_800F5574
    /* 6D4B4 8015F0B4 05000424 */   addiu     $a0, $zero, 0x5
    /* 6D4B8 8015F0B8 F5D4030C */  jal        func_800F53D4
    /* 6D4BC 8015F0BC 00000000 */   nop
    /* 6D4C0 8015F0C0 F3FF4010 */  beqz       $v0, .L8015F090
    /* 6D4C4 8015F0C4 00000000 */   nop
    /* 6D4C8 8015F0C8 707C0508 */  j          .L8015F1C0
    /* 6D4CC 8015F0CC 00000000 */   nop
  .L8015F0D0:
    /* 6D4D0 8015F0D0 59D9030C */  jal        func_800F6564
    /* 6D4D4 8015F0D4 03270424 */   addiu     $a0, $zero, 0x2703
    /* 6D4D8 8015F0D8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6D4DC 8015F0DC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6D4E0 8015F0E0 00000000 */  nop
    /* 6D4E4 8015F0E4 00006290 */  lbu        $v0, 0x0($v1)
    /* 6D4E8 8015F0E8 03270424 */  addiu      $a0, $zero, 0x2703
    /* 6D4EC 8015F0EC 80004234 */  ori        $v0, $v0, 0x80
    /* 6D4F0 8015F0F0 62E0030C */  jal        func_800F8188
    /* 6D4F4 8015F0F4 000062A0 */   sb        $v0, 0x0($v1)
    /* 6D4F8 8015F0F8 EEE3030C */  jal        func_800F8FB8
    /* 6D4FC 8015F0FC AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6D500 8015F100 59D9030C */  jal        func_800F6564
    /* 6D504 8015F104 4F350424 */   addiu     $a0, $zero, 0x354F
    /* 6D508 8015F108 93E0030C */  jal        func_800F824C
    /* 6D50C 8015F10C A9000424 */   addiu     $a0, $zero, 0xA9
  .L8015F110:
    /* 6D510 8015F110 0FCF030C */  jal        func_800F3C3C
    /* 6D514 8015F114 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D518 8015F118 CAD3030C */  jal        func_800F4F28
    /* 6D51C 8015F11C 21204000 */   addu      $a0, $v0, $zero
    /* 6D520 8015F120 EBD3030C */  jal        func_800F4FAC
    /* 6D524 8015F124 01010424 */   addiu     $a0, $zero, 0x101
    /* 6D528 8015F128 1B004014 */  bnez       $v0, .L8015F198
    /* 6D52C 8015F12C 00000000 */   nop
    /* 6D530 8015F130 04D5030C */  jal        func_800F5410
    /* 6D534 8015F134 00000000 */   nop
    /* 6D538 8015F138 8CD9030C */  jal        func_800F6630
    /* 6D53C 8015F13C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6D540 8015F140 02D0030C */  jal        func_800F4008
    /* 6D544 8015F144 05000424 */   addiu     $a0, $zero, 0x5
    /* 6D548 8015F148 93E0030C */  jal        func_800F824C
    /* 6D54C 8015F14C DF000424 */   addiu     $a0, $zero, 0xDF
    /* 6D550 8015F150 53D9030C */  jal        func_800F654C
    /* 6D554 8015F154 80000424 */   addiu     $a0, $zero, 0x80
    /* 6D558 8015F158 93E0030C */  jal        func_800F824C
    /* 6D55C 8015F15C E1000424 */   addiu     $a0, $zero, 0xE1
    /* 6D560 8015F160 0349050C */  jal        func_8015240C
    /* 6D564 8015F164 00000000 */   nop
    /* 6D568 8015F168 9CDC030C */  jal        func_800F7270
    /* 6D56C 8015F16C E3000424 */   addiu     $a0, $zero, 0xE3
    /* 6D570 8015F170 DADA030C */  jal        func_800F6B68
    /* 6D574 8015F174 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6D578 8015F178 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6D57C 8015F17C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6D580 8015F180 00000000 */  nop
    /* 6D584 8015F184 00006290 */  lbu        $v0, 0x0($v1)
    /* 6D588 8015F188 03200424 */  addiu      $a0, $zero, 0x2003
    /* 6D58C 8015F18C 80004234 */  ori        $v0, $v0, 0x80
    /* 6D590 8015F190 DAE1030C */  jal        func_800F8768
    /* 6D594 8015F194 000062A0 */   sb        $v0, 0x0($v1)
  .L8015F198:
    /* 6D598 8015F198 AFD8030C */  jal        func_800F62BC
    /* 6D59C 8015F19C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6D5A0 8015F1A0 8CD9030C */  jal        func_800F6630
    /* 6D5A4 8015F1A4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6D5A8 8015F1A8 5DD5030C */  jal        func_800F5574
    /* 6D5AC 8015F1AC 08000424 */   addiu     $a0, $zero, 0x8
    /* 6D5B0 8015F1B0 F5D4030C */  jal        func_800F53D4
    /* 6D5B4 8015F1B4 00000000 */   nop
    /* 6D5B8 8015F1B8 D5FF4010 */  beqz       $v0, .L8015F110
    /* 6D5BC 8015F1BC 00000000 */   nop
  .L8015F1C0:
    /* 6D5C0 8015F1C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6D5C4 8015F1C4 00000000 */  nop
    /* 6D5C8 8015F1C8 0800E003 */  jr         $ra
    /* 6D5CC 8015F1CC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015F028
