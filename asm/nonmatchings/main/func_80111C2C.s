nonmatching func_80111C2C, 0x19C

glabel func_80111C2C
    /* 2002C 80111C2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 20030 80111C30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 20034 80111C34 40DD030C */  jal        func_800F7500
    /* 20038 80111C38 C0010424 */   addiu     $a0, $zero, 0x1C0
    /* 2003C 80111C3C 77DC030C */  jal        func_800F71DC
    /* 20040 80111C40 21200000 */   addu      $a0, $zero, $zero
    /* 20044 80111C44 EEE3030C */  jal        func_800F8FB8
    /* 20048 80111C48 0C000424 */   addiu     $a0, $zero, 0xC
    /* 2004C 80111C4C EEE3030C */  jal        func_800F8FB8
    /* 20050 80111C50 0E000424 */   addiu     $a0, $zero, 0xE
  .L80111C54:
    /* 20054 80111C54 8CD9030C */  jal        func_800F6630
    /* 20058 80111C58 0C000424 */   addiu     $a0, $zero, 0xC
    /* 2005C 80111C5C 04D5030C */  jal        func_800F5410
    /* 20060 80111C60 00000000 */   nop
    /* 20064 80111C64 0FCF030C */  jal        func_800F3C3C
    /* 20068 80111C68 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 2006C 80111C6C CECF030C */  jal        func_800F3F38
    /* 20070 80111C70 21204000 */   addu      $a0, $v0, $zero
    /* 20074 80111C74 58E2030C */  jal        func_800F8960
    /* 20078 80111C78 00030424 */   addiu     $a0, $zero, 0x300
    /* 2007C 80111C7C 8CD9030C */  jal        func_800F6630
    /* 20080 80111C80 0E000424 */   addiu     $a0, $zero, 0xE
    /* 20084 80111C84 04D5030C */  jal        func_800F5410
    /* 20088 80111C88 00000000 */   nop
    /* 2008C 80111C8C 0FCF030C */  jal        func_800F3C3C
    /* 20090 80111C90 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 20094 80111C94 CECF030C */  jal        func_800F3F38
    /* 20098 80111C98 21204000 */   addu      $a0, $v0, $zero
    /* 2009C 80111C9C 58E2030C */  jal        func_800F8960
    /* 200A0 80111CA0 01030424 */   addiu     $a0, $zero, 0x301
    /* 200A4 80111CA4 1400043C */  lui        $a0, (0x14F5D6 >> 16)
    /* 200A8 80111CA8 1ADB030C */  jal        func_800F6C68
    /* 200AC 80111CAC D6F58434 */   ori       $a0, $a0, (0x14F5D6 & 0xFFFF)
    /* 200B0 80111CB0 58E2030C */  jal        func_800F8960
    /* 200B4 80111CB4 02030424 */   addiu     $a0, $zero, 0x302
    /* 200B8 80111CB8 1400043C */  lui        $a0, (0x14F5D7 >> 16)
    /* 200BC 80111CBC 1ADB030C */  jal        func_800F6C68
    /* 200C0 80111CC0 D7F58434 */   ori       $a0, $a0, (0x14F5D7 & 0xFFFF)
    /* 200C4 80111CC4 58E2030C */  jal        func_800F8960
    /* 200C8 80111CC8 03030424 */   addiu     $a0, $zero, 0x303
    /* 200CC 80111CCC 8CD9030C */  jal        func_800F6630
    /* 200D0 80111CD0 0C000424 */   addiu     $a0, $zero, 0xC
    /* 200D4 80111CD4 04D5030C */  jal        func_800F5410
    /* 200D8 80111CD8 00000000 */   nop
    /* 200DC 80111CDC 02D0030C */  jal        func_800F4008
    /* 200E0 80111CE0 10000424 */   addiu     $a0, $zero, 0x10
    /* 200E4 80111CE4 92D0030C */  jal        func_800F4248
    /* 200E8 80111CE8 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 200EC 80111CEC 93E0030C */  jal        func_800F824C
    /* 200F0 80111CF0 0C000424 */   addiu     $a0, $zero, 0xC
    /* 200F4 80111CF4 48D0030C */  jal        func_800F4120
    /* 200F8 80111CF8 02020424 */   addiu     $a0, $zero, 0x202
    /* 200FC 80111CFC 09004014 */  bnez       $v0, .L80111D24
    /* 20100 80111D00 00000000 */   nop
    /* 20104 80111D04 8CD9030C */  jal        func_800F6630
    /* 20108 80111D08 0E000424 */   addiu     $a0, $zero, 0xE
    /* 2010C 80111D0C 04D5030C */  jal        func_800F5410
    /* 20110 80111D10 00000000 */   nop
    /* 20114 80111D14 02D0030C */  jal        func_800F4008
    /* 20118 80111D18 10000424 */   addiu     $a0, $zero, 0x10
    /* 2011C 80111D1C 93E0030C */  jal        func_800F824C
    /* 20120 80111D20 0E000424 */   addiu     $a0, $zero, 0xE
  .L80111D24:
    /* 20124 80111D24 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 20128 80111D28 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2012C 80111D2C 00000000 */  nop
    /* 20130 80111D30 00006294 */  lhu        $v0, 0x0($v1)
    /* 20134 80111D34 00000000 */  nop
    /* 20138 80111D38 02004224 */  addiu      $v0, $v0, 0x2
    /* 2013C 80111D3C 000062A4 */  sh         $v0, 0x0($v1)
    /* 20140 80111D40 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 20144 80111D44 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 20148 80111D48 00000000 */  nop
    /* 2014C 80111D4C 0000A294 */  lhu        $v0, 0x0($a1)
    /* 20150 80111D50 20000424 */  addiu      $a0, $zero, 0x20
    /* 20154 80111D54 04004224 */  addiu      $v0, $v0, 0x4
    /* 20158 80111D58 56D6030C */  jal        func_800F5958
    /* 2015C 80111D5C 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 20160 80111D60 F5D4030C */  jal        func_800F53D4
    /* 20164 80111D64 00000000 */   nop
    /* 20168 80111D68 0B004014 */  bnez       $v0, .L80111D98
    /* 2016C 80111D6C 00000000 */   nop
    /* 20170 80111D70 56D6030C */  jal        func_800F5958
    /* 20174 80111D74 10000424 */   addiu     $a0, $zero, 0x10
    /* 20178 80111D78 F5D4030C */  jal        func_800F53D4
    /* 2017C 80111D7C 00000000 */   nop
    /* 20180 80111D80 B4FF4010 */  beqz       $v0, .L80111C54
    /* 20184 80111D84 00000000 */   nop
    /* 20188 80111D88 40DD030C */  jal        func_800F7500
    /* 2018C 80111D8C 10000424 */   addiu     $a0, $zero, 0x10
    /* 20190 80111D90 15470408 */  j          .L80111C54
    /* 20194 80111D94 00000000 */   nop
  .L80111D98:
    /* 20198 80111D98 5B50040C */  jal        func_8011416C
    /* 2019C 80111D9C 00000000 */   nop
    /* 201A0 80111DA0 53D9030C */  jal        func_800F654C
    /* 201A4 80111DA4 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 201A8 80111DA8 62E0030C */  jal        func_800F8188
    /* 201AC 80111DAC 1C050424 */   addiu     $a0, $zero, 0x51C
    /* 201B0 80111DB0 62E0030C */  jal        func_800F8188
    /* 201B4 80111DB4 1D050424 */   addiu     $a0, $zero, 0x51D
    /* 201B8 80111DB8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 201BC 80111DBC 00000000 */  nop
    /* 201C0 80111DC0 0800E003 */  jr         $ra
    /* 201C4 80111DC4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80111C2C
