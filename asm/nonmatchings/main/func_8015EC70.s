nonmatching func_8015EC70, 0x3B8

glabel func_8015EC70
    /* 6D070 8015EC70 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6D074 8015EC74 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6D078 8015EC78 AB82050C */  jal        func_80160AAC
    /* 6D07C 8015EC7C 00000000 */   nop
    /* 6D080 8015EC80 59D9030C */  jal        func_800F6564
    /* 6D084 8015EC84 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6D088 8015EC88 0DD9030C */  jal        func_800F6434
    /* 6D08C 8015EC8C 80800434 */   ori       $a0, $zero, 0x8080
    /* 6D090 8015EC90 09004014 */  bnez       $v0, .L8015ECB8
    /* 6D094 8015EC94 00000000 */   nop
    /* 6D098 8015EC98 92D0030C */  jal        func_800F4248
    /* 6D09C 8015EC9C 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6D0A0 8015ECA0 62E0030C */  jal        func_800F8188
    /* 6D0A4 8015ECA4 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6D0A8 8015ECA8 2394010C */  jal        func_8006508C
    /* 6D0AC 8015ECAC 00000000 */   nop
    /* 6D0B0 8015ECB0 067C0508 */  j          .L8015F018
    /* 6D0B4 8015ECB4 00000000 */   nop
  .L8015ECB8:
    /* 6D0B8 8015ECB8 E382050C */  jal        func_80160B8C
    /* 6D0BC 8015ECBC 00000000 */   nop
    /* 6D0C0 8015ECC0 1886010C */  jal        func_80061860
    /* 6D0C4 8015ECC4 00000000 */   nop
    /* 6D0C8 8015ECC8 59D9030C */  jal        func_800F6564
    /* 6D0CC 8015ECCC 06390424 */   addiu     $a0, $zero, 0x3906
    /* 6D0D0 8015ECD0 C1CE030C */  jal        func_800F3B04
    /* 6D0D4 8015ECD4 4D350424 */   addiu     $a0, $zero, 0x354D
    /* 6D0D8 8015ECD8 35D5030C */  jal        func_800F54D4
    /* 6D0DC 8015ECDC 21204000 */   addu      $a0, $v0, $zero
    /* 6D0E0 8015ECE0 F5D4030C */  jal        func_800F53D4
    /* 6D0E4 8015ECE4 00000000 */   nop
    /* 6D0E8 8015ECE8 CB004010 */  beqz       $v0, .L8015F018
    /* 6D0EC 8015ECEC 00000000 */   nop
    /* 6D0F0 8015ECF0 90D8030C */  jal        func_800F6240
    /* 6D0F4 8015ECF4 53350424 */   addiu     $a0, $zero, 0x3553
    /* 6D0F8 8015ECF8 9CDC030C */  jal        func_800F7270
    /* 6D0FC 8015ECFC A4000424 */   addiu     $a0, $zero, 0xA4
    /* 6D100 8015ED00 CCE4030C */  jal        func_800F9330
    /* 6D104 8015ED04 00000000 */   nop
    /* 6D108 8015ED08 C7E5030C */  jal        func_800F971C
    /* 6D10C 8015ED0C 00000000 */   nop
    /* 6D110 8015ED10 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6D114 8015ED14 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6D118 8015ED18 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6D11C 8015ED1C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6D120 8015ED20 00004394 */  lhu        $v1, 0x0($v0)
    /* 6D124 8015ED24 A9000424 */  addiu      $a0, $zero, 0xA9
    /* 6D128 8015ED28 5BE3030C */  jal        func_800F8D6C
    /* 6D12C 8015ED2C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6D130 8015ED30 5BE3030C */  jal        func_800F8D6C
    /* 6D134 8015ED34 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6D138 8015ED38 40E3030C */  jal        func_800F8D00
    /* 6D13C 8015ED3C 1C290424 */   addiu     $a0, $zero, 0x291C
    /* 6D140 8015ED40 40E3030C */  jal        func_800F8D00
    /* 6D144 8015ED44 1E290424 */   addiu     $a0, $zero, 0x291E
    /* 6D148 8015ED48 40E3030C */  jal        func_800F8D00
    /* 6D14C 8015ED4C 20290424 */   addiu     $a0, $zero, 0x2920
  .L8015ED50:
    /* 6D150 8015ED50 9CDC030C */  jal        func_800F7270
    /* 6D154 8015ED54 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D158 8015ED58 59D9030C */  jal        func_800F6564
    /* 6D15C 8015ED5C 40350424 */   addiu     $a0, $zero, 0x3540
    /* 6D160 8015ED60 0DD9030C */  jal        func_800F6434
    /* 6D164 8015ED64 02020424 */   addiu     $a0, $zero, 0x202
    /* 6D168 8015ED68 2F004014 */  bnez       $v0, .L8015EE28
    /* 6D16C 8015ED6C 00000000 */   nop
    /* 6D170 8015ED70 8CD9030C */  jal        func_800F6630
    /* 6D174 8015ED74 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D178 8015ED78 93E0030C */  jal        func_800F824C
    /* 6D17C 8015ED7C DF000424 */   addiu     $a0, $zero, 0xDF
    /* 6D180 8015ED80 53D9030C */  jal        func_800F654C
    /* 6D184 8015ED84 80000424 */   addiu     $a0, $zero, 0x80
    /* 6D188 8015ED88 93E0030C */  jal        func_800F824C
    /* 6D18C 8015ED8C E1000424 */   addiu     $a0, $zero, 0xE1
    /* 6D190 8015ED90 0349050C */  jal        func_8015240C
    /* 6D194 8015ED94 00000000 */   nop
    /* 6D198 8015ED98 9CDC030C */  jal        func_800F7270
    /* 6D19C 8015ED9C E3000424 */   addiu     $a0, $zero, 0xE3
    /* 6D1A0 8015EDA0 DADA030C */  jal        func_800F6B68
    /* 6D1A4 8015EDA4 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6D1A8 8015EDA8 92D0030C */  jal        func_800F4248
    /* 6D1AC 8015EDAC C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6D1B0 8015EDB0 48D0030C */  jal        func_800F4120
    /* 6D1B4 8015EDB4 02020424 */   addiu     $a0, $zero, 0x202
    /* 6D1B8 8015EDB8 1B004014 */  bnez       $v0, .L8015EE28
    /* 6D1BC 8015EDBC 00000000 */   nop
    /* 6D1C0 8015EDC0 DADA030C */  jal        func_800F6B68
    /* 6D1C4 8015EDC4 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6D1C8 8015EDC8 92D0030C */  jal        func_800F4248
    /* 6D1CC 8015EDCC 02000424 */   addiu     $a0, $zero, 0x2
    /* 6D1D0 8015EDD0 48D0030C */  jal        func_800F4120
    /* 6D1D4 8015EDD4 02020424 */   addiu     $a0, $zero, 0x202
    /* 6D1D8 8015EDD8 13004014 */  bnez       $v0, .L8015EE28
    /* 6D1DC 8015EDDC 00000000 */   nop
    /* 6D1E0 8015EDE0 DADA030C */  jal        func_800F6B68
    /* 6D1E4 8015EDE4 06200424 */   addiu     $a0, $zero, 0x2006
    /* 6D1E8 8015EDE8 0DD9030C */  jal        func_800F6434
    /* 6D1EC 8015EDEC 80000424 */   addiu     $a0, $zero, 0x80
    /* 6D1F0 8015EDF0 0D004014 */  bnez       $v0, .L8015EE28
    /* 6D1F4 8015EDF4 00000000 */   nop
    /* 6D1F8 8015EDF8 AFD8030C */  jal        func_800F62BC
    /* 6D1FC 8015EDFC AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6D200 8015EE00 9CDC030C */  jal        func_800F7270
    /* 6D204 8015EE04 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D208 8015EE08 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 6D20C 8015EE0C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 6D210 8015EE10 00000000 */  nop
    /* 6D214 8015EE14 00004494 */  lhu        $a0, 0x0($v0)
    /* 6D218 8015EE18 C1CE030C */  jal        func_800F3B04
    /* 6D21C 8015EE1C 1C298424 */   addiu     $a0, $a0, 0x291C
    /* 6D220 8015EE20 12D8030C */  jal        func_800F6048
    /* 6D224 8015EE24 21204000 */   addu      $a0, $v0, $zero
  .L8015EE28:
    /* 6D228 8015EE28 AFD8030C */  jal        func_800F62BC
    /* 6D22C 8015EE2C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D230 8015EE30 8CD9030C */  jal        func_800F6630
    /* 6D234 8015EE34 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D238 8015EE38 5DD5030C */  jal        func_800F5574
    /* 6D23C 8015EE3C 05000424 */   addiu     $a0, $zero, 0x5
    /* 6D240 8015EE40 F5D4030C */  jal        func_800F53D4
    /* 6D244 8015EE44 00000000 */   nop
    /* 6D248 8015EE48 C1FF4010 */  beqz       $v0, .L8015ED50
    /* 6D24C 8015EE4C 00000000 */   nop
    /* 6D250 8015EE50 9CDC030C */  jal        func_800F7270
    /* 6D254 8015EE54 A4000424 */   addiu     $a0, $zero, 0xA4
    /* 6D258 8015EE58 40E3030C */  jal        func_800F8D00
    /* 6D25C 8015EE5C 45390424 */   addiu     $a0, $zero, 0x3945
    /* 6D260 8015EE60 9CDC030C */  jal        func_800F7270
    /* 6D264 8015EE64 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6D268 8015EE68 40E3030C */  jal        func_800F8D00
    /* 6D26C 8015EE6C 47390424 */   addiu     $a0, $zero, 0x3947
    /* 6D270 8015EE70 5349050C */  jal        func_8015254C
    /* 6D274 8015EE74 00000000 */   nop
    /* 6D278 8015EE78 84DC030C */  jal        func_800F7210
    /* 6D27C 8015EE7C 49390424 */   addiu     $a0, $zero, 0x3949
    /* 6D280 8015EE80 5BE3030C */  jal        func_800F8D6C
    /* 6D284 8015EE84 A4000424 */   addiu     $a0, $zero, 0xA4
    /* 6D288 8015EE88 C7E5030C */  jal        func_800F971C
    /* 6D28C 8015EE8C 00000000 */   nop
    /* 6D290 8015EE90 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6D294 8015EE94 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6D298 8015EE98 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6D29C 8015EE9C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6D2A0 8015EEA0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6D2A4 8015EEA4 A9000424 */  addiu      $a0, $zero, 0xA9
    /* 6D2A8 8015EEA8 5BE3030C */  jal        func_800F8D6C
    /* 6D2AC 8015EEAC 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8015EEB0:
    /* 6D2B0 8015EEB0 9CDC030C */  jal        func_800F7270
    /* 6D2B4 8015EEB4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D2B8 8015EEB8 DADA030C */  jal        func_800F6B68
    /* 6D2BC 8015EEBC 1C290424 */   addiu     $a0, $zero, 0x291C
    /* 6D2C0 8015EEC0 0DD9030C */  jal        func_800F6434
    /* 6D2C4 8015EEC4 02000424 */   addiu     $a0, $zero, 0x2
    /* 6D2C8 8015EEC8 45004014 */  bnez       $v0, .L8015EFE0
    /* 6D2CC 8015EECC 00000000 */   nop
    /* 6D2D0 8015EED0 8CD9030C */  jal        func_800F6630
    /* 6D2D4 8015EED4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D2D8 8015EED8 93E0030C */  jal        func_800F824C
    /* 6D2DC 8015EEDC DF000424 */   addiu     $a0, $zero, 0xDF
    /* 6D2E0 8015EEE0 53D9030C */  jal        func_800F654C
    /* 6D2E4 8015EEE4 80000424 */   addiu     $a0, $zero, 0x80
    /* 6D2E8 8015EEE8 93E0030C */  jal        func_800F824C
    /* 6D2EC 8015EEEC E1000424 */   addiu     $a0, $zero, 0xE1
    /* 6D2F0 8015EEF0 0349050C */  jal        func_8015240C
    /* 6D2F4 8015EEF4 00000000 */   nop
    /* 6D2F8 8015EEF8 91E5030C */  jal        func_800F9644
    /* 6D2FC 8015EEFC 20000424 */   addiu     $a0, $zero, 0x20
    /* 6D300 8015EF00 9CDC030C */  jal        func_800F7270
    /* 6D304 8015EF04 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 6D308 8015EF08 04D5030C */  jal        func_800F5410
    /* 6D30C 8015EF0C 00000000 */   nop
    /* 6D310 8015EF10 F8DA030C */  jal        func_800F6BE0
    /* 6D314 8015EF14 07200424 */   addiu     $a0, $zero, 0x2007
    /* 6D318 8015EF18 0FCF030C */  jal        func_800F3C3C
    /* 6D31C 8015EF1C A4000424 */   addiu     $a0, $zero, 0xA4
    /* 6D320 8015EF20 E5CF030C */  jal        func_800F3F94
    /* 6D324 8015EF24 21204000 */   addu      $a0, $v0, $zero
    /* 6D328 8015EF28 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 6D32C 8015EF2C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 6D330 8015EF30 00000000 */  nop
    /* 6D334 8015EF34 00004494 */  lhu        $a0, 0x0($v0)
    /* 6D338 8015EF38 C1CE030C */  jal        func_800F3B04
    /* 6D33C 8015EF3C 09208424 */   addiu     $a0, $a0, 0x2009
    /* 6D340 8015EF40 48D5030C */  jal        func_800F5520
    /* 6D344 8015EF44 21204000 */   addu      $a0, $v0, $zero
    /* 6D348 8015EF48 F0D4030C */  jal        func_800F53C0
    /* 6D34C 8015EF4C 00000000 */   nop
    /* 6D350 8015EF50 03004010 */  beqz       $v0, .L8015EF60
    /* 6D354 8015EF54 00000000 */   nop
    /* 6D358 8015EF58 F8DA030C */  jal        func_800F6BE0
    /* 6D35C 8015EF5C 09200424 */   addiu     $a0, $zero, 0x2009
  .L8015EF60:
    /* 6D360 8015EF60 F7E1030C */  jal        func_800F87DC
    /* 6D364 8015EF64 07200424 */   addiu     $a0, $zero, 0x2007
    /* 6D368 8015EF68 C7E5030C */  jal        func_800F971C
    /* 6D36C 8015EF6C 00000000 */   nop
    /* 6D370 8015EF70 98E5030C */  jal        func_800F9660
    /* 6D374 8015EF74 20000424 */   addiu     $a0, $zero, 0x20
    /* 6D378 8015EF78 9382050C */  jal        func_80160A4C
    /* 6D37C 8015EF7C 00000000 */   nop
    /* 6D380 8015EF80 8CD9030C */  jal        func_800F6630
    /* 6D384 8015EF84 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D388 8015EF88 50D4030C */  jal        func_800F5140
    /* 6D38C 8015EF8C 00000000 */   nop
    /* 6D390 8015EF90 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6D394 8015EF94 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6D398 8015EF98 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6D39C 8015EF9C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6D3A0 8015EFA0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6D3A4 8015EFA4 A4000424 */  addiu      $a0, $zero, 0xA4
    /* 6D3A8 8015EFA8 8CD9030C */  jal        func_800F6630
    /* 6D3AC 8015EFAC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6D3B0 8015EFB0 DAE1030C */  jal        func_800F8768
    /* 6D3B4 8015EFB4 D4340424 */   addiu     $a0, $zero, 0x34D4
    /* 6D3B8 8015EFB8 8CD9030C */  jal        func_800F6630
    /* 6D3BC 8015EFBC A5000424 */   addiu     $a0, $zero, 0xA5
    /* 6D3C0 8015EFC0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6D3C4 8015EFC4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6D3C8 8015EFC8 00000000 */  nop
    /* 6D3CC 8015EFCC 00006290 */  lbu        $v0, 0x0($v1)
    /* 6D3D0 8015EFD0 D5340424 */  addiu      $a0, $zero, 0x34D5
    /* 6D3D4 8015EFD4 80004234 */  ori        $v0, $v0, 0x80
    /* 6D3D8 8015EFD8 DAE1030C */  jal        func_800F8768
    /* 6D3DC 8015EFDC 000062A0 */   sb        $v0, 0x0($v1)
  .L8015EFE0:
    /* 6D3E0 8015EFE0 AFD8030C */  jal        func_800F62BC
    /* 6D3E4 8015EFE4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D3E8 8015EFE8 8CD9030C */  jal        func_800F6630
    /* 6D3EC 8015EFEC A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D3F0 8015EFF0 5DD5030C */  jal        func_800F5574
    /* 6D3F4 8015EFF4 05000424 */   addiu     $a0, $zero, 0x5
    /* 6D3F8 8015EFF8 F5D4030C */  jal        func_800F53D4
    /* 6D3FC 8015EFFC 00000000 */   nop
    /* 6D400 8015F000 ABFF4010 */  beqz       $v0, .L8015EEB0
    /* 6D404 8015F004 00000000 */   nop
    /* 6D408 8015F008 68E5030C */  jal        func_800F95A0
    /* 6D40C 8015F00C 00000000 */   nop
    /* 6D410 8015F010 5BE3030C */  jal        func_800F8D6C
    /* 6D414 8015F014 A4000424 */   addiu     $a0, $zero, 0xA4
  .L8015F018:
    /* 6D418 8015F018 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6D41C 8015F01C 00000000 */  nop
    /* 6D420 8015F020 0800E003 */  jr         $ra
    /* 6D424 8015F024 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015EC70
