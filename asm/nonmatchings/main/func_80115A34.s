nonmatching func_80115A34, 0x198

glabel func_80115A34
    /* 23E34 80115A34 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 23E38 80115A38 1000BFAF */  sw         $ra, 0x10($sp)
    /* 23E3C 80115A3C 8CD9030C */  jal        func_800F6630
    /* 23E40 80115A40 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 23E44 80115A44 5DD5030C */  jal        func_800F5574
    /* 23E48 80115A48 20000424 */   addiu     $a0, $zero, 0x20
    /* 23E4C 80115A4C F5D4030C */  jal        func_800F53D4
    /* 23E50 80115A50 00000000 */   nop
    /* 23E54 80115A54 09004014 */  bnez       $v0, .L80115A7C
    /* 23E58 80115A58 00000000 */   nop
    /* 23E5C 80115A5C 8CD9030C */  jal        func_800F6630
    /* 23E60 80115A60 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 23E64 80115A64 19DE030C */  jal        func_800F7864
    /* 23E68 80115A68 00000000 */   nop
    /* 23E6C 80115A6C CADD030C */  jal        func_800F7728
    /* 23E70 80115A70 01010424 */   addiu     $a0, $zero, 0x101
    /* 23E74 80115A74 51004010 */  beqz       $v0, .L80115BBC
    /* 23E78 80115A78 00000000 */   nop
  .L80115A7C:
    /* 23E7C 80115A7C 8CD9030C */  jal        func_800F6630
    /* 23E80 80115A80 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 23E84 80115A84 20D5030C */  jal        func_800F5480
    /* 23E88 80115A88 00000000 */   nop
    /* 23E8C 80115A8C 16E0030C */  jal        func_800F8058
    /* 23E90 80115A90 10000424 */   addiu     $a0, $zero, 0x10
    /* 23E94 80115A94 92D0030C */  jal        func_800F4248
    /* 23E98 80115A98 FC000424 */   addiu     $a0, $zero, 0xFC
    /* 23E9C 80115A9C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 23EA0 80115AA0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 23EA4 80115AA4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 23EA8 80115AA8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 23EAC 80115AAC 00004394 */  lhu        $v1, 0x0($v0)
    /* 23EB0 80115AB0 0C000424 */  addiu      $a0, $zero, 0xC
    /* 23EB4 80115AB4 8CD9030C */  jal        func_800F6630
    /* 23EB8 80115AB8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 23EBC 80115ABC 58E2030C */  jal        func_800F8960
    /* 23EC0 80115AC0 50030424 */   addiu     $a0, $zero, 0x350
    /* 23EC4 80115AC4 8CD9030C */  jal        func_800F6630
    /* 23EC8 80115AC8 0D000424 */   addiu     $a0, $zero, 0xD
    /* 23ECC 80115ACC 92D0030C */  jal        func_800F4248
    /* 23ED0 80115AD0 01000424 */   addiu     $a0, $zero, 0x1
    /* 23ED4 80115AD4 48D0030C */  jal        func_800F4120
    /* 23ED8 80115AD8 02000424 */   addiu     $a0, $zero, 0x2
    /* 23EDC 80115ADC 05004014 */  bnez       $v0, .L80115AF4
    /* 23EE0 80115AE0 00000000 */   nop
    /* 23EE4 80115AE4 53D9030C */  jal        func_800F654C
    /* 23EE8 80115AE8 14000424 */   addiu     $a0, $zero, 0x14
    /* 23EEC 80115AEC 31C5050C */  jal        func_801714C4
    /* 23EF0 80115AF0 00000000 */   nop
  .L80115AF4:
    /* 23EF4 80115AF4 8CD9030C */  jal        func_800F6630
    /* 23EF8 80115AF8 0E000424 */   addiu     $a0, $zero, 0xE
    /* 23EFC 80115AFC 58E2030C */  jal        func_800F8960
    /* 23F00 80115B00 51030424 */   addiu     $a0, $zero, 0x351
    /* 23F04 80115B04 1500043C */  lui        $a0, (0x15B8C9 >> 16)
    /* 23F08 80115B08 1ADB030C */  jal        func_800F6C68
    /* 23F0C 80115B0C C9B88434 */   ori       $a0, $a0, (0x15B8C9 & 0xFFFF)
    /* 23F10 80115B10 58E2030C */  jal        func_800F8960
    /* 23F14 80115B14 52030424 */   addiu     $a0, $zero, 0x352
    /* 23F18 80115B18 1500043C */  lui        $a0, (0x15B8CA >> 16)
    /* 23F1C 80115B1C 1ADB030C */  jal        func_800F6C68
    /* 23F20 80115B20 CAB88434 */   ori       $a0, $a0, (0x15B8CA & 0xFFFF)
    /* 23F24 80115B24 58E2030C */  jal        func_800F8960
    /* 23F28 80115B28 53030424 */   addiu     $a0, $zero, 0x353
    /* 23F2C 80115B2C 8CD9030C */  jal        func_800F6630
    /* 23F30 80115B30 0C000424 */   addiu     $a0, $zero, 0xC
    /* 23F34 80115B34 04D5030C */  jal        func_800F5410
    /* 23F38 80115B38 00000000 */   nop
    /* 23F3C 80115B3C 02D0030C */  jal        func_800F4008
    /* 23F40 80115B40 08000424 */   addiu     $a0, $zero, 0x8
    /* 23F44 80115B44 58E2030C */  jal        func_800F8960
    /* 23F48 80115B48 54030424 */   addiu     $a0, $zero, 0x354
    /* 23F4C 80115B4C 8CD9030C */  jal        func_800F6630
    /* 23F50 80115B50 0D000424 */   addiu     $a0, $zero, 0xD
    /* 23F54 80115B54 02D0030C */  jal        func_800F4008
    /* 23F58 80115B58 21200000 */   addu      $a0, $zero, $zero
    /* 23F5C 80115B5C 92D0030C */  jal        func_800F4248
    /* 23F60 80115B60 01000424 */   addiu     $a0, $zero, 0x1
    /* 23F64 80115B64 48D0030C */  jal        func_800F4120
    /* 23F68 80115B68 02000424 */   addiu     $a0, $zero, 0x2
    /* 23F6C 80115B6C 05004014 */  bnez       $v0, .L80115B84
    /* 23F70 80115B70 00000000 */   nop
    /* 23F74 80115B74 53D9030C */  jal        func_800F654C
    /* 23F78 80115B78 15000424 */   addiu     $a0, $zero, 0x15
    /* 23F7C 80115B7C 31C5050C */  jal        func_801714C4
    /* 23F80 80115B80 00000000 */   nop
  .L80115B84:
    /* 23F84 80115B84 8CD9030C */  jal        func_800F6630
    /* 23F88 80115B88 0E000424 */   addiu     $a0, $zero, 0xE
    /* 23F8C 80115B8C 58E2030C */  jal        func_800F8960
    /* 23F90 80115B90 55030424 */   addiu     $a0, $zero, 0x355
    /* 23F94 80115B94 1500043C */  lui        $a0, (0x15B8CB >> 16)
    /* 23F98 80115B98 1ADB030C */  jal        func_800F6C68
    /* 23F9C 80115B9C CBB88434 */   ori       $a0, $a0, (0x15B8CB & 0xFFFF)
    /* 23FA0 80115BA0 58E2030C */  jal        func_800F8960
    /* 23FA4 80115BA4 56030424 */   addiu     $a0, $zero, 0x356
    /* 23FA8 80115BA8 1500043C */  lui        $a0, (0x15B8CC >> 16)
    /* 23FAC 80115BAC 1ADB030C */  jal        func_800F6C68
    /* 23FB0 80115BB0 CCB88434 */   ori       $a0, $a0, (0x15B8CC & 0xFFFF)
    /* 23FB4 80115BB4 58E2030C */  jal        func_800F8960
    /* 23FB8 80115BB8 57030424 */   addiu     $a0, $zero, 0x357
  .L80115BBC:
    /* 23FBC 80115BBC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 23FC0 80115BC0 00000000 */  nop
    /* 23FC4 80115BC4 0800E003 */  jr         $ra
    /* 23FC8 80115BC8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80115A34
