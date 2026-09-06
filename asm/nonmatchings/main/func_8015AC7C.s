nonmatching func_8015AC7C, 0x3FC

glabel func_8015AC7C
    /* 6907C 8015AC7C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 69080 8015AC80 1000BFAF */  sw         $ra, 0x10($sp)
    /* 69084 8015AC84 59D9030C */  jal        func_800F6564
    /* 69088 8015AC88 A8000424 */   addiu     $a0, $zero, 0xA8
    /* 6908C 8015AC8C 0DD9030C */  jal        func_800F6434
    /* 69090 8015AC90 02020424 */   addiu     $a0, $zero, 0x202
    /* 69094 8015AC94 F4004014 */  bnez       $v0, .L8015B068
    /* 69098 8015AC98 00000000 */   nop
    /* 6909C 8015AC9C 77DC030C */  jal        func_800F71DC
    /* 690A0 8015ACA0 04000424 */   addiu     $a0, $zero, 0x4
    /* 690A4 8015ACA4 5BE3030C */  jal        func_800F8D6C
    /* 690A8 8015ACA8 A9000424 */   addiu     $a0, $zero, 0xA9
  .L8015ACAC:
    /* 690AC 8015ACAC 9CDC030C */  jal        func_800F7270
    /* 690B0 8015ACB0 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 690B4 8015ACB4 DADA030C */  jal        func_800F6B68
    /* 690B8 8015ACB8 40350424 */   addiu     $a0, $zero, 0x3540
    /* 690BC 8015ACBC 0DD9030C */  jal        func_800F6434
    /* 690C0 8015ACC0 02020424 */   addiu     $a0, $zero, 0x202
    /* 690C4 8015ACC4 15004014 */  bnez       $v0, .L8015AD1C
    /* 690C8 8015ACC8 00000000 */   nop
    /* 690CC 8015ACCC 8CD9030C */  jal        func_800F6630
    /* 690D0 8015ACD0 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 690D4 8015ACD4 374B050C */  jal        func_80152CDC
    /* 690D8 8015ACD8 00000000 */   nop
    /* 690DC 8015ACDC 9CDC030C */  jal        func_800F7270
    /* 690E0 8015ACE0 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 690E4 8015ACE4 DADA030C */  jal        func_800F6B68
    /* 690E8 8015ACE8 03200424 */   addiu     $a0, $zero, 0x2003
    /* 690EC 8015ACEC 92D0030C */  jal        func_800F4248
    /* 690F0 8015ACF0 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 690F4 8015ACF4 48D0030C */  jal        func_800F4120
    /* 690F8 8015ACF8 02020424 */   addiu     $a0, $zero, 0x202
    /* 690FC 8015ACFC 07004014 */  bnez       $v0, .L8015AD1C
    /* 69100 8015AD00 00000000 */   nop
    /* 69104 8015AD04 DADA030C */  jal        func_800F6B68
    /* 69108 8015AD08 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6910C 8015AD0C 0DD9030C */  jal        func_800F6434
    /* 69110 8015AD10 80800434 */   ori       $a0, $zero, 0x8080
    /* 69114 8015AD14 15004014 */  bnez       $v0, .L8015AD6C
    /* 69118 8015AD18 00000000 */   nop
  .L8015AD1C:
    /* 6911C 8015AD1C 68D7030C */  jal        func_800F5DA0
    /* 69120 8015AD20 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 69124 8015AD24 8CD9030C */  jal        func_800F6630
    /* 69128 8015AD28 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6912C 8015AD2C 0DD9030C */  jal        func_800F6434
    /* 69130 8015AD30 80800434 */   ori       $a0, $zero, 0x8080
    /* 69134 8015AD34 DDFF4014 */  bnez       $v0, .L8015ACAC
    /* 69138 8015AD38 00000000 */   nop
    /* 6913C 8015AD3C 59D9030C */  jal        func_800F6564
    /* 69140 8015AD40 E5380424 */   addiu     $a0, $zero, 0x38E5
    /* 69144 8015AD44 92D0030C */  jal        func_800F4248
    /* 69148 8015AD48 02000424 */   addiu     $a0, $zero, 0x2
    /* 6914C 8015AD4C 48D0030C */  jal        func_800F4120
    /* 69150 8015AD50 02000424 */   addiu     $a0, $zero, 0x2
    /* 69154 8015AD54 A2004010 */  beqz       $v0, .L8015AFE0
    /* 69158 8015AD58 08000424 */   addiu     $a0, $zero, 0x8
    /* 6915C 8015AD5C 53D9030C */  jal        func_800F654C
    /* 69160 8015AD60 80000424 */   addiu     $a0, $zero, 0x80
    /* 69164 8015AD64 FA6B0508 */  j          .L8015AFE8
    /* 69168 8015AD68 00000000 */   nop
  .L8015AD6C:
    /* 6916C 8015AD6C 59D9030C */  jal        func_800F6564
    /* 69170 8015AD70 CD290424 */   addiu     $a0, $zero, 0x29CD
    /* 69174 8015AD74 0DD9030C */  jal        func_800F6434
    /* 69178 8015AD78 02020424 */   addiu     $a0, $zero, 0x202
    /* 6917C 8015AD7C 36004014 */  bnez       $v0, .L8015AE58
    /* 69180 8015AD80 00000000 */   nop
    /* 69184 8015AD84 53D9030C */  jal        func_800F654C
    /* 69188 8015AD88 30000424 */   addiu     $a0, $zero, 0x30
    /* 6918C 8015AD8C 93E0030C */  jal        func_800F824C
    /* 69190 8015AD90 A8000424 */   addiu     $a0, $zero, 0xA8
    /* 69194 8015AD94 C7E5030C */  jal        func_800F971C
    /* 69198 8015AD98 00000000 */   nop
    /* 6919C 8015AD9C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 691A0 8015ADA0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 691A4 8015ADA4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 691A8 8015ADA8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 691AC 8015ADAC 00004394 */  lhu        $v1, 0x0($v0)
    /* 691B0 8015ADB0 00000000 */  nop
    /* 691B4 8015ADB4 000083A4 */  sh         $v1, 0x0($a0)
    /* 691B8 8015ADB8 1300043C */  lui        $a0, (0x13FD00 >> 16)
  .L8015ADBC:
    /* 691BC 8015ADBC 1ADB030C */  jal        func_800F6C68
    /* 691C0 8015ADC0 00FD8434 */   ori       $a0, $a0, (0x13FD00 & 0xFFFF)
    /* 691C4 8015ADC4 5DD5030C */  jal        func_800F5574
    /* 691C8 8015ADC8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 691CC 8015ADCC F5D4030C */  jal        func_800F53D4
    /* 691D0 8015ADD0 00000000 */   nop
    /* 691D4 8015ADD4 A4004014 */  bnez       $v0, .L8015B068
    /* 691D8 8015ADD8 00000000 */   nop
    /* 691DC 8015ADDC C1CE030C */  jal        func_800F3B04
    /* 691E0 8015ADE0 00180424 */   addiu     $a0, $zero, 0x1800
    /* 691E4 8015ADE4 35D5030C */  jal        func_800F54D4
    /* 691E8 8015ADE8 21204000 */   addu      $a0, $v0, $zero
    /* 691EC 8015ADEC F5D4030C */  jal        func_800F53D4
    /* 691F0 8015ADF0 00000000 */   nop
    /* 691F4 8015ADF4 12004010 */  beqz       $v0, .L8015AE40
    /* 691F8 8015ADF8 00000000 */   nop
    /* 691FC 8015ADFC 1300043C */  lui        $a0, (0x13FD01 >> 16)
    /* 69200 8015AE00 1ADB030C */  jal        func_800F6C68
    /* 69204 8015AE04 01FD8434 */   ori       $a0, $a0, (0x13FD01 & 0xFFFF)
    /* 69208 8015AE08 C1CE030C */  jal        func_800F3B04
    /* 6920C 8015AE0C 01180424 */   addiu     $a0, $zero, 0x1801
    /* 69210 8015AE10 35D5030C */  jal        func_800F54D4
    /* 69214 8015AE14 21204000 */   addu      $a0, $v0, $zero
    /* 69218 8015AE18 F5D4030C */  jal        func_800F53D4
    /* 6921C 8015AE1C 00000000 */   nop
    /* 69220 8015AE20 07004010 */  beqz       $v0, .L8015AE40
    /* 69224 8015AE24 00000000 */   nop
    /* 69228 8015AE28 8CD9030C */  jal        func_800F6630
    /* 6922C 8015AE2C A8000424 */   addiu     $a0, $zero, 0xA8
    /* 69230 8015AE30 92D0030C */  jal        func_800F4248
    /* 69234 8015AE34 EF000424 */   addiu     $a0, $zero, 0xEF
    /* 69238 8015AE38 FA6B0508 */  j          .L8015AFE8
    /* 6923C 8015AE3C 00000000 */   nop
  .L8015AE40:
    /* 69240 8015AE40 D9D8030C */  jal        func_800F6364
    /* 69244 8015AE44 00000000 */   nop
    /* 69248 8015AE48 D9D8030C */  jal        func_800F6364
    /* 6924C 8015AE4C 00000000 */   nop
    /* 69250 8015AE50 6F6B0508 */  j          .L8015ADBC
    /* 69254 8015AE54 1300043C */   lui       $a0, (0x13FD00 >> 16)
  .L8015AE58:
    /* 69258 8015AE58 59D9030C */  jal        func_800F6564
    /* 6925C 8015AE5C 8B380424 */   addiu     $a0, $zero, 0x388B
    /* 69260 8015AE60 0DD9030C */  jal        func_800F6434
    /* 69264 8015AE64 02020424 */   addiu     $a0, $zero, 0x202
    /* 69268 8015AE68 7F004014 */  bnez       $v0, .L8015B068
    /* 6926C 8015AE6C 00000000 */   nop
    /* 69270 8015AE70 59D9030C */  jal        func_800F6564
    /* 69274 8015AE74 D3380424 */   addiu     $a0, $zero, 0x38D3
    /* 69278 8015AE78 0DD9030C */  jal        func_800F6434
    /* 6927C 8015AE7C 02020424 */   addiu     $a0, $zero, 0x202
    /* 69280 8015AE80 07004014 */  bnez       $v0, .L8015AEA0
    /* 69284 8015AE84 00000000 */   nop
    /* 69288 8015AE88 59D9030C */  jal        func_800F6564
    /* 6928C 8015AE8C 2D350424 */   addiu     $a0, $zero, 0x352D
    /* 69290 8015AE90 0DD9030C */  jal        func_800F6434
    /* 69294 8015AE94 02000424 */   addiu     $a0, $zero, 0x2
    /* 69298 8015AE98 73004014 */  bnez       $v0, .L8015B068
    /* 6929C 8015AE9C 00000000 */   nop
  .L8015AEA0:
    /* 692A0 8015AEA0 59D9030C */  jal        func_800F6564
    /* 692A4 8015AEA4 D6380424 */   addiu     $a0, $zero, 0x38D6
    /* 692A8 8015AEA8 5DD5030C */  jal        func_800F5574
    /* 692AC 8015AEAC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 692B0 8015AEB0 F5D4030C */  jal        func_800F53D4
    /* 692B4 8015AEB4 00000000 */   nop
    /* 692B8 8015AEB8 6B004014 */  bnez       $v0, .L8015B068
    /* 692BC 8015AEBC 00000000 */   nop
    /* 692C0 8015AEC0 59D9030C */  jal        func_800F6564
    /* 692C4 8015AEC4 D6380424 */   addiu     $a0, $zero, 0x38D6
    /* 692C8 8015AEC8 0DD9030C */  jal        func_800F6434
    /* 692CC 8015AECC 02000424 */   addiu     $a0, $zero, 0x2
    /* 692D0 8015AED0 0B004014 */  bnez       $v0, .L8015AF00
    /* 692D4 8015AED4 00000000 */   nop
    /* 692D8 8015AED8 59D9030C */  jal        func_800F6564
    /* 692DC 8015AEDC F3380424 */   addiu     $a0, $zero, 0x38F3
    /* 692E0 8015AEE0 0DD9030C */  jal        func_800F6434
    /* 692E4 8015AEE4 02020424 */   addiu     $a0, $zero, 0x202
    /* 692E8 8015AEE8 05004014 */  bnez       $v0, .L8015AF00
    /* 692EC 8015AEEC 00000000 */   nop
    /* 692F0 8015AEF0 49D7030C */  jal        func_800F5D24
    /* 692F4 8015AEF4 D6380424 */   addiu     $a0, $zero, 0x38D6
    /* 692F8 8015AEF8 1A6C0508 */  j          .L8015B068
    /* 692FC 8015AEFC 00000000 */   nop
  .L8015AF00:
    /* 69300 8015AF00 59D9030C */  jal        func_800F6564
    /* 69304 8015AF04 E5380424 */   addiu     $a0, $zero, 0x38E5
    /* 69308 8015AF08 92D0030C */  jal        func_800F4248
    /* 6930C 8015AF0C 01000424 */   addiu     $a0, $zero, 0x1
    /* 69310 8015AF10 48D0030C */  jal        func_800F4120
    /* 69314 8015AF14 02020424 */   addiu     $a0, $zero, 0x202
    /* 69318 8015AF18 41004014 */  bnez       $v0, .L8015B020
    /* 6931C 8015AF1C 00000000 */   nop
    /* 69320 8015AF20 C7E5030C */  jal        func_800F971C
    /* 69324 8015AF24 00000000 */   nop
    /* 69328 8015AF28 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6932C 8015AF2C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 69330 8015AF30 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 69334 8015AF34 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 69338 8015AF38 00004394 */  lhu        $v1, 0x0($v0)
    /* 6933C 8015AF3C A9000424 */  addiu      $a0, $zero, 0xA9
    /* 69340 8015AF40 5BE3030C */  jal        func_800F8D6C
    /* 69344 8015AF44 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8015AF48:
    /* 69348 8015AF48 9CDC030C */  jal        func_800F7270
    /* 6934C 8015AF4C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 69350 8015AF50 DADA030C */  jal        func_800F6B68
    /* 69354 8015AF54 40350424 */   addiu     $a0, $zero, 0x3540
    /* 69358 8015AF58 0DD9030C */  jal        func_800F6434
    /* 6935C 8015AF5C 02020424 */   addiu     $a0, $zero, 0x202
    /* 69360 8015AF60 25004014 */  bnez       $v0, .L8015AFF8
    /* 69364 8015AF64 00000000 */   nop
    /* 69368 8015AF68 8CD9030C */  jal        func_800F6630
    /* 6936C 8015AF6C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 69370 8015AF70 374B050C */  jal        func_80152CDC
    /* 69374 8015AF74 00000000 */   nop
    /* 69378 8015AF78 9CDC030C */  jal        func_800F7270
    /* 6937C 8015AF7C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 69380 8015AF80 DADA030C */  jal        func_800F6B68
    /* 69384 8015AF84 03200424 */   addiu     $a0, $zero, 0x2003
    /* 69388 8015AF88 92D0030C */  jal        func_800F4248
    /* 6938C 8015AF8C C0000424 */   addiu     $a0, $zero, 0xC0
    /* 69390 8015AF90 48D0030C */  jal        func_800F4120
    /* 69394 8015AF94 02020424 */   addiu     $a0, $zero, 0x202
    /* 69398 8015AF98 17004014 */  bnez       $v0, .L8015AFF8
    /* 6939C 8015AF9C 00000000 */   nop
    /* 693A0 8015AFA0 DADA030C */  jal        func_800F6B68
    /* 693A4 8015AFA4 04200424 */   addiu     $a0, $zero, 0x2004
    /* 693A8 8015AFA8 92D0030C */  jal        func_800F4248
    /* 693AC 8015AFAC 30000424 */   addiu     $a0, $zero, 0x30
    /* 693B0 8015AFB0 48D0030C */  jal        func_800F4120
    /* 693B4 8015AFB4 02020424 */   addiu     $a0, $zero, 0x202
    /* 693B8 8015AFB8 0F004014 */  bnez       $v0, .L8015AFF8
    /* 693BC 8015AFBC 00000000 */   nop
    /* 693C0 8015AFC0 DADA030C */  jal        func_800F6B68
    /* 693C4 8015AFC4 05200424 */   addiu     $a0, $zero, 0x2005
    /* 693C8 8015AFC8 92D0030C */  jal        func_800F4248
    /* 693CC 8015AFCC C2000424 */   addiu     $a0, $zero, 0xC2
    /* 693D0 8015AFD0 48D0030C */  jal        func_800F4120
    /* 693D4 8015AFD4 02020424 */   addiu     $a0, $zero, 0x202
    /* 693D8 8015AFD8 07004014 */  bnez       $v0, .L8015AFF8
    /* 693DC 8015AFDC 40000424 */   addiu     $a0, $zero, 0x40
  .L8015AFE0:
    /* 693E0 8015AFE0 53D9030C */  jal        func_800F654C
    /* 693E4 8015AFE4 00000000 */   nop
  .L8015AFE8:
    /* 693E8 8015AFE8 93E0030C */  jal        func_800F824C
    /* 693EC 8015AFEC A8000424 */   addiu     $a0, $zero, 0xA8
    /* 693F0 8015AFF0 1A6C0508 */  j          .L8015B068
    /* 693F4 8015AFF4 00000000 */   nop
  .L8015AFF8:
    /* 693F8 8015AFF8 AFD8030C */  jal        func_800F62BC
    /* 693FC 8015AFFC A9000424 */   addiu     $a0, $zero, 0xA9
    /* 69400 8015B000 8CD9030C */  jal        func_800F6630
    /* 69404 8015B004 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 69408 8015B008 5DD5030C */  jal        func_800F5574
    /* 6940C 8015B00C 05000424 */   addiu     $a0, $zero, 0x5
    /* 69410 8015B010 F5D4030C */  jal        func_800F53D4
    /* 69414 8015B014 00000000 */   nop
    /* 69418 8015B018 CBFF4010 */  beqz       $v0, .L8015AF48
    /* 6941C 8015B01C 00000000 */   nop
  .L8015B020:
    /* 69420 8015B020 DDE3030C */  jal        func_800F8F74
    /* 69424 8015B024 2D350424 */   addiu     $a0, $zero, 0x352D
    /* 69428 8015B028 994C050C */  jal        func_80153264
    /* 6942C 8015B02C 00000000 */   nop
    /* 69430 8015B030 53D9030C */  jal        func_800F654C
    /* 69434 8015B034 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 69438 8015B038 62E0030C */  jal        func_800F8188
    /* 6943C 8015B03C C4330424 */   addiu     $a0, $zero, 0x33C4
    /* 69440 8015B040 53D9030C */  jal        func_800F654C
    /* 69444 8015B044 22000424 */   addiu     $a0, $zero, 0x22
    /* 69448 8015B048 62E0030C */  jal        func_800F8188
    /* 6944C 8015B04C CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 69450 8015B050 53D9030C */  jal        func_800F654C
    /* 69454 8015B054 05000424 */   addiu     $a0, $zero, 0x5
    /* 69458 8015B058 0E43050C */  jal        func_80150C38
    /* 6945C 8015B05C 00000000 */   nop
    /* 69460 8015B060 8D68010C */  jal        func_8005A234
    /* 69464 8015B064 00000000 */   nop
  .L8015B068:
    /* 69468 8015B068 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6946C 8015B06C 00000000 */  nop
    /* 69470 8015B070 0800E003 */  jr         $ra
    /* 69474 8015B074 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015AC7C
