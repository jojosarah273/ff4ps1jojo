nonmatching func_80106B1C, 0x1B8

glabel func_80106B1C
    /* 14F1C 80106B1C E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 14F20 80106B20 DA000424 */  addiu      $a0, $zero, 0xDA
    /* 14F24 80106B24 1800BFAF */  sw         $ra, 0x18($sp)
    /* 14F28 80106B28 1400B1AF */  sw         $s1, 0x14($sp)
    /* 14F2C 80106B2C 8CD9030C */  jal        func_800F6630
    /* 14F30 80106B30 1000B0AF */   sw        $s0, 0x10($sp)
    /* 14F34 80106B34 5DD5030C */  jal        func_800F5574
    /* 14F38 80106B38 08000424 */   addiu     $a0, $zero, 0x8
    /* 14F3C 80106B3C F5D4030C */  jal        func_800F53D4
    /* 14F40 80106B40 00000000 */   nop
    /* 14F44 80106B44 5E004010 */  beqz       $v0, .L80106CC0
    /* 14F48 80106B48 00000000 */   nop
    /* 14F4C 80106B4C 53D9030C */  jal        func_800F654C
    /* 14F50 80106B50 80000424 */   addiu     $a0, $zero, 0x80
    /* 14F54 80106B54 62E0030C */  jal        func_800F8188
    /* 14F58 80106B58 15210424 */   addiu     $a0, $zero, 0x2115
    /* 14F5C 80106B5C 8CD9030C */  jal        func_800F6630
    /* 14F60 80106B60 E7000424 */   addiu     $a0, $zero, 0xE7
    /* 14F64 80106B64 0DD9030C */  jal        func_800F6434
    /* 14F68 80106B68 02000424 */   addiu     $a0, $zero, 0x2
    /* 14F6C 80106B6C 0D004014 */  bnez       $v0, .L80106BA4
    /* 14F70 80106B70 1D80113C */   lui       $s1, %hi(D_801CFD68)
    /* 14F74 80106B74 9CDC030C */  jal        func_800F7270
    /* 14F78 80106B78 8D000424 */   addiu     $a0, $zero, 0x8D
    /* 14F7C 80106B7C 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 14F80 80106B80 00000000 */  nop
    /* 14F84 80106B84 00005094 */  lhu        $s0, 0x0($v0)
    /* 14F88 80106B88 EEE3030C */  jal        func_800F8FB8
    /* 14F8C 80106B8C E7000424 */   addiu     $a0, $zero, 0xE7
    /* 14F90 80106B90 68FD2426 */  addiu      $a0, $s1, %lo(D_801CFD68)
    /* 14F94 80106B94 FF200324 */  addiu      $v1, $zero, 0x20FF
    /* 14F98 80106B98 40101000 */  sll        $v0, $s0, 1
    /* 14F9C 80106B9C 21104400 */  addu       $v0, $v0, $a0
    /* 14FA0 80106BA0 000043A4 */  sh         $v1, 0x0($v0)
  .L80106BA4:
    /* 14FA4 80106BA4 8CD9030C */  jal        func_800F6630
    /* 14FA8 80106BA8 BA000424 */   addiu     $a0, $zero, 0xBA
    /* 14FAC 80106BAC 04D5030C */  jal        func_800F5410
    /* 14FB0 80106BB0 00000000 */   nop
    /* 14FB4 80106BB4 0FCF030C */  jal        func_800F3C3C
    /* 14FB8 80106BB8 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 14FBC 80106BBC CECF030C */  jal        func_800F3F38
    /* 14FC0 80106BC0 21204000 */   addu      $a0, $v0, $zero
    /* 14FC4 80106BC4 93E0030C */  jal        func_800F824C
    /* 14FC8 80106BC8 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 14FCC 80106BCC EEE3030C */  jal        func_800F8FB8
    /* 14FD0 80106BD0 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 14FD4 80106BD4 0FCF030C */  jal        func_800F3C3C
    /* 14FD8 80106BD8 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 14FDC 80106BDC AFDD030C */  jal        func_800F76BC
    /* 14FE0 80106BE0 21204000 */   addu      $a0, $v0, $zero
    /* 14FE4 80106BE4 BADD030C */  jal        func_800F76E8
    /* 14FE8 80106BE8 00000000 */   nop
    /* 14FEC 80106BEC 0FCF030C */  jal        func_800F3C3C
    /* 14FF0 80106BF0 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 14FF4 80106BF4 32DF030C */  jal        func_800F7CC8
    /* 14FF8 80106BF8 21204000 */   addu      $a0, $v0, $zero
    /* 14FFC 80106BFC 0FCF030C */  jal        func_800F3C3C
    /* 15000 80106C00 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 15004 80106C04 AFDD030C */  jal        func_800F76BC
    /* 15008 80106C08 21204000 */   addu      $a0, $v0, $zero
    /* 1500C 80106C0C BADD030C */  jal        func_800F76E8
    /* 15010 80106C10 00000000 */   nop
    /* 15014 80106C14 0FCF030C */  jal        func_800F3C3C
    /* 15018 80106C18 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 1501C 80106C1C 32DF030C */  jal        func_800F7CC8
    /* 15020 80106C20 21204000 */   addu      $a0, $v0, $zero
    /* 15024 80106C24 8CD9030C */  jal        func_800F6630
    /* 15028 80106C28 8B000424 */   addiu     $a0, $zero, 0x8B
    /* 1502C 80106C2C 0DD9030C */  jal        func_800F6434
    /* 15030 80106C30 02000424 */   addiu     $a0, $zero, 0x2
    /* 15034 80106C34 03004014 */  bnez       $v0, .L80106C44
    /* 15038 80106C38 00000000 */   nop
    /* 1503C 80106C3C 53D9030C */  jal        func_800F654C
    /* 15040 80106C40 0D000424 */   addiu     $a0, $zero, 0xD
  .L80106C44:
    /* 15044 80106C44 04D5030C */  jal        func_800F5410
    /* 15048 80106C48 00000000 */   nop
    /* 1504C 80106C4C 02D0030C */  jal        func_800F4008
    /* 15050 80106C50 23000424 */   addiu     $a0, $zero, 0x23
    /* 15054 80106C54 0FCF030C */  jal        func_800F3C3C
    /* 15058 80106C58 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 1505C 80106C5C CECF030C */  jal        func_800F3F38
    /* 15060 80106C60 21204000 */   addu      $a0, $v0, $zero
    /* 15064 80106C64 93E0030C */  jal        func_800F824C
    /* 15068 80106C68 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 1506C 80106C6C 8CD9030C */  jal        func_800F6630
    /* 15070 80106C70 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 15074 80106C74 92D0030C */  jal        func_800F4248
    /* 15078 80106C78 03000424 */   addiu     $a0, $zero, 0x3
    /* 1507C 80106C7C 04D5030C */  jal        func_800F5410
    /* 15080 80106C80 00000000 */   nop
    /* 15084 80106C84 02D0030C */  jal        func_800F4008
    /* 15088 80106C88 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 1508C 80106C8C 93E0030C */  jal        func_800F824C
    /* 15090 80106C90 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 15094 80106C94 9CDC030C */  jal        func_800F7270
    /* 15098 80106C98 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 1509C 80106C9C 5BE3030C */  jal        func_800F8D6C
    /* 150A0 80106CA0 8D000424 */   addiu     $a0, $zero, 0x8D
    /* 150A4 80106CA4 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 150A8 80106CA8 68FD2426 */  addiu      $a0, $s1, %lo(D_801CFD68)
    /* 150AC 80106CAC 00005094 */  lhu        $s0, 0x0($v0)
    /* 150B0 80106CB0 14200324 */  addiu      $v1, $zero, 0x2014
    /* 150B4 80106CB4 40101000 */  sll        $v0, $s0, 1
    /* 150B8 80106CB8 21104400 */  addu       $v0, $v0, $a0
    /* 150BC 80106CBC 000043A4 */  sh         $v1, 0x0($v0)
  .L80106CC0:
    /* 150C0 80106CC0 1800BF8F */  lw         $ra, 0x18($sp)
    /* 150C4 80106CC4 1400B18F */  lw         $s1, 0x14($sp)
    /* 150C8 80106CC8 1000B08F */  lw         $s0, 0x10($sp)
    /* 150CC 80106CCC 0800E003 */  jr         $ra
    /* 150D0 80106CD0 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80106B1C
