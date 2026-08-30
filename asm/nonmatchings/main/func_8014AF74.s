nonmatching func_8014AF74, 0xD0

glabel func_8014AF74
    /* 59374 8014AF74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59378 8014AF78 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5937C 8014AF7C 59D9030C */  jal        func_800F6564
    /* 59380 8014AF80 C5340424 */   addiu     $a0, $zero, 0x34C5
    /* 59384 8014AF84 0DD9030C */  jal        func_800F6434
    /* 59388 8014AF88 02000424 */   addiu     $a0, $zero, 0x2
    /* 5938C 8014AF8C 05004014 */  bnez       $v0, .L8014AFA4
    /* 59390 8014AF90 00000000 */   nop
    /* 59394 8014AF94 3508050C */  jal        func_801420D4
    /* 59398 8014AF98 00000000 */   nop
    /* 5939C 8014AF9C 0D2C0508 */  j          .L8014B034
    /* 593A0 8014AFA0 00000000 */   nop
  .L8014AFA4:
    /* 593A4 8014AFA4 59D9030C */  jal        func_800F6564
    /* 593A8 8014AFA8 22350424 */   addiu     $a0, $zero, 0x3522
    /* 593AC 8014AFAC 0DD9030C */  jal        func_800F6434
    /* 593B0 8014AFB0 02000424 */   addiu     $a0, $zero, 0x2
    /* 593B4 8014AFB4 1F004014 */  bnez       $v0, .L8014B034
    /* 593B8 8014AFB8 00000000 */   nop
    /* 593BC 8014AFBC 6D2E050C */  jal        func_8014B9B4
    /* 593C0 8014AFC0 00000000 */   nop
    /* 593C4 8014AFC4 59D9030C */  jal        func_800F6564
    /* 593C8 8014AFC8 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 593CC 8014AFCC 80E4030C */  jal        func_800F9200
    /* 593D0 8014AFD0 00000000 */   nop
    /* 593D4 8014AFD4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 593D8 8014AFD8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 593DC 8014AFDC 00000000 */  nop
    /* 593E0 8014AFE0 00006290 */  lbu        $v0, 0x0($v1)
    /* 593E4 8014AFE4 C4340424 */  addiu      $a0, $zero, 0x34C4
    /* 593E8 8014AFE8 80004238 */  xori       $v0, $v0, 0x80
    /* 593EC 8014AFEC 62E0030C */  jal        func_800F8188
    /* 593F0 8014AFF0 000062A0 */   sb        $v0, 0x0($v1)
    /* 593F4 8014AFF4 59D9030C */  jal        func_800F6564
    /* 593F8 8014AFF8 49000424 */   addiu     $a0, $zero, 0x49
    /* 593FC 8014AFFC 80E4030C */  jal        func_800F9200
    /* 59400 8014B000 00000000 */   nop
    /* 59404 8014B004 112C050C */  jal        func_8014B044
    /* 59408 8014B008 00000000 */   nop
    /* 5940C 8014B00C 3508050C */  jal        func_801420D4
    /* 59410 8014B010 00000000 */   nop
    /* 59414 8014B014 F7E4030C */  jal        func_800F93DC
    /* 59418 8014B018 00000000 */   nop
    /* 5941C 8014B01C 62E0030C */  jal        func_800F8188
    /* 59420 8014B020 49000424 */   addiu     $a0, $zero, 0x49
    /* 59424 8014B024 F7E4030C */  jal        func_800F93DC
    /* 59428 8014B028 00000000 */   nop
    /* 5942C 8014B02C 62E0030C */  jal        func_800F8188
    /* 59430 8014B030 C4340424 */   addiu     $a0, $zero, 0x34C4
  .L8014B034:
    /* 59434 8014B034 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59438 8014B038 00000000 */  nop
    /* 5943C 8014B03C 0800E003 */  jr         $ra
    /* 59440 8014B040 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014AF74
