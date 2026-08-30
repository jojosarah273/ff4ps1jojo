nonmatching func_80106860, 0x50

glabel func_80106860
    /* 14C60 80106860 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 14C64 80106864 1000BFAF */  sw         $ra, 0x10($sp)
    /* 14C68 80106868 0C1A040C */  jal        func_80106830
    /* 14C6C 8010686C 00000000 */   nop
    /* 14C70 80106870 53D9030C */  jal        func_800F654C
    /* 14C74 80106874 07000424 */   addiu     $a0, $zero, 0x7
    /* 14C78 80106878 93E0030C */  jal        func_800F824C
    /* 14C7C 8010687C 89000424 */   addiu     $a0, $zero, 0x89
  .L80106880:
    /* 14C80 80106880 DEF9030C */  jal        func_800FE778
    /* 14C84 80106884 00000000 */   nop
    /* 14C88 80106888 68D7030C */  jal        func_800F5DA0
    /* 14C8C 8010688C 89000424 */   addiu     $a0, $zero, 0x89
    /* 14C90 80106890 E3D6030C */  jal        func_800F5B8C
    /* 14C94 80106894 02020424 */   addiu     $a0, $zero, 0x202
    /* 14C98 80106898 F9FF4014 */  bnez       $v0, .L80106880
    /* 14C9C 8010689C 00000000 */   nop
    /* 14CA0 801068A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 14CA4 801068A4 00000000 */  nop
    /* 14CA8 801068A8 0800E003 */  jr         $ra
    /* 14CAC 801068AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80106860
