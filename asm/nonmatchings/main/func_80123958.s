nonmatching func_80123958, 0x118

glabel func_80123958
    /* 31D58 80123958 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 31D5C 8012395C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 31D60 80123960 EEE3030C */  jal        func_800F8FB8
    /* 31D64 80123964 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 31D68 80123968 77DC030C */  jal        func_800F71DC
    /* 31D6C 8012396C 18000424 */   addiu     $a0, $zero, 0x18
    /* 31D70 80123970 0FCF030C */  jal        func_800F3C3C
    /* 31D74 80123974 73000424 */   addiu     $a0, $zero, 0x73
    /* 31D78 80123978 90DE030C */  jal        func_800F7A40
    /* 31D7C 8012397C 21204000 */   addu      $a0, $v0, $zero
    /* 31D80 80123980 9ADE030C */  jal        func_800F7A68
    /* 31D84 80123984 00000000 */   nop
    /* 31D88 80123988 0FCF030C */  jal        func_800F3C3C
    /* 31D8C 8012398C 74000424 */   addiu     $a0, $zero, 0x74
    /* 31D90 80123990 90DE030C */  jal        func_800F7A40
    /* 31D94 80123994 21204000 */   addu      $a0, $v0, $zero
    /* 31D98 80123998 9ADE030C */  jal        func_800F7A68
    /* 31D9C 8012399C 00000000 */   nop
    /* 31DA0 801239A0 0FCF030C */  jal        func_800F3C3C
    /* 31DA4 801239A4 75000424 */   addiu     $a0, $zero, 0x75
    /* 31DA8 801239A8 90DE030C */  jal        func_800F7A40
    /* 31DAC 801239AC 21204000 */   addu      $a0, $v0, $zero
    /* 31DB0 801239B0 9ADE030C */  jal        func_800F7A68
    /* 31DB4 801239B4 00000000 */   nop
  .L801239B8:
    /* 31DB8 801239B8 0FCF030C */  jal        func_800F3C3C
    /* 31DBC 801239BC 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 31DC0 801239C0 90DE030C */  jal        func_800F7A40
    /* 31DC4 801239C4 21204000 */   addu      $a0, $v0, $zero
    /* 31DC8 801239C8 9ADE030C */  jal        func_800F7A68
    /* 31DCC 801239CC 00000000 */   nop
    /* 31DD0 801239D0 8CD9030C */  jal        func_800F6630
    /* 31DD4 801239D4 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 31DD8 801239D8 5DD5030C */  jal        func_800F5574
    /* 31DDC 801239DC 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 31DE0 801239E0 F0D4030C */  jal        func_800F53C0
    /* 31DE4 801239E4 00000000 */   nop
    /* 31DE8 801239E8 05004010 */  beqz       $v0, .L80123A00
    /* 31DEC 801239EC 00000000 */   nop
    /* 31DF0 801239F0 16E0030C */  jal        func_800F8058
    /* 31DF4 801239F4 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 31DF8 801239F8 93E0030C */  jal        func_800F824C
    /* 31DFC 801239FC 1D000424 */   addiu     $a0, $zero, 0x1D
  .L80123A00:
    /* 31E00 80123A00 0FCF030C */  jal        func_800F3C3C
    /* 31E04 80123A04 73000424 */   addiu     $a0, $zero, 0x73
    /* 31E08 80123A08 90DE030C */  jal        func_800F7A40
    /* 31E0C 80123A0C 21204000 */   addu      $a0, $v0, $zero
    /* 31E10 80123A10 9ADE030C */  jal        func_800F7A68
    /* 31E14 80123A14 00000000 */   nop
    /* 31E18 80123A18 0FCF030C */  jal        func_800F3C3C
    /* 31E1C 80123A1C 74000424 */   addiu     $a0, $zero, 0x74
    /* 31E20 80123A20 90DE030C */  jal        func_800F7A40
    /* 31E24 80123A24 21204000 */   addu      $a0, $v0, $zero
    /* 31E28 80123A28 9ADE030C */  jal        func_800F7A68
    /* 31E2C 80123A2C 00000000 */   nop
    /* 31E30 80123A30 0FCF030C */  jal        func_800F3C3C
    /* 31E34 80123A34 75000424 */   addiu     $a0, $zero, 0x75
    /* 31E38 80123A38 90DE030C */  jal        func_800F7A40
    /* 31E3C 80123A3C 21204000 */   addu      $a0, $v0, $zero
    /* 31E40 80123A40 9ADE030C */  jal        func_800F7A68
    /* 31E44 80123A44 00000000 */   nop
    /* 31E48 80123A48 92D7030C */  jal        func_800F5E48
    /* 31E4C 80123A4C 00000000 */   nop
    /* 31E50 80123A50 19D7030C */  jal        func_800F5C64
    /* 31E54 80123A54 02020424 */   addiu     $a0, $zero, 0x202
    /* 31E58 80123A58 D7FF4014 */  bnez       $v0, .L801239B8
    /* 31E5C 80123A5C 00000000 */   nop
    /* 31E60 80123A60 1000BF8F */  lw         $ra, 0x10($sp)
    /* 31E64 80123A64 00000000 */  nop
    /* 31E68 80123A68 0800E003 */  jr         $ra
    /* 31E6C 80123A6C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80123958
