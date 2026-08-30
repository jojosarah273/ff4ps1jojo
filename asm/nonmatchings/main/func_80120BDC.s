nonmatching func_80120BDC, 0xC8

glabel func_80120BDC
    /* 2EFDC 80120BDC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2EFE0 80120BE0 1000BFAF */  sw         $ra, 0x10($sp)
  .L80120BE4:
    /* 2EFE4 80120BE4 C87C040C */  jal        func_8011F320
    /* 2EFE8 80120BE8 00000000 */   nop
    /* 2EFEC 80120BEC 8D7B040C */  jal        func_8011EE34
    /* 2EFF0 80120BF0 00000000 */   nop
    /* 2EFF4 80120BF4 A0008287 */  lh         $v0, %gp_rel(D_8019ED9C)($gp)
    /* 2EFF8 80120BF8 00000000 */  nop
    /* 2EFFC 80120BFC 0B004010 */  beqz       $v0, .L80120C2C
    /* 2F000 80120C00 00000000 */   nop
    /* 2F004 80120C04 D9ED040C */  jal        func_8013B764
    /* 2F008 80120C08 00000000 */   nop
    /* 2F00C 80120C0C 8CD9030C */  jal        func_800F6630
    /* 2F010 80120C10 45000424 */   addiu     $a0, $zero, 0x45
    /* 2F014 80120C14 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 2F018 80120C18 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 2F01C 80120C1C 00000000 */  nop
    /* 2F020 80120C20 00004490 */  lbu        $a0, 0x0($v0)
    /* 2F024 80120C24 EEED040C */  jal        func_8013B7B8
    /* 2F028 80120C28 00000000 */   nop
  .L80120C2C:
    /* 2F02C 80120C2C 91E5030C */  jal        func_800F9644
    /* 2F030 80120C30 20000424 */   addiu     $a0, $zero, 0x20
    /* 2F034 80120C34 96D9030C */  jal        func_800F6658
    /* 2F038 80120C38 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 2F03C 80120C3C 04D5030C */  jal        func_800F5410
    /* 2F040 80120C40 00000000 */   nop
    /* 2F044 80120C44 19D0030C */  jal        func_800F4064
    /* 2F048 80120C48 40000424 */   addiu     $a0, $zero, 0x40
    /* 2F04C 80120C4C 9DE0030C */  jal        func_800F8274
    /* 2F050 80120C50 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 2F054 80120C54 96D9030C */  jal        func_800F6658
    /* 2F058 80120C58 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2F05C 80120C5C 04D5030C */  jal        func_800F5410
    /* 2F060 80120C60 00000000 */   nop
    /* 2F064 80120C64 19D0030C */  jal        func_800F4064
    /* 2F068 80120C68 80000424 */   addiu     $a0, $zero, 0x80
    /* 2F06C 80120C6C 9DE0030C */  jal        func_800F8274
    /* 2F070 80120C70 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2F074 80120C74 98E5030C */  jal        func_800F9660
    /* 2F078 80120C78 20000424 */   addiu     $a0, $zero, 0x20
    /* 2F07C 80120C7C 68D7030C */  jal        func_800F5DA0
    /* 2F080 80120C80 45000424 */   addiu     $a0, $zero, 0x45
    /* 2F084 80120C84 E3D6030C */  jal        func_800F5B8C
    /* 2F088 80120C88 02020424 */   addiu     $a0, $zero, 0x202
    /* 2F08C 80120C8C D5FF4014 */  bnez       $v0, .L80120BE4
    /* 2F090 80120C90 00000000 */   nop
    /* 2F094 80120C94 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2F098 80120C98 00000000 */  nop
    /* 2F09C 80120C9C 0800E003 */  jr         $ra
    /* 2F0A0 80120CA0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80120BDC
