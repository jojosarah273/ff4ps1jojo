nonmatching func_8012C980, 0x1B4

glabel func_8012C980
    /* 3AD80 8012C980 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3AD84 8012C984 1400BFAF */  sw         $ra, 0x14($sp)
    /* 3AD88 8012C988 2B84040C */  jal        func_801210AC
    /* 3AD8C 8012C98C 1000B0AF */   sw        $s0, 0x10($sp)
    /* 3AD90 8012C990 59D9030C */  jal        func_800F6564
    /* 3AD94 8012C994 231B0424 */   addiu     $a0, $zero, 0x1B23
    /* 3AD98 8012C998 04D5030C */  jal        func_800F5410
    /* 3AD9C 8012C99C 1A80103C */   lui       $s0, %hi(D_80199190)
    /* 3ADA0 8012C9A0 C1CE030C */  jal        func_800F3B04
    /* 3ADA4 8012C9A4 1A1B0424 */   addiu     $a0, $zero, 0x1B1A
    /* 3ADA8 8012C9A8 CECF030C */  jal        func_800F3F38
    /* 3ADAC 8012C9AC 21204000 */   addu      $a0, $v0, $zero
    /* 3ADB0 8012C9B0 50D4030C */  jal        func_800F5140
    /* 3ADB4 8012C9B4 00000000 */   nop
    /* 3ADB8 8012C9B8 D3D3030C */  jal        func_800F4F4C
    /* 3ADBC 8012C9BC 00000000 */   nop
    /* 3ADC0 8012C9C0 C1CE030C */  jal        func_800F3B04
    /* 3ADC4 8012C9C4 221B0424 */   addiu     $a0, $zero, 0x1B22
    /* 3ADC8 8012C9C8 CECF030C */  jal        func_800F3F38
    /* 3ADCC 8012C9CC 21204000 */   addu      $a0, $v0, $zero
    /* 3ADD0 8012C9D0 50D4030C */  jal        func_800F5140
    /* 3ADD4 8012C9D4 00000000 */   nop
    /* 3ADD8 8012C9D8 3489040C */  jal        func_801224D0
    /* 3ADDC 8012C9DC 00000000 */   nop
    /* 3ADE0 8012C9E0 DADA030C */  jal        func_800F6B68
    /* 3ADE4 8012C9E4 40140424 */   addiu     $a0, $zero, 0x1440
    /* 3ADE8 8012C9E8 80E4030C */  jal        func_800F9200
    /* 3ADEC 8012C9EC 00000000 */   nop
    /* 3ADF0 8012C9F0 90910226 */  addiu      $v0, $s0, %lo(D_80199190)
    /* 3ADF4 8012C9F4 1A004494 */  lhu        $a0, 0x1A($v0)
    /* 3ADF8 8012C9F8 40DD030C */  jal        func_800F7500
    /* 3ADFC 8012C9FC 00000000 */   nop
    /* 3AE00 8012CA00 CC7B040C */  jal        func_8011EF30
    /* 3AE04 8012CA04 00000000 */   nop
    /* 3AE08 8012CA08 F7E4030C */  jal        func_800F93DC
    /* 3AE0C 8012CA0C 00000000 */   nop
    /* 3AE10 8012CA10 5DD5030C */  jal        func_800F5574
    /* 3AE14 8012CA14 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 3AE18 8012CA18 F0D4030C */  jal        func_800F53C0
    /* 3AE1C 8012CA1C 00000000 */   nop
    /* 3AE20 8012CA20 38004010 */  beqz       $v0, .L8012CB04
    /* 3AE24 8012CA24 00000000 */   nop
    /* 3AE28 8012CA28 5DD5030C */  jal        func_800F5574
    /* 3AE2C 8012CA2C E7000424 */   addiu     $a0, $zero, 0xE7
    /* 3AE30 8012CA30 F0D4030C */  jal        func_800F53C0
    /* 3AE34 8012CA34 00000000 */   nop
    /* 3AE38 8012CA38 32004014 */  bnez       $v0, .L8012CB04
    /* 3AE3C 8012CA3C 00000000 */   nop
    /* 3AE40 8012CA40 20D5030C */  jal        func_800F5480
    /* 3AE44 8012CA44 00000000 */   nop
    /* 3AE48 8012CA48 16E0030C */  jal        func_800F8058
    /* 3AE4C 8012CA4C CE000424 */   addiu     $a0, $zero, 0xCE
    /* 3AE50 8012CA50 3489040C */  jal        func_801224D0
    /* 3AE54 8012CA54 00000000 */   nop
    /* 3AE58 8012CA58 0F00043C */  lui        $a0, (0xFAE00 >> 16)
    /* 3AE5C 8012CA5C 1ADB030C */  jal        func_800F6C68
    /* 3AE60 8012CA60 00AE8434 */   ori       $a0, $a0, (0xFAE00 & 0xFFFF)
    /* 3AE64 8012CA64 93E0030C */  jal        func_800F824C
    /* 3AE68 8012CA68 45000424 */   addiu     $a0, $zero, 0x45
    /* 3AE6C 8012CA6C 77DC030C */  jal        func_800F71DC
    /* 3AE70 8012CA70 2AAE0434 */   ori       $a0, $zero, 0xAE2A
    /* 3AE74 8012CA74 4BDC030C */  jal        func_800F712C
    /* 3AE78 8012CA78 00000000 */   nop
  .L8012CA7C:
    /* 3AE7C 8012CA7C F5D4030C */  jal        func_800F53D4
    /* 3AE80 8012CA80 00000000 */   nop
    /* 3AE84 8012CA84 11004014 */  bnez       $v0, .L8012CACC
    /* 3AE88 8012CA88 00000000 */   nop
    /* 3AE8C 8012CA8C D9D8030C */  jal        func_800F6364
    /* 3AE90 8012CA90 00000000 */   nop
    /* 3AE94 8012CA94 1ADB030C */  jal        func_800F6C68
    /* 3AE98 8012CA98 0F00043C */   lui       $a0, (0xF0000 >> 16)
    /* 3AE9C 8012CA9C 0DD9030C */  jal        func_800F6434
    /* 3AEA0 8012CAA0 02020424 */   addiu     $a0, $zero, 0x202
    /* 3AEA4 8012CAA4 F5FF4014 */  bnez       $v0, .L8012CA7C
    /* 3AEA8 8012CAA8 00000000 */   nop
    /* 3AEAC 8012CAAC 68D7030C */  jal        func_800F5DA0
    /* 3AEB0 8012CAB0 45000424 */   addiu     $a0, $zero, 0x45
    /* 3AEB4 8012CAB4 E3D6030C */  jal        func_800F5B8C
    /* 3AEB8 8012CAB8 02020424 */   addiu     $a0, $zero, 0x202
    /* 3AEBC 8012CABC EFFF4014 */  bnez       $v0, .L8012CA7C
    /* 3AEC0 8012CAC0 00000000 */   nop
    /* 3AEC4 8012CAC4 D9D8030C */  jal        func_800F6364
    /* 3AEC8 8012CAC8 00000000 */   nop
  .L8012CACC:
    /* 3AECC 8012CACC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 3AED0 8012CAD0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 3AED4 8012CAD4 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3AED8 8012CAD8 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3AEDC 8012CADC 00004394 */  lhu        $v1, 0x0($v0)
    /* 3AEE0 8012CAE0 0F000424 */  addiu      $a0, $zero, 0xF
    /* 3AEE4 8012CAE4 53D9030C */  jal        func_800F654C
    /* 3AEE8 8012CAE8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3AEEC 8012CAEC 77DC030C */  jal        func_800F71DC
    /* 3AEF0 8012CAF0 54000424 */   addiu     $a0, $zero, 0x54
    /* 3AEF4 8012CAF4 717E040C */  jal        func_8011F9C4
    /* 3AEF8 8012CAF8 00000000 */   nop
    /* 3AEFC 8012CAFC C9B20408 */  j          .L8012CB24
    /* 3AF00 8012CB00 00000000 */   nop
  .L8012CB04:
    /* 3AF04 8012CB04 2A90040C */  jal        func_801240A8
    /* 3AF08 8012CB08 00000000 */   nop
    /* 3AF0C 8012CB0C 90910226 */  addiu      $v0, $s0, %lo(D_80199190)
    /* 3AF10 8012CB10 22004494 */  lhu        $a0, 0x22($v0)
    /* 3AF14 8012CB14 40DD030C */  jal        func_800F7500
    /* 3AF18 8012CB18 00000000 */   nop
    /* 3AF1C 8012CB1C DD7E040C */  jal        func_8011FB74
    /* 3AF20 8012CB20 00000000 */   nop
  .L8012CB24:
    /* 3AF24 8012CB24 1400BF8F */  lw         $ra, 0x14($sp)
    /* 3AF28 8012CB28 1000B08F */  lw         $s0, 0x10($sp)
    /* 3AF2C 8012CB2C 0800E003 */  jr         $ra
    /* 3AF30 8012CB30 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C980
