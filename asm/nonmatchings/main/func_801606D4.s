nonmatching func_801606D4, 0xA0

glabel func_801606D4
    /* 6EAD4 801606D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6EAD8 801606D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6EADC 801606DC 8CD9030C */  jal        func_800F6630
    /* 6EAE0 801606E0 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 6EAE4 801606E4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6EAE8 801606E8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6EAEC 801606EC 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 6EAF0 801606F0 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 6EAF4 801606F4 00004394 */  lhu        $v1, 0x0($v0)
    /* 6EAF8 801606F8 CD000424 */  addiu      $a0, $zero, 0xCD
    /* 6EAFC 801606FC 8CD9030C */  jal        func_800F6630
    /* 6EB00 80160700 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6EB04 80160704 92D0030C */  jal        func_800F4248
    /* 6EB08 80160708 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6EB0C 8016070C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6EB10 80160710 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6EB14 80160714 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6EB18 80160718 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6EB1C 8016071C 00004394 */  lhu        $v1, 0x0($v0)
    /* 6EB20 80160720 21200000 */  addu       $a0, $zero, $zero
    /* 6EB24 80160724 53D9030C */  jal        func_800F654C
    /* 6EB28 80160728 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6EB2C 8016072C 20D5030C */  jal        func_800F5480
    /* 6EB30 80160730 00000000 */   nop
  .L80160734:
    /* 6EB34 80160734 BADF030C */  jal        func_800F7EE8
    /* 6EB38 80160738 00000000 */   nop
    /* 6EB3C 8016073C 43DF030C */  jal        func_800F7D0C
    /* 6EB40 80160740 00000000 */   nop
    /* 6EB44 80160744 A8D7030C */  jal        func_800F5EA0
    /* 6EB48 80160748 00000000 */   nop
    /* 6EB4C 8016074C 19D7030C */  jal        func_800F5C64
    /* 6EB50 80160750 80800434 */   ori       $a0, $zero, 0x8080
    /* 6EB54 80160754 F7FF4014 */  bnez       $v0, .L80160734
    /* 6EB58 80160758 00000000 */   nop
    /* 6EB5C 8016075C DAE1030C */  jal        func_800F8768
    /* 6EB60 80160760 83380424 */   addiu     $a0, $zero, 0x3883
    /* 6EB64 80160764 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6EB68 80160768 00000000 */  nop
    /* 6EB6C 8016076C 0800E003 */  jr         $ra
    /* 6EB70 80160770 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801606D4
