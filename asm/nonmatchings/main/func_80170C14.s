nonmatching func_80170C14, 0x580

glabel func_80170C14
    /* 7F014 80170C14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7F018 80170C18 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7F01C 80170C1C 8CD9030C */  jal        func_800F6630
    /* 7F020 80170C20 D3000424 */   addiu     $a0, $zero, 0xD3
    /* 7F024 80170C24 0DD9030C */  jal        func_800F6434
    /* 7F028 80170C28 02000424 */   addiu     $a0, $zero, 0x2
    /* 7F02C 80170C2C 55014010 */  beqz       $v0, .L80171184
    /* 7F030 80170C30 00000000 */   nop
    /* 7F034 80170C34 9BE4030C */  jal        func_800F926C
    /* 7F038 80170C38 00000000 */   nop
    /* 7F03C 80170C3C 53D9030C */  jal        func_800F654C
    /* 7F040 80170C40 15000424 */   addiu     $a0, $zero, 0x15
    /* 7F044 80170C44 80E4030C */  jal        func_800F9200
    /* 7F048 80170C48 00000000 */   nop
    /* 7F04C 80170C4C 12E5030C */  jal        func_800F9448
    /* 7F050 80170C50 00000000 */   nop
    /* 7F054 80170C54 59D9030C */  jal        func_800F6564
    /* 7F058 80170C58 03170424 */   addiu     $a0, $zero, 0x1703
    /* 7F05C 80170C5C EEE3030C */  jal        func_800F8FB8
    /* 7F060 80170C60 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7F064 80170C64 19DE030C */  jal        func_800F7864
    /* 7F068 80170C68 00000000 */   nop
    /* 7F06C 80170C6C BADD030C */  jal        func_800F76E8
    /* 7F070 80170C70 00000000 */   nop
    /* 7F074 80170C74 0FCF030C */  jal        func_800F3C3C
    /* 7F078 80170C78 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7F07C 80170C7C 32DF030C */  jal        func_800F7CC8
    /* 7F080 80170C80 21204000 */   addu      $a0, $v0, $zero
    /* 7F084 80170C84 19DE030C */  jal        func_800F7864
    /* 7F088 80170C88 00000000 */   nop
    /* 7F08C 80170C8C BADD030C */  jal        func_800F76E8
    /* 7F090 80170C90 00000000 */   nop
    /* 7F094 80170C94 0FCF030C */  jal        func_800F3C3C
    /* 7F098 80170C98 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7F09C 80170C9C 32DF030C */  jal        func_800F7CC8
    /* 7F0A0 80170CA0 21204000 */   addu      $a0, $v0, $zero
    /* 7F0A4 80170CA4 93E0030C */  jal        func_800F824C
    /* 7F0A8 80170CA8 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 7F0AC 80170CAC 9CDC030C */  jal        func_800F7270
    /* 7F0B0 80170CB0 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7F0B4 80170CB4 DADA030C */  jal        func_800F6B68
    /* 7F0B8 80170CB8 01100424 */   addiu     $a0, $zero, 0x1001
    /* 7F0BC 80170CBC 92D0030C */  jal        func_800F4248
    /* 7F0C0 80170CC0 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 7F0C4 80170CC4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7F0C8 80170CC8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7F0CC 80170CCC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7F0D0 80170CD0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7F0D4 80170CD4 00004394 */  lhu        $v1, 0x0($v0)
    /* 7F0D8 80170CD8 FAB20434 */  ori        $a0, $zero, 0xB2FA
    /* 7F0DC 80170CDC DADA030C */  jal        func_800F6B68
    /* 7F0E0 80170CE0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7F0E4 80170CE4 50D4030C */  jal        func_800F5140
    /* 7F0E8 80170CE8 00000000 */   nop
    /* 7F0EC 80170CEC 62E0030C */  jal        func_800F8188
    /* 7F0F0 80170CF0 10070424 */   addiu     $a0, $zero, 0x710
    /* 7F0F4 80170CF4 8CD9030C */  jal        func_800F6630
    /* 7F0F8 80170CF8 D8000424 */   addiu     $a0, $zero, 0xD8
    /* 7F0FC 80170CFC 0DD9030C */  jal        func_800F6434
    /* 7F100 80170D00 02000424 */   addiu     $a0, $zero, 0x2
    /* 7F104 80170D04 05004014 */  bnez       $v0, .L80170D1C
    /* 7F108 80170D08 00000000 */   nop
    /* 7F10C 80170D0C 53D9030C */  jal        func_800F654C
    /* 7F110 80170D10 08000424 */   addiu     $a0, $zero, 0x8
    /* 7F114 80170D14 62E0030C */  jal        func_800F8188
    /* 7F118 80170D18 05170424 */   addiu     $a0, $zero, 0x1705
  .L80170D1C:
    /* 7F11C 80170D1C 59D9030C */  jal        func_800F6564
    /* 7F120 80170D20 05170424 */   addiu     $a0, $zero, 0x1705
    /* 7F124 80170D24 5DD5030C */  jal        func_800F5574
    /* 7F128 80170D28 08000424 */   addiu     $a0, $zero, 0x8
    /* 7F12C 80170D2C F5D4030C */  jal        func_800F53D4
    /* 7F130 80170D30 00000000 */   nop
    /* 7F134 80170D34 0F004010 */  beqz       $v0, .L80170D74
    /* 7F138 80170D38 00000000 */   nop
    /* 7F13C 80170D3C 8CD9030C */  jal        func_800F6630
    /* 7F140 80170D40 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 7F144 80170D44 04D5030C */  jal        func_800F5410
    /* 7F148 80170D48 00000000 */   nop
    /* 7F14C 80170D4C 02D0030C */  jal        func_800F4008
    /* 7F150 80170D50 10000424 */   addiu     $a0, $zero, 0x10
    /* 7F154 80170D54 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7F158 80170D58 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7F15C 80170D5C 00000000 */  nop
    /* 7F160 80170D60 00006290 */  lbu        $v0, 0x0($v1)
    /* 7F164 80170D64 03000424 */  addiu      $a0, $zero, 0x3
    /* 7F168 80170D68 C2100200 */  srl        $v0, $v0, 3
    /* 7F16C 80170D6C 92D0030C */  jal        func_800F4248
    /* 7F170 80170D70 000062A0 */   sb        $v0, 0x0($v1)
  .L80170D74:
    /* 7F174 80170D74 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7F178 80170D78 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7F17C 80170D7C 00000000 */  nop
    /* 7F180 80170D80 00006290 */  lbu        $v0, 0x0($v1)
    /* 7F184 80170D84 07000424 */  addiu      $a0, $zero, 0x7
    /* 7F188 80170D88 00110200 */  sll        $v0, $v0, 4
    /* 7F18C 80170D8C 93E0030C */  jal        func_800F824C
    /* 7F190 80170D90 000062A0 */   sb        $v0, 0x0($v1)
    /* 7F194 80170D94 EEE3030C */  jal        func_800F8FB8
    /* 7F198 80170D98 06000424 */   addiu     $a0, $zero, 0x6
    /* 7F19C 80170D9C 59D9030C */  jal        func_800F6564
    /* 7F1A0 80170DA0 05170424 */   addiu     $a0, $zero, 0x1705
    /* 7F1A4 80170DA4 5DD5030C */  jal        func_800F5574
    /* 7F1A8 80170DA8 08000424 */   addiu     $a0, $zero, 0x8
    /* 7F1AC 80170DAC F5D4030C */  jal        func_800F53D4
    /* 7F1B0 80170DB0 00000000 */   nop
    /* 7F1B4 80170DB4 39004014 */  bnez       $v0, .L80170E9C
    /* 7F1B8 80170DB8 00000000 */   nop
    /* 7F1BC 80170DBC 5DD5030C */  jal        func_800F5574
    /* 7F1C0 80170DC0 04000424 */   addiu     $a0, $zero, 0x4
    /* 7F1C4 80170DC4 F0D4030C */  jal        func_800F53C0
    /* 7F1C8 80170DC8 00000000 */   nop
    /* 7F1CC 80170DCC 07004014 */  bnez       $v0, .L80170DEC
    /* 7F1D0 80170DD0 00000000 */   nop
    /* 7F1D4 80170DD4 8CD9030C */  jal        func_800F6630
    /* 7F1D8 80170DD8 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 7F1DC 80170DDC 0DD9030C */  jal        func_800F6434
    /* 7F1E0 80170DE0 02000424 */   addiu     $a0, $zero, 0x2
    /* 7F1E4 80170DE4 2D004014 */  bnez       $v0, .L80170E9C
    /* 7F1E8 80170DE8 00000000 */   nop
  .L80170DEC:
    /* 7F1EC 80170DEC 8CD9030C */  jal        func_800F6630
    /* 7F1F0 80170DF0 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 7F1F4 80170DF4 1A80023C */  lui        $v0, %hi(D_8019ED30)
    /* 7F1F8 80170DF8 30ED4290 */  lbu        $v0, %lo(D_8019ED30)($v0)
    /* 7F1FC 80170DFC 00000000 */  nop
    /* 7F200 80170E00 08004010 */  beqz       $v0, .L80170E24
    /* 7F204 80170E04 00000000 */   nop
    /* 7F208 80170E08 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7F20C 80170E0C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7F210 80170E10 00000000 */  nop
    /* 7F214 80170E14 00006290 */  lbu        $v0, 0x0($v1)
    /* 7F218 80170E18 00000000 */  nop
    /* 7F21C 80170E1C 40100200 */  sll        $v0, $v0, 1
    /* 7F220 80170E20 000062A0 */  sb         $v0, 0x0($v1)
  .L80170E24:
    /* 7F224 80170E24 92D0030C */  jal        func_800F4248
    /* 7F228 80170E28 08000424 */   addiu     $a0, $zero, 0x8
    /* 7F22C 80170E2C 04D5030C */  jal        func_800F5410
    /* 7F230 80170E30 00000000 */   nop
    /* 7F234 80170E34 0FCF030C */  jal        func_800F3C3C
    /* 7F238 80170E38 07000424 */   addiu     $a0, $zero, 0x7
    /* 7F23C 80170E3C CECF030C */  jal        func_800F3F38
    /* 7F240 80170E40 21204000 */   addu      $a0, $v0, $zero
    /* 7F244 80170E44 93E0030C */  jal        func_800F824C
    /* 7F248 80170E48 07000424 */   addiu     $a0, $zero, 0x7
    /* 7F24C 80170E4C 8CD9030C */  jal        func_800F6630
    /* 7F250 80170E50 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 7F254 80170E54 92D0030C */  jal        func_800F4248
    /* 7F258 80170E58 01000424 */   addiu     $a0, $zero, 0x1
    /* 7F25C 80170E5C 48D0030C */  jal        func_800F4120
    /* 7F260 80170E60 02020424 */   addiu     $a0, $zero, 0x202
    /* 7F264 80170E64 0D004014 */  bnez       $v0, .L80170E9C
    /* 7F268 80170E68 00000000 */   nop
    /* 7F26C 80170E6C 8CD9030C */  jal        func_800F6630
    /* 7F270 80170E70 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 7F274 80170E74 92D0030C */  jal        func_800F4248
    /* 7F278 80170E78 08000424 */   addiu     $a0, $zero, 0x8
    /* 7F27C 80170E7C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7F280 80170E80 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7F284 80170E84 00000000 */  nop
    /* 7F288 80170E88 00006290 */  lbu        $v0, 0x0($v1)
    /* 7F28C 80170E8C 06000424 */  addiu      $a0, $zero, 0x6
    /* 7F290 80170E90 C2100200 */  srl        $v0, $v0, 3
    /* 7F294 80170E94 93E0030C */  jal        func_800F824C
    /* 7F298 80170E98 000062A0 */   sb        $v0, 0x0($v1)
  .L80170E9C:
    /* 7F29C 80170E9C 8CD9030C */  jal        func_800F6630
    /* 7F2A0 80170EA0 07000424 */   addiu     $a0, $zero, 0x7
    /* 7F2A4 80170EA4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7F2A8 80170EA8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7F2AC 80170EAC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7F2B0 80170EB0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7F2B4 80170EB4 00004394 */  lhu        $v1, 0x0($v0)
    /* 7F2B8 80170EB8 21200000 */  addu       $a0, $zero, $zero
    /* 7F2BC 80170EBC 40DD030C */  jal        func_800F7500
    /* 7F2C0 80170EC0 0000A3A4 */   sh        $v1, 0x0($a1)
  .L80170EC4:
    /* 7F2C4 80170EC4 5CDB030C */  jal        func_800F6D70
    /* 7F2C8 80170EC8 B4C00434 */   ori       $a0, $zero, 0xC0B4
    /* 7F2CC 80170ECC 58E2030C */  jal        func_800F8960
    /* 7F2D0 80170ED0 70040424 */   addiu     $a0, $zero, 0x470
    /* 7F2D4 80170ED4 EFD8030C */  jal        func_800F63BC
    /* 7F2D8 80170ED8 00000000 */   nop
    /* 7F2DC 80170EDC 5CDB030C */  jal        func_800F6D70
    /* 7F2E0 80170EE0 B4C00434 */   ori       $a0, $zero, 0xC0B4
    /* 7F2E4 80170EE4 20D5030C */  jal        func_800F5480
    /* 7F2E8 80170EE8 00000000 */   nop
    /* 7F2EC 80170EEC 0FCF030C */  jal        func_800F3C3C
    /* 7F2F0 80170EF0 06000424 */   addiu     $a0, $zero, 0x6
    /* 7F2F4 80170EF4 D2DF030C */  jal        func_800F7F48
    /* 7F2F8 80170EF8 21204000 */   addu      $a0, $v0, $zero
    /* 7F2FC 80170EFC 58E2030C */  jal        func_800F8960
    /* 7F300 80170F00 70040424 */   addiu     $a0, $zero, 0x470
    /* 7F304 80170F04 EFD8030C */  jal        func_800F63BC
    /* 7F308 80170F08 00000000 */   nop
    /* 7F30C 80170F0C DADA030C */  jal        func_800F6B68
    /* 7F310 80170F10 C4C00434 */   ori       $a0, $zero, 0xC0C4
    /* 7F314 80170F14 58E2030C */  jal        func_800F8960
    /* 7F318 80170F18 70040424 */   addiu     $a0, $zero, 0x470
    /* 7F31C 80170F1C D9D8030C */  jal        func_800F6364
    /* 7F320 80170F20 00000000 */   nop
    /* 7F324 80170F24 EFD8030C */  jal        func_800F63BC
    /* 7F328 80170F28 00000000 */   nop
    /* 7F32C 80170F2C DADA030C */  jal        func_800F6B68
    /* 7F330 80170F30 C4C00434 */   ori       $a0, $zero, 0xC0C4
    /* 7F334 80170F34 92D0030C */  jal        func_800F4248
    /* 7F338 80170F38 F1000424 */   addiu     $a0, $zero, 0xF1
    /* 7F33C 80170F3C 04D5030C */  jal        func_800F5410
    /* 7F340 80170F40 00000000 */   nop
    /* 7F344 80170F44 C1CE030C */  jal        func_800F3B04
    /* 7F348 80170F48 10070424 */   addiu     $a0, $zero, 0x710
    /* 7F34C 80170F4C CECF030C */  jal        func_800F3F38
    /* 7F350 80170F50 21204000 */   addu      $a0, $v0, $zero
    /* 7F354 80170F54 58E2030C */  jal        func_800F8960
    /* 7F358 80170F58 70040424 */   addiu     $a0, $zero, 0x470
    /* 7F35C 80170F5C D9D8030C */  jal        func_800F6364
    /* 7F360 80170F60 00000000 */   nop
    /* 7F364 80170F64 EFD8030C */  jal        func_800F63BC
    /* 7F368 80170F68 00000000 */   nop
    /* 7F36C 80170F6C A4D6030C */  jal        func_800F5A90
    /* 7F370 80170F70 08000424 */   addiu     $a0, $zero, 0x8
    /* 7F374 80170F74 F5D4030C */  jal        func_800F53D4
    /* 7F378 80170F78 00000000 */   nop
    /* 7F37C 80170F7C D1FF4010 */  beqz       $v0, .L80170EC4
    /* 7F380 80170F80 00000000 */   nop
    /* 7F384 80170F84 40DD030C */  jal        func_800F7500
    /* 7F388 80170F88 21200000 */   addu      $a0, $zero, $zero
  .L80170F8C:
    /* 7F38C 80170F8C 5CDB030C */  jal        func_800F6D70
    /* 7F390 80170F90 BCC00434 */   ori       $a0, $zero, 0xC0BC
    /* 7F394 80170F94 58E2030C */  jal        func_800F8960
    /* 7F398 80170F98 F0040424 */   addiu     $a0, $zero, 0x4F0
    /* 7F39C 80170F9C EFD8030C */  jal        func_800F63BC
    /* 7F3A0 80170FA0 00000000 */   nop
    /* 7F3A4 80170FA4 5CDB030C */  jal        func_800F6D70
    /* 7F3A8 80170FA8 BCC00434 */   ori       $a0, $zero, 0xC0BC
    /* 7F3AC 80170FAC 20D5030C */  jal        func_800F5480
    /* 7F3B0 80170FB0 00000000 */   nop
    /* 7F3B4 80170FB4 0FCF030C */  jal        func_800F3C3C
    /* 7F3B8 80170FB8 06000424 */   addiu     $a0, $zero, 0x6
    /* 7F3BC 80170FBC D2DF030C */  jal        func_800F7F48
    /* 7F3C0 80170FC0 21204000 */   addu      $a0, $v0, $zero
    /* 7F3C4 80170FC4 58E2030C */  jal        func_800F8960
    /* 7F3C8 80170FC8 F0040424 */   addiu     $a0, $zero, 0x4F0
    /* 7F3CC 80170FCC EFD8030C */  jal        func_800F63BC
    /* 7F3D0 80170FD0 00000000 */   nop
    /* 7F3D4 80170FD4 DADA030C */  jal        func_800F6B68
    /* 7F3D8 80170FD8 C4C00434 */   ori       $a0, $zero, 0xC0C4
    /* 7F3DC 80170FDC 58E2030C */  jal        func_800F8960
    /* 7F3E0 80170FE0 F0040424 */   addiu     $a0, $zero, 0x4F0
    /* 7F3E4 80170FE4 D9D8030C */  jal        func_800F6364
    /* 7F3E8 80170FE8 00000000 */   nop
    /* 7F3EC 80170FEC EFD8030C */  jal        func_800F63BC
    /* 7F3F0 80170FF0 00000000 */   nop
    /* 7F3F4 80170FF4 DADA030C */  jal        func_800F6B68
    /* 7F3F8 80170FF8 C4C00434 */   ori       $a0, $zero, 0xC0C4
    /* 7F3FC 80170FFC 92D0030C */  jal        func_800F4248
    /* 7F400 80171000 F1000424 */   addiu     $a0, $zero, 0xF1
    /* 7F404 80171004 04D5030C */  jal        func_800F5410
    /* 7F408 80171008 00000000 */   nop
    /* 7F40C 8017100C C1CE030C */  jal        func_800F3B04
    /* 7F410 80171010 10070424 */   addiu     $a0, $zero, 0x710
    /* 7F414 80171014 CECF030C */  jal        func_800F3F38
    /* 7F418 80171018 21204000 */   addu      $a0, $v0, $zero
    /* 7F41C 8017101C 58E2030C */  jal        func_800F8960
    /* 7F420 80171020 F0040424 */   addiu     $a0, $zero, 0x4F0
    /* 7F424 80171024 D9D8030C */  jal        func_800F6364
    /* 7F428 80171028 00000000 */   nop
    /* 7F42C 8017102C EFD8030C */  jal        func_800F63BC
    /* 7F430 80171030 00000000 */   nop
    /* 7F434 80171034 A4D6030C */  jal        func_800F5A90
    /* 7F438 80171038 08000424 */   addiu     $a0, $zero, 0x8
    /* 7F43C 8017103C F5D4030C */  jal        func_800F53D4
    /* 7F440 80171040 00000000 */   nop
    /* 7F444 80171044 D1FF4010 */  beqz       $v0, .L80170F8C
    /* 7F448 80171048 00000000 */   nop
    /* 7F44C 8017104C 8CD9030C */  jal        func_800F6630
    /* 7F450 80171050 A2000424 */   addiu     $a0, $zero, 0xA2
    /* 7F454 80171054 92D0030C */  jal        func_800F4248
    /* 7F458 80171058 08000424 */   addiu     $a0, $zero, 0x8
    /* 7F45C 8017105C 48D0030C */  jal        func_800F4120
    /* 7F460 80171060 02000424 */   addiu     $a0, $zero, 0x2
    /* 7F464 80171064 21004014 */  bnez       $v0, .L801710EC
    /* 7F468 80171068 00000000 */   nop
    /* 7F46C 8017106C 59D9030C */  jal        func_800F6564
    /* 7F470 80171070 73040424 */   addiu     $a0, $zero, 0x473
    /* 7F474 80171074 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7F478 80171078 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7F47C 8017107C 00000000 */  nop
    /* 7F480 80171080 00006290 */  lbu        $v0, 0x0($v1)
    /* 7F484 80171084 73040424 */  addiu      $a0, $zero, 0x473
    /* 7F488 80171088 20004234 */  ori        $v0, $v0, 0x20
    /* 7F48C 8017108C 62E0030C */  jal        func_800F8188
    /* 7F490 80171090 000062A0 */   sb        $v0, 0x0($v1)
    /* 7F494 80171094 59D9030C */  jal        func_800F6564
    /* 7F498 80171098 77040424 */   addiu     $a0, $zero, 0x477
    /* 7F49C 8017109C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7F4A0 801710A0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7F4A4 801710A4 00000000 */  nop
    /* 7F4A8 801710A8 00006290 */  lbu        $v0, 0x0($v1)
    /* 7F4AC 801710AC 77040424 */  addiu      $a0, $zero, 0x477
    /* 7F4B0 801710B0 20004234 */  ori        $v0, $v0, 0x20
    /* 7F4B4 801710B4 62E0030C */  jal        func_800F8188
    /* 7F4B8 801710B8 000062A0 */   sb        $v0, 0x0($v1)
    /* 7F4BC 801710BC 59D9030C */  jal        func_800F6564
    /* 7F4C0 801710C0 F3040424 */   addiu     $a0, $zero, 0x4F3
    /* 7F4C4 801710C4 92D0030C */  jal        func_800F4248
    /* 7F4C8 801710C8 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 7F4CC 801710CC 62E0030C */  jal        func_800F8188
    /* 7F4D0 801710D0 F3040424 */   addiu     $a0, $zero, 0x4F3
    /* 7F4D4 801710D4 59D9030C */  jal        func_800F6564
    /* 7F4D8 801710D8 F7040424 */   addiu     $a0, $zero, 0x4F7
    /* 7F4DC 801710DC 92D0030C */  jal        func_800F4248
    /* 7F4E0 801710E0 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 7F4E4 801710E4 62E0030C */  jal        func_800F8188
    /* 7F4E8 801710E8 F7040424 */   addiu     $a0, $zero, 0x4F7
  .L801710EC:
    /* 7F4EC 801710EC 8CD9030C */  jal        func_800F6630
    /* 7F4F0 801710F0 A2000424 */   addiu     $a0, $zero, 0xA2
    /* 7F4F4 801710F4 92D0030C */  jal        func_800F4248
    /* 7F4F8 801710F8 04000424 */   addiu     $a0, $zero, 0x4
    /* 7F4FC 801710FC 48D0030C */  jal        func_800F4120
    /* 7F500 80171100 02000424 */   addiu     $a0, $zero, 0x2
    /* 7F504 80171104 1D004014 */  bnez       $v0, .L8017117C
    /* 7F508 80171108 00000000 */   nop
    /* 7F50C 8017110C 8CD9030C */  jal        func_800F6630
    /* 7F510 80171110 A1000424 */   addiu     $a0, $zero, 0xA1
    /* 7F514 80171114 92D0030C */  jal        func_800F4248
    /* 7F518 80171118 04000424 */   addiu     $a0, $zero, 0x4
    /* 7F51C 8017111C 48D0030C */  jal        func_800F4120
    /* 7F520 80171120 02000424 */   addiu     $a0, $zero, 0x2
    /* 7F524 80171124 0B004014 */  bnez       $v0, .L80171154
    /* 7F528 80171128 00000000 */   nop
    /* 7F52C 8017112C 8CD9030C */  jal        func_800F6630
    /* 7F530 80171130 A1000424 */   addiu     $a0, $zero, 0xA1
    /* 7F534 80171134 92D0030C */  jal        func_800F4248
    /* 7F538 80171138 03000424 */   addiu     $a0, $zero, 0x3
    /* 7F53C 8017113C DCD0030C */  jal        func_800F4370
    /* 7F540 80171140 D2000424 */   addiu     $a0, $zero, 0xD2
    /* 7F544 80171144 48D0030C */  jal        func_800F4120
    /* 7F548 80171148 02020424 */   addiu     $a0, $zero, 0x202
    /* 7F54C 8017114C 0B004014 */  bnez       $v0, .L8017117C
    /* 7F550 80171150 00000000 */   nop
  .L80171154:
    /* 7F554 80171154 53D9030C */  jal        func_800F654C
    /* 7F558 80171158 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 7F55C 8017115C 62E0030C */  jal        func_800F8188
    /* 7F560 80171160 71040424 */   addiu     $a0, $zero, 0x471
    /* 7F564 80171164 62E0030C */  jal        func_800F8188
    /* 7F568 80171168 75040424 */   addiu     $a0, $zero, 0x475
    /* 7F56C 8017116C 62E0030C */  jal        func_800F8188
    /* 7F570 80171170 F1040424 */   addiu     $a0, $zero, 0x4F1
    /* 7F574 80171174 62E0030C */  jal        func_800F8188
    /* 7F578 80171178 F5040424 */   addiu     $a0, $zero, 0x4F5
  .L8017117C:
    /* 7F57C 8017117C 12E5030C */  jal        func_800F9448
    /* 7F580 80171180 00000000 */   nop
  .L80171184:
    /* 7F584 80171184 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7F588 80171188 00000000 */  nop
    /* 7F58C 8017118C 0800E003 */  jr         $ra
    /* 7F590 80171190 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80170C14
