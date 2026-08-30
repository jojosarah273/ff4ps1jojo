nonmatching func_8013B95C, 0x1B0

glabel func_8013B95C
    /* 49D5C 8013B95C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 49D60 8013B960 1000BFAF */  sw         $ra, 0x10($sp)
    /* 49D64 8013B964 9BE4030C */  jal        func_800F926C
    /* 49D68 8013B968 00000000 */   nop
    /* 49D6C 8013B96C A6E4030C */  jal        func_800F9298
    /* 49D70 8013B970 00000000 */   nop
    /* 49D74 8013B974 A7BA050C */  jal        func_8016EA9C
    /* 49D78 8013B978 00000000 */   nop
    /* 49D7C 8013B97C 4F8F040C */  jal        func_80123D3C
    /* 49D80 8013B980 00000000 */   nop
    /* 49D84 8013B984 DDE3030C */  jal        func_800F8F74
    /* 49D88 8013B988 831A0424 */   addiu     $a0, $zero, 0x1A83
    /* 49D8C 8013B98C 9CDC030C */  jal        func_800F7270
    /* 49D90 8013B990 41000424 */   addiu     $a0, $zero, 0x41
    /* 49D94 8013B994 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 49D98 8013B998 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 49D9C 8013B99C 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 49DA0 8013B9A0 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 49DA4 8013B9A4 00004390 */  lbu        $v1, 0x0($v0)
    /* 49DA8 8013B9A8 B31B0424 */  addiu      $a0, $zero, 0x1BB3
    /* 49DAC 8013B9AC 40E3030C */  jal        func_800F8D00
    /* 49DB0 8013B9B0 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 49DB4 8013B9B4 40E3030C */  jal        func_800F8D00
    /* 49DB8 8013B9B8 B51B0424 */   addiu     $a0, $zero, 0x1BB5
    /* 49DBC 8013B9BC 62E0030C */  jal        func_800F8188
    /* 49DC0 8013B9C0 B71B0424 */   addiu     $a0, $zero, 0x1BB7
    /* 49DC4 8013B9C4 53D9030C */  jal        func_800F654C
    /* 49DC8 8013B9C8 08000424 */   addiu     $a0, $zero, 0x8
    /* 49DCC 8013B9CC 93E0030C */  jal        func_800F824C
    /* 49DD0 8013B9D0 45000424 */   addiu     $a0, $zero, 0x45
    /* 49DD4 8013B9D4 9CDC030C */  jal        func_800F7270
    /* 49DD8 8013B9D8 41000424 */   addiu     $a0, $zero, 0x41
    /* 49DDC 8013B9DC 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 49DE0 8013B9E0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 49DE4 8013B9E4 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 49DE8 8013B9E8 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 49DEC 8013B9EC 00006294 */  lhu        $v0, 0x0($v1)
    /* 49DF0 8013B9F0 00000000 */  nop
    /* 49DF4 8013B9F4 000082A4 */  sh         $v0, 0x0($a0)
  .L8013B9F8:
    /* 49DF8 8013B9F8 DADA030C */  jal        func_800F6B68
    /* 49DFC 8013B9FC 04180424 */   addiu     $a0, $zero, 0x1804
    /* 49E00 8013BA00 0DD9030C */  jal        func_800F6434
    /* 49E04 8013BA04 02000424 */   addiu     $a0, $zero, 0x2
    /* 49E08 8013BA08 1A004014 */  bnez       $v0, .L8013BA74
    /* 49E0C 8013BA0C 00000000 */   nop
    /* 49E10 8013BA10 5DD5030C */  jal        func_800F5574
    /* 49E14 8013BA14 54000424 */   addiu     $a0, $zero, 0x54
    /* 49E18 8013BA18 F0D4030C */  jal        func_800F53C0
    /* 49E1C 8013BA1C 00000000 */   nop
    /* 49E20 8013BA20 0B004010 */  beqz       $v0, .L8013BA50
    /* 49E24 8013BA24 00000000 */   nop
    /* 49E28 8013BA28 5DD5030C */  jal        func_800F5574
    /* 49E2C 8013BA2C 60000424 */   addiu     $a0, $zero, 0x60
    /* 49E30 8013BA30 F0D4030C */  jal        func_800F53C0
    /* 49E34 8013BA34 00000000 */   nop
    /* 49E38 8013BA38 05004014 */  bnez       $v0, .L8013BA50
    /* 49E3C 8013BA3C 00000000 */   nop
    /* 49E40 8013BA40 58E2030C */  jal        func_800F8960
    /* 49E44 8013BA44 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 49E48 8013BA48 97EE0408 */  j          .L8013BA5C
    /* 49E4C 8013BA4C 0A000424 */   addiu     $a0, $zero, 0xA
  .L8013BA50:
    /* 49E50 8013BA50 58E2030C */  jal        func_800F8960
    /* 49E54 8013BA54 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 49E58 8013BA58 01000424 */  addiu      $a0, $zero, 0x1
  .L8013BA5C:
    /* 49E5C 8013BA5C 53D9030C */  jal        func_800F654C
    /* 49E60 8013BA60 00000000 */   nop
    /* 49E64 8013BA64 58E2030C */  jal        func_800F8960
    /* 49E68 8013BA68 29FF0434 */   ori       $a0, $zero, 0xFF29
    /* 49E6C 8013BA6C A3EE0408 */  j          .L8013BA8C
    /* 49E70 8013BA70 00000000 */   nop
  .L8013BA74:
    /* 49E74 8013BA74 53D9030C */  jal        func_800F654C
    /* 49E78 8013BA78 21200000 */   addu      $a0, $zero, $zero
    /* 49E7C 8013BA7C 58E2030C */  jal        func_800F8960
    /* 49E80 8013BA80 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 49E84 8013BA84 58E2030C */  jal        func_800F8960
    /* 49E88 8013BA88 29FF0434 */   ori       $a0, $zero, 0xFF29
  .L8013BA8C:
    /* 49E8C 8013BA8C EFD8030C */  jal        func_800F63BC
    /* 49E90 8013BA90 00000000 */   nop
    /* 49E94 8013BA94 EFD8030C */  jal        func_800F63BC
    /* 49E98 8013BA98 00000000 */   nop
    /* 49E9C 8013BA9C D9D8030C */  jal        func_800F6364
    /* 49EA0 8013BAA0 00000000 */   nop
    /* 49EA4 8013BAA4 68D7030C */  jal        func_800F5DA0
    /* 49EA8 8013BAA8 45000424 */   addiu     $a0, $zero, 0x45
    /* 49EAC 8013BAAC E3D6030C */  jal        func_800F5B8C
    /* 49EB0 8013BAB0 02020424 */   addiu     $a0, $zero, 0x202
    /* 49EB4 8013BAB4 D0FF4014 */  bnez       $v0, .L8013B9F8
    /* 49EB8 8013BAB8 00000000 */   nop
    /* 49EBC 8013BABC C3EE040C */  jal        func_8013BB0C
    /* 49EC0 8013BAC0 00000000 */   nop
    /* 49EC4 8013BAC4 8499040C */  jal        func_80126610
    /* 49EC8 8013BAC8 00000000 */   nop
    /* 49ECC 8013BACC DDE3030C */  jal        func_800F8F74
    /* 49ED0 8013BAD0 C61B0424 */   addiu     $a0, $zero, 0x1BC6
    /* 49ED4 8013BAD4 4588040C */  jal        func_80122114
    /* 49ED8 8013BAD8 00000000 */   nop
    /* 49EDC 8013BADC 53D9030C */  jal        func_800F654C
    /* 49EE0 8013BAE0 21200000 */   addu      $a0, $zero, $zero
    /* 49EE4 8013BAE4 52CF030C */  jal        func_800F3D48
    /* 49EE8 8013BAE8 00000000 */   nop
    /* 49EEC 8013BAEC 2EE5030C */  jal        func_800F94B8
    /* 49EF0 8013BAF0 00000000 */   nop
    /* 49EF4 8013BAF4 12E5030C */  jal        func_800F9448
    /* 49EF8 8013BAF8 00000000 */   nop
    /* 49EFC 8013BAFC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 49F00 8013BB00 00000000 */  nop
    /* 49F04 8013BB04 0800E003 */  jr         $ra
    /* 49F08 8013BB08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B95C
