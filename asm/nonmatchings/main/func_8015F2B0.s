nonmatching func_8015F2B0, 0x130

glabel func_8015F2B0
    /* 6D6B0 8015F2B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6D6B4 8015F2B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6D6B8 8015F2B8 59D9030C */  jal        func_800F6564
    /* 6D6BC 8015F2BC 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 6D6C0 8015F2C0 93E0030C */  jal        func_800F824C
    /* 6D6C4 8015F2C4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D6C8 8015F2C8 AB82050C */  jal        func_80160AAC
    /* 6D6CC 8015F2CC 00000000 */   nop
    /* 6D6D0 8015F2D0 59D9030C */  jal        func_800F6564
    /* 6D6D4 8015F2D4 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6D6D8 8015F2D8 0DD9030C */  jal        func_800F6434
    /* 6D6DC 8015F2DC 80800434 */   ori       $a0, $zero, 0x8080
    /* 6D6E0 8015F2E0 09004014 */  bnez       $v0, .L8015F308
    /* 6D6E4 8015F2E4 00000000 */   nop
    /* 6D6E8 8015F2E8 92D0030C */  jal        func_800F4248
    /* 6D6EC 8015F2EC 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6D6F0 8015F2F0 62E0030C */  jal        func_800F8188
    /* 6D6F4 8015F2F4 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6D6F8 8015F2F8 2394010C */  jal        func_8006508C
    /* 6D6FC 8015F2FC 00000000 */   nop
    /* 6D700 8015F300 F47C0508 */  j          .L8015F3D0
    /* 6D704 8015F304 00000000 */   nop
  .L8015F308:
    /* 6D708 8015F308 E382050C */  jal        func_80160B8C
    /* 6D70C 8015F30C 00000000 */   nop
    /* 6D710 8015F310 59D9030C */  jal        func_800F6564
    /* 6D714 8015F314 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6D718 8015F318 5DD5030C */  jal        func_800F5574
    /* 6D71C 8015F31C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6D720 8015F320 F0D4030C */  jal        func_800F53C0
    /* 6D724 8015F324 00000000 */   nop
    /* 6D728 8015F328 07004014 */  bnez       $v0, .L8015F348
    /* 6D72C 8015F32C 00000000 */   nop
    /* 6D730 8015F330 53D9030C */  jal        func_800F654C
    /* 6D734 8015F334 0A000424 */   addiu     $a0, $zero, 0xA
    /* 6D738 8015F338 93E0030C */  jal        func_800F824C
    /* 6D73C 8015F33C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D740 8015F340 DC7C0508 */  j          .L8015F370
    /* 6D744 8015F344 00000000 */   nop
  .L8015F348:
    /* 6D748 8015F348 5DD5030C */  jal        func_800F5574
    /* 6D74C 8015F34C 04000424 */   addiu     $a0, $zero, 0x4
    /* 6D750 8015F350 F0D4030C */  jal        func_800F53C0
    /* 6D754 8015F354 00000000 */   nop
    /* 6D758 8015F358 05004010 */  beqz       $v0, .L8015F370
    /* 6D75C 8015F35C 00000000 */   nop
    /* 6D760 8015F360 0FCF030C */  jal        func_800F3C3C
    /* 6D764 8015F364 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D768 8015F368 AFDD030C */  jal        func_800F76BC
    /* 6D76C 8015F36C 21204000 */   addu      $a0, $v0, $zero
  .L8015F370:
    /* 6D770 8015F370 8CD9030C */  jal        func_800F6630
    /* 6D774 8015F374 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6D778 8015F378 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6D77C 8015F37C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6D780 8015F380 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6D784 8015F384 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6D788 8015F388 00004394 */  lhu        $v1, 0x0($v0)
    /* 6D78C 8015F38C 47390424 */  addiu      $a0, $zero, 0x3947
    /* 6D790 8015F390 40E3030C */  jal        func_800F8D00
    /* 6D794 8015F394 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6D798 8015F398 59D9030C */  jal        func_800F6564
    /* 6D79C 8015F39C 09270424 */   addiu     $a0, $zero, 0x2709
    /* 6D7A0 8015F3A0 62E0030C */  jal        func_800F8188
    /* 6D7A4 8015F3A4 45390424 */   addiu     $a0, $zero, 0x3945
    /* 6D7A8 8015F3A8 59D9030C */  jal        func_800F6564
    /* 6D7AC 8015F3AC 0A270424 */   addiu     $a0, $zero, 0x270A
    /* 6D7B0 8015F3B0 62E0030C */  jal        func_800F8188
    /* 6D7B4 8015F3B4 46390424 */   addiu     $a0, $zero, 0x3946
    /* 6D7B8 8015F3B8 5349050C */  jal        func_8015254C
    /* 6D7BC 8015F3BC 00000000 */   nop
    /* 6D7C0 8015F3C0 84DC030C */  jal        func_800F7210
    /* 6D7C4 8015F3C4 49390424 */   addiu     $a0, $zero, 0x3949
    /* 6D7C8 8015F3C8 5BE3030C */  jal        func_800F8D6C
    /* 6D7CC 8015F3CC A4000424 */   addiu     $a0, $zero, 0xA4
  .L8015F3D0:
    /* 6D7D0 8015F3D0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6D7D4 8015F3D4 00000000 */  nop
    /* 6D7D8 8015F3D8 0800E003 */  jr         $ra
    /* 6D7DC 8015F3DC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015F2B0
