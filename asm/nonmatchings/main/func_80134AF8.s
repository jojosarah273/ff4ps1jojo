nonmatching func_80134AF8, 0x17C

glabel func_80134AF8
    /* 42EF8 80134AF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 42EFC 80134AFC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 42F00 80134B00 53D9030C */  jal        func_800F654C
    /* 42F04 80134B04 21200000 */   addu      $a0, $zero, $zero
    /* 42F08 80134B08 52CF030C */  jal        func_800F3D48
    /* 42F0C 80134B0C 00000000 */   nop
    /* 42F10 80134B10 59D9030C */  jal        func_800F6564
    /* 42F14 80134B14 391B0424 */   addiu     $a0, $zero, 0x1B39
    /* 42F18 80134B18 5DD5030C */  jal        func_800F5574
    /* 42F1C 80134B1C B0000424 */   addiu     $a0, $zero, 0xB0
    /* 42F20 80134B20 F0D4030C */  jal        func_800F53C0
    /* 42F24 80134B24 00000000 */   nop
    /* 42F28 80134B28 46004014 */  bnez       $v0, .L80134C44
    /* 42F2C 80134B2C 00000000 */   nop
    /* 42F30 80134B30 91E5030C */  jal        func_800F9644
    /* 42F34 80134B34 20000424 */   addiu     $a0, $zero, 0x20
    /* 42F38 80134B38 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 42F3C 80134B3C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 42F40 80134B40 00000000 */  nop
    /* 42F44 80134B44 00006294 */  lhu        $v0, 0x0($v1)
    /* 42F48 80134B48 00000000 */  nop
    /* 42F4C 80134B4C C0100200 */  sll        $v0, $v0, 3
    /* 42F50 80134B50 000062A4 */  sh         $v0, 0x0($v1)
    /* 42F54 80134B54 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 42F58 80134B58 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 42F5C 80134B5C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 42F60 80134B60 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 42F64 80134B64 00008294 */  lhu        $v0, 0x0($a0)
    /* 42F68 80134B68 20000424 */  addiu      $a0, $zero, 0x20
    /* 42F6C 80134B6C 98E5030C */  jal        func_800F9660
    /* 42F70 80134B70 000062A4 */   sh        $v0, 0x0($v1)
    /* 42F74 80134B74 0F00043C */  lui        $a0, (0xF9106 >> 16)
    /* 42F78 80134B78 1ADB030C */  jal        func_800F6C68
    /* 42F7C 80134B7C 06918434 */   ori       $a0, $a0, (0xF9106 & 0xFFFF)
    /* 42F80 80134B80 92D0030C */  jal        func_800F4248
    /* 42F84 80134B84 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 42F88 80134B88 50D4030C */  jal        func_800F5140
    /* 42F8C 80134B8C 00000000 */   nop
    /* 42F90 80134B90 3489040C */  jal        func_801224D0
    /* 42F94 80134B94 00000000 */   nop
    /* 42F98 80134B98 91E5030C */  jal        func_800F9644
    /* 42F9C 80134B9C 20000424 */   addiu     $a0, $zero, 0x20
    /* 42FA0 80134BA0 0F00043C */  lui        $a0, (0xFA550 >> 16)
    /* 42FA4 80134BA4 3DDB030C */  jal        func_800F6CF4
    /* 42FA8 80134BA8 50A58434 */   ori       $a0, $a0, (0xFA550 & 0xFFFF)
    /* 42FAC 80134BAC 9DE0030C */  jal        func_800F8274
    /* 42FB0 80134BB0 45000424 */   addiu     $a0, $zero, 0x45
    /* 42FB4 80134BB4 98E5030C */  jal        func_800F9660
    /* 42FB8 80134BB8 20000424 */   addiu     $a0, $zero, 0x20
    /* 42FBC 80134BBC 40DD030C */  jal        func_800F7500
    /* 42FC0 80134BC0 01000424 */   addiu     $a0, $zero, 0x1
    /* 42FC4 80134BC4 B6D9030C */  jal        func_800F66D8
    /* 42FC8 80134BC8 E5000424 */   addiu     $a0, $zero, 0xE5
    /* 42FCC 80134BCC 92D0030C */  jal        func_800F4248
    /* 42FD0 80134BD0 0F000424 */   addiu     $a0, $zero, 0xF
    /* 42FD4 80134BD4 7AD8030C */  jal        func_800F61E8
    /* 42FD8 80134BD8 00000000 */   nop
    /* 42FDC 80134BDC 93E0030C */  jal        func_800F824C
    /* 42FE0 80134BE0 48000424 */   addiu     $a0, $zero, 0x48
    /* 42FE4 80134BE4 EEE3030C */  jal        func_800F8FB8
    /* 42FE8 80134BE8 49000424 */   addiu     $a0, $zero, 0x49
    /* 42FEC 80134BEC 91E5030C */  jal        func_800F9644
    /* 42FF0 80134BF0 20000424 */   addiu     $a0, $zero, 0x20
    /* 42FF4 80134BF4 56D9030C */  jal        func_800F6558
    /* 42FF8 80134BF8 01000424 */   addiu     $a0, $zero, 0x1
  .L80134BFC:
    /* 42FFC 80134BFC 75D7030C */  jal        func_800F5DD4
    /* 43000 80134C00 48000424 */   addiu     $a0, $zero, 0x48
    /* 43004 80134C04 19D7030C */  jal        func_800F5C64
    /* 43008 80134C08 02000424 */   addiu     $a0, $zero, 0x2
    /* 4300C 80134C0C 05004014 */  bnez       $v0, .L80134C24
    /* 43010 80134C10 00000000 */   nop
    /* 43014 80134C14 5BD4030C */  jal        func_800F516C
    /* 43018 80134C18 00000000 */   nop
    /* 4301C 80134C1C FFD20408 */  j          .L80134BFC
    /* 43020 80134C20 00000000 */   nop
  .L80134C24:
    /* 43024 80134C24 E8D0030C */  jal        func_800F43A0
    /* 43028 80134C28 45000424 */   addiu     $a0, $zero, 0x45
    /* 4302C 80134C2C 7AD0030C */  jal        func_800F41E8
    /* 43030 80134C30 02020424 */   addiu     $a0, $zero, 0x202
    /* 43034 80134C34 07004014 */  bnez       $v0, .L80134C54
    /* 43038 80134C38 00000000 */   nop
    /* 4303C 80134C3C 98E5030C */  jal        func_800F9660
    /* 43040 80134C40 20000424 */   addiu     $a0, $zero, 0x20
  .L80134C44:
    /* 43044 80134C44 04D5030C */  jal        func_800F5410
    /* 43048 80134C48 00000000 */   nop
    /* 4304C 80134C4C 19D30408 */  j          .L80134C64
    /* 43050 80134C50 00000000 */   nop
  .L80134C54:
    /* 43054 80134C54 98E5030C */  jal        func_800F9660
    /* 43058 80134C58 20000424 */   addiu     $a0, $zero, 0x20
    /* 4305C 80134C5C 20D5030C */  jal        func_800F5480
    /* 43060 80134C60 00000000 */   nop
  .L80134C64:
    /* 43064 80134C64 1000BF8F */  lw         $ra, 0x10($sp)
    /* 43068 80134C68 00000000 */  nop
    /* 4306C 80134C6C 0800E003 */  jr         $ra
    /* 43070 80134C70 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80134AF8
