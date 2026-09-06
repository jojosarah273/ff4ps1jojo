nonmatching func_80160B8C, 0xA0

glabel func_80160B8C
    /* 6EF8C 80160B8C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6EF90 80160B90 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6EF94 80160B94 59D9030C */  jal        func_800F6564
    /* 6EF98 80160B98 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6EF9C 80160B9C 5DD5030C */  jal        func_800F5574
    /* 6EFA0 80160BA0 02000424 */   addiu     $a0, $zero, 0x2
    /* 6EFA4 80160BA4 F5D4030C */  jal        func_800F53D4
    /* 6EFA8 80160BA8 00000000 */   nop
    /* 6EFAC 80160BAC 1B004010 */  beqz       $v0, .L80160C1C
    /* 6EFB0 80160BB0 00000000 */   nop
    /* 6EFB4 80160BB4 59D9030C */  jal        func_800F6564
    /* 6EFB8 80160BB8 21270424 */   addiu     $a0, $zero, 0x2721
    /* 6EFBC 80160BBC A0D0030C */  jal        func_800F4280
    /* 6EFC0 80160BC0 A2280424 */   addiu     $a0, $zero, 0x28A2
    /* 6EFC4 80160BC4 48D0030C */  jal        func_800F4120
    /* 6EFC8 80160BC8 02000424 */   addiu     $a0, $zero, 0x2
    /* 6EFCC 80160BCC 07004014 */  bnez       $v0, .L80160BEC
    /* 6EFD0 80160BD0 00000000 */   nop
    /* 6EFD4 80160BD4 53D9030C */  jal        func_800F654C
    /* 6EFD8 80160BD8 08000424 */   addiu     $a0, $zero, 0x8
    /* 6EFDC 80160BDC 62E0030C */  jal        func_800F8188
    /* 6EFE0 80160BE0 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6EFE4 80160BE4 07830508 */  j          .L80160C1C
    /* 6EFE8 80160BE8 00000000 */   nop
  .L80160BEC:
    /* 6EFEC 80160BEC 59D9030C */  jal        func_800F6564
    /* 6EFF0 80160BF0 20270424 */   addiu     $a0, $zero, 0x2720
    /* 6EFF4 80160BF4 A0D0030C */  jal        func_800F4280
    /* 6EFF8 80160BF8 A2280424 */   addiu     $a0, $zero, 0x28A2
    /* 6EFFC 80160BFC 48D0030C */  jal        func_800F4120
    /* 6F000 80160C00 02000424 */   addiu     $a0, $zero, 0x2
    /* 6F004 80160C04 05004014 */  bnez       $v0, .L80160C1C
    /* 6F008 80160C08 00000000 */   nop
    /* 6F00C 80160C0C 53D9030C */  jal        func_800F654C
    /* 6F010 80160C10 04000424 */   addiu     $a0, $zero, 0x4
    /* 6F014 80160C14 62E0030C */  jal        func_800F8188
    /* 6F018 80160C18 FE380424 */   addiu     $a0, $zero, 0x38FE
  .L80160C1C:
    /* 6F01C 80160C1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6F020 80160C20 00000000 */  nop
    /* 6F024 80160C24 0800E003 */  jr         $ra
    /* 6F028 80160C28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80160B8C
