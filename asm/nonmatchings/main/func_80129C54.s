nonmatching func_80129C54, 0xD8

glabel func_80129C54
    /* 38054 80129C54 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 38058 80129C58 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3805C 80129C5C CCE4030C */  jal        func_800F9330
    /* 38060 80129C60 00000000 */   nop
    /* 38064 80129C64 E7E4030C */  jal        func_800F939C
    /* 38068 80129C68 00000000 */   nop
    /* 3806C 80129C6C 59D9030C */  jal        func_800F6564
    /* 38070 80129C70 491B0424 */   addiu     $a0, $zero, 0x1B49
    /* 38074 80129C74 0DD9030C */  jal        func_800F6434
    /* 38078 80129C78 02000424 */   addiu     $a0, $zero, 0x2
    /* 3807C 80129C7C 05004014 */  bnez       $v0, .L80129C94
    /* 38080 80129C80 00000000 */   nop
    /* 38084 80129C84 40DD030C */  jal        func_800F7500
    /* 38088 80129C88 52010424 */   addiu     $a0, $zero, 0x152
    /* 3808C 80129C8C 27A70408 */  j          .L80129C9C
    /* 38090 80129C90 00000000 */   nop
  .L80129C94:
    /* 38094 80129C94 40DD030C */  jal        func_800F7500
    /* 38098 80129C98 E0000424 */   addiu     $a0, $zero, 0xE0
  .L80129C9C:
    /* 3809C 80129C9C 77DC030C */  jal        func_800F71DC
    /* 380A0 80129CA0 0A1B0424 */   addiu     $a0, $zero, 0x1B0A
    /* 380A4 80129CA4 53D9030C */  jal        func_800F654C
    /* 380A8 80129CA8 06000424 */   addiu     $a0, $zero, 0x6
    /* 380AC 80129CAC 93E0030C */  jal        func_800F824C
    /* 380B0 80129CB0 45000424 */   addiu     $a0, $zero, 0x45
  .L80129CB4:
    /* 380B4 80129CB4 DADA030C */  jal        func_800F6B68
    /* 380B8 80129CB8 21200000 */   addu      $a0, $zero, $zero
    /* 380BC 80129CBC D9D8030C */  jal        func_800F6364
    /* 380C0 80129CC0 00000000 */   nop
    /* 380C4 80129CC4 6D91040C */  jal        func_801245B4
    /* 380C8 80129CC8 00000000 */   nop
    /* 380CC 80129CCC 58E2030C */  jal        func_800F8960
    /* 380D0 80129CD0 00C60434 */   ori       $a0, $zero, 0xC600
    /* 380D4 80129CD4 52CF030C */  jal        func_800F3D48
    /* 380D8 80129CD8 00000000 */   nop
    /* 380DC 80129CDC 58E2030C */  jal        func_800F8960
    /* 380E0 80129CE0 40C60434 */   ori       $a0, $zero, 0xC640
    /* 380E4 80129CE4 EFD8030C */  jal        func_800F63BC
    /* 380E8 80129CE8 00000000 */   nop
    /* 380EC 80129CEC EFD8030C */  jal        func_800F63BC
    /* 380F0 80129CF0 00000000 */   nop
    /* 380F4 80129CF4 68D7030C */  jal        func_800F5DA0
    /* 380F8 80129CF8 45000424 */   addiu     $a0, $zero, 0x45
    /* 380FC 80129CFC E3D6030C */  jal        func_800F5B8C
    /* 38100 80129D00 02020424 */   addiu     $a0, $zero, 0x202
    /* 38104 80129D04 EBFF4014 */  bnez       $v0, .L80129CB4
    /* 38108 80129D08 00000000 */   nop
    /* 3810C 80129D0C 83E5030C */  jal        func_800F960C
    /* 38110 80129D10 00000000 */   nop
    /* 38114 80129D14 68E5030C */  jal        func_800F95A0
    /* 38118 80129D18 00000000 */   nop
    /* 3811C 80129D1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 38120 80129D20 00000000 */  nop
    /* 38124 80129D24 0800E003 */  jr         $ra
    /* 38128 80129D28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80129C54
