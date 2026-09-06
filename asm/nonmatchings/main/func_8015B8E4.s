nonmatching func_8015B8E4, 0x2B8

glabel func_8015B8E4
    /* 69CE4 8015B8E4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 69CE8 8015B8E8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 69CEC 8015B8EC 9CDC030C */  jal        func_800F7270
    /* 69CF0 8015B8F0 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 69CF4 8015B8F4 EEE3030C */  jal        func_800F8FB8
    /* 69CF8 8015B8F8 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 69CFC 8015B8FC 5DD5030C */  jal        func_800F5574
    /* 69D00 8015B900 08000424 */   addiu     $a0, $zero, 0x8
    /* 69D04 8015B904 F5D4030C */  jal        func_800F53D4
    /* 69D08 8015B908 00000000 */   nop
    /* 69D0C 8015B90C 21004014 */  bnez       $v0, .L8015B994
    /* 69D10 8015B910 00000000 */   nop
    /* 69D14 8015B914 5DD5030C */  jal        func_800F5574
    /* 69D18 8015B918 0C000424 */   addiu     $a0, $zero, 0xC
    /* 69D1C 8015B91C F5D4030C */  jal        func_800F53D4
    /* 69D20 8015B920 00000000 */   nop
    /* 69D24 8015B924 35004014 */  bnez       $v0, .L8015B9FC
    /* 69D28 8015B928 00000000 */   nop
    /* 69D2C 8015B92C 5DD5030C */  jal        func_800F5574
    /* 69D30 8015B930 10000424 */   addiu     $a0, $zero, 0x10
    /* 69D34 8015B934 F5D4030C */  jal        func_800F53D4
    /* 69D38 8015B938 00000000 */   nop
    /* 69D3C 8015B93C 4B004014 */  bnez       $v0, .L8015BA6C
    /* 69D40 8015B940 00000000 */   nop
    /* 69D44 8015B944 DADA030C */  jal        func_800F6B68
    /* 69D48 8015B948 33200424 */   addiu     $a0, $zero, 0x2033
    /* 69D4C 8015B94C 0DD9030C */  jal        func_800F6434
    /* 69D50 8015B950 02000424 */   addiu     $a0, $zero, 0x2
    /* 69D54 8015B954 07004014 */  bnez       $v0, .L8015B974
    /* 69D58 8015B958 00000000 */   nop
    /* 69D5C 8015B95C 5DD5030C */  jal        func_800F5574
    /* 69D60 8015B960 61000424 */   addiu     $a0, $zero, 0x61
    /* 69D64 8015B964 F0D4030C */  jal        func_800F53C0
    /* 69D68 8015B968 00000000 */   nop
    /* 69D6C 8015B96C 87004010 */  beqz       $v0, .L8015BB8C
    /* 69D70 8015B970 00000000 */   nop
  .L8015B974:
    /* 69D74 8015B974 DADA030C */  jal        func_800F6B68
    /* 69D78 8015B978 35200424 */   addiu     $a0, $zero, 0x2035
    /* 69D7C 8015B97C 0DD9030C */  jal        func_800F6434
    /* 69D80 8015B980 02000424 */   addiu     $a0, $zero, 0x2
    /* 69D84 8015B984 7F004014 */  bnez       $v0, .L8015BB84
    /* 69D88 8015B988 61000424 */   addiu     $a0, $zero, 0x61
    /* 69D8C 8015B98C 776E0508 */  j          .L8015B9DC
    /* 69D90 8015B990 00000000 */   nop
  .L8015B994:
    /* 69D94 8015B994 DADA030C */  jal        func_800F6B68
    /* 69D98 8015B998 33200424 */   addiu     $a0, $zero, 0x2033
    /* 69D9C 8015B99C 0DD9030C */  jal        func_800F6434
    /* 69DA0 8015B9A0 02000424 */   addiu     $a0, $zero, 0x2
    /* 69DA4 8015B9A4 07004010 */  beqz       $v0, .L8015B9C4
    /* 69DA8 8015B9A8 00000000 */   nop
    /* 69DAC 8015B9AC DADA030C */  jal        func_800F6B68
    /* 69DB0 8015B9B0 35200424 */   addiu     $a0, $zero, 0x2035
    /* 69DB4 8015B9B4 0DD9030C */  jal        func_800F6434
    /* 69DB8 8015B9B8 02000424 */   addiu     $a0, $zero, 0x2
    /* 69DBC 8015B9BC 71004014 */  bnez       $v0, .L8015BB84
    /* 69DC0 8015B9C0 00000000 */   nop
  .L8015B9C4:
    /* 69DC4 8015B9C4 5DD5030C */  jal        func_800F5574
    /* 69DC8 8015B9C8 44000424 */   addiu     $a0, $zero, 0x44
    /* 69DCC 8015B9CC F0D4030C */  jal        func_800F53C0
    /* 69DD0 8015B9D0 00000000 */   nop
    /* 69DD4 8015B9D4 6B004010 */  beqz       $v0, .L8015BB84
    /* 69DD8 8015B9D8 4D000424 */   addiu     $a0, $zero, 0x4D
  .L8015B9DC:
    /* 69DDC 8015B9DC 5DD5030C */  jal        func_800F5574
    /* 69DE0 8015B9E0 00000000 */   nop
    /* 69DE4 8015B9E4 F0D4030C */  jal        func_800F53C0
    /* 69DE8 8015B9E8 00000000 */   nop
    /* 69DEC 8015B9EC 65004014 */  bnez       $v0, .L8015BB84
    /* 69DF0 8015B9F0 00000000 */   nop
    /* 69DF4 8015B9F4 E36E0508 */  j          .L8015BB8C
    /* 69DF8 8015B9F8 00000000 */   nop
  .L8015B9FC:
    /* 69DFC 8015B9FC DADA030C */  jal        func_800F6B68
    /* 69E00 8015BA00 33200424 */   addiu     $a0, $zero, 0x2033
    /* 69E04 8015BA04 0DD9030C */  jal        func_800F6434
    /* 69E08 8015BA08 02000424 */   addiu     $a0, $zero, 0x2
    /* 69E0C 8015BA0C 5D004014 */  bnez       $v0, .L8015BB84
    /* 69E10 8015BA10 00000000 */   nop
    /* 69E14 8015BA14 5DD5030C */  jal        func_800F5574
    /* 69E18 8015BA18 4D000424 */   addiu     $a0, $zero, 0x4D
    /* 69E1C 8015BA1C F0D4030C */  jal        func_800F53C0
    /* 69E20 8015BA20 00000000 */   nop
    /* 69E24 8015BA24 57004010 */  beqz       $v0, .L8015BB84
    /* 69E28 8015BA28 00000000 */   nop
    /* 69E2C 8015BA2C 5DD5030C */  jal        func_800F5574
    /* 69E30 8015BA30 61000424 */   addiu     $a0, $zero, 0x61
    /* 69E34 8015BA34 F0D4030C */  jal        func_800F53C0
    /* 69E38 8015BA38 00000000 */   nop
    /* 69E3C 8015BA3C 51004014 */  bnez       $v0, .L8015BB84
    /* 69E40 8015BA40 00000000 */   nop
    /* 69E44 8015BA44 DADA030C */  jal        func_800F6B68
    /* 69E48 8015BA48 35200424 */   addiu     $a0, $zero, 0x2035
    /* 69E4C 8015BA4C 0DD9030C */  jal        func_800F6434
    /* 69E50 8015BA50 02000424 */   addiu     $a0, $zero, 0x2
    /* 69E54 8015BA54 4B004014 */  bnez       $v0, .L8015BB84
    /* 69E58 8015BA58 00000000 */   nop
    /* 69E5C 8015BA5C F5D4030C */  jal        func_800F53D4
    /* 69E60 8015BA60 00000000 */   nop
    /* 69E64 8015BA64 49004010 */  beqz       $v0, .L8015BB8C
    /* 69E68 8015BA68 00000000 */   nop
  .L8015BA6C:
    /* 69E6C 8015BA6C CCE4030C */  jal        func_800F9330
    /* 69E70 8015BA70 00000000 */   nop
    /* 69E74 8015BA74 84DC030C */  jal        func_800F7210
    /* 69E78 8015BA78 36350424 */   addiu     $a0, $zero, 0x3536
    /* 69E7C 8015BA7C CCE4030C */  jal        func_800F9330
    /* 69E80 8015BA80 00000000 */   nop
    /* 69E84 8015BA84 9CDC030C */  jal        func_800F7270
    /* 69E88 8015BA88 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 69E8C 8015BA8C DADA030C */  jal        func_800F6B68
    /* 69E90 8015BA90 03200424 */   addiu     $a0, $zero, 0x2003
    /* 69E94 8015BA94 92D0030C */  jal        func_800F4248
    /* 69E98 8015BA98 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 69E9C 8015BA9C 48D0030C */  jal        func_800F4120
    /* 69EA0 8015BAA0 02020424 */   addiu     $a0, $zero, 0x202
    /* 69EA4 8015BAA4 2F004014 */  bnez       $v0, .L8015BB64
    /* 69EA8 8015BAA8 00000000 */   nop
    /* 69EAC 8015BAAC 77DC030C */  jal        func_800F71DC
    /* 69EB0 8015BAB0 01000424 */   addiu     $a0, $zero, 0x1
    /* 69EB4 8015BAB4 8CD9030C */  jal        func_800F6630
    /* 69EB8 8015BAB8 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 69EBC 8015BABC C1CE030C */  jal        func_800F3B04
    /* 69EC0 8015BAC0 39350424 */   addiu     $a0, $zero, 0x3539
    /* 69EC4 8015BAC4 35D5030C */  jal        func_800F54D4
    /* 69EC8 8015BAC8 21204000 */   addu      $a0, $v0, $zero
    /* 69ECC 8015BACC F5D4030C */  jal        func_800F53D4
    /* 69ED0 8015BAD0 00000000 */   nop
    /* 69ED4 8015BAD4 03004014 */  bnez       $v0, .L8015BAE4
    /* 69ED8 8015BAD8 00000000 */   nop
    /* 69EDC 8015BADC 92D7030C */  jal        func_800F5E48
    /* 69EE0 8015BAE0 00000000 */   nop
  .L8015BAE4:
    /* 69EE4 8015BAE4 DADA030C */  jal        func_800F6B68
    /* 69EE8 8015BAE8 39350424 */   addiu     $a0, $zero, 0x3539
    /* 69EEC 8015BAEC 374B050C */  jal        func_80152CDC
    /* 69EF0 8015BAF0 00000000 */   nop
    /* 69EF4 8015BAF4 9CDC030C */  jal        func_800F7270
    /* 69EF8 8015BAF8 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 69EFC 8015BAFC DADA030C */  jal        func_800F6B68
    /* 69F00 8015BB00 03200424 */   addiu     $a0, $zero, 0x2003
    /* 69F04 8015BB04 92D0030C */  jal        func_800F4248
    /* 69F08 8015BB08 FC000424 */   addiu     $a0, $zero, 0xFC
    /* 69F0C 8015BB0C 48D0030C */  jal        func_800F4120
    /* 69F10 8015BB10 02020424 */   addiu     $a0, $zero, 0x202
    /* 69F14 8015BB14 13004014 */  bnez       $v0, .L8015BB64
    /* 69F18 8015BB18 00000000 */   nop
    /* 69F1C 8015BB1C DADA030C */  jal        func_800F6B68
    /* 69F20 8015BB20 04200424 */   addiu     $a0, $zero, 0x2004
    /* 69F24 8015BB24 92D0030C */  jal        func_800F4248
    /* 69F28 8015BB28 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 69F2C 8015BB2C 48D0030C */  jal        func_800F4120
    /* 69F30 8015BB30 02020424 */   addiu     $a0, $zero, 0x202
    /* 69F34 8015BB34 0B004014 */  bnez       $v0, .L8015BB64
    /* 69F38 8015BB38 00000000 */   nop
    /* 69F3C 8015BB3C DADA030C */  jal        func_800F6B68
    /* 69F40 8015BB40 05200424 */   addiu     $a0, $zero, 0x2005
    /* 69F44 8015BB44 92D0030C */  jal        func_800F4248
    /* 69F48 8015BB48 40000424 */   addiu     $a0, $zero, 0x40
    /* 69F4C 8015BB4C 48D0030C */  jal        func_800F4120
    /* 69F50 8015BB50 02020424 */   addiu     $a0, $zero, 0x202
    /* 69F54 8015BB54 03004014 */  bnez       $v0, .L8015BB64
    /* 69F58 8015BB58 00000000 */   nop
    /* 69F5C 8015BB5C 68D7030C */  jal        func_800F5DA0
    /* 69F60 8015BB60 B3000424 */   addiu     $a0, $zero, 0xB3
  .L8015BB64:
    /* 69F64 8015BB64 68E5030C */  jal        func_800F95A0
    /* 69F68 8015BB68 00000000 */   nop
    /* 69F6C 8015BB6C 40E3030C */  jal        func_800F8D00
    /* 69F70 8015BB70 36350424 */   addiu     $a0, $zero, 0x3536
    /* 69F74 8015BB74 68E5030C */  jal        func_800F95A0
    /* 69F78 8015BB78 00000000 */   nop
    /* 69F7C 8015BB7C 5BE3030C */  jal        func_800F8D6C
    /* 69F80 8015BB80 A6000424 */   addiu     $a0, $zero, 0xA6
  .L8015BB84:
    /* 69F84 8015BB84 AFD8030C */  jal        func_800F62BC
    /* 69F88 8015BB88 B3000424 */   addiu     $a0, $zero, 0xB3
  .L8015BB8C:
    /* 69F8C 8015BB8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 69F90 8015BB90 00000000 */  nop
    /* 69F94 8015BB94 0800E003 */  jr         $ra
    /* 69F98 8015BB98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015B8E4
