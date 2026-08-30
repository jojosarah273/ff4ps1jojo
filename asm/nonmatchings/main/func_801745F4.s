nonmatching func_801745F4, 0x11C

glabel func_801745F4
    /* 829F4 801745F4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 829F8 801745F8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 829FC 801745FC 59D9030C */  jal        func_800F6564
    /* 82A00 80174600 E00F0424 */   addiu     $a0, $zero, 0xFE0
    /* 82A04 80174604 93E0030C */  jal        func_800F824C
    /* 82A08 80174608 19000424 */   addiu     $a0, $zero, 0x19
    /* 82A0C 8017460C EEE3030C */  jal        func_800F8FB8
    /* 82A10 80174610 18000424 */   addiu     $a0, $zero, 0x18
    /* 82A14 80174614 0FCF030C */  jal        func_800F3C3C
    /* 82A18 80174618 19000424 */   addiu     $a0, $zero, 0x19
    /* 82A1C 8017461C AFDD030C */  jal        func_800F76BC
    /* 82A20 80174620 21204000 */   addu      $a0, $v0, $zero
    /* 82A24 80174624 BADD030C */  jal        func_800F76E8
    /* 82A28 80174628 00000000 */   nop
    /* 82A2C 8017462C 0FCF030C */  jal        func_800F3C3C
    /* 82A30 80174630 18000424 */   addiu     $a0, $zero, 0x18
    /* 82A34 80174634 32DF030C */  jal        func_800F7CC8
    /* 82A38 80174638 21204000 */   addu      $a0, $v0, $zero
    /* 82A3C 8017463C 9CDC030C */  jal        func_800F7270
    /* 82A40 80174640 18000424 */   addiu     $a0, $zero, 0x18
    /* 82A44 80174644 40DD030C */  jal        func_800F7500
    /* 82A48 80174648 20000424 */   addiu     $a0, $zero, 0x20
  .L8017464C:
    /* 82A4C 8017464C 1400043C */  lui        $a0, (0x14DE10 >> 16)
  .L80174650:
    /* 82A50 80174650 1ADB030C */  jal        func_800F6C68
    /* 82A54 80174654 10DE8434 */   ori       $a0, $a0, (0x14DE10 & 0xFFFF)
    /* 82A58 80174658 58E2030C */  jal        func_800F8960
    /* 82A5C 8017465C DB0C0424 */   addiu     $a0, $zero, 0xCDB
    /* 82A60 80174660 1400043C */  lui        $a0, (0x14DE90 >> 16)
    /* 82A64 80174664 1ADB030C */  jal        func_800F6C68
    /* 82A68 80174668 90DE8434 */   ori       $a0, $a0, (0x14DE90 & 0xFFFF)
    /* 82A6C 8017466C 58E2030C */  jal        func_800F8960
    /* 82A70 80174670 EB0C0424 */   addiu     $a0, $zero, 0xCEB
    /* 82A74 80174674 D9D8030C */  jal        func_800F6364
    /* 82A78 80174678 00000000 */   nop
    /* 82A7C 8017467C EFD8030C */  jal        func_800F63BC
    /* 82A80 80174680 00000000 */   nop
    /* 82A84 80174684 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 82A88 80174688 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 82A8C 8017468C 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 82A90 80174690 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 82A94 80174694 00004390 */  lbu        $v1, 0x0($v0)
    /* 82A98 80174698 0F000424 */  addiu      $a0, $zero, 0xF
    /* 82A9C 8017469C 92D0030C */  jal        func_800F4248
    /* 82AA0 801746A0 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 82AA4 801746A4 48D0030C */  jal        func_800F4120
    /* 82AA8 801746A8 02020424 */   addiu     $a0, $zero, 0x202
    /* 82AAC 801746AC E7FF4014 */  bnez       $v0, .L8017464C
    /* 82AB0 801746B0 00000000 */   nop
    /* 82AB4 801746B4 1A80033C */  lui        $v1, %hi(D_8019ED60)
    /* 82AB8 801746B8 60ED638C */  lw         $v1, %lo(D_8019ED60)($v1)
    /* 82ABC 801746BC 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 82AC0 801746C0 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 82AC4 801746C4 00006290 */  lbu        $v0, 0x0($v1)
    /* 82AC8 801746C8 04D5030C */  jal        func_800F5410
    /* 82ACC 801746CC 000082A0 */   sb        $v0, 0x0($a0)
    /* 82AD0 801746D0 02D0030C */  jal        func_800F4008
    /* 82AD4 801746D4 10000424 */   addiu     $a0, $zero, 0x10
    /* 82AD8 801746D8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 82ADC 801746DC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 82AE0 801746E0 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 82AE4 801746E4 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 82AE8 801746E8 00004394 */  lhu        $v1, 0x0($v0)
    /* 82AEC 801746EC 02020424 */  addiu      $a0, $zero, 0x202
    /* 82AF0 801746F0 F8DC030C */  jal        func_800F73E0
    /* 82AF4 801746F4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 82AF8 801746F8 D5FF4014 */  bnez       $v0, .L80174650
    /* 82AFC 801746FC 1400043C */   lui       $a0, (0x14DE10 >> 16)
    /* 82B00 80174700 1000BF8F */  lw         $ra, 0x10($sp)
    /* 82B04 80174704 00000000 */  nop
    /* 82B08 80174708 0800E003 */  jr         $ra
    /* 82B0C 8017470C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801745F4
