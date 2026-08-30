nonmatching func_80100BE0, 0x170

glabel func_80100BE0
    /* EFE0 80100BE0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* EFE4 80100BE4 1000BFAF */  sw         $ra, 0x10($sp)
    /* EFE8 80100BE8 59D9030C */  jal        func_800F6564
    /* EFEC 80100BEC 11070424 */   addiu     $a0, $zero, 0x711
    /* EFF0 80100BF0 0DD9030C */  jal        func_800F6434
    /* EFF4 80100BF4 02020424 */   addiu     $a0, $zero, 0x202
    /* EFF8 80100BF8 51004010 */  beqz       $v0, .L80100D40
    /* EFFC 80100BFC 00000000 */   nop
    /* F000 80100C00 CC02040C */  jal        func_80100B30
    /* F004 80100C04 00000000 */   nop
    /* F008 80100C08 40DD030C */  jal        func_800F7500
    /* F00C 80100C0C 21200000 */   addu      $a0, $zero, $zero
  .L80100C10:
    /* F010 80100C10 9CDC030C */  jal        func_800F7270
    /* F014 80100C14 3D000424 */   addiu     $a0, $zero, 0x3D
    /* F018 80100C18 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* F01C 80100C1C 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* F020 80100C20 00004390 */  lbu        $v1, 0x0($v0)
    /* F024 80100C24 04D5030C */  jal        func_800F5410
    /* F028 80100C28 000083A0 */   sb        $v1, 0x0($a0)
    /* F02C 80100C2C C1CE030C */  jal        func_800F3B04
    /* F030 80100C30 E70F0424 */   addiu     $a0, $zero, 0xFE7
    /* F034 80100C34 CECF030C */  jal        func_800F3F38
    /* F038 80100C38 21204000 */   addu      $a0, $v0, $zero
    /* F03C 80100C3C 62E0030C */  jal        func_800F8188
    /* F040 80100C40 FC080424 */   addiu     $a0, $zero, 0x8FC
    /* F044 80100C44 E7E4030C */  jal        func_800F939C
    /* F048 80100C48 00000000 */   nop
    /* F04C 80100C4C 5E02040C */  jal        func_80100978
    /* F050 80100C50 00000000 */   nop
    /* F054 80100C54 83E5030C */  jal        func_800F960C
    /* F058 80100C58 00000000 */   nop
    /* F05C 80100C5C 5DD5030C */  jal        func_800F5574
    /* F060 80100C60 21200000 */   addu      $a0, $zero, $zero
    /* F064 80100C64 F5D4030C */  jal        func_800F53D4
    /* F068 80100C68 00000000 */   nop
    /* F06C 80100C6C 1D004014 */  bnez       $v0, .L80100CE4
    /* F070 80100C70 00000000 */   nop
    /* F074 80100C74 9CDC030C */  jal        func_800F7270
    /* F078 80100C78 3D000424 */   addiu     $a0, $zero, 0x3D
    /* F07C 80100C7C 1500043C */  lui        $a0, (0x158500 >> 16)
    /* F080 80100C80 1ADB030C */  jal        func_800F6C68
    /* F084 80100C84 00858434 */   ori       $a0, $a0, (0x158500 & 0xFFFF)
    /* F088 80100C88 93E0030C */  jal        func_800F824C
    /* F08C 80100C8C 18000424 */   addiu     $a0, $zero, 0x18
    /* F090 80100C90 1500043C */  lui        $a0, (0x158501 >> 16)
    /* F094 80100C94 1ADB030C */  jal        func_800F6C68
    /* F098 80100C98 01858434 */   ori       $a0, $a0, (0x158501 & 0xFFFF)
    /* F09C 80100C9C 93E0030C */  jal        func_800F824C
    /* F0A0 80100CA0 19000424 */   addiu     $a0, $zero, 0x19
    /* F0A4 80100CA4 9CDC030C */  jal        func_800F7270
    /* F0A8 80100CA8 18000424 */   addiu     $a0, $zero, 0x18
    /* F0AC 80100CAC 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* F0B0 80100CB0 1ADB030C */  jal        func_800F6C68
    /* F0B4 80100CB4 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* F0B8 80100CB8 5DD5030C */  jal        func_800F5574
    /* F0BC 80100CBC 78000424 */   addiu     $a0, $zero, 0x78
    /* F0C0 80100CC0 F5D4030C */  jal        func_800F53D4
    /* F0C4 80100CC4 00000000 */   nop
    /* F0C8 80100CC8 06004010 */  beqz       $v0, .L80100CE4
    /* F0CC 80100CCC 00000000 */   nop
    /* F0D0 80100CD0 53D9030C */  jal        func_800F654C
    /* F0D4 80100CD4 77000424 */   addiu     $a0, $zero, 0x77
    /* F0D8 80100CD8 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* F0DC 80100CDC 17E2030C */  jal        func_800F885C
    /* F0E0 80100CE0 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
  .L80100CE4:
    /* F0E4 80100CE4 9CDC030C */  jal        func_800F7270
    /* F0E8 80100CE8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* F0EC 80100CEC 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* F0F0 80100CF0 00000000 */  nop
    /* F0F4 80100CF4 00006294 */  lhu        $v0, 0x0($v1)
    /* F0F8 80100CF8 3D000424 */  addiu      $a0, $zero, 0x3D
    /* F0FC 80100CFC 05004224 */  addiu      $v0, $v0, 0x5
    /* F100 80100D00 5BE3030C */  jal        func_800F8D6C
    /* F104 80100D04 000062A4 */   sh        $v0, 0x0($v1)
    /* F108 80100D08 EFD8030C */  jal        func_800F63BC
    /* F10C 80100D0C 00000000 */   nop
    /* F110 80100D10 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* F114 80100D14 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* F118 80100D18 00004390 */  lbu        $v1, 0x0($v0)
    /* F11C 80100D1C 11070424 */  addiu      $a0, $zero, 0x711
    /* F120 80100D20 C1CE030C */  jal        func_800F3B04
    /* F124 80100D24 0000A3A0 */   sb        $v1, 0x0($a1)
    /* F128 80100D28 35D5030C */  jal        func_800F54D4
    /* F12C 80100D2C 21204000 */   addu      $a0, $v0, $zero
    /* F130 80100D30 F5D4030C */  jal        func_800F53D4
    /* F134 80100D34 00000000 */   nop
    /* F138 80100D38 B5FF4010 */  beqz       $v0, .L80100C10
    /* F13C 80100D3C 00000000 */   nop
  .L80100D40:
    /* F140 80100D40 1000BF8F */  lw         $ra, 0x10($sp)
    /* F144 80100D44 00000000 */  nop
    /* F148 80100D48 0800E003 */  jr         $ra
    /* F14C 80100D4C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80100BE0
