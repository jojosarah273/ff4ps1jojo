nonmatching func_8013AFA4, 0xA8

glabel func_8013AFA4
    /* 493A4 8013AFA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 493A8 8013AFA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 493AC 8013AFAC 59D9030C */  jal        func_800F6564
    /* 493B0 8013AFB0 AE160424 */   addiu     $a0, $zero, 0x16AE
    /* 493B4 8013AFB4 C1CE030C */  jal        func_800F3B04
    /* 493B8 8013AFB8 AF160424 */   addiu     $a0, $zero, 0x16AF
    /* 493BC 8013AFBC 35D5030C */  jal        func_800F54D4
    /* 493C0 8013AFC0 21204000 */   addu      $a0, $v0, $zero
    /* 493C4 8013AFC4 F5D4030C */  jal        func_800F53D4
    /* 493C8 8013AFC8 00000000 */   nop
    /* 493CC 8013AFCC 19004014 */  bnez       $v0, .L8013B034
    /* 493D0 8013AFD0 00000000 */   nop
    /* 493D4 8013AFD4 C1CE030C */  jal        func_800F3B04
    /* 493D8 8013AFD8 B0160424 */   addiu     $a0, $zero, 0x16B0
    /* 493DC 8013AFDC 35D5030C */  jal        func_800F54D4
    /* 493E0 8013AFE0 21204000 */   addu      $a0, $v0, $zero
    /* 493E4 8013AFE4 F5D4030C */  jal        func_800F53D4
    /* 493E8 8013AFE8 00000000 */   nop
    /* 493EC 8013AFEC 11004014 */  bnez       $v0, .L8013B034
    /* 493F0 8013AFF0 00000000 */   nop
    /* 493F4 8013AFF4 59D9030C */  jal        func_800F6564
    /* 493F8 8013AFF8 AF160424 */   addiu     $a0, $zero, 0x16AF
    /* 493FC 8013AFFC C1CE030C */  jal        func_800F3B04
    /* 49400 8013B000 B0160424 */   addiu     $a0, $zero, 0x16B0
    /* 49404 8013B004 35D5030C */  jal        func_800F54D4
    /* 49408 8013B008 21204000 */   addu      $a0, $v0, $zero
    /* 4940C 8013B00C F5D4030C */  jal        func_800F53D4
    /* 49410 8013B010 00000000 */   nop
    /* 49414 8013B014 07004014 */  bnez       $v0, .L8013B034
    /* 49418 8013B018 00000000 */   nop
    /* 4941C 8013B01C 68E5030C */  jal        func_800F95A0
    /* 49420 8013B020 00000000 */   nop
    /* 49424 8013B024 13EC040C */  jal        func_8013B04C
    /* 49428 8013B028 00000000 */   nop
    /* 4942C 8013B02C 0FEC0408 */  j          .L8013B03C
    /* 49430 8013B030 00000000 */   nop
  .L8013B034:
    /* 49434 8013B034 6788040C */  jal        func_8012219C
    /* 49438 8013B038 00000000 */   nop
  .L8013B03C:
    /* 4943C 8013B03C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 49440 8013B040 00000000 */  nop
    /* 49444 8013B044 0800E003 */  jr         $ra
    /* 49448 8013B048 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013AFA4
