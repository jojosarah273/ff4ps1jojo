nonmatching func_80162918, 0x158

glabel func_80162918
    /* 70D18 80162918 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 70D1C 8016291C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 70D20 80162920 59D9030C */  jal        func_800F6564
    /* 70D24 80162924 83260424 */   addiu     $a0, $zero, 0x2683
    /* 70D28 80162928 92D0030C */  jal        func_800F4248
    /* 70D2C 8016292C 20000424 */   addiu     $a0, $zero, 0x20
    /* 70D30 80162930 48D0030C */  jal        func_800F4120
    /* 70D34 80162934 02000424 */   addiu     $a0, $zero, 0x2
    /* 70D38 80162938 09004014 */  bnez       $v0, .L80162960
    /* 70D3C 8016293C 00000000 */   nop
    /* 70D40 80162940 53D9030C */  jal        func_800F654C
    /* 70D44 80162944 0B000424 */   addiu     $a0, $zero, 0xB
    /* 70D48 80162948 62E0030C */  jal        func_800F8188
    /* 70D4C 8016294C CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 70D50 80162950 53D9030C */  jal        func_800F654C
    /* 70D54 80162954 19000424 */   addiu     $a0, $zero, 0x19
    /* 70D58 80162958 8A8A0508 */  j          .L80162A28
    /* 70D5C 8016295C 00000000 */   nop
  .L80162960:
    /* 70D60 80162960 864C050C */  jal        func_80153218
    /* 70D64 80162964 00000000 */   nop
    /* 70D68 80162968 5DD5030C */  jal        func_800F5574
    /* 70D6C 8016296C C0000424 */   addiu     $a0, $zero, 0xC0
    /* 70D70 80162970 F0D4030C */  jal        func_800F53C0
    /* 70D74 80162974 00000000 */   nop
    /* 70D78 80162978 09004010 */  beqz       $v0, .L801629A0
    /* 70D7C 8016297C 00000000 */   nop
    /* 70D80 80162980 53D9030C */  jal        func_800F654C
    /* 70D84 80162984 21200000 */   addu      $a0, $zero, $zero
    /* 70D88 80162988 62E0030C */  jal        func_800F8188
    /* 70D8C 8016298C CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 70D90 80162990 53D9030C */  jal        func_800F654C
    /* 70D94 80162994 21200000 */   addu      $a0, $zero, $zero
    /* 70D98 80162998 8A8A0508 */  j          .L80162A28
    /* 70D9C 8016299C 00000000 */   nop
  .L801629A0:
    /* 70DA0 801629A0 5DD5030C */  jal        func_800F5574
    /* 70DA4 801629A4 80000424 */   addiu     $a0, $zero, 0x80
    /* 70DA8 801629A8 F0D4030C */  jal        func_800F53C0
    /* 70DAC 801629AC 00000000 */   nop
    /* 70DB0 801629B0 09004010 */  beqz       $v0, .L801629D8
    /* 70DB4 801629B4 00000000 */   nop
    /* 70DB8 801629B8 53D9030C */  jal        func_800F654C
    /* 70DBC 801629BC 0E000424 */   addiu     $a0, $zero, 0xE
    /* 70DC0 801629C0 62E0030C */  jal        func_800F8188
    /* 70DC4 801629C4 CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 70DC8 801629C8 53D9030C */  jal        func_800F654C
    /* 70DCC 801629CC 02000424 */   addiu     $a0, $zero, 0x2
    /* 70DD0 801629D0 8A8A0508 */  j          .L80162A28
    /* 70DD4 801629D4 00000000 */   nop
  .L801629D8:
    /* 70DD8 801629D8 5DD5030C */  jal        func_800F5574
    /* 70DDC 801629DC 40000424 */   addiu     $a0, $zero, 0x40
    /* 70DE0 801629E0 F0D4030C */  jal        func_800F53C0
    /* 70DE4 801629E4 00000000 */   nop
    /* 70DE8 801629E8 09004010 */  beqz       $v0, .L80162A10
    /* 70DEC 801629EC 00000000 */   nop
    /* 70DF0 801629F0 53D9030C */  jal        func_800F654C
    /* 70DF4 801629F4 0D000424 */   addiu     $a0, $zero, 0xD
    /* 70DF8 801629F8 62E0030C */  jal        func_800F8188
    /* 70DFC 801629FC CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 70E00 80162A00 53D9030C */  jal        func_800F654C
    /* 70E04 80162A04 03000424 */   addiu     $a0, $zero, 0x3
    /* 70E08 80162A08 8A8A0508 */  j          .L80162A28
    /* 70E0C 80162A0C 00000000 */   nop
  .L80162A10:
    /* 70E10 80162A10 53D9030C */  jal        func_800F654C
    /* 70E14 80162A14 0C000424 */   addiu     $a0, $zero, 0xC
    /* 70E18 80162A18 62E0030C */  jal        func_800F8188
    /* 70E1C 80162A1C CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 70E20 80162A20 53D9030C */  jal        func_800F654C
    /* 70E24 80162A24 29000424 */   addiu     $a0, $zero, 0x29
  .L80162A28:
    /* 70E28 80162A28 62E0030C */  jal        func_800F8188
    /* 70E2C 80162A2C D2260424 */   addiu     $a0, $zero, 0x26D2
    /* 70E30 80162A30 C28A010C */  jal        func_80062B08
    /* 70E34 80162A34 00000000 */   nop
    /* 70E38 80162A38 53D9030C */  jal        func_800F654C
    /* 70E3C 80162A3C 08000424 */   addiu     $a0, $zero, 0x8
    /* 70E40 80162A40 62E0030C */  jal        func_800F8188
    /* 70E44 80162A44 C8340424 */   addiu     $a0, $zero, 0x34C8
    /* 70E48 80162A48 53D9030C */  jal        func_800F654C
    /* 70E4C 80162A4C 10000424 */   addiu     $a0, $zero, 0x10
    /* 70E50 80162A50 62E0030C */  jal        func_800F8188
    /* 70E54 80162A54 C7340424 */   addiu     $a0, $zero, 0x34C7
    /* 70E58 80162A58 B54C050C */  jal        func_801532D4
    /* 70E5C 80162A5C 00000000 */   nop
    /* 70E60 80162A60 1000BF8F */  lw         $ra, 0x10($sp)
    /* 70E64 80162A64 00000000 */  nop
    /* 70E68 80162A68 0800E003 */  jr         $ra
    /* 70E6C 80162A6C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80162918
