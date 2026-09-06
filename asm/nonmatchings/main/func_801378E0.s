nonmatching func_801378E0, 0x58

glabel func_801378E0
    /* 45CE0 801378E0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 45CE4 801378E4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 45CE8 801378E8 59D9030C */  jal        func_800F6564
    /* 45CEC 801378EC 7A1B0424 */   addiu     $a0, $zero, 0x1B7A
    /* 45CF0 801378F0 0DD9030C */  jal        func_800F6434
    /* 45CF4 801378F4 02000424 */   addiu     $a0, $zero, 0x2
    /* 45CF8 801378F8 05004014 */  bnez       $v0, .L80137910
    /* 45CFC 801378FC 00000000 */   nop
    /* 45D00 80137900 77DC030C */  jal        func_800F71DC
    /* 45D04 80137904 58300424 */   addiu     $a0, $zero, 0x3058
    /* 45D08 80137908 46DE0408 */  j          .L80137918
    /* 45D0C 8013790C 00000000 */   nop
  .L80137910:
    /* 45D10 80137910 77DC030C */  jal        func_800F71DC
    /* 45D14 80137914 40300424 */   addiu     $a0, $zero, 0x3040
  .L80137918:
    /* 45D18 80137918 5BE3030C */  jal        func_800F8D6C
    /* 45D1C 8013791C 45000424 */   addiu     $a0, $zero, 0x45
    /* 45D20 80137920 AB7D040C */  jal        func_8011F6AC
    /* 45D24 80137924 00000000 */   nop
    /* 45D28 80137928 1000BF8F */  lw         $ra, 0x10($sp)
    /* 45D2C 8013792C 00000000 */  nop
    /* 45D30 80137930 0800E003 */  jr         $ra
    /* 45D34 80137934 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801378E0
