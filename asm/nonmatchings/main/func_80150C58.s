nonmatching func_80150C58, 0xFB4

glabel func_80150C58
    /* 5F058 80150C58 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5F05C 80150C5C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5F060 80150C60 CA47050C */  jal        func_80151F28
    /* 5F064 80150C64 00000000 */   nop
    /* 5F068 80150C68 77DC030C */  jal        func_800F71DC
    /* 5F06C 80150C6C FF000424 */   addiu     $a0, $zero, 0xFF
  .L80150C70:
    /* 5F070 80150C70 1400043C */  lui        $a0, (0x14EE00 >> 16)
    /* 5F074 80150C74 1ADB030C */  jal        func_800F6C68
    /* 5F078 80150C78 00EE8434 */   ori       $a0, $a0, (0x14EE00 & 0xFFFF)
    /* 5F07C 80150C7C DAE1030C */  jal        func_800F8768
    /* 5F080 80150C80 00190424 */   addiu     $a0, $zero, 0x1900
    /* 5F084 80150C84 92D7030C */  jal        func_800F5E48
    /* 5F088 80150C88 00000000 */   nop
    /* 5F08C 80150C8C 19D7030C */  jal        func_800F5C64
    /* 5F090 80150C90 80800434 */   ori       $a0, $zero, 0x8080
    /* 5F094 80150C94 F6FF4014 */  bnez       $v0, .L80150C70
    /* 5F098 80150C98 00000000 */   nop
    /* 5F09C 80150C9C 3647050C */  jal        func_80151CD8
    /* 5F0A0 80150CA0 00000000 */   nop
    /* 5F0A4 80150CA4 77DC030C */  jal        func_800F71DC
    /* 5F0A8 80150CA8 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 5F0AC 80150CAC C7E5030C */  jal        func_800F971C
    /* 5F0B0 80150CB0 00000000 */   nop
    /* 5F0B4 80150CB4 04D5030C */  jal        func_800F5410
    /* 5F0B8 80150CB8 00000000 */   nop
  .L80150CBC:
    /* 5F0BC 80150CBC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5F0C0 80150CC0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5F0C4 80150CC4 00000000 */  nop
    /* 5F0C8 80150CC8 00004494 */  lhu        $a0, 0x0($v0)
    /* 5F0CC 80150CCC C1CE030C */  jal        func_800F3B04
    /* 5F0D0 80150CD0 00068424 */   addiu     $a0, $a0, 0x600
    /* 5F0D4 80150CD4 CECF030C */  jal        func_800F3F38
    /* 5F0D8 80150CD8 21204000 */   addu      $a0, $v0, $zero
    /* 5F0DC 80150CDC 92D7030C */  jal        func_800F5E48
    /* 5F0E0 80150CE0 00000000 */   nop
    /* 5F0E4 80150CE4 19D7030C */  jal        func_800F5C64
    /* 5F0E8 80150CE8 80800434 */   ori       $a0, $zero, 0x8080
    /* 5F0EC 80150CEC F3FF4014 */  bnez       $v0, .L80150CBC
    /* 5F0F0 80150CF0 00000000 */   nop
    /* 5F0F4 80150CF4 93E0030C */  jal        func_800F824C
    /* 5F0F8 80150CF8 97000424 */   addiu     $a0, $zero, 0x97
    /* 5F0FC 80150CFC 8D68010C */  jal        func_8005A234
    /* 5F100 80150D00 00000000 */   nop
    /* 5F104 80150D04 59D9030C */  jal        func_800F6564
    /* 5F108 80150D08 02180424 */   addiu     $a0, $zero, 0x1802
    /* 5F10C 80150D0C 80E4030C */  jal        func_800F9200
    /* 5F110 80150D10 00000000 */   nop
    /* 5F114 80150D14 80E4030C */  jal        func_800F9200
    /* 5F118 80150D18 00000000 */   nop
    /* 5F11C 80150D1C 92D0030C */  jal        func_800F4248
    /* 5F120 80150D20 80000424 */   addiu     $a0, $zero, 0x80
    /* 5F124 80150D24 62E0030C */  jal        func_800F8188
    /* 5F128 80150D28 2C350424 */   addiu     $a0, $zero, 0x352C
    /* 5F12C 80150D2C F7E4030C */  jal        func_800F93DC
    /* 5F130 80150D30 00000000 */   nop
    /* 5F134 80150D34 92D0030C */  jal        func_800F4248
    /* 5F138 80150D38 40000424 */   addiu     $a0, $zero, 0x40
    /* 5F13C 80150D3C 93E0030C */  jal        func_800F824C
    /* 5F140 80150D40 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 5F144 80150D44 F7E4030C */  jal        func_800F93DC
    /* 5F148 80150D48 00000000 */   nop
    /* 5F14C 80150D4C 92D0030C */  jal        func_800F4248
    /* 5F150 80150D50 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 5F154 80150D54 62E0030C */  jal        func_800F8188
    /* 5F158 80150D58 02180424 */   addiu     $a0, $zero, 0x1802
    /* 5F15C 80150D5C 8CD9030C */  jal        func_800F6630
    /* 5F160 80150D60 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 5F164 80150D64 0DD9030C */  jal        func_800F6434
    /* 5F168 80150D68 02000424 */   addiu     $a0, $zero, 0x2
    /* 5F16C 80150D6C 05004014 */  bnez       $v0, .L80150D84
    /* 5F170 80150D70 00000000 */   nop
    /* 5F174 80150D74 53D9030C */  jal        func_800F654C
    /* 5F178 80150D78 07000424 */   addiu     $a0, $zero, 0x7
    /* 5F17C 80150D7C 62E0030C */  jal        func_800F8188
    /* 5F180 80150D80 02180424 */   addiu     $a0, $zero, 0x1802
  .L80150D84:
    /* 5F184 80150D84 59D9030C */  jal        func_800F6564
    /* 5F188 80150D88 01180424 */   addiu     $a0, $zero, 0x1801
    /* 5F18C 80150D8C 92D0030C */  jal        func_800F4248
    /* 5F190 80150D90 80000424 */   addiu     $a0, $zero, 0x80
    /* 5F194 80150D94 62E0030C */  jal        func_800F8188
    /* 5F198 80150D98 EF380424 */   addiu     $a0, $zero, 0x38EF
    /* 5F19C 80150D9C 59D9030C */  jal        func_800F6564
    /* 5F1A0 80150DA0 01180424 */   addiu     $a0, $zero, 0x1801
    /* 5F1A4 80150DA4 92D0030C */  jal        func_800F4248
    /* 5F1A8 80150DA8 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 5F1AC 80150DAC 62E0030C */  jal        func_800F8188
    /* 5F1B0 80150DB0 01180424 */   addiu     $a0, $zero, 0x1801
    /* 5F1B4 80150DB4 91E5030C */  jal        func_800F9644
    /* 5F1B8 80150DB8 20000424 */   addiu     $a0, $zero, 0x20
    /* 5F1BC 80150DBC 63D9030C */  jal        func_800F658C
    /* 5F1C0 80150DC0 00180424 */   addiu     $a0, $zero, 0x1800
    /* 5F1C4 80150DC4 70D5030C */  jal        func_800F55C0
    /* 5F1C8 80150DC8 00010424 */   addiu     $a0, $zero, 0x100
    /* 5F1CC 80150DCC F0D4030C */  jal        func_800F53C0
    /* 5F1D0 80150DD0 00000000 */   nop
    /* 5F1D4 80150DD4 07004010 */  beqz       $v0, .L80150DF4
    /* 5F1D8 80150DD8 00000000 */   nop
    /* 5F1DC 80150DDC 20D5030C */  jal        func_800F5480
    /* 5F1E0 80150DE0 00000000 */   nop
    /* 5F1E4 80150DE4 34E0030C */  jal        func_800F80D0
    /* 5F1E8 80150DE8 21200000 */   addu      $a0, $zero, $zero
    /* 5F1EC 80150DEC 6CE0030C */  jal        func_800F81B0
    /* 5F1F0 80150DF0 00180424 */   addiu     $a0, $zero, 0x1800
  .L80150DF4:
    /* 5F1F4 80150DF4 63D9030C */  jal        func_800F658C
    /* 5F1F8 80150DF8 00180424 */   addiu     $a0, $zero, 0x1800
    /* 5F1FC 80150DFC 6CE0030C */  jal        func_800F81B0
    /* 5F200 80150E00 3D390424 */   addiu     $a0, $zero, 0x393D
    /* 5F204 80150E04 56D9030C */  jal        func_800F6558
    /* 5F208 80150E08 08000424 */   addiu     $a0, $zero, 0x8
    /* 5F20C 80150E0C 6CE0030C */  jal        func_800F81B0
    /* 5F210 80150E10 3F390424 */   addiu     $a0, $zero, 0x393F
    /* 5F214 80150E14 DB48050C */  jal        func_8015236C
    /* 5F218 80150E18 00000000 */   nop
    /* 5F21C 80150E1C C7E5030C */  jal        func_800F971C
    /* 5F220 80150E20 00000000 */   nop
    /* 5F224 80150E24 98E5030C */  jal        func_800F9660
    /* 5F228 80150E28 20000424 */   addiu     $a0, $zero, 0x20
    /* 5F22C 80150E2C 84DC030C */  jal        func_800F7210
    /* 5F230 80150E30 41390424 */   addiu     $a0, $zero, 0x3941
    /* 5F234 80150E34 C7E5030C */  jal        func_800F971C
    /* 5F238 80150E38 00000000 */   nop
    /* 5F23C 80150E3C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5F240 80150E40 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5F244 80150E44 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 5F248 80150E48 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 5F24C 80150E4C 00004394 */  lhu        $v1, 0x0($v0)
    /* 5F250 80150E50 00000000 */  nop
    /* 5F254 80150E54 000083A4 */  sh         $v1, 0x0($a0)
  .L80150E58:
    /* 5F258 80150E58 0E00043C */  lui        $a0, (0xE8000 >> 16)
    /* 5F25C 80150E5C 1ADB030C */  jal        func_800F6C68
    /* 5F260 80150E60 00808434 */   ori       $a0, $a0, (0xE8000 & 0xFFFF)
    /* 5F264 80150E64 58E2030C */  jal        func_800F8960
    /* 5F268 80150E68 9C290424 */   addiu     $a0, $zero, 0x299C
    /* 5F26C 80150E6C EFD8030C */  jal        func_800F63BC
    /* 5F270 80150E70 00000000 */   nop
    /* 5F274 80150E74 D9D8030C */  jal        func_800F6364
    /* 5F278 80150E78 00000000 */   nop
    /* 5F27C 80150E7C A4D6030C */  jal        func_800F5A90
    /* 5F280 80150E80 08000424 */   addiu     $a0, $zero, 0x8
    /* 5F284 80150E84 F5D4030C */  jal        func_800F53D4
    /* 5F288 80150E88 00000000 */   nop
    /* 5F28C 80150E8C F2FF4010 */  beqz       $v0, .L80150E58
    /* 5F290 80150E90 00000000 */   nop
    /* 5F294 80150E94 59D9030C */  jal        func_800F6564
    /* 5F298 80150E98 9C290424 */   addiu     $a0, $zero, 0x299C
    /* 5F29C 80150E9C 62E0030C */  jal        func_800F8188
    /* 5F2A0 80150EA0 A4290424 */   addiu     $a0, $zero, 0x29A4
    /* 5F2A4 80150EA4 92D0030C */  jal        func_800F4248
    /* 5F2A8 80150EA8 08000424 */   addiu     $a0, $zero, 0x8
    /* 5F2AC 80150EAC 62E0030C */  jal        func_800F8188
    /* 5F2B0 80150EB0 81350424 */   addiu     $a0, $zero, 0x3581
    /* 5F2B4 80150EB4 77DC030C */  jal        func_800F71DC
    /* 5F2B8 80150EB8 03000424 */   addiu     $a0, $zero, 0x3
    /* 5F2BC 80150EBC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5F2C0 80150EC0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5F2C4 80150EC4 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 5F2C8 80150EC8 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 5F2CC 80150ECC 00004394 */  lhu        $v1, 0x0($v0)
    /* 5F2D0 80150ED0 A8D7030C */  jal        func_800F5EA0
    /* 5F2D4 80150ED4 000083A4 */   sh        $v1, 0x0($a0)
  .L80150ED8:
    /* 5F2D8 80150ED8 DADA030C */  jal        func_800F6B68
    /* 5F2DC 80150EDC 9C290424 */   addiu     $a0, $zero, 0x299C
    /* 5F2E0 80150EE0 58E2030C */  jal        func_800F8960
    /* 5F2E4 80150EE4 AD290424 */   addiu     $a0, $zero, 0x29AD
    /* 5F2E8 80150EE8 58E2030C */  jal        func_800F8960
    /* 5F2EC 80150EEC B1290424 */   addiu     $a0, $zero, 0x29B1
    /* 5F2F0 80150EF0 92D7030C */  jal        func_800F5E48
    /* 5F2F4 80150EF4 00000000 */   nop
    /* 5F2F8 80150EF8 A8D7030C */  jal        func_800F5EA0
    /* 5F2FC 80150EFC 00000000 */   nop
    /* 5F300 80150F00 19D7030C */  jal        func_800F5C64
    /* 5F304 80150F04 80800434 */   ori       $a0, $zero, 0x8080
    /* 5F308 80150F08 F3FF4014 */  bnez       $v0, .L80150ED8
    /* 5F30C 80150F0C 00000000 */   nop
    /* 5F310 80150F10 53D9030C */  jal        func_800F654C
    /* 5F314 80150F14 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5F318 80150F18 62E0030C */  jal        func_800F8188
    /* 5F31C 80150F1C B0290424 */   addiu     $a0, $zero, 0x29B0
    /* 5F320 80150F20 62E0030C */  jal        func_800F8188
    /* 5F324 80150F24 B4290424 */   addiu     $a0, $zero, 0x29B4
    /* 5F328 80150F28 C7E5030C */  jal        func_800F971C
    /* 5F32C 80150F2C 00000000 */   nop
    /* 5F330 80150F30 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5F334 80150F34 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5F338 80150F38 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5F33C 80150F3C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5F340 80150F40 00004394 */  lhu        $v1, 0x0($v0)
    /* 5F344 80150F44 A0290424 */  addiu      $a0, $zero, 0x29A0
    /* 5F348 80150F48 59D9030C */  jal        func_800F6564
    /* 5F34C 80150F4C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5F350 80150F50 93E0030C */  jal        func_800F824C
    /* 5F354 80150F54 AB000424 */   addiu     $a0, $zero, 0xAB
  .L80150F58:
    /* 5F358 80150F58 3BE4030C */  jal        func_800F90EC
    /* 5F35C 80150F5C CA290424 */   addiu     $a0, $zero, 0x29CA
    /* 5F360 80150F60 0FCF030C */  jal        func_800F3C3C
    /* 5F364 80150F64 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 5F368 80150F68 CAD3030C */  jal        func_800F4F28
    /* 5F36C 80150F6C 21204000 */   addu      $a0, $v0, $zero
    /* 5F370 80150F70 D3D3030C */  jal        func_800F4F4C
    /* 5F374 80150F74 00000000 */   nop
    /* 5F378 80150F78 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5F37C 80150F7C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5F380 80150F80 00000000 */  nop
    /* 5F384 80150F84 00004494 */  lhu        $a0, 0x0($v0)
    /* 5F388 80150F88 C1CE030C */  jal        func_800F3B04
    /* 5F38C 80150F8C CA298424 */   addiu     $a0, $a0, 0x29CA
    /* 5F390 80150F90 90DE030C */  jal        func_800F7A40
    /* 5F394 80150F94 21204000 */   addu      $a0, $v0, $zero
    /* 5F398 80150F98 0FCF030C */  jal        func_800F3C3C
    /* 5F39C 80150F9C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 5F3A0 80150FA0 CAD3030C */  jal        func_800F4F28
    /* 5F3A4 80150FA4 21204000 */   addu      $a0, $v0, $zero
    /* 5F3A8 80150FA8 D3D3030C */  jal        func_800F4F4C
    /* 5F3AC 80150FAC 00000000 */   nop
    /* 5F3B0 80150FB0 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5F3B4 80150FB4 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5F3B8 80150FB8 00000000 */  nop
    /* 5F3BC 80150FBC 00004494 */  lhu        $a0, 0x0($v0)
    /* 5F3C0 80150FC0 C1CE030C */  jal        func_800F3B04
    /* 5F3C4 80150FC4 CA298424 */   addiu     $a0, $a0, 0x29CA
    /* 5F3C8 80150FC8 90DE030C */  jal        func_800F7A40
    /* 5F3CC 80150FCC 21204000 */   addu      $a0, $v0, $zero
    /* 5F3D0 80150FD0 D9D8030C */  jal        func_800F6364
    /* 5F3D4 80150FD4 00000000 */   nop
    /* 5F3D8 80150FD8 56D6030C */  jal        func_800F5958
    /* 5F3DC 80150FDC 03000424 */   addiu     $a0, $zero, 0x3
    /* 5F3E0 80150FE0 F5D4030C */  jal        func_800F53D4
    /* 5F3E4 80150FE4 00000000 */   nop
    /* 5F3E8 80150FE8 DBFF4010 */  beqz       $v0, .L80150F58
    /* 5F3EC 80150FEC 00000000 */   nop
    /* 5F3F0 80150FF0 C7E5030C */  jal        func_800F971C
    /* 5F3F4 80150FF4 00000000 */   nop
    /* 5F3F8 80150FF8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5F3FC 80150FFC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5F400 80151000 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5F404 80151004 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5F408 80151008 00004394 */  lhu        $v1, 0x0($v0)
    /* 5F40C 8015100C 00000000 */  nop
    /* 5F410 80151010 000083A4 */  sh         $v1, 0x0($a0)
  .L80151014:
    /* 5F414 80151014 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5F418 80151018 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5F41C 8015101C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 5F420 80151020 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 5F424 80151024 00004394 */  lhu        $v1, 0x0($v0)
    /* 5F428 80151028 EFD8030C */  jal        func_800F63BC
    /* 5F42C 8015102C 000083A4 */   sh        $v1, 0x0($a0)
  .L80151030:
    /* 5F430 80151030 DADA030C */  jal        func_800F6B68
    /* 5F434 80151034 AD290424 */   addiu     $a0, $zero, 0x29AD
    /* 5F438 80151038 5DD5030C */  jal        func_800F5574
    /* 5F43C 8015103C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5F440 80151040 F5D4030C */  jal        func_800F53D4
    /* 5F444 80151044 00000000 */   nop
    /* 5F448 80151048 2B004014 */  bnez       $v0, .L801510F8
    /* 5F44C 8015104C 00000000 */   nop
    /* 5F450 80151050 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 5F454 80151054 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 5F458 80151058 00000000 */  nop
    /* 5F45C 8015105C 00004494 */  lhu        $a0, 0x0($v0)
    /* 5F460 80151060 C1CE030C */  jal        func_800F3B04
    /* 5F464 80151064 AD298424 */   addiu     $a0, $a0, 0x29AD
    /* 5F468 80151068 35D5030C */  jal        func_800F54D4
    /* 5F46C 8015106C 21204000 */   addu      $a0, $v0, $zero
    /* 5F470 80151070 F5D4030C */  jal        func_800F53D4
    /* 5F474 80151074 00000000 */   nop
    /* 5F478 80151078 17004010 */  beqz       $v0, .L801510D8
    /* 5F47C 8015107C 00000000 */   nop
    /* 5F480 80151080 04D5030C */  jal        func_800F5410
    /* 5F484 80151084 00000000 */   nop
    /* 5F488 80151088 DADA030C */  jal        func_800F6B68
    /* 5F48C 8015108C CA290424 */   addiu     $a0, $zero, 0x29CA
    /* 5F490 80151090 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 5F494 80151094 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 5F498 80151098 00000000 */  nop
    /* 5F49C 8015109C 00004494 */  lhu        $a0, 0x0($v0)
    /* 5F4A0 801510A0 C1CE030C */  jal        func_800F3B04
    /* 5F4A4 801510A4 CA298424 */   addiu     $a0, $a0, 0x29CA
    /* 5F4A8 801510A8 CECF030C */  jal        func_800F3F38
    /* 5F4AC 801510AC 21204000 */   addu      $a0, $v0, $zero
    /* 5F4B0 801510B0 DAE1030C */  jal        func_800F8768
    /* 5F4B4 801510B4 CA290424 */   addiu     $a0, $zero, 0x29CA
    /* 5F4B8 801510B8 C7E5030C */  jal        func_800F971C
    /* 5F4BC 801510BC 00000000 */   nop
    /* 5F4C0 801510C0 58E2030C */  jal        func_800F8960
    /* 5F4C4 801510C4 CA290424 */   addiu     $a0, $zero, 0x29CA
    /* 5F4C8 801510C8 33D7030C */  jal        func_800F5CCC
    /* 5F4CC 801510CC 00000000 */   nop
    /* 5F4D0 801510D0 58E2030C */  jal        func_800F8960
    /* 5F4D4 801510D4 AD290424 */   addiu     $a0, $zero, 0x29AD
  .L801510D8:
    /* 5F4D8 801510D8 EFD8030C */  jal        func_800F63BC
    /* 5F4DC 801510DC 00000000 */   nop
    /* 5F4E0 801510E0 A4D6030C */  jal        func_800F5A90
    /* 5F4E4 801510E4 03000424 */   addiu     $a0, $zero, 0x3
    /* 5F4E8 801510E8 F5D4030C */  jal        func_800F53D4
    /* 5F4EC 801510EC 00000000 */   nop
    /* 5F4F0 801510F0 CFFF4010 */  beqz       $v0, .L80151030
    /* 5F4F4 801510F4 00000000 */   nop
  .L801510F8:
    /* 5F4F8 801510F8 D9D8030C */  jal        func_800F6364
    /* 5F4FC 801510FC 00000000 */   nop
    /* 5F500 80151100 56D6030C */  jal        func_800F5958
    /* 5F504 80151104 02000424 */   addiu     $a0, $zero, 0x2
    /* 5F508 80151108 F5D4030C */  jal        func_800F53D4
    /* 5F50C 8015110C 00000000 */   nop
    /* 5F510 80151110 C0FF4010 */  beqz       $v0, .L80151014
    /* 5F514 80151114 00000000 */   nop
    /* 5F518 80151118 53D9030C */  jal        func_800F654C
    /* 5F51C 8015111C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5F520 80151120 40DD030C */  jal        func_800F7500
    /* 5F524 80151124 07000424 */   addiu     $a0, $zero, 0x7
  .L80151128:
    /* 5F528 80151128 58E2030C */  jal        func_800F8960
    /* 5F52C 8015112C B5290424 */   addiu     $a0, $zero, 0x29B5
    /* 5F530 80151130 58E2030C */  jal        func_800F8960
    /* 5F534 80151134 BD290424 */   addiu     $a0, $zero, 0x29BD
    /* 5F538 80151138 A8D7030C */  jal        func_800F5EA0
    /* 5F53C 8015113C 00000000 */   nop
    /* 5F540 80151140 19D7030C */  jal        func_800F5C64
    /* 5F544 80151144 80800434 */   ori       $a0, $zero, 0x8080
    /* 5F548 80151148 F7FF4014 */  bnez       $v0, .L80151128
    /* 5F54C 8015114C 00000000 */   nop
    /* 5F550 80151150 EFD8030C */  jal        func_800F63BC
    /* 5F554 80151154 00000000 */   nop
    /* 5F558 80151158 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 5F55C 8015115C 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 5F560 80151160 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5F564 80151164 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5F568 80151168 00004394 */  lhu        $v1, 0x0($v0)
    /* 5F56C 8015116C 00000000 */  nop
    /* 5F570 80151170 000083A4 */  sh         $v1, 0x0($a0)
  .L80151174:
    /* 5F574 80151174 DADA030C */  jal        func_800F6B68
    /* 5F578 80151178 CA290424 */   addiu     $a0, $zero, 0x29CA
    /* 5F57C 8015117C 93E0030C */  jal        func_800F824C
    /* 5F580 80151180 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 5F584 80151184 0DD9030C */  jal        func_800F6434
    /* 5F588 80151188 02000424 */   addiu     $a0, $zero, 0x2
    /* 5F58C 8015118C 15004014 */  bnez       $v0, .L801511E4
    /* 5F590 80151190 00000000 */   nop
  .L80151194:
    /* 5F594 80151194 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 5F598 80151198 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 5F59C 8015119C 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 5F5A0 801511A0 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 5F5A4 801511A4 00004390 */  lbu        $v1, 0x0($v0)
    /* 5F5A8 801511A8 B5290424 */  addiu      $a0, $zero, 0x29B5
    /* 5F5AC 801511AC 58E2030C */  jal        func_800F8960
    /* 5F5B0 801511B0 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5F5B4 801511B4 58E2030C */  jal        func_800F8960
    /* 5F5B8 801511B8 BD290424 */   addiu     $a0, $zero, 0x29BD
    /* 5F5BC 801511BC EFD8030C */  jal        func_800F63BC
    /* 5F5C0 801511C0 00000000 */   nop
    /* 5F5C4 801511C4 68D7030C */  jal        func_800F5DA0
    /* 5F5C8 801511C8 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 5F5CC 801511CC 8CD9030C */  jal        func_800F6630
    /* 5F5D0 801511D0 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 5F5D4 801511D4 0DD9030C */  jal        func_800F6434
    /* 5F5D8 801511D8 02020424 */   addiu     $a0, $zero, 0x202
    /* 5F5DC 801511DC EDFF4014 */  bnez       $v0, .L80151194
    /* 5F5E0 801511E0 00000000 */   nop
  .L801511E4:
    /* 5F5E4 801511E4 D9D8030C */  jal        func_800F6364
    /* 5F5E8 801511E8 00000000 */   nop
    /* 5F5EC 801511EC 56D6030C */  jal        func_800F5958
    /* 5F5F0 801511F0 03000424 */   addiu     $a0, $zero, 0x3
    /* 5F5F4 801511F4 F5D4030C */  jal        func_800F53D4
    /* 5F5F8 801511F8 00000000 */   nop
    /* 5F5FC 801511FC DDFF4010 */  beqz       $v0, .L80151174
    /* 5F600 80151200 00000000 */   nop
    /* 5F604 80151204 59D9030C */  jal        func_800F6564
    /* 5F608 80151208 A1290424 */   addiu     $a0, $zero, 0x29A1
    /* 5F60C 8015120C 93E0030C */  jal        func_800F824C
    /* 5F610 80151210 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 5F614 80151214 53D9030C */  jal        func_800F654C
    /* 5F618 80151218 08000424 */   addiu     $a0, $zero, 0x8
    /* 5F61C 8015121C 93E0030C */  jal        func_800F824C
    /* 5F620 80151220 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 5F624 80151224 0349050C */  jal        func_8015240C
    /* 5F628 80151228 00000000 */   nop
    /* 5F62C 8015122C 9CDC030C */  jal        func_800F7270
    /* 5F630 80151230 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 5F634 80151234 C7E5030C */  jal        func_800F971C
    /* 5F638 80151238 00000000 */   nop
    /* 5F63C 8015123C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5F640 80151240 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5F644 80151244 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 5F648 80151248 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 5F64C 8015124C 00004394 */  lhu        $v1, 0x0($v0)
    /* 5F650 80151250 00000000 */  nop
    /* 5F654 80151254 000083A4 */  sh         $v1, 0x0($a0)
  .L80151258:
    /* 5F658 80151258 0E00043C */  lui        $a0, (0xE9000 >> 16)
    /* 5F65C 8015125C 1ADB030C */  jal        func_800F6C68
    /* 5F660 80151260 00908434 */   ori       $a0, $a0, (0xE9000 & 0xFFFF)
    /* 5F664 80151264 58E2030C */  jal        func_800F8960
    /* 5F668 80151268 A5290424 */   addiu     $a0, $zero, 0x29A5
    /* 5F66C 8015126C D9D8030C */  jal        func_800F6364
    /* 5F670 80151270 00000000 */   nop
    /* 5F674 80151274 EFD8030C */  jal        func_800F63BC
    /* 5F678 80151278 00000000 */   nop
    /* 5F67C 8015127C A4D6030C */  jal        func_800F5A90
    /* 5F680 80151280 08000424 */   addiu     $a0, $zero, 0x8
    /* 5F684 80151284 F5D4030C */  jal        func_800F53D4
    /* 5F688 80151288 00000000 */   nop
    /* 5F68C 8015128C F2FF4010 */  beqz       $v0, .L80151258
    /* 5F690 80151290 00000000 */   nop
    /* 5F694 80151294 04D5030C */  jal        func_800F5410
    /* 5F698 80151298 00000000 */   nop
    /* 5F69C 8015129C 59D9030C */  jal        func_800F6564
    /* 5F6A0 801512A0 CA290424 */   addiu     $a0, $zero, 0x29CA
    /* 5F6A4 801512A4 C1CE030C */  jal        func_800F3B04
    /* 5F6A8 801512A8 CB290424 */   addiu     $a0, $zero, 0x29CB
    /* 5F6AC 801512AC CECF030C */  jal        func_800F3F38
    /* 5F6B0 801512B0 21204000 */   addu      $a0, $v0, $zero
    /* 5F6B4 801512B4 C1CE030C */  jal        func_800F3B04
    /* 5F6B8 801512B8 CC290424 */   addiu     $a0, $zero, 0x29CC
    /* 5F6BC 801512BC CECF030C */  jal        func_800F3F38
    /* 5F6C0 801512C0 21204000 */   addu      $a0, $v0, $zero
    /* 5F6C4 801512C4 62E0030C */  jal        func_800F8188
    /* 5F6C8 801512C8 CD290424 */   addiu     $a0, $zero, 0x29CD
    /* 5F6CC 801512CC 59D9030C */  jal        func_800F6564
    /* 5F6D0 801512D0 CA290424 */   addiu     $a0, $zero, 0x29CA
    /* 5F6D4 801512D4 62E0030C */  jal        func_800F8188
    /* 5F6D8 801512D8 F0380424 */   addiu     $a0, $zero, 0x38F0
    /* 5F6DC 801512DC 59D9030C */  jal        func_800F6564
    /* 5F6E0 801512E0 CB290424 */   addiu     $a0, $zero, 0x29CB
    /* 5F6E4 801512E4 62E0030C */  jal        func_800F8188
    /* 5F6E8 801512E8 F1380424 */   addiu     $a0, $zero, 0x38F1
    /* 5F6EC 801512EC 59D9030C */  jal        func_800F6564
    /* 5F6F0 801512F0 CC290424 */   addiu     $a0, $zero, 0x29CC
    /* 5F6F4 801512F4 62E0030C */  jal        func_800F8188
    /* 5F6F8 801512F8 F2380424 */   addiu     $a0, $zero, 0x38F2
    /* 5F6FC 801512FC 59D9030C */  jal        func_800F6564
    /* 5F700 80151300 A3290424 */   addiu     $a0, $zero, 0x29A3
    /* 5F704 80151304 93E0030C */  jal        func_800F824C
    /* 5F708 80151308 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 5F70C 8015130C 53D9030C */  jal        func_800F654C
    /* 5F710 80151310 10000424 */   addiu     $a0, $zero, 0x10
    /* 5F714 80151314 93E0030C */  jal        func_800F824C
    /* 5F718 80151318 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 5F71C 8015131C 0349050C */  jal        func_8015240C
    /* 5F720 80151320 00000000 */   nop
    /* 5F724 80151324 9CDC030C */  jal        func_800F7270
    /* 5F728 80151328 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 5F72C 8015132C C7E5030C */  jal        func_800F971C
    /* 5F730 80151330 00000000 */   nop
    /* 5F734 80151334 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5F738 80151338 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5F73C 8015133C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 5F740 80151340 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 5F744 80151344 00004394 */  lhu        $v1, 0x0($v0)
    /* 5F748 80151348 00000000 */  nop
    /* 5F74C 8015134C 000083A4 */  sh         $v1, 0x0($a0)
    /* 5F750 80151350 0E00043C */  lui        $a0, (0xEBAC0 >> 16)
  .L80151354:
    /* 5F754 80151354 1ADB030C */  jal        func_800F6C68
    /* 5F758 80151358 C0BA8434 */   ori       $a0, $a0, (0xEBAC0 & 0xFFFF)
    /* 5F75C 8015135C 58E2030C */  jal        func_800F8960
    /* 5F760 80151360 CF290424 */   addiu     $a0, $zero, 0x29CF
    /* 5F764 80151364 D9D8030C */  jal        func_800F6364
    /* 5F768 80151368 00000000 */   nop
    /* 5F76C 8015136C EFD8030C */  jal        func_800F63BC
    /* 5F770 80151370 00000000 */   nop
    /* 5F774 80151374 A4D6030C */  jal        func_800F5A90
    /* 5F778 80151378 10000424 */   addiu     $a0, $zero, 0x10
    /* 5F77C 8015137C F5D4030C */  jal        func_800F53D4
    /* 5F780 80151380 00000000 */   nop
    /* 5F784 80151384 F3FF4010 */  beqz       $v0, .L80151354
    /* 5F788 80151388 0E00043C */   lui       $a0, (0xEBAC0 >> 16)
    /* 5F78C 8015138C 714E050C */  jal        func_801539C4
    /* 5F790 80151390 00000000 */   nop
    /* 5F794 80151394 59D9030C */  jal        func_800F6564
    /* 5F798 80151398 82220424 */   addiu     $a0, $zero, 0x2282
    /* 5F79C 8015139C 5DD5030C */  jal        func_800F5574
    /* 5F7A0 801513A0 61000424 */   addiu     $a0, $zero, 0x61
    /* 5F7A4 801513A4 F0D4030C */  jal        func_800F53C0
    /* 5F7A8 801513A8 00000000 */   nop
    /* 5F7AC 801513AC 10004010 */  beqz       $v0, .L801513F0
    /* 5F7B0 801513B0 00000000 */   nop
    /* 5F7B4 801513B4 20D5030C */  jal        func_800F5480
    /* 5F7B8 801513B8 00000000 */   nop
    /* 5F7BC 801513BC 16E0030C */  jal        func_800F8058
    /* 5F7C0 801513C0 61000424 */   addiu     $a0, $zero, 0x61
    /* 5F7C4 801513C4 1300043C */  lui        $a0, (0x13FF0F >> 16)
    /* 5F7C8 801513C8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5F7CC 801513CC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5F7D0 801513D0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5F7D4 801513D4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5F7D8 801513D8 00004394 */  lhu        $v1, 0x0($v0)
    /* 5F7DC 801513DC 0FFF8434 */  ori        $a0, $a0, (0x13FF0F & 0xFFFF)
    /* 5F7E0 801513E0 1ADB030C */  jal        func_800F6C68
    /* 5F7E4 801513E4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5F7E8 801513E8 62E0030C */  jal        func_800F8188
    /* 5F7EC 801513EC D6380424 */   addiu     $a0, $zero, 0x38D6
  .L801513F0:
    /* 5F7F0 801513F0 59D9030C */  jal        func_800F6564
    /* 5F7F4 801513F4 E5380424 */   addiu     $a0, $zero, 0x38E5
    /* 5F7F8 801513F8 92D0030C */  jal        func_800F4248
    /* 5F7FC 801513FC 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5F800 80151400 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5F804 80151404 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5F808 80151408 00000000 */  nop
    /* 5F80C 8015140C 00006290 */  lbu        $v0, 0x0($v1)
    /* 5F810 80151410 03000424 */  addiu      $a0, $zero, 0x3
    /* 5F814 80151414 82100200 */  srl        $v0, $v0, 2
    /* 5F818 80151418 5DD5030C */  jal        func_800F5574
    /* 5F81C 8015141C 000062A0 */   sb        $v0, 0x0($v1)
    /* 5F820 80151420 F5D4030C */  jal        func_800F53D4
    /* 5F824 80151424 00000000 */   nop
    /* 5F828 80151428 0C004014 */  bnez       $v0, .L8015145C
    /* 5F82C 8015142C 00000000 */   nop
    /* 5F830 80151430 1300043C */  lui        $a0, (0x13FF0C >> 16)
    /* 5F834 80151434 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5F838 80151438 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5F83C 8015143C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5F840 80151440 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5F844 80151444 00004394 */  lhu        $v1, 0x0($v0)
    /* 5F848 80151448 0CFF8434 */  ori        $a0, $a0, (0x13FF0C & 0xFFFF)
    /* 5F84C 8015144C 1ADB030C */  jal        func_800F6C68
    /* 5F850 80151450 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5F854 80151454 40B9050C */  jal        func_8016E500
    /* 5F858 80151458 00000000 */   nop
  .L8015145C:
    /* 5F85C 8015145C 53D9030C */  jal        func_800F654C
    /* 5F860 80151460 03000424 */   addiu     $a0, $zero, 0x3
    /* 5F864 80151464 0E43050C */  jal        func_80150C38
    /* 5F868 80151468 00000000 */   nop
  .L8015146C:
    /* 5F86C 8015146C 59D9030C */  jal        func_800F6564
    /* 5F870 80151470 AC160424 */   addiu     $a0, $zero, 0x16AC
    /* 5F874 80151474 1300043C */  lui        $a0, (0x13FF06 >> 16)
    /* 5F878 80151478 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5F87C 8015147C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5F880 80151480 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5F884 80151484 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5F888 80151488 00004394 */  lhu        $v1, 0x0($v0)
    /* 5F88C 8015148C 06FF8434 */  ori        $a0, $a0, (0x13FF06 & 0xFFFF)
    /* 5F890 80151490 1ADB030C */  jal        func_800F6C68
    /* 5F894 80151494 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5F898 80151498 7AD8030C */  jal        func_800F61E8
    /* 5F89C 8015149C 00000000 */   nop
    /* 5F8A0 801514A0 62E0030C */  jal        func_800F8188
    /* 5F8A4 801514A4 38350424 */   addiu     $a0, $zero, 0x3538
    /* 5F8A8 801514A8 DDE3030C */  jal        func_800F8F74
    /* 5F8AC 801514AC E6380424 */   addiu     $a0, $zero, 0x38E6
  .L801514B0:
    /* 5F8B0 801514B0 53D9030C */  jal        func_800F654C
    /* 5F8B4 801514B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 5F8B8 801514B8 0E43050C */  jal        func_80150C38
    /* 5F8BC 801514BC 00000000 */   nop
    /* 5F8C0 801514C0 59D9030C */  jal        func_800F6564
    /* 5F8C4 801514C4 D9380424 */   addiu     $a0, $zero, 0x38D9
    /* 5F8C8 801514C8 C1CE030C */  jal        func_800F3B04
    /* 5F8CC 801514CC DA380424 */   addiu     $a0, $zero, 0x38DA
    /* 5F8D0 801514D0 31DE030C */  jal        func_800F78C4
    /* 5F8D4 801514D4 21204000 */   addu      $a0, $v0, $zero
    /* 5F8D8 801514D8 46DE030C */  jal        func_800F7918
    /* 5F8DC 801514DC 02020424 */   addiu     $a0, $zero, 0x202
    /* 5F8E0 801514E0 F3FF4014 */  bnez       $v0, .L801514B0
    /* 5F8E4 801514E4 00000000 */   nop
    /* 5F8E8 801514E8 49D7030C */  jal        func_800F5D24
    /* 5F8EC 801514EC 38350424 */   addiu     $a0, $zero, 0x3538
    /* 5F8F0 801514F0 59D9030C */  jal        func_800F6564
    /* 5F8F4 801514F4 38350424 */   addiu     $a0, $zero, 0x3538
    /* 5F8F8 801514F8 0DD9030C */  jal        func_800F6434
    /* 5F8FC 801514FC 02020424 */   addiu     $a0, $zero, 0x202
    /* 5F900 80151500 EBFF4014 */  bnez       $v0, .L801514B0
    /* 5F904 80151504 00000000 */   nop
    /* 5F908 80151508 59D9030C */  jal        func_800F6564
    /* 5F90C 8015150C D7380424 */   addiu     $a0, $zero, 0x38D7
    /* 5F910 80151510 0DD9030C */  jal        func_800F6434
    /* 5F914 80151514 02020424 */   addiu     $a0, $zero, 0x202
    /* 5F918 80151518 09004014 */  bnez       $v0, .L80151540
    /* 5F91C 8015151C 00000000 */   nop
    /* 5F920 80151520 59D9030C */  jal        func_800F6564
    /* 5F924 80151524 81350424 */   addiu     $a0, $zero, 0x3581
    /* 5F928 80151528 92D0030C */  jal        func_800F4248
    /* 5F92C 8015152C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5F930 80151530 48D0030C */  jal        func_800F4120
    /* 5F934 80151534 02000424 */   addiu     $a0, $zero, 0x2
    /* 5F938 80151538 2B004014 */  bnez       $v0, .L801515E8
    /* 5F93C 8015153C 00000000 */   nop
  .L80151540:
    /* 5F940 80151540 59D9030C */  jal        func_800F6564
    /* 5F944 80151544 81350424 */   addiu     $a0, $zero, 0x3581
    /* 5F948 80151548 92D0030C */  jal        func_800F4248
    /* 5F94C 8015154C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5F950 80151550 48D0030C */  jal        func_800F4120
    /* 5F954 80151554 02000424 */   addiu     $a0, $zero, 0x2
    /* 5F958 80151558 05004014 */  bnez       $v0, .L80151570
    /* 5F95C 8015155C 00000000 */   nop
    /* 5F960 80151560 53D9030C */  jal        func_800F654C
    /* 5F964 80151564 04000424 */   addiu     $a0, $zero, 0x4
    /* 5F968 80151568 68450508 */  j          .L801515A0
    /* 5F96C 8015156C 00000000 */   nop
  .L80151570:
    /* 5F970 80151570 59D9030C */  jal        func_800F6564
    /* 5F974 80151574 D7380424 */   addiu     $a0, $zero, 0x38D7
    /* 5F978 80151578 0DD9030C */  jal        func_800F6434
    /* 5F97C 8015157C 80000424 */   addiu     $a0, $zero, 0x80
    /* 5F980 80151580 05004014 */  bnez       $v0, .L80151598
    /* 5F984 80151584 00000000 */   nop
    /* 5F988 80151588 53D9030C */  jal        func_800F654C
    /* 5F98C 8015158C 02000424 */   addiu     $a0, $zero, 0x2
    /* 5F990 80151590 68450508 */  j          .L801515A0
    /* 5F994 80151594 00000000 */   nop
  .L80151598:
    /* 5F998 80151598 53D9030C */  jal        func_800F654C
    /* 5F99C 8015159C 03000424 */   addiu     $a0, $zero, 0x3
  .L801515A0:
    /* 5F9A0 801515A0 62E0030C */  jal        func_800F8188
    /* 5F9A4 801515A4 CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 5F9A8 801515A8 53D9030C */  jal        func_800F654C
    /* 5F9AC 801515AC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5F9B0 801515B0 62E0030C */  jal        func_800F8188
    /* 5F9B4 801515B4 CB340424 */   addiu     $a0, $zero, 0x34CB
    /* 5F9B8 801515B8 62E0030C */  jal        func_800F8188
    /* 5F9BC 801515BC C4330424 */   addiu     $a0, $zero, 0x33C4
    /* 5F9C0 801515C0 994C050C */  jal        func_80153264
    /* 5F9C4 801515C4 00000000 */   nop
    /* 5F9C8 801515C8 53D9030C */  jal        func_800F654C
    /* 5F9CC 801515CC 05000424 */   addiu     $a0, $zero, 0x5
    /* 5F9D0 801515D0 0E43050C */  jal        func_80150C38
    /* 5F9D4 801515D4 00000000 */   nop
    /* 5F9D8 801515D8 DDE3030C */  jal        func_800F8F74
    /* 5F9DC 801515DC D7380424 */   addiu     $a0, $zero, 0x38D7
    /* 5F9E0 801515E0 DDE3030C */  jal        func_800F8F74
    /* 5F9E4 801515E4 81350424 */   addiu     $a0, $zero, 0x3581
  .L801515E8:
    /* 5F9E8 801515E8 59D9030C */  jal        func_800F6564
    /* 5F9EC 801515EC 82220424 */   addiu     $a0, $zero, 0x2282
    /* 5F9F0 801515F0 5DD5030C */  jal        func_800F5574
    /* 5F9F4 801515F4 63000424 */   addiu     $a0, $zero, 0x63
    /* 5F9F8 801515F8 F5D4030C */  jal        func_800F53D4
    /* 5F9FC 801515FC 00000000 */   nop
    /* 5FA00 80151600 0B004010 */  beqz       $v0, .L80151630
    /* 5FA04 80151604 00000000 */   nop
    /* 5FA08 80151608 59D9030C */  jal        func_800F6564
    /* 5FA0C 8015160C 2D350424 */   addiu     $a0, $zero, 0x352D
    /* 5FA10 80151610 0DD9030C */  jal        func_800F6434
    /* 5FA14 80151614 02020424 */   addiu     $a0, $zero, 0x202
    /* 5FA18 80151618 05004014 */  bnez       $v0, .L80151630
    /* 5FA1C 8015161C 00000000 */   nop
    /* 5FA20 80151620 53D9030C */  jal        func_800F654C
    /* 5FA24 80151624 0F000424 */   addiu     $a0, $zero, 0xF
    /* 5FA28 80151628 62E0030C */  jal        func_800F8188
    /* 5FA2C 8015162C D6380424 */   addiu     $a0, $zero, 0x38D6
  .L80151630:
    /* 5FA30 80151630 B45E050C */  jal        func_80157AD0
    /* 5FA34 80151634 00000000 */   nop
    /* 5FA38 80151638 59D9030C */  jal        func_800F6564
    /* 5FA3C 8015163C 01360424 */   addiu     $a0, $zero, 0x3601
    /* 5FA40 80151640 5DD5030C */  jal        func_800F5574
    /* 5FA44 80151644 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5FA48 80151648 F5D4030C */  jal        func_800F53D4
    /* 5FA4C 8015164C 00000000 */   nop
    /* 5FA50 80151650 05004010 */  beqz       $v0, .L80151668
    /* 5FA54 80151654 00000000 */   nop
    /* 5FA58 80151658 E242050C */  jal        func_80150B88
    /* 5FA5C 8015165C 00000000 */   nop
    /* 5FA60 80151660 6A76050C */  jal        func_8015D9A8
    /* 5FA64 80151664 00000000 */   nop
  .L80151668:
    /* 5FA68 80151668 1F6B050C */  jal        func_8015AC7C
    /* 5FA6C 8015166C 00000000 */   nop
    /* 5FA70 80151670 8CD9030C */  jal        func_800F6630
    /* 5FA74 80151674 A8000424 */   addiu     $a0, $zero, 0xA8
    /* 5FA78 80151678 0DD9030C */  jal        func_800F6434
    /* 5FA7C 8015167C 02020424 */   addiu     $a0, $zero, 0x202
    /* 5FA80 80151680 25004014 */  bnez       $v0, .L80151718
    /* 5FA84 80151684 00000000 */   nop
    /* 5FA88 80151688 59D9030C */  jal        func_800F6564
    /* 5FA8C 8015168C 01360424 */   addiu     $a0, $zero, 0x3601
    /* 5FA90 80151690 5DD5030C */  jal        func_800F5574
    /* 5FA94 80151694 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5FA98 80151698 F5D4030C */  jal        func_800F53D4
    /* 5FA9C 8015169C 00000000 */   nop
    /* 5FAA0 801516A0 05004010 */  beqz       $v0, .L801516B8
    /* 5FAA4 801516A4 00000000 */   nop
    /* 5FAA8 801516A8 2977050C */  jal        func_8015DCA4
    /* 5FAAC 801516AC 00000000 */   nop
    /* 5FAB0 801516B0 4D6F050C */  jal        func_8015BD34
    /* 5FAB4 801516B4 00000000 */   nop
  .L801516B8:
    /* 5FAB8 801516B8 CC5F050C */  jal        func_80157F30
    /* 5FABC 801516BC 00000000 */   nop
    /* 5FAC0 801516C0 8CD9030C */  jal        func_800F6630
    /* 5FAC4 801516C4 D1000424 */   addiu     $a0, $zero, 0xD1
    /* 5FAC8 801516C8 0DD9030C */  jal        func_800F6434
    /* 5FACC 801516CC 02000424 */   addiu     $a0, $zero, 0x2
    /* 5FAD0 801516D0 66FF4014 */  bnez       $v0, .L8015146C
    /* 5FAD4 801516D4 00000000 */   nop
    /* 5FAD8 801516D8 6460050C */  jal        func_80158190
    /* 5FADC 801516DC 00000000 */   nop
    /* 5FAE0 801516E0 0347050C */  jal        func_80151C0C
    /* 5FAE4 801516E4 00000000 */   nop
    /* 5FAE8 801516E8 59D9030C */  jal        func_800F6564
    /* 5FAEC 801516EC 2E350424 */   addiu     $a0, $zero, 0x352E
    /* 5FAF0 801516F0 5DD5030C */  jal        func_800F5574
    /* 5FAF4 801516F4 02000424 */   addiu     $a0, $zero, 0x2
    /* 5FAF8 801516F8 F5D4030C */  jal        func_800F53D4
    /* 5FAFC 801516FC 00000000 */   nop
    /* 5FB00 80151700 5AFF4010 */  beqz       $v0, .L8015146C
    /* 5FB04 80151704 00000000 */   nop
    /* 5FB08 80151708 627C010C */  jal        func_8005F188
    /* 5FB0C 8015170C 00000000 */   nop
    /* 5FB10 80151710 1B450508 */  j          .L8015146C
    /* 5FB14 80151714 00000000 */   nop
  .L80151718:
    /* 5FB18 80151718 58B9050C */  jal        func_8016E560
    /* 5FB1C 8015171C 00000000 */   nop
    /* 5FB20 80151720 53D9030C */  jal        func_800F654C
    /* 5FB24 80151724 85000424 */   addiu     $a0, $zero, 0x85
    /* 5FB28 80151728 62E0030C */  jal        func_800F8188
    /* 5FB2C 8015172C F3350424 */   addiu     $a0, $zero, 0x35F3
    /* 5FB30 80151730 8CD9030C */  jal        func_800F6630
    /* 5FB34 80151734 D7000424 */   addiu     $a0, $zero, 0xD7
    /* 5FB38 80151738 0DD9030C */  jal        func_800F6434
    /* 5FB3C 8015173C 02000424 */   addiu     $a0, $zero, 0x2
    /* 5FB40 80151740 05004014 */  bnez       $v0, .L80151758
    /* 5FB44 80151744 00000000 */   nop
    /* 5FB48 80151748 53D9030C */  jal        func_800F654C
    /* 5FB4C 8015174C 01000424 */   addiu     $a0, $zero, 0x1
    /* 5FB50 80151750 0E43050C */  jal        func_80150C38
    /* 5FB54 80151754 00000000 */   nop
  .L80151758:
    /* 5FB58 80151758 8CD9030C */  jal        func_800F6630
    /* 5FB5C 8015175C A8000424 */   addiu     $a0, $zero, 0xA8
    /* 5FB60 80151760 62E0030C */  jal        func_800F8188
    /* 5FB64 80151764 03180424 */   addiu     $a0, $zero, 0x1803
    /* 5FB68 80151768 92D0030C */  jal        func_800F4248
    /* 5FB6C 8015176C 60000424 */   addiu     $a0, $zero, 0x60
    /* 5FB70 80151770 48D0030C */  jal        func_800F4120
    /* 5FB74 80151774 02020424 */   addiu     $a0, $zero, 0x202
    /* 5FB78 80151778 4B004014 */  bnez       $v0, .L801518A8
    /* 5FB7C 8015177C 00000000 */   nop
    /* 5FB80 80151780 8CD9030C */  jal        func_800F6630
    /* 5FB84 80151784 A8000424 */   addiu     $a0, $zero, 0xA8
    /* 5FB88 80151788 92D0030C */  jal        func_800F4248
    /* 5FB8C 8015178C 04000424 */   addiu     $a0, $zero, 0x4
    /* 5FB90 80151790 48D0030C */  jal        func_800F4120
    /* 5FB94 80151794 02000424 */   addiu     $a0, $zero, 0x2
    /* 5FB98 80151798 0B004014 */  bnez       $v0, .L801517C8
    /* 5FB9C 8015179C 00000000 */   nop
    /* 5FBA0 801517A0 53D9030C */  jal        func_800F654C
    /* 5FBA4 801517A4 15000424 */   addiu     $a0, $zero, 0x15
    /* 5FBA8 801517A8 0E43050C */  jal        func_80150C38
    /* 5FBAC 801517AC 00000000 */   nop
    /* 5FBB0 801517B0 464D050C */  jal        func_80153518
    /* 5FBB4 801517B4 00000000 */   nop
    /* 5FBB8 801517B8 C795050C */  jal        func_8016571C
    /* 5FBBC 801517BC 00000000 */   nop
    /* 5FBC0 801517C0 7C460508 */  j          .L801519F0
    /* 5FBC4 801517C4 00000000 */   nop
  .L801517C8:
    /* 5FBC8 801517C8 59D9030C */  jal        func_800F6564
    /* 5FBCC 801517CC E5380424 */   addiu     $a0, $zero, 0x38E5
    /* 5FBD0 801517D0 92D0030C */  jal        func_800F4248
    /* 5FBD4 801517D4 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5FBD8 801517D8 5DD5030C */  jal        func_800F5574
    /* 5FBDC 801517DC 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5FBE0 801517E0 F5D4030C */  jal        func_800F53D4
    /* 5FBE4 801517E4 00000000 */   nop
    /* 5FBE8 801517E8 05004014 */  bnez       $v0, .L80151800
    /* 5FBEC 801517EC 00000000 */   nop
    /* 5FBF0 801517F0 53D9030C */  jal        func_800F654C
    /* 5FBF4 801517F4 8B000424 */   addiu     $a0, $zero, 0x8B
    /* 5FBF8 801517F8 62E0030C */  jal        func_800F8188
    /* 5FBFC 801517FC F3350424 */   addiu     $a0, $zero, 0x35F3
  .L80151800:
    /* 5FC00 80151800 53D9030C */  jal        func_800F654C
    /* 5FC04 80151804 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5FC08 80151808 0E43050C */  jal        func_80150C38
    /* 5FC0C 8015180C 00000000 */   nop
    /* 5FC10 80151810 53D9030C */  jal        func_800F654C
    /* 5FC14 80151814 02000424 */   addiu     $a0, $zero, 0x2
    /* 5FC18 80151818 0E43050C */  jal        func_80150C38
    /* 5FC1C 8015181C 00000000 */   nop
    /* 5FC20 80151820 53D9030C */  jal        func_800F654C
    /* 5FC24 80151824 15000424 */   addiu     $a0, $zero, 0x15
    /* 5FC28 80151828 0E43050C */  jal        func_80150C38
    /* 5FC2C 8015182C 00000000 */   nop
    /* 5FC30 80151830 994C050C */  jal        func_80153264
    /* 5FC34 80151834 00000000 */   nop
    /* 5FC38 80151838 53D9030C */  jal        func_800F654C
    /* 5FC3C 8015183C 24000424 */   addiu     $a0, $zero, 0x24
    /* 5FC40 80151840 62E0030C */  jal        func_800F8188
    /* 5FC44 80151844 CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 5FC48 80151848 53D9030C */  jal        func_800F654C
    /* 5FC4C 8015184C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5FC50 80151850 62E0030C */  jal        func_800F8188
    /* 5FC54 80151854 CB340424 */   addiu     $a0, $zero, 0x34CB
    /* 5FC58 80151858 62E0030C */  jal        func_800F8188
    /* 5FC5C 8015185C C4330424 */   addiu     $a0, $zero, 0x33C4
    /* 5FC60 80151860 DDE3030C */  jal        func_800F8F74
    /* 5FC64 80151864 9A350424 */   addiu     $a0, $zero, 0x359A
    /* 5FC68 80151868 53D9030C */  jal        func_800F654C
    /* 5FC6C 8015186C 40000424 */   addiu     $a0, $zero, 0x40
    /* 5FC70 80151870 62E0030C */  jal        func_800F8188
    /* 5FC74 80151874 C2340424 */   addiu     $a0, $zero, 0x34C2
    /* 5FC78 80151878 59D9030C */  jal        func_800F6564
    /* 5FC7C 8015187C 8B380424 */   addiu     $a0, $zero, 0x388B
    /* 5FC80 80151880 0DD9030C */  jal        func_800F6434
    /* 5FC84 80151884 02020424 */   addiu     $a0, $zero, 0x202
    /* 5FC88 80151888 59004014 */  bnez       $v0, .L801519F0
    /* 5FC8C 8015188C 00000000 */   nop
    /* 5FC90 80151890 53D9030C */  jal        func_800F654C
    /* 5FC94 80151894 05000424 */   addiu     $a0, $zero, 0x5
    /* 5FC98 80151898 0E43050C */  jal        func_80150C38
    /* 5FC9C 8015189C 00000000 */   nop
    /* 5FCA0 801518A0 7C460508 */  j          .L801519F0
    /* 5FCA4 801518A4 00000000 */   nop
  .L801518A8:
    /* 5FCA8 801518A8 92D0030C */  jal        func_800F4248
    /* 5FCAC 801518AC 40000424 */   addiu     $a0, $zero, 0x40
    /* 5FCB0 801518B0 48D0030C */  jal        func_800F4120
    /* 5FCB4 801518B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 5FCB8 801518B8 13004014 */  bnez       $v0, .L80151908
    /* 5FCBC 801518BC 00000000 */   nop
    /* 5FCC0 801518C0 53D9030C */  jal        func_800F654C
    /* 5FCC4 801518C4 13000424 */   addiu     $a0, $zero, 0x13
    /* 5FCC8 801518C8 0E43050C */  jal        func_80150C38
    /* 5FCCC 801518CC 00000000 */   nop
    /* 5FCD0 801518D0 464D050C */  jal        func_80153518
    /* 5FCD4 801518D4 00000000 */   nop
    /* 5FCD8 801518D8 C795050C */  jal        func_8016571C
    /* 5FCDC 801518DC 00000000 */   nop
    /* 5FCE0 801518E0 59D9030C */  jal        func_800F6564
    /* 5FCE4 801518E4 F3380424 */   addiu     $a0, $zero, 0x38F3
    /* 5FCE8 801518E8 0DD9030C */  jal        func_800F6434
    /* 5FCEC 801518EC 02020424 */   addiu     $a0, $zero, 0x202
    /* 5FCF0 801518F0 3F004014 */  bnez       $v0, .L801519F0
    /* 5FCF4 801518F4 00000000 */   nop
    /* 5FCF8 801518F8 824D050C */  jal        func_80153608
    /* 5FCFC 801518FC 00000000 */   nop
    /* 5FD00 80151900 7C460508 */  j          .L801519F0
    /* 5FD04 80151904 00000000 */   nop
  .L80151908:
    /* 5FD08 80151908 EF4C050C */  jal        func_801533BC
    /* 5FD0C 8015190C 00000000 */   nop
    /* 5FD10 80151910 8CD9030C */  jal        func_800F6630
    /* 5FD14 80151914 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 5FD18 80151918 0DD9030C */  jal        func_800F6434
    /* 5FD1C 8015191C 02020424 */   addiu     $a0, $zero, 0x202
    /* 5FD20 80151920 0B004014 */  bnez       $v0, .L80151950
    /* 5FD24 80151924 00000000 */   nop
    /* 5FD28 80151928 59D9030C */  jal        func_800F6564
    /* 5FD2C 8015192C E5380424 */   addiu     $a0, $zero, 0x38E5
    /* 5FD30 80151930 92D0030C */  jal        func_800F4248
    /* 5FD34 80151934 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5FD38 80151938 5DD5030C */  jal        func_800F5574
    /* 5FD3C 8015193C 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5FD40 80151940 F5D4030C */  jal        func_800F53D4
    /* 5FD44 80151944 00000000 */   nop
    /* 5FD48 80151948 07004014 */  bnez       $v0, .L80151968
    /* 5FD4C 8015194C 00000000 */   nop
  .L80151950:
    /* 5FD50 80151950 53D9030C */  jal        func_800F654C
    /* 5FD54 80151954 08000424 */   addiu     $a0, $zero, 0x8
    /* 5FD58 80151958 62E0030C */  jal        func_800F8188
    /* 5FD5C 8015195C BE380424 */   addiu     $a0, $zero, 0x38BE
    /* 5FD60 80151960 90D8030C */  jal        func_800F6240
    /* 5FD64 80151964 BD380424 */   addiu     $a0, $zero, 0x38BD
  .L80151968:
    /* 5FD68 80151968 464D050C */  jal        func_80153518
    /* 5FD6C 8015196C 00000000 */   nop
    /* 5FD70 80151970 53D9030C */  jal        func_800F654C
    /* 5FD74 80151974 02000424 */   addiu     $a0, $zero, 0x2
    /* 5FD78 80151978 0E43050C */  jal        func_80150C38
    /* 5FD7C 8015197C 00000000 */   nop
    /* 5FD80 80151980 364D050C */  jal        func_801534D8
    /* 5FD84 80151984 00000000 */   nop
    /* 5FD88 80151988 8CD9030C */  jal        func_800F6630
    /* 5FD8C 8015198C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 5FD90 80151990 0DD9030C */  jal        func_800F6434
    /* 5FD94 80151994 02020424 */   addiu     $a0, $zero, 0x202
    /* 5FD98 80151998 05004014 */  bnez       $v0, .L801519B0
    /* 5FD9C 8015199C 00000000 */   nop
    /* 5FDA0 801519A0 53D9030C */  jal        func_800F654C
    /* 5FDA4 801519A4 12000424 */   addiu     $a0, $zero, 0x12
    /* 5FDA8 801519A8 0E43050C */  jal        func_80150C38
    /* 5FDAC 801519AC 00000000 */   nop
  .L801519B0:
    /* 5FDB0 801519B0 C795050C */  jal        func_8016571C
    /* 5FDB4 801519B4 00000000 */   nop
    /* 5FDB8 801519B8 8CD9030C */  jal        func_800F6630
    /* 5FDBC 801519BC A8000424 */   addiu     $a0, $zero, 0xA8
    /* 5FDC0 801519C0 92D0030C */  jal        func_800F4248
    /* 5FDC4 801519C4 10000424 */   addiu     $a0, $zero, 0x10
    /* 5FDC8 801519C8 48D0030C */  jal        func_800F4120
    /* 5FDCC 801519CC 02000424 */   addiu     $a0, $zero, 0x2
    /* 5FDD0 801519D0 07004014 */  bnez       $v0, .L801519F0
    /* 5FDD4 801519D4 00000000 */   nop
    /* 5FDD8 801519D8 DA8F050C */  jal        func_80163F68
    /* 5FDDC 801519DC 00000000 */   nop
    /* 5FDE0 801519E0 464D050C */  jal        func_80153518
    /* 5FDE4 801519E4 00000000 */   nop
    /* 5FDE8 801519E8 C795050C */  jal        func_8016571C
    /* 5FDEC 801519EC 00000000 */   nop
  .L801519F0:
    /* 5FDF0 801519F0 C7E5030C */  jal        func_800F971C
    /* 5FDF4 801519F4 00000000 */   nop
    /* 5FDF8 801519F8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5FDFC 801519FC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5FE00 80151A00 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5FE04 80151A04 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5FE08 80151A08 00004394 */  lhu        $v1, 0x0($v0)
    /* 5FE0C 80151A0C 00000000 */  nop
    /* 5FE10 80151A10 000083A4 */  sh         $v1, 0x0($a0)
  .L80151A14:
    /* 5FE14 80151A14 92D7030C */  jal        func_800F5E48
    /* 5FE18 80151A18 00000000 */   nop
    /* 5FE1C 80151A1C 19D7030C */  jal        func_800F5C64
    /* 5FE20 80151A20 02020424 */   addiu     $a0, $zero, 0x202
    /* 5FE24 80151A24 FBFF4014 */  bnez       $v0, .L80151A14
    /* 5FE28 80151A28 00000000 */   nop
    /* 5FE2C 80151A2C EEE3030C */  jal        func_800F8FB8
    /* 5FE30 80151A30 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 5FE34 80151A34 84DC030C */  jal        func_800F7210
    /* 5FE38 80151A38 00180424 */   addiu     $a0, $zero, 0x1800
    /* 5FE3C 80151A3C 56D6030C */  jal        func_800F5958
    /* 5FE40 80151A40 C0010424 */   addiu     $a0, $zero, 0x1C0
    /* 5FE44 80151A44 F0D4030C */  jal        func_800F53C0
    /* 5FE48 80151A48 00000000 */   nop
    /* 5FE4C 80151A4C 03004010 */  beqz       $v0, .L80151A5C
    /* 5FE50 80151A50 00000000 */   nop
    /* 5FE54 80151A54 AFD8030C */  jal        func_800F62BC
    /* 5FE58 80151A58 AB000424 */   addiu     $a0, $zero, 0xAB
  .L80151A5C:
    /* 5FE5C 80151A5C 77DC030C */  jal        func_800F71DC
    /* 5FE60 80151A60 07000424 */   addiu     $a0, $zero, 0x7
  .L80151A64:
    /* 5FE64 80151A64 DADA030C */  jal        func_800F6B68
    /* 5FE68 80151A68 04180424 */   addiu     $a0, $zero, 0x1804
    /* 5FE6C 80151A6C 0FCF030C */  jal        func_800F3C3C
    /* 5FE70 80151A70 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 5FE74 80151A74 31DE030C */  jal        func_800F78C4
    /* 5FE78 80151A78 21204000 */   addu      $a0, $v0, $zero
    /* 5FE7C 80151A7C 93E0030C */  jal        func_800F824C
    /* 5FE80 80151A80 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 5FE84 80151A84 92D7030C */  jal        func_800F5E48
    /* 5FE88 80151A88 00000000 */   nop
    /* 5FE8C 80151A8C 19D7030C */  jal        func_800F5C64
    /* 5FE90 80151A90 80800434 */   ori       $a0, $zero, 0x8080
    /* 5FE94 80151A94 F3FF4014 */  bnez       $v0, .L80151A64
    /* 5FE98 80151A98 00000000 */   nop
    /* 5FE9C 80151A9C D9D8030C */  jal        func_800F6364
    /* 5FEA0 80151AA0 00000000 */   nop
  .L80151AA4:
    /* 5FEA4 80151AA4 92D7030C */  jal        func_800F5E48
    /* 5FEA8 80151AA8 00000000 */   nop
    /* 5FEAC 80151AAC 19D7030C */  jal        func_800F5C64
    /* 5FEB0 80151AB0 02020424 */   addiu     $a0, $zero, 0x202
    /* 5FEB4 80151AB4 FBFF4014 */  bnez       $v0, .L80151AA4
    /* 5FEB8 80151AB8 00000000 */   nop
    /* 5FEBC 80151ABC 59D9030C */  jal        func_800F6564
    /* 5FEC0 80151AC0 E5380424 */   addiu     $a0, $zero, 0x38E5
    /* 5FEC4 80151AC4 92D0030C */  jal        func_800F4248
    /* 5FEC8 80151AC8 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5FECC 80151ACC 5DD5030C */  jal        func_800F5574
    /* 5FED0 80151AD0 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5FED4 80151AD4 F5D4030C */  jal        func_800F53D4
    /* 5FED8 80151AD8 00000000 */   nop
    /* 5FEDC 80151ADC 1B004014 */  bnez       $v0, .L80151B4C
    /* 5FEE0 80151AE0 00000000 */   nop
    /* 5FEE4 80151AE4 8CD9030C */  jal        func_800F6630
    /* 5FEE8 80151AE8 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 5FEEC 80151AEC 0DD9030C */  jal        func_800F6434
    /* 5FEF0 80151AF0 02020424 */   addiu     $a0, $zero, 0x202
    /* 5FEF4 80151AF4 15004014 */  bnez       $v0, .L80151B4C
    /* 5FEF8 80151AF8 00000000 */   nop
    /* 5FEFC 80151AFC 59D9030C */  jal        func_800F6564
    /* 5FF00 80151B00 00180424 */   addiu     $a0, $zero, 0x1800
    /* 5FF04 80151B04 5DD5030C */  jal        func_800F5574
    /* 5FF08 80151B08 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 5FF0C 80151B0C F5D4030C */  jal        func_800F53D4
    /* 5FF10 80151B10 00000000 */   nop
    /* 5FF14 80151B14 07004010 */  beqz       $v0, .L80151B34
    /* 5FF18 80151B18 00000000 */   nop
    /* 5FF1C 80151B1C 59D9030C */  jal        func_800F6564
    /* 5FF20 80151B20 01180424 */   addiu     $a0, $zero, 0x1801
    /* 5FF24 80151B24 0DD9030C */  jal        func_800F6434
    /* 5FF28 80151B28 02020424 */   addiu     $a0, $zero, 0x202
    /* 5FF2C 80151B2C 07004014 */  bnez       $v0, .L80151B4C
    /* 5FF30 80151B30 00000000 */   nop
  .L80151B34:
    /* 5FF34 80151B34 59D9030C */  jal        func_800F6564
    /* 5FF38 80151B38 F3350424 */   addiu     $a0, $zero, 0x35F3
    /* 5FF3C 80151B3C 62E0030C */  jal        func_800F8188
    /* 5FF40 80151B40 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 5FF44 80151B44 4AA4050C */  jal        func_80169128
    /* 5FF48 80151B48 00000000 */   nop
  .L80151B4C:
    /* 5FF4C 80151B4C 53D9030C */  jal        func_800F654C
    /* 5FF50 80151B50 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5FF54 80151B54 93E0030C */  jal        func_800F824C
    /* 5FF58 80151B58 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 5FF5C 80151B5C 53D9030C */  jal        func_800F654C
    /* 5FF60 80151B60 10000424 */   addiu     $a0, $zero, 0x10
    /* 5FF64 80151B64 93E0030C */  jal        func_800F824C
    /* 5FF68 80151B68 AA000424 */   addiu     $a0, $zero, 0xAA
  .L80151B6C:
    /* 5FF6C 80151B6C AFD8030C */  jal        func_800F62BC
    /* 5FF70 80151B70 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 5FF74 80151B74 68D7030C */  jal        func_800F5DA0
    /* 5FF78 80151B78 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 5FF7C 80151B7C 8CD9030C */  jal        func_800F6630
    /* 5FF80 80151B80 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 5FF84 80151B84 0DD9030C */  jal        func_800F6434
    /* 5FF88 80151B88 02000424 */   addiu     $a0, $zero, 0x2
    /* 5FF8C 80151B8C 17004014 */  bnez       $v0, .L80151BEC
    /* 5FF90 80151B90 00000000 */   nop
    /* 5FF94 80151B94 8CD9030C */  jal        func_800F6630
    /* 5FF98 80151B98 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 5FF9C 80151B9C 424A050C */  jal        func_80152908
    /* 5FFA0 80151BA0 00000000 */   nop
    /* 5FFA4 80151BA4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5FFA8 80151BA8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5FFAC 80151BAC 00000000 */  nop
    /* 5FFB0 80151BB0 00006290 */  lbu        $v0, 0x0($v1)
    /* 5FFB4 80151BB4 C26C0424 */  addiu      $a0, $zero, 0x6CC2
    /* 5FFB8 80151BB8 03004234 */  ori        $v0, $v0, 0x3
    /* 5FFBC 80151BBC 62E0030C */  jal        func_800F8188
    /* 5FFC0 80151BC0 000062A0 */   sb        $v0, 0x0($v1)
    /* 5FFC4 80151BC4 8CD9030C */  jal        func_800F6630
    /* 5FFC8 80151BC8 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 5FFCC 80151BCC 62E0030C */  jal        func_800F8188
    /* 5FFD0 80151BD0 C16C0424 */   addiu     $a0, $zero, 0x6CC1
    /* 5FFD4 80151BD4 53D9030C */  jal        func_800F654C
    /* 5FFD8 80151BD8 02000424 */   addiu     $a0, $zero, 0x2
    /* 5FFDC 80151BDC 0E43050C */  jal        func_80150C38
    /* 5FFE0 80151BE0 00000000 */   nop
    /* 5FFE4 80151BE4 DB460508 */  j          .L80151B6C
    /* 5FFE8 80151BE8 00000000 */   nop
  .L80151BEC:
    /* 5FFEC 80151BEC 53D9030C */  jal        func_800F654C
    /* 5FFF0 80151BF0 21200000 */   addu      $a0, $zero, $zero
    /* 5FFF4 80151BF4 7AE0030C */  jal        func_800F81E8
    /* 5FFF8 80151BF8 06210424 */   addiu     $a0, $zero, 0x2106
    /* 5FFFC 80151BFC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 60000 80151C00 00000000 */  nop
    /* 60004 80151C04 0800E003 */  jr         $ra
    /* 60008 80151C08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80150C58
