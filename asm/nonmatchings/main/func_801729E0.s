nonmatching func_801729E0, 0x1C8

glabel func_801729E0
    /* 80DE0 801729E0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 80DE4 801729E4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 80DE8 801729E8 5DD5030C */  jal        func_800F5574
    /* 80DEC 801729EC 10000424 */   addiu     $a0, $zero, 0x10
    /* 80DF0 801729F0 F0D4030C */  jal        func_800F53C0
    /* 80DF4 801729F4 00000000 */   nop
    /* 80DF8 801729F8 03004010 */  beqz       $v0, .L80172A08
    /* 80DFC 801729FC 00000000 */   nop
    /* 80E00 80172A00 53D9030C */  jal        func_800F654C
    /* 80E04 80172A04 10000424 */   addiu     $a0, $zero, 0x10
  .L80172A08:
    /* 80E08 80172A08 92D0030C */  jal        func_800F4248
    /* 80E0C 80172A0C FC000424 */   addiu     $a0, $zero, 0xFC
    /* 80E10 80172A10 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 80E14 80172A14 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 80E18 80172A18 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 80E1C 80172A1C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 80E20 80172A20 00004394 */  lhu        $v1, 0x0($v0)
    /* 80E24 80172A24 10000424 */  addiu      $a0, $zero, 0x10
    /* 80E28 80172A28 5DD5030C */  jal        func_800F5574
    /* 80E2C 80172A2C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 80E30 80172A30 F5D4030C */  jal        func_800F53D4
    /* 80E34 80172A34 00000000 */   nop
    /* 80E38 80172A38 09004014 */  bnez       $v0, .L80172A60
    /* 80E3C 80172A3C 00000000 */   nop
    /* 80E40 80172A40 8CD9030C */  jal        func_800F6630
    /* 80E44 80172A44 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 80E48 80172A48 92D0030C */  jal        func_800F4248
    /* 80E4C 80172A4C 01000424 */   addiu     $a0, $zero, 0x1
    /* 80E50 80172A50 48D0030C */  jal        func_800F4120
    /* 80E54 80172A54 02020424 */   addiu     $a0, $zero, 0x202
    /* 80E58 80172A58 4F004014 */  bnez       $v0, .L80172B98
    /* 80E5C 80172A5C 00000000 */   nop
  .L80172A60:
    /* 80E60 80172A60 8CD9030C */  jal        func_800F6630
    /* 80E64 80172A64 C8000424 */   addiu     $a0, $zero, 0xC8
    /* 80E68 80172A68 0DD9030C */  jal        func_800F6434
    /* 80E6C 80172A6C 02020424 */   addiu     $a0, $zero, 0x202
    /* 80E70 80172A70 49004014 */  bnez       $v0, .L80172B98
    /* 80E74 80172A74 00000000 */   nop
    /* 80E78 80172A78 8CD9030C */  jal        func_800F6630
    /* 80E7C 80172A7C A1000424 */   addiu     $a0, $zero, 0xA1
    /* 80E80 80172A80 92D0030C */  jal        func_800F4248
    /* 80E84 80172A84 08000424 */   addiu     $a0, $zero, 0x8
    /* 80E88 80172A88 48D0030C */  jal        func_800F4120
    /* 80E8C 80172A8C 02020424 */   addiu     $a0, $zero, 0x202
    /* 80E90 80172A90 09004014 */  bnez       $v0, .L80172AB8
    /* 80E94 80172A94 00000000 */   nop
    /* 80E98 80172A98 8CD9030C */  jal        func_800F6630
    /* 80E9C 80172A9C A1000424 */   addiu     $a0, $zero, 0xA1
    /* 80EA0 80172AA0 92D0030C */  jal        func_800F4248
    /* 80EA4 80172AA4 04000424 */   addiu     $a0, $zero, 0x4
    /* 80EA8 80172AA8 48D0030C */  jal        func_800F4120
    /* 80EAC 80172AAC 02020424 */   addiu     $a0, $zero, 0x202
    /* 80EB0 80172AB0 05004014 */  bnez       $v0, .L80172AC8
    /* 80EB4 80172AB4 00000000 */   nop
  .L80172AB8:
    /* 80EB8 80172AB8 53D9030C */  jal        func_800F654C
    /* 80EBC 80172ABC FE000424 */   addiu     $a0, $zero, 0xFE
    /* 80EC0 80172AC0 B4CA0508 */  j          .L80172AD0
    /* 80EC4 80172AC4 00000000 */   nop
  .L80172AC8:
    /* 80EC8 80172AC8 53D9030C */  jal        func_800F654C
    /* 80ECC 80172ACC 21200000 */   addu      $a0, $zero, $zero
  .L80172AD0:
    /* 80ED0 80172AD0 93E0030C */  jal        func_800F824C
    /* 80ED4 80172AD4 06000424 */   addiu     $a0, $zero, 0x6
    /* 80ED8 80172AD8 53D9030C */  jal        func_800F654C
    /* 80EDC 80172ADC 70000424 */   addiu     $a0, $zero, 0x70
    /* 80EE0 80172AE0 62E0030C */  jal        func_800F8188
    /* 80EE4 80172AE4 C0040424 */   addiu     $a0, $zero, 0x4C0
    /* 80EE8 80172AE8 53D9030C */  jal        func_800F654C
    /* 80EEC 80172AEC 78000424 */   addiu     $a0, $zero, 0x78
    /* 80EF0 80172AF0 04D5030C */  jal        func_800F5410
    /* 80EF4 80172AF4 00000000 */   nop
    /* 80EF8 80172AF8 0FCF030C */  jal        func_800F3C3C
    /* 80EFC 80172AFC 06000424 */   addiu     $a0, $zero, 0x6
    /* 80F00 80172B00 CECF030C */  jal        func_800F3F38
    /* 80F04 80172B04 21204000 */   addu      $a0, $v0, $zero
    /* 80F08 80172B08 62E0030C */  jal        func_800F8188
    /* 80F0C 80172B0C C1040424 */   addiu     $a0, $zero, 0x4C1
    /* 80F10 80172B10 1500043C */  lui        $a0, (0x15B8C9 >> 16)
    /* 80F14 80172B14 1ADB030C */  jal        func_800F6C68
    /* 80F18 80172B18 C9B88434 */   ori       $a0, $a0, (0x15B8C9 & 0xFFFF)
    /* 80F1C 80172B1C 62E0030C */  jal        func_800F8188
    /* 80F20 80172B20 C2040424 */   addiu     $a0, $zero, 0x4C2
    /* 80F24 80172B24 1500043C */  lui        $a0, (0x15B8CA >> 16)
    /* 80F28 80172B28 1ADB030C */  jal        func_800F6C68
    /* 80F2C 80172B2C CAB88434 */   ori       $a0, $a0, (0x15B8CA & 0xFFFF)
    /* 80F30 80172B30 62E0030C */  jal        func_800F8188
    /* 80F34 80172B34 C3040424 */   addiu     $a0, $zero, 0x4C3
    /* 80F38 80172B38 53D9030C */  jal        func_800F654C
    /* 80F3C 80172B3C 78000424 */   addiu     $a0, $zero, 0x78
    /* 80F40 80172B40 62E0030C */  jal        func_800F8188
    /* 80F44 80172B44 C4040424 */   addiu     $a0, $zero, 0x4C4
    /* 80F48 80172B48 53D9030C */  jal        func_800F654C
    /* 80F4C 80172B4C 78000424 */   addiu     $a0, $zero, 0x78
    /* 80F50 80172B50 04D5030C */  jal        func_800F5410
    /* 80F54 80172B54 00000000 */   nop
    /* 80F58 80172B58 0FCF030C */  jal        func_800F3C3C
    /* 80F5C 80172B5C 06000424 */   addiu     $a0, $zero, 0x6
    /* 80F60 80172B60 CECF030C */  jal        func_800F3F38
    /* 80F64 80172B64 21204000 */   addu      $a0, $v0, $zero
    /* 80F68 80172B68 62E0030C */  jal        func_800F8188
    /* 80F6C 80172B6C C5040424 */   addiu     $a0, $zero, 0x4C5
    /* 80F70 80172B70 1500043C */  lui        $a0, (0x15B8CB >> 16)
    /* 80F74 80172B74 1ADB030C */  jal        func_800F6C68
    /* 80F78 80172B78 CBB88434 */   ori       $a0, $a0, (0x15B8CB & 0xFFFF)
    /* 80F7C 80172B7C 62E0030C */  jal        func_800F8188
    /* 80F80 80172B80 C6040424 */   addiu     $a0, $zero, 0x4C6
    /* 80F84 80172B84 1500043C */  lui        $a0, (0x15B8CC >> 16)
    /* 80F88 80172B88 1ADB030C */  jal        func_800F6C68
    /* 80F8C 80172B8C CCB88434 */   ori       $a0, $a0, (0x15B8CC & 0xFFFF)
    /* 80F90 80172B90 62E0030C */  jal        func_800F8188
    /* 80F94 80172B94 C7040424 */   addiu     $a0, $zero, 0x4C7
  .L80172B98:
    /* 80F98 80172B98 1000BF8F */  lw         $ra, 0x10($sp)
    /* 80F9C 80172B9C 00000000 */  nop
    /* 80FA0 80172BA0 0800E003 */  jr         $ra
    /* 80FA4 80172BA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801729E0
