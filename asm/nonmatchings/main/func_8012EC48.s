nonmatching func_8012EC48, 0x7A8

glabel func_8012EC48
    /* 3D048 8012EC48 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 3D04C 8012EC4C 271B0424 */  addiu      $a0, $zero, 0x1B27
    /* 3D050 8012EC50 1800BFAF */  sw         $ra, 0x18($sp)
    /* 3D054 8012EC54 1400B1AF */  sw         $s1, 0x14($sp)
    /* 3D058 8012EC58 DDE3030C */  jal        func_800F8F74
    /* 3D05C 8012EC5C 1000B0AF */   sw        $s0, 0x10($sp)
    /* 3D060 8012EC60 FD8B040C */  jal        func_80122FF4
    /* 3D064 8012EC64 00000000 */   nop
    /* 3D068 8012EC68 8CD9030C */  jal        func_800F6630
    /* 3D06C 8012EC6C E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3D070 8012EC70 0DD9030C */  jal        func_800F6434
    /* 3D074 8012EC74 80800434 */   ori       $a0, $zero, 0x8080
    /* 3D078 8012EC78 D8014010 */  beqz       $v0, .L8012F3DC
    /* 3D07C 8012EC7C 21100000 */   addu      $v0, $zero, $zero
    /* 3D080 8012EC80 8CD9030C */  jal        func_800F6630
    /* 3D084 8012EC84 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3D088 8012EC88 81B4040C */  jal        func_8012D204
    /* 3D08C 8012EC8C 00000000 */   nop
    /* 3D090 8012EC90 F5D4030C */  jal        func_800F53D4
    /* 3D094 8012EC94 00000000 */   nop
    /* 3D098 8012EC98 D0014014 */  bnez       $v0, .L8012F3DC
    /* 3D09C 8012EC9C 21100000 */   addu      $v0, $zero, $zero
    /* 3D0A0 8012ECA0 CCE4030C */  jal        func_800F9330
    /* 3D0A4 8012ECA4 00000000 */   nop
    /* 3D0A8 8012ECA8 89DC050C */  jal        func_80177224
    /* 3D0AC 8012ECAC 00000000 */   nop
    /* 3D0B0 8012ECB0 68E5030C */  jal        func_800F95A0
    /* 3D0B4 8012ECB4 00000000 */   nop
    /* 3D0B8 8012ECB8 DADA030C */  jal        func_800F6B68
    /* 3D0BC 8012ECBC 03000424 */   addiu     $a0, $zero, 0x3
    /* 3D0C0 8012ECC0 62E0030C */  jal        func_800F8188
    /* 3D0C4 8012ECC4 861A0424 */   addiu     $a0, $zero, 0x1A86
    /* 3D0C8 8012ECC8 92D0030C */  jal        func_800F4248
    /* 3D0CC 8012ECCC C4000424 */   addiu     $a0, $zero, 0xC4
    /* 3D0D0 8012ECD0 48D0030C */  jal        func_800F4120
    /* 3D0D4 8012ECD4 02020424 */   addiu     $a0, $zero, 0x202
    /* 3D0D8 8012ECD8 BD014014 */  bnez       $v0, .L8012F3D0
    /* 3D0DC 8012ECDC 00000000 */   nop
    /* 3D0E0 8012ECE0 DADA030C */  jal        func_800F6B68
    /* 3D0E4 8012ECE4 01000424 */   addiu     $a0, $zero, 0x1
    /* 3D0E8 8012ECE8 92D0030C */  jal        func_800F4248
    /* 3D0EC 8012ECEC 0F000424 */   addiu     $a0, $zero, 0xF
    /* 3D0F0 8012ECF0 93E0030C */  jal        func_800F824C
    /* 3D0F4 8012ECF4 45000424 */   addiu     $a0, $zero, 0x45
    /* 3D0F8 8012ECF8 50D4030C */  jal        func_800F5140
    /* 3D0FC 8012ECFC 00000000 */   nop
    /* 3D100 8012ED00 D3D3030C */  jal        func_800F4F4C
    /* 3D104 8012ED04 00000000 */   nop
    /* 3D108 8012ED08 0FCF030C */  jal        func_800F3C3C
    /* 3D10C 8012ED0C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3D110 8012ED10 CECF030C */  jal        func_800F3F38
    /* 3D114 8012ED14 21204000 */   addu      $a0, $v0, $zero
    /* 3D118 8012ED18 3489040C */  jal        func_801224D0
    /* 3D11C 8012ED1C 00000000 */   nop
    /* 3D120 8012ED20 1400043C */  lui        $a0, (0x14FFA2 >> 16)
    /* 3D124 8012ED24 1ADB030C */  jal        func_800F6C68
    /* 3D128 8012ED28 A2FF8434 */   ori       $a0, $a0, (0x14FFA2 & 0xFFFF)
    /* 3D12C 8012ED2C 1400043C */  lui        $a0, (0x14FFA3 >> 16)
    /* 3D130 8012ED30 9FD2030C */  jal        func_800F4A7C
    /* 3D134 8012ED34 A3FF8434 */   ori       $a0, $a0, (0x14FFA3 & 0xFFFF)
    /* 3D138 8012ED38 1400043C */  lui        $a0, (0x14FFA4 >> 16)
    /* 3D13C 8012ED3C 9FD2030C */  jal        func_800F4A7C
    /* 3D140 8012ED40 A4FF8434 */   ori       $a0, $a0, (0x14FFA4 & 0xFFFF)
    /* 3D144 8012ED44 5DD5030C */  jal        func_800F5574
    /* 3D148 8012ED48 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 3D14C 8012ED4C F5D4030C */  jal        func_800F53D4
    /* 3D150 8012ED50 00000000 */   nop
    /* 3D154 8012ED54 9E014014 */  bnez       $v0, .L8012F3D0
    /* 3D158 8012ED58 00000000 */   nop
    /* 3D15C 8012ED5C CCE4030C */  jal        func_800F9330
    /* 3D160 8012ED60 1A80113C */   lui       $s1, %hi(D_80199190)
    /* 3D164 8012ED64 6E90040C */  jal        func_801241B8
    /* 3D168 8012ED68 90913026 */   addiu     $s0, $s1, %lo(D_80199190)
    /* 3D16C 8012ED6C 8CD9030C */  jal        func_800F6630
    /* 3D170 8012ED70 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3D174 8012ED74 3C8B040C */  jal        func_80122CF0
    /* 3D178 8012ED78 00000000 */   nop
    /* 3D17C 8012ED7C A17D040C */  jal        func_8011F684
    /* 3D180 8012ED80 00000000 */   nop
    /* 3D184 8012ED84 5690040C */  jal        func_80124158
    /* 3D188 8012ED88 00000000 */   nop
    /* 3D18C 8012ED8C 118A040C */  jal        func_80122844
    /* 3D190 8012ED90 00000000 */   nop
    /* 3D194 8012ED94 4A99040C */  jal        func_80126528
    /* 3D198 8012ED98 00000000 */   nop
    /* 3D19C 8012ED9C 53D9030C */  jal        func_800F654C
    /* 3D1A0 8012EDA0 20000424 */   addiu     $a0, $zero, 0x20
    /* 3D1A4 8012EDA4 93E0030C */  jal        func_800F824C
    /* 3D1A8 8012EDA8 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 3D1AC 8012EDAC C783040C */  jal        func_80120F1C
    /* 3D1B0 8012EDB0 00000000 */   nop
    /* 3D1B4 8012EDB4 0E000496 */  lhu        $a0, 0xE($s0)
    /* 3D1B8 8012EDB8 40DD030C */  jal        func_800F7500
    /* 3D1BC 8012EDBC 00000000 */   nop
    /* 3D1C0 8012EDC0 CC7B040C */  jal        func_8011EF30
    /* 3D1C4 8012EDC4 00000000 */   nop
    /* 3D1C8 8012EDC8 40DD030C */  jal        func_800F7500
    /* 3D1CC 8012EDCC ABDB0434 */   ori       $a0, $zero, 0xDBAB
    /* 3D1D0 8012EDD0 0E000496 */  lhu        $a0, 0xE($s0)
    /* 3D1D4 8012EDD4 40DD030C */  jal        func_800F7500
    /* 3D1D8 8012EDD8 00000000 */   nop
    /* 3D1DC 8012EDDC 3E000496 */  lhu        $a0, 0x3E($s0)
    /* 3D1E0 8012EDE0 77DC030C */  jal        func_800F71DC
    /* 3D1E4 8012EDE4 00000000 */   nop
    /* 3D1E8 8012EDE8 4984040C */  jal        func_80121124
    /* 3D1EC 8012EDEC 00000000 */   nop
    /* 3D1F0 8012EDF0 77DC030C */  jal        func_800F71DC
    /* 3D1F4 8012EDF4 2E950434 */   ori       $a0, $zero, 0x952E
    /* 3D1F8 8012EDF8 5BE3030C */  jal        func_800F8D6C
    /* 3D1FC 8012EDFC D0000424 */   addiu     $a0, $zero, 0xD0
    /* 3D200 8012EE00 77DC030C */  jal        func_800F71DC
    /* 3D204 8012EE04 4F820434 */   ori       $a0, $zero, 0x824F
    /* 3D208 8012EE08 5BE3030C */  jal        func_800F8D6C
    /* 3D20C 8012EE0C CD000424 */   addiu     $a0, $zero, 0xCD
    /* 3D210 8012EE10 8CD9030C */  jal        func_800F6630
    /* 3D214 8012EE14 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3D218 8012EE18 D58A040C */  jal        func_80122B54
    /* 3D21C 8012EE1C 00000000 */   nop
    /* 3D220 8012EE20 91E5030C */  jal        func_800F9644
    /* 3D224 8012EE24 20000424 */   addiu     $a0, $zero, 0x20
    /* 3D228 8012EE28 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 3D22C 8012EE2C 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 3D230 8012EE30 1A80053C */  lui        $a1, %hi(D_8019ED44)
    /* 3D234 8012EE34 44EDA58C */  lw         $a1, %lo(D_8019ED44)($a1)
    /* 3D238 8012EE38 00006294 */  lhu        $v0, 0x0($v1)
    /* 3D23C 8012EE3C 20000424 */  addiu      $a0, $zero, 0x20
    /* 3D240 8012EE40 98E5030C */  jal        func_800F9660
    /* 3D244 8012EE44 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 3D248 8012EE48 93E0030C */  jal        func_800F824C
    /* 3D24C 8012EE4C BA000424 */   addiu     $a0, $zero, 0xBA
    /* 3D250 8012EE50 52CF030C */  jal        func_800F3D48
    /* 3D254 8012EE54 00000000 */   nop
    /* 3D258 8012EE58 93E0030C */  jal        func_800F824C
    /* 3D25C 8012EE5C BC000424 */   addiu     $a0, $zero, 0xBC
    /* 3D260 8012EE60 EEE3030C */  jal        func_800F8FB8
    /* 3D264 8012EE64 B9000424 */   addiu     $a0, $zero, 0xB9
    /* 3D268 8012EE68 EEE3030C */  jal        func_800F8FB8
    /* 3D26C 8012EE6C BB000424 */   addiu     $a0, $zero, 0xBB
    /* 3D270 8012EE70 53D9030C */  jal        func_800F654C
    /* 3D274 8012EE74 28000424 */   addiu     $a0, $zero, 0x28
    /* 3D278 8012EE78 93E0030C */  jal        func_800F824C
    /* 3D27C 8012EE7C C2000424 */   addiu     $a0, $zero, 0xC2
    /* 3D280 8012EE80 93E0030C */  jal        func_800F824C
    /* 3D284 8012EE84 D2000424 */   addiu     $a0, $zero, 0xD2
    /* 3D288 8012EE88 53D9030C */  jal        func_800F654C
    /* 3D28C 8012EE8C C8000424 */   addiu     $a0, $zero, 0xC8
    /* 3D290 8012EE90 93E0030C */  jal        func_800F824C
    /* 3D294 8012EE94 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 3D298 8012EE98 93E0030C */  jal        func_800F824C
    /* 3D29C 8012EE9C BD000424 */   addiu     $a0, $zero, 0xBD
    /* 3D2A0 8012EEA0 53D9030C */  jal        func_800F654C
    /* 3D2A4 8012EEA4 81000424 */   addiu     $a0, $zero, 0x81
    /* 3D2A8 8012EEA8 93E0030C */  jal        func_800F824C
    /* 3D2AC 8012EEAC B4000424 */   addiu     $a0, $zero, 0xB4
    /* 3D2B0 8012EEB0 93E0030C */  jal        func_800F824C
    /* 3D2B4 8012EEB4 BE000424 */   addiu     $a0, $zero, 0xBE
    /* 3D2B8 8012EEB8 8CD9030C */  jal        func_800F6630
    /* 3D2BC 8012EEBC E7000424 */   addiu     $a0, $zero, 0xE7
    /* 3D2C0 8012EEC0 93E0030C */  jal        func_800F824C
    /* 3D2C4 8012EEC4 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 3D2C8 8012EEC8 93E0030C */  jal        func_800F824C
    /* 3D2CC 8012EECC C0000424 */   addiu     $a0, $zero, 0xC0
    /* 3D2D0 8012EED0 53D9030C */  jal        func_800F654C
    /* 3D2D4 8012EED4 68000424 */   addiu     $a0, $zero, 0x68
    /* 3D2D8 8012EED8 93E0030C */  jal        func_800F824C
    /* 3D2DC 8012EEDC B0000424 */   addiu     $a0, $zero, 0xB0
    /* 3D2E0 8012EEE0 53D9030C */  jal        func_800F654C
    /* 3D2E4 8012EEE4 04000424 */   addiu     $a0, $zero, 0x4
    /* 3D2E8 8012EEE8 93E0030C */  jal        func_800F824C
    /* 3D2EC 8012EEEC AE000424 */   addiu     $a0, $zero, 0xAE
    /* 3D2F0 8012EEF0 53D9030C */  jal        func_800F654C
    /* 3D2F4 8012EEF4 34000424 */   addiu     $a0, $zero, 0x34
    /* 3D2F8 8012EEF8 93E0030C */  jal        func_800F824C
    /* 3D2FC 8012EEFC AD000424 */   addiu     $a0, $zero, 0xAD
    /* 3D300 8012EF00 8CD9030C */  jal        func_800F6630
    /* 3D304 8012EF04 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3D308 8012EF08 93E0030C */  jal        func_800F824C
    /* 3D30C 8012EF0C D3000424 */   addiu     $a0, $zero, 0xD3
    /* 3D310 8012EF10 68E5030C */  jal        func_800F95A0
    /* 3D314 8012EF14 00000000 */   nop
    /* 3D318 8012EF18 1400043C */  lui        $a0, (0x14FFA2 >> 16)
    /* 3D31C 8012EF1C 1ADB030C */  jal        func_800F6C68
    /* 3D320 8012EF20 A2FF8434 */   ori       $a0, $a0, (0x14FFA2 & 0xFFFF)
    /* 3D324 8012EF24 62E0030C */  jal        func_800F8188
    /* 3D328 8012EF28 7E1B0424 */   addiu     $a0, $zero, 0x1B7E
    /* 3D32C 8012EF2C 0DD9030C */  jal        func_800F6434
    /* 3D330 8012EF30 80000424 */   addiu     $a0, $zero, 0x80
    /* 3D334 8012EF34 05004014 */  bnez       $v0, .L8012EF4C
    /* 3D338 8012EF38 00000000 */   nop
    /* 3D33C 8012EF3C 40DD030C */  jal        func_800F7500
    /* 3D340 8012EF40 14B20434 */   ori       $a0, $zero, 0xB214
    /* 3D344 8012EF44 D5BB0408 */  j          .L8012EF54
    /* 3D348 8012EF48 00000000 */   nop
  .L8012EF4C:
    /* 3D34C 8012EF4C 40DD030C */  jal        func_800F7500
    /* 3D350 8012EF50 34B20434 */   ori       $a0, $zero, 0xB234
  .L8012EF54:
    /* 3D354 8012EF54 E97E040C */  jal        func_8011FBA4
    /* 3D358 8012EF58 00000000 */   nop
    /* 3D35C 8012EF5C 1400043C */  lui        $a0, (0x14FFA3 >> 16)
    /* 3D360 8012EF60 1ADB030C */  jal        func_800F6C68
    /* 3D364 8012EF64 A3FF8434 */   ori       $a0, $a0, (0x14FFA3 & 0xFFFF)
    /* 3D368 8012EF68 62E0030C */  jal        func_800F8188
    /* 3D36C 8012EF6C 7F1B0424 */   addiu     $a0, $zero, 0x1B7F
    /* 3D370 8012EF70 0DD9030C */  jal        func_800F6434
    /* 3D374 8012EF74 80000424 */   addiu     $a0, $zero, 0x80
    /* 3D378 8012EF78 05004014 */  bnez       $v0, .L8012EF90
    /* 3D37C 8012EF7C 00000000 */   nop
    /* 3D380 8012EF80 40DD030C */  jal        func_800F7500
    /* 3D384 8012EF84 1CB20434 */   ori       $a0, $zero, 0xB21C
    /* 3D388 8012EF88 E6BB0408 */  j          .L8012EF98
    /* 3D38C 8012EF8C 00000000 */   nop
  .L8012EF90:
    /* 3D390 8012EF90 40DD030C */  jal        func_800F7500
    /* 3D394 8012EF94 3CB20434 */   ori       $a0, $zero, 0xB23C
  .L8012EF98:
    /* 3D398 8012EF98 E97E040C */  jal        func_8011FBA4
    /* 3D39C 8012EF9C 00000000 */   nop
    /* 3D3A0 8012EFA0 1400043C */  lui        $a0, (0x14FFA4 >> 16)
    /* 3D3A4 8012EFA4 1ADB030C */  jal        func_800F6C68
    /* 3D3A8 8012EFA8 A4FF8434 */   ori       $a0, $a0, (0x14FFA4 & 0xFFFF)
    /* 3D3AC 8012EFAC 62E0030C */  jal        func_800F8188
    /* 3D3B0 8012EFB0 801B0424 */   addiu     $a0, $zero, 0x1B80
    /* 3D3B4 8012EFB4 0DD9030C */  jal        func_800F6434
    /* 3D3B8 8012EFB8 80000424 */   addiu     $a0, $zero, 0x80
    /* 3D3BC 8012EFBC 05004014 */  bnez       $v0, .L8012EFD4
    /* 3D3C0 8012EFC0 00000000 */   nop
    /* 3D3C4 8012EFC4 40DD030C */  jal        func_800F7500
    /* 3D3C8 8012EFC8 24B20434 */   ori       $a0, $zero, 0xB224
    /* 3D3CC 8012EFCC F7BB0408 */  j          .L8012EFDC
    /* 3D3D0 8012EFD0 00000000 */   nop
  .L8012EFD4:
    /* 3D3D4 8012EFD4 40DD030C */  jal        func_800F7500
    /* 3D3D8 8012EFD8 44B20434 */   ori       $a0, $zero, 0xB244
  .L8012EFDC:
    /* 3D3DC 8012EFDC E97E040C */  jal        func_8011FBA4
    /* 3D3E0 8012EFE0 00000000 */   nop
    /* 3D3E4 8012EFE4 8CD9030C */  jal        func_800F6630
    /* 3D3E8 8012EFE8 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3D3EC 8012EFEC 81B4040C */  jal        func_8012D204
    /* 3D3F0 8012EFF0 00000000 */   nop
    /* 3D3F4 8012EFF4 5DD5030C */  jal        func_800F5574
    /* 3D3F8 8012EFF8 12000424 */   addiu     $a0, $zero, 0x12
    /* 3D3FC 8012EFFC F5D4030C */  jal        func_800F53D4
    /* 3D400 8012F000 00000000 */   nop
    /* 3D404 8012F004 05004010 */  beqz       $v0, .L8012F01C
    /* 3D408 8012F008 00000000 */   nop
    /* 3D40C 8012F00C 40DD030C */  jal        func_800F7500
    /* 3D410 8012F010 2CB20434 */   ori       $a0, $zero, 0xB22C
    /* 3D414 8012F014 E97E040C */  jal        func_8011FBA4
    /* 3D418 8012F018 00000000 */   nop
  .L8012F01C:
    /* 3D41C 8012F01C EF83040C */  jal        func_80120FBC
    /* 3D420 8012F020 00000000 */   nop
    /* 3D424 8012F024 90912226 */  addiu      $v0, $s1, %lo(D_80199190)
    /* 3D428 8012F028 32004494 */  lhu        $a0, 0x32($v0)
    /* 3D42C 8012F02C 40DD030C */  jal        func_800F7500
    /* 3D430 8012F030 00000000 */   nop
    /* 3D434 8012F034 CC7B040C */  jal        func_8011EF30
    /* 3D438 8012F038 00000000 */   nop
  .L8012F03C:
    /* 3D43C 8012F03C 59D9030C */  jal        func_800F6564
    /* 3D440 8012F040 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3D444 8012F044 3489040C */  jal        func_801224D0
    /* 3D448 8012F048 00000000 */   nop
    /* 3D44C 8012F04C DADA030C */  jal        func_800F6B68
    /* 3D450 8012F050 7E1B0424 */   addiu     $a0, $zero, 0x1B7E
    /* 3D454 8012F054 0DD9030C */  jal        func_800F6434
    /* 3D458 8012F058 80800434 */   ori       $a0, $zero, 0x8080
    /* 3D45C 8012F05C 11004014 */  bnez       $v0, .L8012F0A4
    /* 3D460 8012F060 00000000 */   nop
    /* 3D464 8012F064 59D9030C */  jal        func_800F6564
    /* 3D468 8012F068 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3D46C 8012F06C 7AD8030C */  jal        func_800F61E8
    /* 3D470 8012F070 00000000 */   nop
    /* 3D474 8012F074 5DD5030C */  jal        func_800F5574
    /* 3D478 8012F078 03000424 */   addiu     $a0, $zero, 0x3
    /* 3D47C 8012F07C F5D4030C */  jal        func_800F53D4
    /* 3D480 8012F080 00000000 */   nop
    /* 3D484 8012F084 03004010 */  beqz       $v0, .L8012F094
    /* 3D488 8012F088 00000000 */   nop
    /* 3D48C 8012F08C 53D9030C */  jal        func_800F654C
    /* 3D490 8012F090 21200000 */   addu      $a0, $zero, $zero
  .L8012F094:
    /* 3D494 8012F094 62E0030C */  jal        func_800F8188
    /* 3D498 8012F098 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3D49C 8012F09C 0FBC0408 */  j          .L8012F03C
    /* 3D4A0 8012F0A0 00000000 */   nop
  .L8012F0A4:
    /* 3D4A4 8012F0A4 90D8030C */  jal        func_800F6240
    /* 3D4A8 8012F0A8 871B0424 */   addiu     $a0, $zero, 0x1B87
    /* 3D4AC 8012F0AC 74BE040C */  jal        func_8012F9D0
    /* 3D4B0 8012F0B0 90913126 */   addiu     $s1, $s1, %lo(D_80199190)
    /* 3D4B4 8012F0B4 DDE3030C */  jal        func_800F8F74
    /* 3D4B8 8012F0B8 871B0424 */   addiu     $a0, $zero, 0x1B87
    /* 3D4BC 8012F0BC 77DC030C */  jal        func_800F71DC
    /* 3D4C0 8012F0C0 18FF0434 */   ori       $a0, $zero, 0xFF18
    /* 3D4C4 8012F0C4 5BE3030C */  jal        func_800F8D6C
    /* 3D4C8 8012F0C8 93000424 */   addiu     $a0, $zero, 0x93
    /* 3D4CC 8012F0CC 9FBA050C */  jal        func_8016EA7C
    /* 3D4D0 8012F0D0 00000000 */   nop
    /* 3D4D4 8012F0D4 53D9030C */  jal        func_800F654C
    /* 3D4D8 8012F0D8 05000424 */   addiu     $a0, $zero, 0x5
    /* 3D4DC 8012F0DC 93E0030C */  jal        func_800F824C
    /* 3D4E0 8012F0E0 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 3D4E4 8012F0E4 53D9030C */  jal        func_800F654C
    /* 3D4E8 8012F0E8 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 3D4EC 8012F0EC 93E0030C */  jal        func_800F824C
    /* 3D4F0 8012F0F0 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 3D4F4 8012F0F4 1699040C */  jal        func_80126458
    /* 3D4F8 8012F0F8 00000000 */   nop
    /* 3D4FC 8012F0FC 8B83040C */  jal        func_80120E2C
    /* 3D500 8012F100 00000000 */   nop
    /* 3D504 8012F104 2D8A040C */  jal        func_801228B4
    /* 3D508 8012F108 00000000 */   nop
    /* 3D50C 8012F10C 8CD9030C */  jal        func_800F6630
    /* 3D510 8012F110 E7000424 */   addiu     $a0, $zero, 0xE7
    /* 3D514 8012F114 50D4030C */  jal        func_800F5140
    /* 3D518 8012F118 00000000 */   nop
    /* 3D51C 8012F11C 3489040C */  jal        func_801224D0
    /* 3D520 8012F120 00000000 */   nop
    /* 3D524 8012F124 91E5030C */  jal        func_800F9644
    /* 3D528 8012F128 20000424 */   addiu     $a0, $zero, 0x20
    /* 3D52C 8012F12C 1A80023C */  lui        $v0, %hi(D_80199C18)
    /* 3D530 8012F130 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3D534 8012F134 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3D538 8012F138 189C5024 */  addiu      $s0, $v0, %lo(D_80199C18)
    /* 3D53C 8012F13C 00006494 */  lhu        $a0, 0x0($v1)
    /* 3D540 8012F140 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 3D544 8012F144 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 3D548 8012F148 21209000 */  addu       $a0, $a0, $s0
    /* 3D54C 8012F14C 00008290 */  lbu        $v0, 0x0($a0)
    /* 3D550 8012F150 00000000 */  nop
    /* 3D554 8012F154 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 3D558 8012F158 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3D55C 8012F15C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3D560 8012F160 00000000 */  nop
    /* 3D564 8012F164 00006294 */  lhu        $v0, 0x0($v1)
    /* 3D568 8012F168 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 3D56C 8012F16C 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 3D570 8012F170 21105000 */  addu       $v0, $v0, $s0
    /* 3D574 8012F174 01004390 */  lbu        $v1, 0x1($v0)
    /* 3D578 8012F178 00000000 */  nop
    /* 3D57C 8012F17C 010083A0 */  sb         $v1, 0x1($a0)
    /* 3D580 8012F180 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3D584 8012F184 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3D588 8012F188 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 3D58C 8012F18C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 3D590 8012F190 00004394 */  lhu        $v1, 0x0($v0)
    /* 3D594 8012F194 20000424 */  addiu      $a0, $zero, 0x20
    /* 3D598 8012F198 98E5030C */  jal        func_800F9660
    /* 3D59C 8012F19C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3D5A0 8012F1A0 08002496 */  lhu        $a0, 0x8($s1)
    /* 3D5A4 8012F1A4 40DD030C */  jal        func_800F7500
    /* 3D5A8 8012F1A8 00000000 */   nop
    /* 3D5AC 8012F1AC 4984040C */  jal        func_80121124
    /* 3D5B0 8012F1B0 00000000 */   nop
    /* 3D5B4 8012F1B4 FCBC040C */  jal        func_8012F3F0
    /* 3D5B8 8012F1B8 00000000 */   nop
    /* 3D5BC 8012F1BC FF004230 */  andi       $v0, $v0, 0xFF
    /* 3D5C0 8012F1C0 01000324 */  addiu      $v1, $zero, 0x1
    /* 3D5C4 8012F1C4 85004310 */  beq        $v0, $v1, .L8012F3DC
    /* 3D5C8 8012F1C8 01000224 */   addiu     $v0, $zero, 0x1
    /* 3D5CC 8012F1CC 53D9030C */  jal        func_800F654C
    /* 3D5D0 8012F1D0 30000424 */   addiu     $a0, $zero, 0x30
    /* 3D5D4 8012F1D4 93E0030C */  jal        func_800F824C
    /* 3D5D8 8012F1D8 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 3D5DC 8012F1DC 6E90040C */  jal        func_801241B8
    /* 3D5E0 8012F1E0 00000000 */   nop
    /* 3D5E4 8012F1E4 C783040C */  jal        func_80120F1C
    /* 3D5E8 8012F1E8 00000000 */   nop
    /* 3D5EC 8012F1EC 40DD030C */  jal        func_800F7500
    /* 3D5F0 8012F1F0 0A020424 */   addiu     $a0, $zero, 0x20A
    /* 3D5F4 8012F1F4 53D9030C */  jal        func_800F654C
    /* 3D5F8 8012F1F8 0D000424 */   addiu     $a0, $zero, 0xD
    /* 3D5FC 8012F1FC 20D5030C */  jal        func_800F5480
    /* 3D600 8012F200 00000000 */   nop
    /* 3D604 8012F204 A988040C */  jal        func_801222A4
    /* 3D608 8012F208 00000000 */   nop
    /* 3D60C 8012F20C 3099040C */  jal        func_801264C0
    /* 3D610 8012F210 00000000 */   nop
    /* 3D614 8012F214 A97D040C */  jal        func_8011F6A4
    /* 3D618 8012F218 00000000 */   nop
    /* 3D61C 8012F21C 53D9030C */  jal        func_800F654C
    /* 3D620 8012F220 28000424 */   addiu     $a0, $zero, 0x28
    /* 3D624 8012F224 93E0030C */  jal        func_800F824C
    /* 3D628 8012F228 C2000424 */   addiu     $a0, $zero, 0xC2
    /* 3D62C 8012F22C 53D9030C */  jal        func_800F654C
    /* 3D630 8012F230 01000424 */   addiu     $a0, $zero, 0x1
    /* 3D634 8012F234 93E0030C */  jal        func_800F824C
    /* 3D638 8012F238 B4000424 */   addiu     $a0, $zero, 0xB4
    /* 3D63C 8012F23C 8CD9030C */  jal        func_800F6630
    /* 3D640 8012F240 E7000424 */   addiu     $a0, $zero, 0xE7
    /* 3D644 8012F244 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3D648 8012F248 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3D64C 8012F24C 00000000 */  nop
    /* 3D650 8012F250 00006290 */  lbu        $v0, 0x0($v1)
    /* 3D654 8012F254 B7000424 */  addiu      $a0, $zero, 0xB7
    /* 3D658 8012F258 80004234 */  ori        $v0, $v0, 0x80
    /* 3D65C 8012F25C 93E0030C */  jal        func_800F824C
    /* 3D660 8012F260 000062A0 */   sb        $v0, 0x0($v1)
    /* 3D664 8012F264 93E0030C */  jal        func_800F824C
    /* 3D668 8012F268 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 3D66C 8012F26C 53D9030C */  jal        func_800F654C
    /* 3D670 8012F270 68000424 */   addiu     $a0, $zero, 0x68
    /* 3D674 8012F274 93E0030C */  jal        func_800F824C
    /* 3D678 8012F278 B0000424 */   addiu     $a0, $zero, 0xB0
    /* 3D67C 8012F27C 53D9030C */  jal        func_800F654C
    /* 3D680 8012F280 84000424 */   addiu     $a0, $zero, 0x84
    /* 3D684 8012F284 93E0030C */  jal        func_800F824C
    /* 3D688 8012F288 AE000424 */   addiu     $a0, $zero, 0xAE
    /* 3D68C 8012F28C 53D9030C */  jal        func_800F654C
    /* 3D690 8012F290 34000424 */   addiu     $a0, $zero, 0x34
    /* 3D694 8012F294 93E0030C */  jal        func_800F824C
    /* 3D698 8012F298 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 3D69C 8012F29C 53D9030C */  jal        func_800F654C
    /* 3D6A0 8012F2A0 06000424 */   addiu     $a0, $zero, 0x6
    /* 3D6A4 8012F2A4 93E0030C */  jal        func_800F824C
    /* 3D6A8 8012F2A8 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 3D6AC 8012F2AC 8B83040C */  jal        func_80120E2C
    /* 3D6B0 8012F2B0 00000000 */   nop
    /* 3D6B4 8012F2B4 8CD9030C */  jal        func_800F6630
    /* 3D6B8 8012F2B8 E7000424 */   addiu     $a0, $zero, 0xE7
    /* 3D6BC 8012F2BC 50D4030C */  jal        func_800F5140
    /* 3D6C0 8012F2C0 00000000 */   nop
    /* 3D6C4 8012F2C4 3489040C */  jal        func_801224D0
    /* 3D6C8 8012F2C8 00000000 */   nop
    /* 3D6CC 8012F2CC 91E5030C */  jal        func_800F9644
    /* 3D6D0 8012F2D0 20000424 */   addiu     $a0, $zero, 0x20
    /* 3D6D4 8012F2D4 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3D6D8 8012F2D8 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3D6DC 8012F2DC 00000000 */  nop
    /* 3D6E0 8012F2E0 00006294 */  lhu        $v0, 0x0($v1)
    /* 3D6E4 8012F2E4 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 3D6E8 8012F2E8 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 3D6EC 8012F2EC 21105000 */  addu       $v0, $v0, $s0
    /* 3D6F0 8012F2F0 00004390 */  lbu        $v1, 0x0($v0)
    /* 3D6F4 8012F2F4 00000000 */  nop
    /* 3D6F8 8012F2F8 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 3D6FC 8012F2FC 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 3D700 8012F300 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 3D704 8012F304 00000000 */  nop
    /* 3D708 8012F308 00008294 */  lhu        $v0, 0x0($a0)
    /* 3D70C 8012F30C 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 3D710 8012F310 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 3D714 8012F314 21105000 */  addu       $v0, $v0, $s0
    /* 3D718 8012F318 01004390 */  lbu        $v1, 0x1($v0)
    /* 3D71C 8012F31C 00000000 */  nop
    /* 3D720 8012F320 010083A0 */  sb         $v1, 0x1($a0)
    /* 3D724 8012F324 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3D728 8012F328 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3D72C 8012F32C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3D730 8012F330 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3D734 8012F334 00004394 */  lhu        $v1, 0x0($v0)
    /* 3D738 8012F338 20000424 */  addiu      $a0, $zero, 0x20
    /* 3D73C 8012F33C 98E5030C */  jal        func_800F9660
    /* 3D740 8012F340 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3D744 8012F344 08002496 */  lhu        $a0, 0x8($s1)
    /* 3D748 8012F348 77DC030C */  jal        func_800F71DC
    /* 3D74C 8012F34C 00000000 */   nop
    /* 3D750 8012F350 4984040C */  jal        func_80121124
    /* 3D754 8012F354 00000000 */   nop
    /* 3D758 8012F358 3490040C */  jal        func_801240D0
    /* 3D75C 8012F35C 00000000 */   nop
    /* 3D760 8012F360 BC99040C */  jal        func_801266F0
    /* 3D764 8012F364 00000000 */   nop
    /* 3D768 8012F368 1699040C */  jal        func_80126458
    /* 3D76C 8012F36C 00000000 */   nop
    /* 3D770 8012F370 9FBA050C */  jal        func_8016EA7C
    /* 3D774 8012F374 00000000 */   nop
    /* 3D778 8012F378 C783040C */  jal        func_80120F1C
    /* 3D77C 8012F37C 00000000 */   nop
    /* 3D780 8012F380 3E002496 */  lhu        $a0, 0x3E($s1)
    /* 3D784 8012F384 40DD030C */  jal        func_800F7500
    /* 3D788 8012F388 00000000 */   nop
    /* 3D78C 8012F38C 0E002496 */  lhu        $a0, 0xE($s1)
    /* 3D790 8012F390 77DC030C */  jal        func_800F71DC
    /* 3D794 8012F394 00000000 */   nop
    /* 3D798 8012F398 4984040C */  jal        func_80121124
    /* 3D79C 8012F39C 00000000 */   nop
    /* 3D7A0 8012F3A0 A78A040C */  jal        func_80122A9C
    /* 3D7A4 8012F3A4 00000000 */   nop
    /* 3D7A8 8012F3A8 4A99040C */  jal        func_80126528
    /* 3D7AC 8012F3AC 00000000 */   nop
    /* 3D7B0 8012F3B0 C783040C */  jal        func_80120F1C
    /* 3D7B4 8012F3B4 00000000 */   nop
    /* 3D7B8 8012F3B8 DB82040C */  jal        func_80120B6C
    /* 3D7BC 8012F3BC 00000000 */   nop
    /* 3D7C0 8012F3C0 A1DC050C */  jal        func_80177284
    /* 3D7C4 8012F3C4 00000000 */   nop
    /* 3D7C8 8012F3C8 F7BC0408 */  j          .L8012F3DC
    /* 3D7CC 8012F3CC 21100000 */   addu      $v0, $zero, $zero
  .L8012F3D0:
    /* 3D7D0 8012F3D0 FEBA040C */  jal        func_8012EBF8
    /* 3D7D4 8012F3D4 00000000 */   nop
    /* 3D7D8 8012F3D8 21100000 */  addu       $v0, $zero, $zero
  .L8012F3DC:
    /* 3D7DC 8012F3DC 1800BF8F */  lw         $ra, 0x18($sp)
    /* 3D7E0 8012F3E0 1400B18F */  lw         $s1, 0x14($sp)
    /* 3D7E4 8012F3E4 1000B08F */  lw         $s0, 0x10($sp)
    /* 3D7E8 8012F3E8 0800E003 */  jr         $ra
    /* 3D7EC 8012F3EC 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8012EC48
