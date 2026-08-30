nonmatching func_8012A8A8, 0x1D8

glabel func_8012A8A8
    /* 38CA8 8012A8A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 38CAC 8012A8AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 38CB0 8012A8B0 EEE3030C */  jal        func_800F8FB8
    /* 38CB4 8012A8B4 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 38CB8 8012A8B8 EEE3030C */  jal        func_800F8FB8
    /* 38CBC 8012A8BC 5E000424 */   addiu     $a0, $zero, 0x5E
  .L8012A8C0:
    /* 38CC0 8012A8C0 8CDB030C */  jal        func_800F6E30
    /* 38CC4 8012A8C4 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 38CC8 8012A8C8 0DD9030C */  jal        func_800F6434
    /* 38CCC 8012A8CC 02000424 */   addiu     $a0, $zero, 0x2
    /* 38CD0 8012A8D0 53004014 */  bnez       $v0, .L8012AA20
    /* 38CD4 8012A8D4 00000000 */   nop
    /* 38CD8 8012A8D8 5DD5030C */  jal        func_800F5574
    /* 38CDC 8012A8DC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 38CE0 8012A8E0 F5D4030C */  jal        func_800F53D4
    /* 38CE4 8012A8E4 00000000 */   nop
    /* 38CE8 8012A8E8 05004010 */  beqz       $v0, .L8012A900
    /* 38CEC 8012A8EC 00000000 */   nop
    /* 38CF0 8012A8F0 CDB2040C */  jal        func_8012CB34
    /* 38CF4 8012A8F4 00000000 */   nop
    /* 38CF8 8012A8F8 88AA0408 */  j          .L8012AA20
    /* 38CFC 8012A8FC 00000000 */   nop
  .L8012A900:
    /* 38D00 8012A900 40DD030C */  jal        func_800F7500
    /* 38D04 8012A904 01000424 */   addiu     $a0, $zero, 0x1
    /* 38D08 8012A908 B6D9030C */  jal        func_800F66D8
    /* 38D0C 8012A90C 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 38D10 8012A910 0DD9030C */  jal        func_800F6434
    /* 38D14 8012A914 02000424 */   addiu     $a0, $zero, 0x2
    /* 38D18 8012A918 41004014 */  bnez       $v0, .L8012AA20
    /* 38D1C 8012A91C 00000000 */   nop
    /* 38D20 8012A920 93E0030C */  jal        func_800F824C
    /* 38D24 8012A924 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 38D28 8012A928 53D9030C */  jal        func_800F654C
    /* 38D2C 8012A92C 21200000 */   addu      $a0, $zero, $zero
    /* 38D30 8012A930 52CF030C */  jal        func_800F3D48
    /* 38D34 8012A934 00000000 */   nop
    /* 38D38 8012A938 8CDB030C */  jal        func_800F6E30
    /* 38D3C 8012A93C 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 38D40 8012A940 5DD5030C */  jal        func_800F5574
    /* 38D44 8012A944 ED000424 */   addiu     $a0, $zero, 0xED
    /* 38D48 8012A948 F5D4030C */  jal        func_800F53D4
    /* 38D4C 8012A94C 00000000 */   nop
    /* 38D50 8012A950 07004014 */  bnez       $v0, .L8012A970
    /* 38D54 8012A954 00000000 */   nop
    /* 38D58 8012A958 5DD5030C */  jal        func_800F5574
    /* 38D5C 8012A95C FE000424 */   addiu     $a0, $zero, 0xFE
    /* 38D60 8012A960 F5D4030C */  jal        func_800F53D4
    /* 38D64 8012A964 00000000 */   nop
    /* 38D68 8012A968 0D004010 */  beqz       $v0, .L8012A9A0
    /* 38D6C 8012A96C 00000000 */   nop
  .L8012A970:
    /* 38D70 8012A970 59D9030C */  jal        func_800F6564
    /* 38D74 8012A974 C91B0424 */   addiu     $a0, $zero, 0x1BC9
    /* 38D78 8012A978 0DD9030C */  jal        func_800F6434
    /* 38D7C 8012A97C 02000424 */   addiu     $a0, $zero, 0x2
    /* 38D80 8012A980 07004014 */  bnez       $v0, .L8012A9A0
    /* 38D84 8012A984 00000000 */   nop
    /* 38D88 8012A988 8CD9030C */  jal        func_800F6630
    /* 38D8C 8012A98C 34000424 */   addiu     $a0, $zero, 0x34
    /* 38D90 8012A990 93E0030C */  jal        func_800F824C
    /* 38D94 8012A994 DB000424 */   addiu     $a0, $zero, 0xDB
    /* 38D98 8012A998 6CAA0408 */  j          .L8012A9B0
    /* 38D9C 8012A99C 00000000 */   nop
  .L8012A9A0:
    /* 38DA0 8012A9A0 8CDB030C */  jal        func_800F6E30
    /* 38DA4 8012A9A4 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 38DA8 8012A9A8 80AB040C */  jal        func_8012AE00
    /* 38DAC 8012A9AC 00000000 */   nop
  .L8012A9B0:
    /* 38DB0 8012A9B0 91E5030C */  jal        func_800F9644
    /* 38DB4 8012A9B4 20000424 */   addiu     $a0, $zero, 0x20
    /* 38DB8 8012A9B8 96D9030C */  jal        func_800F6658
    /* 38DBC 8012A9BC 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 38DC0 8012A9C0 25DE030C */  jal        func_800F7894
    /* 38DC4 8012A9C4 00000000 */   nop
    /* 38DC8 8012A9C8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 38DCC 8012A9CC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 38DD0 8012A9D0 00000000 */  nop
    /* 38DD4 8012A9D4 00006294 */  lhu        $v0, 0x0($v1)
    /* 38DD8 8012A9D8 00000000 */  nop
    /* 38DDC 8012A9DC 80110200 */  sll        $v0, $v0, 6
    /* 38DE0 8012A9E0 5BD4030C */  jal        func_800F516C
    /* 38DE4 8012A9E4 000062A4 */   sh        $v0, 0x0($v1)
    /* 38DE8 8012A9E8 14D4030C */  jal        func_800F5050
    /* 38DEC 8012A9EC 00000000 */   nop
    /* 38DF0 8012A9F0 19D0030C */  jal        func_800F4064
    /* 38DF4 8012A9F4 04000424 */   addiu     $a0, $zero, 0x4
    /* 38DF8 8012A9F8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 38DFC 8012A9FC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 38E00 8012AA00 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 38E04 8012AA04 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 38E08 8012AA08 00004394 */  lhu        $v1, 0x0($v0)
    /* 38E0C 8012AA0C 20000424 */  addiu      $a0, $zero, 0x20
    /* 38E10 8012AA10 98E5030C */  jal        func_800F9660
    /* 38E14 8012AA14 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 38E18 8012AA18 C6AA040C */  jal        func_8012AB18
    /* 38E1C 8012AA1C 00000000 */   nop
  .L8012AA20:
    /* 38E20 8012AA20 91E5030C */  jal        func_800F9644
    /* 38E24 8012AA24 20000424 */   addiu     $a0, $zero, 0x20
    /* 38E28 8012AA28 BCD8030C */  jal        func_800F62F0
    /* 38E2C 8012AA2C 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 38E30 8012AA30 BCD8030C */  jal        func_800F62F0
    /* 38E34 8012AA34 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 38E38 8012AA38 98E5030C */  jal        func_800F9660
    /* 38E3C 8012AA3C 20000424 */   addiu     $a0, $zero, 0x20
    /* 38E40 8012AA40 AFD8030C */  jal        func_800F62BC
    /* 38E44 8012AA44 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 38E48 8012AA48 8CD9030C */  jal        func_800F6630
    /* 38E4C 8012AA4C 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 38E50 8012AA50 0FCF030C */  jal        func_800F3C3C
    /* 38E54 8012AA54 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 38E58 8012AA58 35D5030C */  jal        func_800F54D4
    /* 38E5C 8012AA5C 21204000 */   addu      $a0, $v0, $zero
    /* 38E60 8012AA60 F5D4030C */  jal        func_800F53D4
    /* 38E64 8012AA64 00000000 */   nop
    /* 38E68 8012AA68 95FF4010 */  beqz       $v0, .L8012A8C0
    /* 38E6C 8012AA6C 00000000 */   nop
    /* 38E70 8012AA70 1000BF8F */  lw         $ra, 0x10($sp)
    /* 38E74 8012AA74 00000000 */  nop
    /* 38E78 8012AA78 0800E003 */  jr         $ra
    /* 38E7C 8012AA7C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012A8A8
