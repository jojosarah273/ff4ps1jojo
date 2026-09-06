nonmatching func_80160C2C, 0x1CC

glabel func_80160C2C
    /* 6F02C 80160C2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6F030 80160C30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6F034 80160C34 59D9030C */  jal        func_800F6564
    /* 6F038 80160C38 70270424 */   addiu     $a0, $zero, 0x2770
    /* 6F03C 80160C3C 0DD9030C */  jal        func_800F6434
    /* 6F040 80160C40 80800434 */   ori       $a0, $zero, 0x8080
    /* 6F044 80160C44 68004010 */  beqz       $v0, .L80160DE8
    /* 6F048 80160C48 00000000 */   nop
    /* 6F04C 80160C4C 91E5030C */  jal        func_800F9644
    /* 6F050 80160C50 20000424 */   addiu     $a0, $zero, 0x20
    /* 6F054 80160C54 63D9030C */  jal        func_800F658C
    /* 6F058 80160C58 07270424 */   addiu     $a0, $zero, 0x2707
    /* 6F05C 80160C5C 6CE0030C */  jal        func_800F81B0
    /* 6F060 80160C60 9A350424 */   addiu     $a0, $zero, 0x359A
    /* 6F064 80160C64 63D9030C */  jal        func_800F658C
    /* 6F068 80160C68 09270424 */   addiu     $a0, $zero, 0x2709
    /* 6F06C 80160C6C 6CE0030C */  jal        func_800F81B0
    /* 6F070 80160C70 9D350424 */   addiu     $a0, $zero, 0x359D
    /* 6F074 80160C74 C7E5030C */  jal        func_800F971C
    /* 6F078 80160C78 00000000 */   nop
    /* 6F07C 80160C7C 98E5030C */  jal        func_800F9660
    /* 6F080 80160C80 20000424 */   addiu     $a0, $zero, 0x20
    /* 6F084 80160C84 DDE3030C */  jal        func_800F8F74
    /* 6F088 80160C88 9C350424 */   addiu     $a0, $zero, 0x359C
    /* 6F08C 80160C8C DDE3030C */  jal        func_800F8F74
    /* 6F090 80160C90 9F350424 */   addiu     $a0, $zero, 0x359F
    /* 6F094 80160C94 59D9030C */  jal        func_800F6564
    /* 6F098 80160C98 20270424 */   addiu     $a0, $zero, 0x2720
    /* 6F09C 80160C9C A0D0030C */  jal        func_800F4280
    /* 6F0A0 80160CA0 25270424 */   addiu     $a0, $zero, 0x2725
    /* 6F0A4 80160CA4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6F0A8 80160CA8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6F0AC 80160CAC 00000000 */  nop
    /* 6F0B0 80160CB0 00006290 */  lbu        $v0, 0x0($v1)
    /* 6F0B4 80160CB4 20270424 */  addiu      $a0, $zero, 0x2720
    /* 6F0B8 80160CB8 27100200 */  nor        $v0, $zero, $v0
    /* 6F0BC 80160CBC A0D0030C */  jal        func_800F4280
    /* 6F0C0 80160CC0 000062A0 */   sb        $v0, 0x0($v1)
    /* 6F0C4 80160CC4 92D0030C */  jal        func_800F4248
    /* 6F0C8 80160CC8 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 6F0CC 80160CCC 93E0030C */  jal        func_800F824C
    /* 6F0D0 80160CD0 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6F0D4 80160CD4 48D0030C */  jal        func_800F4120
    /* 6F0D8 80160CD8 02020424 */   addiu     $a0, $zero, 0x202
    /* 6F0DC 80160CDC 07004014 */  bnez       $v0, .L80160CFC
    /* 6F0E0 80160CE0 00000000 */   nop
    /* 6F0E4 80160CE4 53D9030C */  jal        func_800F654C
    /* 6F0E8 80160CE8 14000424 */   addiu     $a0, $zero, 0x14
    /* 6F0EC 80160CEC 62E0030C */  jal        func_800F8188
    /* 6F0F0 80160CF0 CB340424 */   addiu     $a0, $zero, 0x34CB
    /* 6F0F4 80160CF4 6C830508 */  j          .L80160DB0
    /* 6F0F8 80160CF8 00000000 */   nop
  .L80160CFC:
    /* 6F0FC 80160CFC C7E5030C */  jal        func_800F971C
    /* 6F100 80160D00 00000000 */   nop
    /* 6F104 80160D04 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6F108 80160D08 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6F10C 80160D0C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6F110 80160D10 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6F114 80160D14 00006294 */  lhu        $v0, 0x0($v1)
    /* 6F118 80160D18 00000000 */  nop
    /* 6F11C 80160D1C 000082A4 */  sh         $v0, 0x0($a0)
    /* 6F120 80160D20 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6F124 80160D24 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6F128 80160D28 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 6F12C 80160D2C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 6F130 80160D30 00006294 */  lhu        $v0, 0x0($v1)
    /* 6F134 80160D34 00000000 */  nop
    /* 6F138 80160D38 000082A4 */  sh         $v0, 0x0($a0)
  .L80160D3C:
    /* 6F13C 80160D3C 0FCF030C */  jal        func_800F3C3C
    /* 6F140 80160D40 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6F144 80160D44 AFDD030C */  jal        func_800F76BC
    /* 6F148 80160D48 21204000 */   addu      $a0, $v0, $zero
    /* 6F14C 80160D4C CADD030C */  jal        func_800F7728
    /* 6F150 80160D50 01010424 */   addiu     $a0, $zero, 0x101
    /* 6F154 80160D54 0E004014 */  bnez       $v0, .L80160D90
    /* 6F158 80160D58 00000000 */   nop
    /* 6F15C 80160D5C 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 6F160 80160D60 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 6F164 80160D64 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 6F168 80160D68 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 6F16C 80160D6C 00004390 */  lbu        $v1, 0x0($v0)
    /* 6F170 80160D70 04D5030C */  jal        func_800F5410
    /* 6F174 80160D74 000083A0 */   sb        $v1, 0x0($a0)
    /* 6F178 80160D78 02D0030C */  jal        func_800F4008
    /* 6F17C 80160D7C 15000424 */   addiu     $a0, $zero, 0x15
    /* 6F180 80160D80 DAE1030C */  jal        func_800F8768
    /* 6F184 80160D84 CB340424 */   addiu     $a0, $zero, 0x34CB
    /* 6F188 80160D88 D9D8030C */  jal        func_800F6364
    /* 6F18C 80160D8C 00000000 */   nop
  .L80160D90:
    /* 6F190 80160D90 EFD8030C */  jal        func_800F63BC
    /* 6F194 80160D94 00000000 */   nop
    /* 6F198 80160D98 A4D6030C */  jal        func_800F5A90
    /* 6F19C 80160D9C 06000424 */   addiu     $a0, $zero, 0x6
    /* 6F1A0 80160DA0 F5D4030C */  jal        func_800F53D4
    /* 6F1A4 80160DA4 00000000 */   nop
    /* 6F1A8 80160DA8 E4FF4010 */  beqz       $v0, .L80160D3C
    /* 6F1AC 80160DAC 00000000 */   nop
  .L80160DB0:
    /* 6F1B0 80160DB0 A74C050C */  jal        func_8015329C
    /* 6F1B4 80160DB4 00000000 */   nop
    /* 6F1B8 80160DB8 53D9030C */  jal        func_800F654C
    /* 6F1BC 80160DBC 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 6F1C0 80160DC0 62E0030C */  jal        func_800F8188
    /* 6F1C4 80160DC4 CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 6F1C8 80160DC8 53D9030C */  jal        func_800F654C
    /* 6F1CC 80160DCC 14000424 */   addiu     $a0, $zero, 0x14
    /* 6F1D0 80160DD0 62E0030C */  jal        func_800F8188
    /* 6F1D4 80160DD4 C8340424 */   addiu     $a0, $zero, 0x34C8
    /* 6F1D8 80160DD8 53D9030C */  jal        func_800F654C
    /* 6F1DC 80160DDC 10000424 */   addiu     $a0, $zero, 0x10
    /* 6F1E0 80160DE0 62E0030C */  jal        func_800F8188
    /* 6F1E4 80160DE4 C7340424 */   addiu     $a0, $zero, 0x34C7
  .L80160DE8:
    /* 6F1E8 80160DE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6F1EC 80160DEC 00000000 */  nop
    /* 6F1F0 80160DF0 0800E003 */  jr         $ra
    /* 6F1F4 80160DF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80160C2C
