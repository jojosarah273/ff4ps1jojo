nonmatching func_80130C74, 0x31C

glabel func_80130C74
    /* 3F074 80130C74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3F078 80130C78 0F000424 */  addiu      $a0, $zero, 0xF
    /* 3F07C 80130C7C 1400BFAF */  sw         $ra, 0x14($sp)
    /* 3F080 80130C80 53D9030C */  jal        func_800F654C
    /* 3F084 80130C84 1000B0AF */   sw        $s0, 0x10($sp)
    /* 3F088 80130C88 7AE0030C */  jal        func_800F81E8
    /* 3F08C 80130C8C 2C210424 */   addiu     $a0, $zero, 0x212C
    /* 3F090 80130C90 9996040C */  jal        func_80125A64
    /* 3F094 80130C94 1A80103C */   lui       $s0, %hi(D_80199190)
    /* 3F098 80130C98 53D9030C */  jal        func_800F654C
    /* 3F09C 80130C9C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3F0A0 80130CA0 93E0030C */  jal        func_800F824C
    /* 3F0A4 80130CA4 C1000424 */   addiu     $a0, $zero, 0xC1
    /* 3F0A8 80130CA8 EF83040C */  jal        func_80120FBC
    /* 3F0AC 80130CAC 90911026 */   addiu     $s0, $s0, %lo(D_80199190)
    /* 3F0B0 80130CB0 A5C4040C */  jal        func_80131294
    /* 3F0B4 80130CB4 00000000 */   nop
    /* 3F0B8 80130CB8 DDE3030C */  jal        func_800F8F74
    /* 3F0BC 80130CBC 881B0424 */   addiu     $a0, $zero, 0x1B88
    /* 3F0C0 80130CC0 59D9030C */  jal        func_800F6564
    /* 3F0C4 80130CC4 831B0424 */   addiu     $a0, $zero, 0x1B83
    /* 3F0C8 80130CC8 50D4030C */  jal        func_800F5140
    /* 3F0CC 80130CCC 00000000 */   nop
    /* 3F0D0 80130CD0 D3D3030C */  jal        func_800F4F4C
    /* 3F0D4 80130CD4 00000000 */   nop
    /* 3F0D8 80130CD8 C1CE030C */  jal        func_800F3B04
    /* 3F0DC 80130CDC 831B0424 */   addiu     $a0, $zero, 0x1B83
    /* 3F0E0 80130CE0 CECF030C */  jal        func_800F3F38
    /* 3F0E4 80130CE4 21204000 */   addu      $a0, $v0, $zero
    /* 3F0E8 80130CE8 C1CE030C */  jal        func_800F3B04
    /* 3F0EC 80130CEC 841B0424 */   addiu     $a0, $zero, 0x1B84
    /* 3F0F0 80130CF0 CECF030C */  jal        func_800F3F38
    /* 3F0F4 80130CF4 21204000 */   addu      $a0, $v0, $zero
    /* 3F0F8 80130CF8 2DC2040C */  jal        func_801308B4
    /* 3F0FC 80130CFC 00000000 */   nop
    /* 3F100 80130D00 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3F104 80130D04 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3F108 80130D08 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3F10C 80130D0C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3F110 80130D10 00004394 */  lhu        $v1, 0x0($v0)
    /* 3F114 80130D14 60150424 */  addiu      $a0, $zero, 0x1560
    /* 3F118 80130D18 5CDB030C */  jal        func_800F6D70
    /* 3F11C 80130D1C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3F120 80130D20 62E0030C */  jal        func_800F8188
    /* 3F124 80130D24 891B0424 */   addiu     $a0, $zero, 0x1B89
    /* 3F128 80130D28 20D5030C */  jal        func_800F5480
    /* 3F12C 80130D2C 00000000 */   nop
    /* 3F130 80130D30 16E0030C */  jal        func_800F8058
    /* 3F134 80130D34 0E000424 */   addiu     $a0, $zero, 0xE
    /* 3F138 80130D38 3489040C */  jal        func_801224D0
    /* 3F13C 80130D3C 00000000 */   nop
    /* 3F140 80130D40 1400043C */  lui        $a0, (0x14FFF2 >> 16)
    /* 3F144 80130D44 1ADB030C */  jal        func_800F6C68
    /* 3F148 80130D48 F2FF8434 */   ori       $a0, $a0, (0x14FFF2 & 0xFFFF)
    /* 3F14C 80130D4C 62E0030C */  jal        func_800F8188
    /* 3F150 80130D50 901B0424 */   addiu     $a0, $zero, 0x1B90
    /* 3F154 80130D54 40000496 */  lhu        $a0, 0x40($s0)
    /* 3F158 80130D58 40DD030C */  jal        func_800F7500
    /* 3F15C 80130D5C 00000000 */   nop
    /* 3F160 80130D60 CC7B040C */  jal        func_8011EF30
    /* 3F164 80130D64 00000000 */   nop
    /* 3F168 80130D68 42000496 */  lhu        $a0, 0x42($s0)
    /* 3F16C 80130D6C 40DD030C */  jal        func_800F7500
    /* 3F170 80130D70 00000000 */   nop
    /* 3F174 80130D74 CC7B040C */  jal        func_8011EF30
    /* 3F178 80130D78 00000000 */   nop
    /* 3F17C 80130D7C 44000496 */  lhu        $a0, 0x44($s0)
    /* 3F180 80130D80 40DD030C */  jal        func_800F7500
    /* 3F184 80130D84 00000000 */   nop
    /* 3F188 80130D88 CC7B040C */  jal        func_8011EF30
    /* 3F18C 80130D8C 00000000 */   nop
    /* 3F190 80130D90 EF83040C */  jal        func_80120FBC
    /* 3F194 80130D94 00000000 */   nop
    /* 3F198 80130D98 59D9030C */  jal        func_800F6564
    /* 3F19C 80130D9C 891B0424 */   addiu     $a0, $zero, 0x1B89
    /* 3F1A0 80130DA0 77DC030C */  jal        func_800F71DC
    /* 3F1A4 80130DA4 44000424 */   addiu     $a0, $zero, 0x44
    /* 3F1A8 80130DA8 ECBE040C */  jal        func_8012FBB0
    /* 3F1AC 80130DAC 00000000 */   nop
    /* 3F1B0 80130DB0 46000496 */  lhu        $a0, 0x46($s0)
    /* 3F1B4 80130DB4 40DD030C */  jal        func_800F7500
    /* 3F1B8 80130DB8 00000000 */   nop
    /* 3F1BC 80130DBC CCE4030C */  jal        func_800F9330
    /* 3F1C0 80130DC0 00000000 */   nop
    /* 3F1C4 80130DC4 9CDC030C */  jal        func_800F7270
    /* 3F1C8 80130DC8 29000424 */   addiu     $a0, $zero, 0x29
    /* 3F1CC 80130DCC 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3F1D0 80130DD0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3F1D4 80130DD4 00000000 */  nop
    /* 3F1D8 80130DD8 00006294 */  lhu        $v0, 0x0($v1)
    /* 3F1DC 80130DDC 29000424 */  addiu      $a0, $zero, 0x29
    /* 3F1E0 80130DE0 FEFF4224 */  addiu      $v0, $v0, -0x2
    /* 3F1E4 80130DE4 5BE3030C */  jal        func_800F8D6C
    /* 3F1E8 80130DE8 000062A4 */   sh        $v0, 0x0($v1)
    /* 3F1EC 80130DEC 68E5030C */  jal        func_800F95A0
    /* 3F1F0 80130DF0 00000000 */   nop
    /* 3F1F4 80130DF4 E97E040C */  jal        func_8011FBA4
    /* 3F1F8 80130DF8 00000000 */   nop
    /* 3F1FC 80130DFC CCE4030C */  jal        func_800F9330
    /* 3F200 80130E00 00000000 */   nop
    /* 3F204 80130E04 9CDC030C */  jal        func_800F7270
    /* 3F208 80130E08 29000424 */   addiu     $a0, $zero, 0x29
    /* 3F20C 80130E0C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3F210 80130E10 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3F214 80130E14 00000000 */  nop
    /* 3F218 80130E18 00006294 */  lhu        $v0, 0x0($v1)
    /* 3F21C 80130E1C 29000424 */  addiu      $a0, $zero, 0x29
    /* 3F220 80130E20 02004224 */  addiu      $v0, $v0, 0x2
    /* 3F224 80130E24 5BE3030C */  jal        func_800F8D6C
    /* 3F228 80130E28 000062A4 */   sh        $v0, 0x0($v1)
    /* 3F22C 80130E2C 68E5030C */  jal        func_800F95A0
    /* 3F230 80130E30 00000000 */   nop
    /* 3F234 80130E34 4A000496 */  lhu        $a0, 0x4A($s0)
    /* 3F238 80130E38 40DD030C */  jal        func_800F7500
    /* 3F23C 80130E3C 00000000 */   nop
    /* 3F240 80130E40 E97E040C */  jal        func_8011FBA4
    /* 3F244 80130E44 00000000 */   nop
    /* 3F248 80130E48 A9C2040C */  jal        func_80130AA4
    /* 3F24C 80130E4C 00000000 */   nop
    /* 3F250 80130E50 62E0030C */  jal        func_800F8188
    /* 3F254 80130E54 931B0424 */   addiu     $a0, $zero, 0x1B93
    /* 3F258 80130E58 40DD030C */  jal        func_800F7500
    /* 3F25C 80130E5C C8010424 */   addiu     $a0, $zero, 0x1C8
    /* 3F260 80130E60 B781040C */  jal        func_801206DC
    /* 3F264 80130E64 00000000 */   nop
    /* 3F268 80130E68 77DC030C */  jal        func_800F71DC
    /* 3F26C 80130E6C E0020424 */   addiu     $a0, $zero, 0x2E0
    /* 3F270 80130E70 40DD030C */  jal        func_800F7500
    /* 3F274 80130E74 00100424 */   addiu     $a0, $zero, 0x1000
    /* 3F278 80130E78 488B040C */  jal        func_80122D20
    /* 3F27C 80130E7C 00000000 */   nop
    /* 3F280 80130E80 77DC030C */  jal        func_800F71DC
    /* 3F284 80130E84 60000424 */   addiu     $a0, $zero, 0x60
    /* 3F288 80130E88 40DD030C */  jal        func_800F7500
    /* 3F28C 80130E8C 40100424 */   addiu     $a0, $zero, 0x1040
    /* 3F290 80130E90 488B040C */  jal        func_80122D20
    /* 3F294 80130E94 00000000 */   nop
    /* 3F298 80130E98 77DC030C */  jal        func_800F71DC
    /* 3F29C 80130E9C 60050424 */   addiu     $a0, $zero, 0x560
    /* 3F2A0 80130EA0 40DD030C */  jal        func_800F7500
    /* 3F2A4 80130EA4 80100424 */   addiu     $a0, $zero, 0x1080
    /* 3F2A8 80130EA8 488B040C */  jal        func_80122D20
    /* 3F2AC 80130EAC 00000000 */   nop
    /* 3F2B0 80130EB0 77DC030C */  jal        func_800F71DC
    /* 3F2B4 80130EB4 A0010424 */   addiu     $a0, $zero, 0x1A0
    /* 3F2B8 80130EB8 40DD030C */  jal        func_800F7500
    /* 3F2BC 80130EBC C0100424 */   addiu     $a0, $zero, 0x10C0
    /* 3F2C0 80130EC0 488B040C */  jal        func_80122D20
    /* 3F2C4 80130EC4 00000000 */   nop
    /* 3F2C8 80130EC8 77DC030C */  jal        func_800F71DC
    /* 3F2CC 80130ECC 20040424 */   addiu     $a0, $zero, 0x420
    /* 3F2D0 80130ED0 40DD030C */  jal        func_800F7500
    /* 3F2D4 80130ED4 00110424 */   addiu     $a0, $zero, 0x1100
    /* 3F2D8 80130ED8 488B040C */  jal        func_80122D20
    /* 3F2DC 80130EDC 00000000 */   nop
    /* 3F2E0 80130EE0 59D9030C */  jal        func_800F6564
    /* 3F2E4 80130EE4 A8160424 */   addiu     $a0, $zero, 0x16A8
    /* 3F2E8 80130EE8 92D0030C */  jal        func_800F4248
    /* 3F2EC 80130EEC 01000424 */   addiu     $a0, $zero, 0x1
    /* 3F2F0 80130EF0 50D4030C */  jal        func_800F5140
    /* 3F2F4 80130EF4 00000000 */   nop
    /* 3F2F8 80130EF8 93E0030C */  jal        func_800F824C
    /* 3F2FC 80130EFC 45000424 */   addiu     $a0, $zero, 0x45
    /* 3F300 80130F00 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3F304 80130F04 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3F308 80130F08 00000000 */  nop
    /* 3F30C 80130F0C 00006290 */  lbu        $v0, 0x0($v1)
    /* 3F310 80130F10 00000000 */  nop
    /* 3F314 80130F14 40100200 */  sll        $v0, $v0, 1
    /* 3F318 80130F18 50D4030C */  jal        func_800F5140
    /* 3F31C 80130F1C 000062A0 */   sb        $v0, 0x0($v1)
    /* 3F320 80130F20 D3D3030C */  jal        func_800F4F4C
    /* 3F324 80130F24 00000000 */   nop
    /* 3F328 80130F28 0FCF030C */  jal        func_800F3C3C
    /* 3F32C 80130F2C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3F330 80130F30 CECF030C */  jal        func_800F3F38
    /* 3F334 80130F34 21204000 */   addu      $a0, $v0, $zero
    /* 3F338 80130F38 3489040C */  jal        func_801224D0
    /* 3F33C 80130F3C 00000000 */   nop
    /* 3F340 80130F40 53D9030C */  jal        func_800F654C
    /* 3F344 80130F44 21200000 */   addu      $a0, $zero, $zero
    /* 3F348 80130F48 AFC4040C */  jal        func_801312BC
    /* 3F34C 80130F4C 00000000 */   nop
    /* 3F350 80130F50 AFC4040C */  jal        func_801312BC
    /* 3F354 80130F54 00000000 */   nop
    /* 3F358 80130F58 AFC4040C */  jal        func_801312BC
    /* 3F35C 80130F5C 00000000 */   nop
    /* 3F360 80130F60 AFC4040C */  jal        func_801312BC
    /* 3F364 80130F64 00000000 */   nop
    /* 3F368 80130F68 AFC4040C */  jal        func_801312BC
    /* 3F36C 80130F6C 00000000 */   nop
    /* 3F370 80130F70 53D9030C */  jal        func_800F654C
    /* 3F374 80130F74 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3F378 80130F78 7AE0030C */  jal        func_800F81E8
    /* 3F37C 80130F7C 2C210424 */   addiu     $a0, $zero, 0x212C
    /* 3F380 80130F80 1400BF8F */  lw         $ra, 0x14($sp)
    /* 3F384 80130F84 1000B08F */  lw         $s0, 0x10($sp)
    /* 3F388 80130F88 0800E003 */  jr         $ra
    /* 3F38C 80130F8C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80130C74
