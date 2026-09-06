nonmatching func_8016097C, 0xD0

glabel func_8016097C
    /* 6ED7C 8016097C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6ED80 80160980 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6ED84 80160984 5DD5030C */  jal        func_800F5574
    /* 6ED88 80160988 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 6ED8C 8016098C F0D4030C */  jal        func_800F53C0
    /* 6ED90 80160990 00000000 */   nop
    /* 6ED94 80160994 1D004010 */  beqz       $v0, .L80160A0C
    /* 6ED98 80160998 00000000 */   nop
    /* 6ED9C 8016099C 5DD5030C */  jal        func_800F5574
    /* 6EDA0 801609A0 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 6EDA4 801609A4 F5D4030C */  jal        func_800F53D4
    /* 6EDA8 801609A8 00000000 */   nop
    /* 6EDAC 801609AC 05004010 */  beqz       $v0, .L801609C4
    /* 6EDB0 801609B0 00000000 */   nop
    /* 6EDB4 801609B4 53D9030C */  jal        func_800F654C
    /* 6EDB8 801609B8 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 6EDBC 801609BC 8B820508 */  j          .L80160A2C
    /* 6EDC0 801609C0 00000000 */   nop
  .L801609C4:
    /* 6EDC4 801609C4 77DC030C */  jal        func_800F71DC
    /* 6EDC8 801609C8 21200000 */   addu      $a0, $zero, $zero
    /* 6EDCC 801609CC 53D9030C */  jal        func_800F654C
    /* 6EDD0 801609D0 02000424 */   addiu     $a0, $zero, 0x2
    /* 6EDD4 801609D4 8948050C */  jal        func_80152224
    /* 6EDD8 801609D8 00000000 */   nop
    /* 6EDDC 801609DC 80E4030C */  jal        func_800F9200
    /* 6EDE0 801609E0 00000000 */   nop
    /* 6EDE4 801609E4 53D9030C */  jal        func_800F654C
    /* 6EDE8 801609E8 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 6EDEC 801609EC 62E0030C */  jal        func_800F8188
    /* 6EDF0 801609F0 D4260424 */   addiu     $a0, $zero, 0x26D4
    /* 6EDF4 801609F4 F7E4030C */  jal        func_800F93DC
    /* 6EDF8 801609F8 00000000 */   nop
    /* 6EDFC 801609FC 04D5030C */  jal        func_800F5410
    /* 6EE00 80160A00 00000000 */   nop
    /* 6EE04 80160A04 02D0030C */  jal        func_800F4008
    /* 6EE08 80160A08 3E000424 */   addiu     $a0, $zero, 0x3E
  .L80160A0C:
    /* 6EE0C 80160A0C 20D5030C */  jal        func_800F5480
    /* 6EE10 80160A10 00000000 */   nop
    /* 6EE14 80160A14 16E0030C */  jal        func_800F8058
    /* 6EE18 80160A18 31000424 */   addiu     $a0, $zero, 0x31
    /* 6EE1C 80160A1C 04D5030C */  jal        func_800F5410
    /* 6EE20 80160A20 00000000 */   nop
    /* 6EE24 80160A24 02D0030C */  jal        func_800F4008
    /* 6EE28 80160A28 4D000424 */   addiu     $a0, $zero, 0x4D
  .L80160A2C:
    /* 6EE2C 80160A2C 62E0030C */  jal        func_800F8188
    /* 6EE30 80160A30 D2260424 */   addiu     $a0, $zero, 0x26D2
    /* 6EE34 80160A34 90D8030C */  jal        func_800F6240
    /* 6EE38 80160A38 84350424 */   addiu     $a0, $zero, 0x3584
    /* 6EE3C 80160A3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6EE40 80160A40 00000000 */  nop
    /* 6EE44 80160A44 0800E003 */  jr         $ra
    /* 6EE48 80160A48 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016097C
