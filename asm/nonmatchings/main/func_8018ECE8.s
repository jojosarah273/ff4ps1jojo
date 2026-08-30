nonmatching func_8018ECE8, 0x37C

glabel func_8018ECE8
    /* 9D0E8 8018ECE8 21300000 */  addu       $a2, $zero, $zero
    /* 9D0EC 8018ECEC 0000898C */  lw         $t1, 0x0($a0)
    /* 9D0F0 8018ECF0 00000000 */  nop
    /* 9D0F4 8018ECF4 01002A2D */  sltiu      $t2, $t1, 0x1
    /* 9D0F8 8018ECF8 06004015 */  bnez       $t2, .L8018ED14
    /* 9D0FC 8018ECFC 21400000 */   addu      $t0, $zero, $zero
    /* 9D100 8018ED00 01002231 */  andi       $v0, $t1, 0x1
    /* 9D104 8018ED04 2D004010 */  beqz       $v0, .L8018EDBC
    /* 9D108 8018ED08 04002231 */   andi      $v0, $t1, 0x4
    /* 9D10C 8018ED0C 1A004010 */  beqz       $v0, .L8018ED78
    /* 9D110 8018ED10 00000000 */   nop
  .L8018ED14:
    /* 9D114 8018ED14 08008384 */  lh         $v1, 0x8($a0)
    /* 9D118 8018ED18 00000000 */  nop
    /* 9D11C 8018ED1C 0800622C */  sltiu      $v0, $v1, 0x8
    /* 9D120 8018ED20 15004010 */  beqz       $v0, .L8018ED78
    /* 9D124 8018ED24 80100300 */   sll       $v0, $v1, 2
    /* 9D128 8018ED28 0F80013C */  lui        $at, %hi(jtbl_800F31D0)
    /* 9D12C 8018ED2C 21082200 */  addu       $at, $at, $v0
    /* 9D130 8018ED30 D031228C */  lw         $v0, %lo(jtbl_800F31D0)($at)
    /* 9D134 8018ED34 00000000 */  nop
    /* 9D138 8018ED38 08004000 */  jr         $v0
    /* 9D13C 8018ED3C 00000000 */   nop
  jlabel .L8018ED40
    /* 9D140 8018ED40 603B0608 */  j          .L8018ED80
    /* 9D144 8018ED44 00800534 */   ori       $a1, $zero, 0x8000
  jlabel .L8018ED48
    /* 9D148 8018ED48 603B0608 */  j          .L8018ED80
    /* 9D14C 8018ED4C 00900534 */   ori       $a1, $zero, 0x9000
  jlabel .L8018ED50
    /* 9D150 8018ED50 603B0608 */  j          .L8018ED80
    /* 9D154 8018ED54 00A00534 */   ori       $a1, $zero, 0xA000
  jlabel .L8018ED58
    /* 9D158 8018ED58 603B0608 */  j          .L8018ED80
    /* 9D15C 8018ED5C 00B00534 */   ori       $a1, $zero, 0xB000
  jlabel .L8018ED60
    /* 9D160 8018ED60 603B0608 */  j          .L8018ED80
    /* 9D164 8018ED64 00C00534 */   ori       $a1, $zero, 0xC000
  jlabel .L8018ED68
    /* 9D168 8018ED68 603B0608 */  j          .L8018ED80
    /* 9D16C 8018ED6C 00D00534 */   ori       $a1, $zero, 0xD000
  jlabel .L8018ED70
    /* 9D170 8018ED70 603B0608 */  j          .L8018ED80
    /* 9D174 8018ED74 00E00534 */   ori       $a1, $zero, 0xE000
  jlabel .L8018ED78
    /* 9D178 8018ED78 04008694 */  lhu        $a2, 0x4($a0)
    /* 9D17C 8018ED7C 21280000 */  addu       $a1, $zero, $zero
  .L8018ED80:
    /* 9D180 8018ED80 0A00A010 */  beqz       $a1, .L8018EDAC
    /* 9D184 8018ED84 FF7FC230 */   andi      $v0, $a2, 0x7FFF
    /* 9D188 8018ED88 04008784 */  lh         $a3, 0x4($a0)
    /* 9D18C 8018ED8C 04008394 */  lhu        $v1, 0x4($a0)
    /* 9D190 8018ED90 8000E228 */  slti       $v0, $a3, 0x80
    /* 9D194 8018ED94 04004010 */  beqz       $v0, .L8018EDA8
    /* 9D198 8018ED98 7F000624 */   addiu     $a2, $zero, 0x7F
    /* 9D19C 8018ED9C 0200E004 */  bltz       $a3, .L8018EDA8
    /* 9D1A0 8018EDA0 21300000 */   addu      $a2, $zero, $zero
    /* 9D1A4 8018EDA4 21306000 */  addu       $a2, $v1, $zero
  .L8018EDA8:
    /* 9D1A8 8018EDA8 FF7FC230 */  andi       $v0, $a2, 0x7FFF
  .L8018EDAC:
    /* 9D1AC 8018EDAC 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D1B0 8018EDB0 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D1B4 8018EDB4 25104500 */  or         $v0, $v0, $a1
    /* 9D1B8 8018EDB8 800162A4 */  sh         $v0, 0x180($v1)
  .L8018EDBC:
    /* 9D1BC 8018EDBC 05004015 */  bnez       $t2, .L8018EDD4
    /* 9D1C0 8018EDC0 02002231 */   andi      $v0, $t1, 0x2
    /* 9D1C4 8018EDC4 2D004010 */  beqz       $v0, .L8018EE7C
    /* 9D1C8 8018EDC8 08002231 */   andi      $v0, $t1, 0x8
    /* 9D1CC 8018EDCC 1A004010 */  beqz       $v0, .L8018EE38
    /* 9D1D0 8018EDD0 00000000 */   nop
  .L8018EDD4:
    /* 9D1D4 8018EDD4 0A008384 */  lh         $v1, 0xA($a0)
    /* 9D1D8 8018EDD8 00000000 */  nop
    /* 9D1DC 8018EDDC 0800622C */  sltiu      $v0, $v1, 0x8
    /* 9D1E0 8018EDE0 15004010 */  beqz       $v0, .L8018EE38
    /* 9D1E4 8018EDE4 80100300 */   sll       $v0, $v1, 2
    /* 9D1E8 8018EDE8 0F80013C */  lui        $at, %hi(jtbl_800F31F0)
    /* 9D1EC 8018EDEC 21082200 */  addu       $at, $at, $v0
    /* 9D1F0 8018EDF0 F031228C */  lw         $v0, %lo(jtbl_800F31F0)($at)
    /* 9D1F4 8018EDF4 00000000 */  nop
    /* 9D1F8 8018EDF8 08004000 */  jr         $v0
    /* 9D1FC 8018EDFC 00000000 */   nop
  jlabel .L8018EE00
    /* 9D200 8018EE00 903B0608 */  j          .L8018EE40
    /* 9D204 8018EE04 00800534 */   ori       $a1, $zero, 0x8000
  jlabel .L8018EE08
    /* 9D208 8018EE08 903B0608 */  j          .L8018EE40
    /* 9D20C 8018EE0C 00900534 */   ori       $a1, $zero, 0x9000
  jlabel .L8018EE10
    /* 9D210 8018EE10 903B0608 */  j          .L8018EE40
    /* 9D214 8018EE14 00A00534 */   ori       $a1, $zero, 0xA000
  jlabel .L8018EE18
    /* 9D218 8018EE18 903B0608 */  j          .L8018EE40
    /* 9D21C 8018EE1C 00B00534 */   ori       $a1, $zero, 0xB000
  jlabel .L8018EE20
    /* 9D220 8018EE20 903B0608 */  j          .L8018EE40
    /* 9D224 8018EE24 00C00534 */   ori       $a1, $zero, 0xC000
  jlabel .L8018EE28
    /* 9D228 8018EE28 903B0608 */  j          .L8018EE40
    /* 9D22C 8018EE2C 00D00534 */   ori       $a1, $zero, 0xD000
  jlabel .L8018EE30
    /* 9D230 8018EE30 903B0608 */  j          .L8018EE40
    /* 9D234 8018EE34 00E00534 */   ori       $a1, $zero, 0xE000
  jlabel .L8018EE38
    /* 9D238 8018EE38 06008894 */  lhu        $t0, 0x6($a0)
    /* 9D23C 8018EE3C 21280000 */  addu       $a1, $zero, $zero
  .L8018EE40:
    /* 9D240 8018EE40 0A00A010 */  beqz       $a1, .L8018EE6C
    /* 9D244 8018EE44 FF7F0231 */   andi      $v0, $t0, 0x7FFF
    /* 9D248 8018EE48 06008684 */  lh         $a2, 0x6($a0)
    /* 9D24C 8018EE4C 06008394 */  lhu        $v1, 0x6($a0)
    /* 9D250 8018EE50 8000C228 */  slti       $v0, $a2, 0x80
    /* 9D254 8018EE54 04004010 */  beqz       $v0, .L8018EE68
    /* 9D258 8018EE58 7F000824 */   addiu     $t0, $zero, 0x7F
    /* 9D25C 8018EE5C 0200C004 */  bltz       $a2, .L8018EE68
    /* 9D260 8018EE60 21400000 */   addu      $t0, $zero, $zero
    /* 9D264 8018EE64 21406000 */  addu       $t0, $v1, $zero
  .L8018EE68:
    /* 9D268 8018EE68 FF7F0231 */  andi       $v0, $t0, 0x7FFF
  .L8018EE6C:
    /* 9D26C 8018EE6C 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D270 8018EE70 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D274 8018EE74 25104500 */  or         $v0, $v0, $a1
    /* 9D278 8018EE78 820162A4 */  sh         $v0, 0x182($v1)
  .L8018EE7C:
    /* 9D27C 8018EE7C 03004015 */  bnez       $t2, .L8018EE8C
    /* 9D280 8018EE80 40002231 */   andi      $v0, $t1, 0x40
    /* 9D284 8018EE84 06004010 */  beqz       $v0, .L8018EEA0
    /* 9D288 8018EE88 00000000 */   nop
  .L8018EE8C:
    /* 9D28C 8018EE8C 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D290 8018EE90 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D294 8018EE94 10008294 */  lhu        $v0, 0x10($a0)
    /* 9D298 8018EE98 00000000 */  nop
    /* 9D29C 8018EE9C B00162A4 */  sh         $v0, 0x1B0($v1)
  .L8018EEA0:
    /* 9D2A0 8018EEA0 03004015 */  bnez       $t2, .L8018EEB0
    /* 9D2A4 8018EEA4 80002231 */   andi      $v0, $t1, 0x80
    /* 9D2A8 8018EEA8 06004010 */  beqz       $v0, .L8018EEC4
    /* 9D2AC 8018EEAC 00000000 */   nop
  .L8018EEB0:
    /* 9D2B0 8018EEB0 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D2B4 8018EEB4 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D2B8 8018EEB8 12008294 */  lhu        $v0, 0x12($a0)
    /* 9D2BC 8018EEBC 00000000 */  nop
    /* 9D2C0 8018EEC0 B20162A4 */  sh         $v0, 0x1B2($v1)
  .L8018EEC4:
    /* 9D2C4 8018EEC4 03004015 */  bnez       $t2, .L8018EED4
    /* 9D2C8 8018EEC8 00042231 */   andi      $v0, $t1, 0x400
    /* 9D2CC 8018EECC 06004010 */  beqz       $v0, .L8018EEE8
    /* 9D2D0 8018EED0 00000000 */   nop
  .L8018EED4:
    /* 9D2D4 8018EED4 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D2D8 8018EED8 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D2DC 8018EEDC 1C008294 */  lhu        $v0, 0x1C($a0)
    /* 9D2E0 8018EEE0 00000000 */  nop
    /* 9D2E4 8018EEE4 B40162A4 */  sh         $v0, 0x1B4($v1)
  .L8018EEE8:
    /* 9D2E8 8018EEE8 03004015 */  bnez       $t2, .L8018EEF8
    /* 9D2EC 8018EEEC 00082231 */   andi      $v0, $t1, 0x800
    /* 9D2F0 8018EEF0 06004010 */  beqz       $v0, .L8018EF0C
    /* 9D2F4 8018EEF4 00000000 */   nop
  .L8018EEF8:
    /* 9D2F8 8018EEF8 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D2FC 8018EEFC 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D300 8018EF00 1E008294 */  lhu        $v0, 0x1E($a0)
    /* 9D304 8018EF04 00000000 */  nop
    /* 9D308 8018EF08 B60162A4 */  sh         $v0, 0x1B6($v1)
  .L8018EF0C:
    /* 9D30C 8018EF0C 03004015 */  bnez       $t2, .L8018EF1C
    /* 9D310 8018EF10 00012231 */   andi      $v0, $t1, 0x100
    /* 9D314 8018EF14 12004010 */  beqz       $v0, .L8018EF60
    /* 9D318 8018EF18 00000000 */   nop
  .L8018EF1C:
    /* 9D31C 8018EF1C 1400828C */  lw         $v0, 0x14($a0)
    /* 9D320 8018EF20 00000000 */  nop
    /* 9D324 8018EF24 07004014 */  bnez       $v0, .L8018EF44
    /* 9D328 8018EF28 00000000 */   nop
    /* 9D32C 8018EF2C 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D330 8018EF30 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D334 8018EF34 00000000 */  nop
    /* 9D338 8018EF38 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9D33C 8018EF3C D73B0608 */  j          .L8018EF5C
    /* 9D340 8018EF40 FBFF4230 */   andi      $v0, $v0, 0xFFFB
  .L8018EF44:
    /* 9D344 8018EF44 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D348 8018EF48 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D34C 8018EF4C 00000000 */  nop
    /* 9D350 8018EF50 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9D354 8018EF54 00000000 */  nop
    /* 9D358 8018EF58 04004234 */  ori        $v0, $v0, 0x4
  .L8018EF5C:
    /* 9D35C 8018EF5C AA0162A4 */  sh         $v0, 0x1AA($v1)
  .L8018EF60:
    /* 9D360 8018EF60 03004015 */  bnez       $t2, .L8018EF70
    /* 9D364 8018EF64 00022231 */   andi      $v0, $t1, 0x200
    /* 9D368 8018EF68 12004010 */  beqz       $v0, .L8018EFB4
    /* 9D36C 8018EF6C 00000000 */   nop
  .L8018EF70:
    /* 9D370 8018EF70 1800828C */  lw         $v0, 0x18($a0)
    /* 9D374 8018EF74 00000000 */  nop
    /* 9D378 8018EF78 07004014 */  bnez       $v0, .L8018EF98
    /* 9D37C 8018EF7C 00000000 */   nop
    /* 9D380 8018EF80 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D384 8018EF84 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D388 8018EF88 00000000 */  nop
    /* 9D38C 8018EF8C AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9D390 8018EF90 EC3B0608 */  j          .L8018EFB0
    /* 9D394 8018EF94 FEFF4230 */   andi      $v0, $v0, 0xFFFE
  .L8018EF98:
    /* 9D398 8018EF98 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D39C 8018EF9C 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D3A0 8018EFA0 00000000 */  nop
    /* 9D3A4 8018EFA4 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9D3A8 8018EFA8 00000000 */  nop
    /* 9D3AC 8018EFAC 01004234 */  ori        $v0, $v0, 0x1
  .L8018EFB0:
    /* 9D3B0 8018EFB0 AA0162A4 */  sh         $v0, 0x1AA($v1)
  .L8018EFB4:
    /* 9D3B4 8018EFB4 03004015 */  bnez       $t2, .L8018EFC4
    /* 9D3B8 8018EFB8 00102231 */   andi      $v0, $t1, 0x1000
    /* 9D3BC 8018EFBC 12004010 */  beqz       $v0, .L8018F008
    /* 9D3C0 8018EFC0 00000000 */   nop
  .L8018EFC4:
    /* 9D3C4 8018EFC4 2000828C */  lw         $v0, 0x20($a0)
    /* 9D3C8 8018EFC8 00000000 */  nop
    /* 9D3CC 8018EFCC 07004014 */  bnez       $v0, .L8018EFEC
    /* 9D3D0 8018EFD0 00000000 */   nop
    /* 9D3D4 8018EFD4 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D3D8 8018EFD8 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D3DC 8018EFDC 00000000 */  nop
    /* 9D3E0 8018EFE0 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9D3E4 8018EFE4 013C0608 */  j          .L8018F004
    /* 9D3E8 8018EFE8 F7FF4230 */   andi      $v0, $v0, 0xFFF7
  .L8018EFEC:
    /* 9D3EC 8018EFEC 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D3F0 8018EFF0 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D3F4 8018EFF4 00000000 */  nop
    /* 9D3F8 8018EFF8 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9D3FC 8018EFFC 00000000 */  nop
    /* 9D400 8018F000 08004234 */  ori        $v0, $v0, 0x8
  .L8018F004:
    /* 9D404 8018F004 AA0162A4 */  sh         $v0, 0x1AA($v1)
  .L8018F008:
    /* 9D408 8018F008 03004015 */  bnez       $t2, .L8018F018
    /* 9D40C 8018F00C 00202231 */   andi      $v0, $t1, 0x2000
    /* 9D410 8018F010 12004010 */  beqz       $v0, .L8018F05C
    /* 9D414 8018F014 00000000 */   nop
  .L8018F018:
    /* 9D418 8018F018 2400828C */  lw         $v0, 0x24($a0)
    /* 9D41C 8018F01C 00000000 */  nop
    /* 9D420 8018F020 07004014 */  bnez       $v0, .L8018F040
    /* 9D424 8018F024 00000000 */   nop
    /* 9D428 8018F028 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D42C 8018F02C 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D430 8018F030 00000000 */  nop
    /* 9D434 8018F034 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9D438 8018F038 163C0608 */  j          .L8018F058
    /* 9D43C 8018F03C FDFF4230 */   andi      $v0, $v0, 0xFFFD
  .L8018F040:
    /* 9D440 8018F040 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9D444 8018F044 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9D448 8018F048 00000000 */  nop
    /* 9D44C 8018F04C AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9D450 8018F050 00000000 */  nop
    /* 9D454 8018F054 02004234 */  ori        $v0, $v0, 0x2
  .L8018F058:
    /* 9D458 8018F058 AA0162A4 */  sh         $v0, 0x1AA($v1)
  .L8018F05C:
    /* 9D45C 8018F05C 0800E003 */  jr         $ra
    /* 9D460 8018F060 00000000 */   nop
endlabel func_8018ECE8
    /* 9D464 8018F064 00000000 */  nop
