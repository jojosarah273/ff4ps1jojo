nonmatching func_8011B874, 0x464

glabel func_8011B874
    /* 29C74 8011B874 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29C78 8011B878 21200000 */  addu       $a0, $zero, $zero
    /* 29C7C 8011B87C 1400BFAF */  sw         $ra, 0x14($sp)
    /* 29C80 8011B880 53D9030C */  jal        func_800F654C
    /* 29C84 8011B884 1000B0AF */   sw        $s0, 0x10($sp)
    /* 29C88 8011B888 62E0030C */  jal        func_800F8188
    /* 29C8C 8011B88C 05210424 */   addiu     $a0, $zero, 0x2105
    /* 29C90 8011B890 77DC030C */  jal        func_800F71DC
    /* 29C94 8011B894 21200000 */   addu      $a0, $zero, $zero
    /* 29C98 8011B898 5BE3030C */  jal        func_800F8D6C
    /* 29C9C 8011B89C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29CA0 8011B8A0 5BE3030C */  jal        func_800F8D6C
    /* 29CA4 8011B8A4 40000424 */   addiu     $a0, $zero, 0x40
    /* 29CA8 8011B8A8 5BE3030C */  jal        func_800F8D6C
    /* 29CAC 8011B8AC 43000424 */   addiu     $a0, $zero, 0x43
  .L8011B8B0:
    /* 29CB0 8011B8B0 CCE4030C */  jal        func_800F9330
    /* 29CB4 8011B8B4 00000000 */   nop
    /* 29CB8 8011B8B8 9CDC030C */  jal        func_800F7270
    /* 29CBC 8011B8BC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29CC0 8011B8C0 1400043C */  lui        $a0, (0x14F3CE >> 16)
    /* 29CC4 8011B8C4 1ADB030C */  jal        func_800F6C68
    /* 29CC8 8011B8C8 CEF38434 */   ori       $a0, $a0, (0x14F3CE & 0xFFFF)
    /* 29CCC 8011B8CC D9D8030C */  jal        func_800F6364
    /* 29CD0 8011B8D0 00000000 */   nop
    /* 29CD4 8011B8D4 5BE3030C */  jal        func_800F8D6C
    /* 29CD8 8011B8D8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29CDC 8011B8DC 68E5030C */  jal        func_800F95A0
    /* 29CE0 8011B8E0 00000000 */   nop
    /* 29CE4 8011B8E4 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 29CE8 8011B8E8 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 29CEC 8011B8EC 00000000 */  nop
    /* 29CF0 8011B8F0 00005090 */  lbu        $s0, 0x0($v0)
    /* 29CF4 8011B8F4 8CD9030C */  jal        func_800F6630
    /* 29CF8 8011B8F8 40000424 */   addiu     $a0, $zero, 0x40
    /* 29CFC 8011B8FC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 29D00 8011B900 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 29D04 8011B904 00000000 */  nop
    /* 29D08 8011B908 00006290 */  lbu        $v0, 0x0($v1)
    /* 29D0C 8011B90C 00000000 */  nop
    /* 29D10 8011B910 18005000 */  mult       $v0, $s0
    /* 29D14 8011B914 20000424 */  addiu      $a0, $zero, 0x20
    /* 29D18 8011B918 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 29D1C 8011B91C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 29D20 8011B920 12100000 */  mflo       $v0
    /* 29D24 8011B924 03120200 */  sra        $v0, $v0, 8
    /* 29D28 8011B928 91E5030C */  jal        func_800F9644
    /* 29D2C 8011B92C 000062A4 */   sh        $v0, 0x0($v1)
    /* 29D30 8011B930 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 29D34 8011B934 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 29D38 8011B938 00000000 */  nop
    /* 29D3C 8011B93C 00006294 */  lhu        $v0, 0x0($v1)
    /* 29D40 8011B940 00000000 */  nop
    /* 29D44 8011B944 C0100200 */  sll        $v0, $v0, 3
    /* 29D48 8011B948 04D5030C */  jal        func_800F5410
    /* 29D4C 8011B94C 000062A4 */   sh        $v0, 0x0($v1)
    /* 29D50 8011B950 19D0030C */  jal        func_800F4064
    /* 29D54 8011B954 00010424 */   addiu     $a0, $zero, 0x100
    /* 29D58 8011B958 39E2030C */  jal        func_800F88E4
    /* 29D5C 8011B95C 7F00043C */   lui       $a0, (0x7F0000 >> 16)
    /* 29D60 8011B960 56D9030C */  jal        func_800F6558
    /* 29D64 8011B964 21200000 */   addu      $a0, $zero, $zero
    /* 29D68 8011B968 98E5030C */  jal        func_800F9660
    /* 29D6C 8011B96C 20000424 */   addiu     $a0, $zero, 0x20
    /* 29D70 8011B970 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 29D74 8011B974 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 29D78 8011B978 00000000 */  nop
    /* 29D7C 8011B97C 00006294 */  lhu        $v0, 0x0($v1)
    /* 29D80 8011B980 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 29D84 8011B984 02004224 */  addiu      $v0, $v0, 0x2
    /* 29D88 8011B988 65DD030C */  jal        func_800F7594
    /* 29D8C 8011B98C 000062A4 */   sh        $v0, 0x0($v1)
    /* 29D90 8011B990 A4D6030C */  jal        func_800F5A90
    /* 29D94 8011B994 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 29D98 8011B998 F5D4030C */  jal        func_800F53D4
    /* 29D9C 8011B99C 00000000 */   nop
    /* 29DA0 8011B9A0 C3FF4010 */  beqz       $v0, .L8011B8B0
    /* 29DA4 8011B9A4 00000000 */   nop
    /* 29DA8 8011B9A8 366F040C */  jal        func_8011BCD8
    /* 29DAC 8011B9AC 00000000 */   nop
    /* 29DB0 8011B9B0 8CD9030C */  jal        func_800F6630
    /* 29DB4 8011B9B4 40000424 */   addiu     $a0, $zero, 0x40
    /* 29DB8 8011B9B8 5DD5030C */  jal        func_800F5574
    /* 29DBC 8011B9BC 80000424 */   addiu     $a0, $zero, 0x80
    /* 29DC0 8011B9C0 F5D4030C */  jal        func_800F53D4
    /* 29DC4 8011B9C4 00000000 */   nop
    /* 29DC8 8011B9C8 B9FF4010 */  beqz       $v0, .L8011B8B0
    /* 29DCC 8011B9CC 00000000 */   nop
  .L8011B9D0:
    /* 29DD0 8011B9D0 CCE4030C */  jal        func_800F9330
    /* 29DD4 8011B9D4 00000000 */   nop
    /* 29DD8 8011B9D8 9CDC030C */  jal        func_800F7270
    /* 29DDC 8011B9DC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29DE0 8011B9E0 1400043C */  lui        $a0, (0x14F3CE >> 16)
    /* 29DE4 8011B9E4 1ADB030C */  jal        func_800F6C68
    /* 29DE8 8011B9E8 CEF38434 */   ori       $a0, $a0, (0x14F3CE & 0xFFFF)
    /* 29DEC 8011B9EC D9D8030C */  jal        func_800F6364
    /* 29DF0 8011B9F0 00000000 */   nop
    /* 29DF4 8011B9F4 5BE3030C */  jal        func_800F8D6C
    /* 29DF8 8011B9F8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29DFC 8011B9FC 68E5030C */  jal        func_800F95A0
    /* 29E00 8011BA00 00000000 */   nop
    /* 29E04 8011BA04 EEE3030C */  jal        func_800F8FB8
    /* 29E08 8011BA08 06000424 */   addiu     $a0, $zero, 0x6
    /* 29E0C 8011BA0C 50D4030C */  jal        func_800F5140
    /* 29E10 8011BA10 00000000 */   nop
    /* 29E14 8011BA14 D3D3030C */  jal        func_800F4F4C
    /* 29E18 8011BA18 00000000 */   nop
    /* 29E1C 8011BA1C 0FCF030C */  jal        func_800F3C3C
    /* 29E20 8011BA20 06000424 */   addiu     $a0, $zero, 0x6
    /* 29E24 8011BA24 90DE030C */  jal        func_800F7A40
    /* 29E28 8011BA28 21204000 */   addu      $a0, $v0, $zero
    /* 29E2C 8011BA2C 50D4030C */  jal        func_800F5140
    /* 29E30 8011BA30 00000000 */   nop
    /* 29E34 8011BA34 D3D3030C */  jal        func_800F4F4C
    /* 29E38 8011BA38 00000000 */   nop
    /* 29E3C 8011BA3C 0FCF030C */  jal        func_800F3C3C
    /* 29E40 8011BA40 06000424 */   addiu     $a0, $zero, 0x6
    /* 29E44 8011BA44 90DE030C */  jal        func_800F7A40
    /* 29E48 8011BA48 21204000 */   addu      $a0, $v0, $zero
    /* 29E4C 8011BA4C 17E2030C */  jal        func_800F885C
    /* 29E50 8011BA50 7F00043C */   lui       $a0, (0x7F0000 >> 16)
    /* 29E54 8011BA54 8CD9030C */  jal        func_800F6630
    /* 29E58 8011BA58 06000424 */   addiu     $a0, $zero, 0x6
    /* 29E5C 8011BA5C 7AD8030C */  jal        func_800F61E8
    /* 29E60 8011BA60 00000000 */   nop
    /* 29E64 8011BA64 7F00043C */  lui        $a0, (0x7F0001 >> 16)
    /* 29E68 8011BA68 17E2030C */  jal        func_800F885C
    /* 29E6C 8011BA6C 01008434 */   ori       $a0, $a0, (0x7F0001 & 0xFFFF)
    /* 29E70 8011BA70 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 29E74 8011BA74 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 29E78 8011BA78 00000000 */  nop
    /* 29E7C 8011BA7C 00006294 */  lhu        $v0, 0x0($v1)
    /* 29E80 8011BA80 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 29E84 8011BA84 02004224 */  addiu      $v0, $v0, 0x2
    /* 29E88 8011BA88 65DD030C */  jal        func_800F7594
    /* 29E8C 8011BA8C 000062A4 */   sh        $v0, 0x0($v1)
    /* 29E90 8011BA90 A4D6030C */  jal        func_800F5A90
    /* 29E94 8011BA94 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 29E98 8011BA98 F5D4030C */  jal        func_800F53D4
    /* 29E9C 8011BA9C 00000000 */   nop
    /* 29EA0 8011BAA0 CBFF4010 */  beqz       $v0, .L8011B9D0
    /* 29EA4 8011BAA4 00000000 */   nop
    /* 29EA8 8011BAA8 77DC030C */  jal        func_800F71DC
    /* 29EAC 8011BAAC 21200000 */   addu      $a0, $zero, $zero
    /* 29EB0 8011BAB0 5BE3030C */  jal        func_800F8D6C
    /* 29EB4 8011BAB4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29EB8 8011BAB8 5BE3030C */  jal        func_800F8D6C
    /* 29EBC 8011BABC 40000424 */   addiu     $a0, $zero, 0x40
    /* 29EC0 8011BAC0 5BE3030C */  jal        func_800F8D6C
    /* 29EC4 8011BAC4 43000424 */   addiu     $a0, $zero, 0x43
  .L8011BAC8:
    /* 29EC8 8011BAC8 CCE4030C */  jal        func_800F9330
    /* 29ECC 8011BACC 00000000 */   nop
    /* 29ED0 8011BAD0 9CDC030C */  jal        func_800F7270
    /* 29ED4 8011BAD4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29ED8 8011BAD8 1400043C */  lui        $a0, (0x14F4AE >> 16)
    /* 29EDC 8011BADC 1ADB030C */  jal        func_800F6C68
    /* 29EE0 8011BAE0 AEF48434 */   ori       $a0, $a0, (0x14F4AE & 0xFFFF)
    /* 29EE4 8011BAE4 D9D8030C */  jal        func_800F6364
    /* 29EE8 8011BAE8 00000000 */   nop
    /* 29EEC 8011BAEC 5BE3030C */  jal        func_800F8D6C
    /* 29EF0 8011BAF0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29EF4 8011BAF4 68E5030C */  jal        func_800F95A0
    /* 29EF8 8011BAF8 00000000 */   nop
    /* 29EFC 8011BAFC 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 29F00 8011BB00 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 29F04 8011BB04 00000000 */  nop
    /* 29F08 8011BB08 00005090 */  lbu        $s0, 0x0($v0)
    /* 29F0C 8011BB0C 8CD9030C */  jal        func_800F6630
    /* 29F10 8011BB10 40000424 */   addiu     $a0, $zero, 0x40
    /* 29F14 8011BB14 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 29F18 8011BB18 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 29F1C 8011BB1C 00000000 */  nop
    /* 29F20 8011BB20 00006290 */  lbu        $v0, 0x0($v1)
    /* 29F24 8011BB24 00000000 */  nop
    /* 29F28 8011BB28 18005000 */  mult       $v0, $s0
    /* 29F2C 8011BB2C 20000424 */  addiu      $a0, $zero, 0x20
    /* 29F30 8011BB30 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 29F34 8011BB34 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 29F38 8011BB38 12100000 */  mflo       $v0
    /* 29F3C 8011BB3C 03120200 */  sra        $v0, $v0, 8
    /* 29F40 8011BB40 91E5030C */  jal        func_800F9644
    /* 29F44 8011BB44 000062A4 */   sh        $v0, 0x0($v1)
    /* 29F48 8011BB48 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 29F4C 8011BB4C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 29F50 8011BB50 00000000 */  nop
    /* 29F54 8011BB54 00006294 */  lhu        $v0, 0x0($v1)
    /* 29F58 8011BB58 00000000 */  nop
    /* 29F5C 8011BB5C C0100200 */  sll        $v0, $v0, 3
    /* 29F60 8011BB60 04D5030C */  jal        func_800F5410
    /* 29F64 8011BB64 000062A4 */   sh        $v0, 0x0($v1)
    /* 29F68 8011BB68 19D0030C */  jal        func_800F4064
    /* 29F6C 8011BB6C 00010424 */   addiu     $a0, $zero, 0x100
    /* 29F70 8011BB70 7F00043C */  lui        $a0, (0x7F2200 >> 16)
    /* 29F74 8011BB74 39E2030C */  jal        func_800F88E4
    /* 29F78 8011BB78 00228434 */   ori       $a0, $a0, (0x7F2200 & 0xFFFF)
    /* 29F7C 8011BB7C 56D9030C */  jal        func_800F6558
    /* 29F80 8011BB80 21200000 */   addu      $a0, $zero, $zero
    /* 29F84 8011BB84 98E5030C */  jal        func_800F9660
    /* 29F88 8011BB88 20000424 */   addiu     $a0, $zero, 0x20
    /* 29F8C 8011BB8C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 29F90 8011BB90 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 29F94 8011BB94 00000000 */  nop
    /* 29F98 8011BB98 00006294 */  lhu        $v0, 0x0($v1)
    /* 29F9C 8011BB9C 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 29FA0 8011BBA0 02004224 */  addiu      $v0, $v0, 0x2
    /* 29FA4 8011BBA4 65DD030C */  jal        func_800F7594
    /* 29FA8 8011BBA8 000062A4 */   sh        $v0, 0x0($v1)
    /* 29FAC 8011BBAC A4D6030C */  jal        func_800F5A90
    /* 29FB0 8011BBB0 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 29FB4 8011BBB4 F5D4030C */  jal        func_800F53D4
    /* 29FB8 8011BBB8 00000000 */   nop
    /* 29FBC 8011BBBC C2FF4010 */  beqz       $v0, .L8011BAC8
    /* 29FC0 8011BBC0 00000000 */   nop
    /* 29FC4 8011BBC4 366F040C */  jal        func_8011BCD8
    /* 29FC8 8011BBC8 00000000 */   nop
    /* 29FCC 8011BBCC 8CD9030C */  jal        func_800F6630
    /* 29FD0 8011BBD0 40000424 */   addiu     $a0, $zero, 0x40
    /* 29FD4 8011BBD4 5DD5030C */  jal        func_800F5574
    /* 29FD8 8011BBD8 80000424 */   addiu     $a0, $zero, 0x80
    /* 29FDC 8011BBDC F5D4030C */  jal        func_800F53D4
    /* 29FE0 8011BBE0 00000000 */   nop
    /* 29FE4 8011BBE4 B8FF4010 */  beqz       $v0, .L8011BAC8
    /* 29FE8 8011BBE8 00000000 */   nop
  .L8011BBEC:
    /* 29FEC 8011BBEC CCE4030C */  jal        func_800F9330
    /* 29FF0 8011BBF0 00000000 */   nop
    /* 29FF4 8011BBF4 9CDC030C */  jal        func_800F7270
    /* 29FF8 8011BBF8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29FFC 8011BBFC 1400043C */  lui        $a0, (0x14F4AE >> 16)
    /* 2A000 8011BC00 1ADB030C */  jal        func_800F6C68
    /* 2A004 8011BC04 AEF48434 */   ori       $a0, $a0, (0x14F4AE & 0xFFFF)
    /* 2A008 8011BC08 D9D8030C */  jal        func_800F6364
    /* 2A00C 8011BC0C 00000000 */   nop
    /* 2A010 8011BC10 5BE3030C */  jal        func_800F8D6C
    /* 2A014 8011BC14 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2A018 8011BC18 68E5030C */  jal        func_800F95A0
    /* 2A01C 8011BC1C 00000000 */   nop
    /* 2A020 8011BC20 EEE3030C */  jal        func_800F8FB8
    /* 2A024 8011BC24 06000424 */   addiu     $a0, $zero, 0x6
    /* 2A028 8011BC28 50D4030C */  jal        func_800F5140
    /* 2A02C 8011BC2C 00000000 */   nop
    /* 2A030 8011BC30 D3D3030C */  jal        func_800F4F4C
    /* 2A034 8011BC34 00000000 */   nop
    /* 2A038 8011BC38 0FCF030C */  jal        func_800F3C3C
    /* 2A03C 8011BC3C 06000424 */   addiu     $a0, $zero, 0x6
    /* 2A040 8011BC40 90DE030C */  jal        func_800F7A40
    /* 2A044 8011BC44 21204000 */   addu      $a0, $v0, $zero
    /* 2A048 8011BC48 50D4030C */  jal        func_800F5140
    /* 2A04C 8011BC4C 00000000 */   nop
    /* 2A050 8011BC50 D3D3030C */  jal        func_800F4F4C
    /* 2A054 8011BC54 00000000 */   nop
    /* 2A058 8011BC58 0FCF030C */  jal        func_800F3C3C
    /* 2A05C 8011BC5C 06000424 */   addiu     $a0, $zero, 0x6
    /* 2A060 8011BC60 90DE030C */  jal        func_800F7A40
    /* 2A064 8011BC64 21204000 */   addu      $a0, $v0, $zero
    /* 2A068 8011BC68 7F00043C */  lui        $a0, (0x7F2200 >> 16)
    /* 2A06C 8011BC6C 17E2030C */  jal        func_800F885C
    /* 2A070 8011BC70 00228434 */   ori       $a0, $a0, (0x7F2200 & 0xFFFF)
    /* 2A074 8011BC74 8CD9030C */  jal        func_800F6630
    /* 2A078 8011BC78 06000424 */   addiu     $a0, $zero, 0x6
    /* 2A07C 8011BC7C 7AD8030C */  jal        func_800F61E8
    /* 2A080 8011BC80 00000000 */   nop
    /* 2A084 8011BC84 7F00043C */  lui        $a0, (0x7F2201 >> 16)
    /* 2A088 8011BC88 17E2030C */  jal        func_800F885C
    /* 2A08C 8011BC8C 01228434 */   ori       $a0, $a0, (0x7F2201 & 0xFFFF)
    /* 2A090 8011BC90 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2A094 8011BC94 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2A098 8011BC98 00000000 */  nop
    /* 2A09C 8011BC9C 00006294 */  lhu        $v0, 0x0($v1)
    /* 2A0A0 8011BCA0 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 2A0A4 8011BCA4 02004224 */  addiu      $v0, $v0, 0x2
    /* 2A0A8 8011BCA8 65DD030C */  jal        func_800F7594
    /* 2A0AC 8011BCAC 000062A4 */   sh        $v0, 0x0($v1)
    /* 2A0B0 8011BCB0 A4D6030C */  jal        func_800F5A90
    /* 2A0B4 8011BCB4 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 2A0B8 8011BCB8 F5D4030C */  jal        func_800F53D4
    /* 2A0BC 8011BCBC 00000000 */   nop
    /* 2A0C0 8011BCC0 CAFF4010 */  beqz       $v0, .L8011BBEC
    /* 2A0C4 8011BCC4 00000000 */   nop
    /* 2A0C8 8011BCC8 1400BF8F */  lw         $ra, 0x14($sp)
    /* 2A0CC 8011BCCC 1000B08F */  lw         $s0, 0x10($sp)
    /* 2A0D0 8011BCD0 0800E003 */  jr         $ra
    /* 2A0D4 8011BCD4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011B874
