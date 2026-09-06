nonmatching func_801442BC, 0x88

glabel func_801442BC
    /* 526BC 801442BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 526C0 801442C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 526C4 801442C4 DDE3030C */  jal        func_800F8F74
    /* 526C8 801442C8 26F30434 */   ori       $a0, $zero, 0xF326
    /* 526CC 801442CC DDE3030C */  jal        func_800F8F74
    /* 526D0 801442D0 85F40434 */   ori       $a0, $zero, 0xF485
    /* 526D4 801442D4 DEFB040C */  jal        func_8013EF78
    /* 526D8 801442D8 00000000 */   nop
    /* 526DC 801442DC 77DC030C */  jal        func_800F71DC
    /* 526E0 801442E0 78000424 */   addiu     $a0, $zero, 0x78
  .L801442E4:
    /* 526E4 801442E4 5601050C */  jal        func_80140558
    /* 526E8 801442E8 00000000 */   nop
    /* 526EC 801442EC 59D9030C */  jal        func_800F6564
    /* 526F0 801442F0 26F30434 */   ori       $a0, $zero, 0xF326
    /* 526F4 801442F4 7AD8030C */  jal        func_800F61E8
    /* 526F8 801442F8 00000000 */   nop
    /* 526FC 801442FC 92D0030C */  jal        func_800F4248
    /* 52700 80144300 0F000424 */   addiu     $a0, $zero, 0xF
    /* 52704 80144304 62E0030C */  jal        func_800F8188
    /* 52708 80144308 26F30434 */   ori       $a0, $zero, 0xF326
    /* 5270C 8014430C 92D7030C */  jal        func_800F5E48
    /* 52710 80144310 00000000 */   nop
    /* 52714 80144314 19D7030C */  jal        func_800F5C64
    /* 52718 80144318 02020424 */   addiu     $a0, $zero, 0x202
    /* 5271C 8014431C F1FF4014 */  bnez       $v0, .L801442E4
    /* 52720 80144320 00000000 */   nop
    /* 52724 80144324 53D9030C */  jal        func_800F654C
    /* 52728 80144328 10000424 */   addiu     $a0, $zero, 0x10
    /* 5272C 8014432C 62E0030C */  jal        func_800F8188
    /* 52730 80144330 26F30434 */   ori       $a0, $zero, 0xF326
    /* 52734 80144334 1000BF8F */  lw         $ra, 0x10($sp)
    /* 52738 80144338 00000000 */  nop
    /* 5273C 8014433C 0800E003 */  jr         $ra
    /* 52740 80144340 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801442BC
