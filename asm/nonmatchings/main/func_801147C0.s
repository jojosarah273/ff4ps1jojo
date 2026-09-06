nonmatching func_801147C0, 0xC0

glabel func_801147C0
    /* 22BC0 801147C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 22BC4 801147C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 22BC8 801147C8 77DC030C */  jal        func_800F71DC
    /* 22BCC 801147CC 00010424 */   addiu     $a0, $zero, 0x100
    /* 22BD0 801147D0 5BE3030C */  jal        func_800F8D6C
    /* 22BD4 801147D4 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 22BD8 801147D8 77DC030C */  jal        func_800F71DC
    /* 22BDC 801147DC 70000424 */   addiu     $a0, $zero, 0x70
    /* 22BE0 801147E0 5BE3030C */  jal        func_800F8D6C
    /* 22BE4 801147E4 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 22BE8 801147E8 77DC030C */  jal        func_800F71DC
    /* 22BEC 801147EC D0000424 */   addiu     $a0, $zero, 0xD0
    /* 22BF0 801147F0 5BE3030C */  jal        func_800F8D6C
    /* 22BF4 801147F4 89000424 */   addiu     $a0, $zero, 0x89
  .L801147F8:
    /* 22BF8 801147F8 4653040C */  jal        func_80114D18
    /* 22BFC 801147FC 00000000 */   nop
    /* 22C00 80114800 9CDC030C */  jal        func_800F7270
    /* 22C04 80114804 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 22C08 80114808 92D7030C */  jal        func_800F5E48
    /* 22C0C 8011480C 00000000 */   nop
    /* 22C10 80114810 5BE3030C */  jal        func_800F8D6C
    /* 22C14 80114814 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 22C18 80114818 56D6030C */  jal        func_800F5958
    /* 22C1C 8011481C 70000424 */   addiu     $a0, $zero, 0x70
    /* 22C20 80114820 F0D4030C */  jal        func_800F53C0
    /* 22C24 80114824 00000000 */   nop
    /* 22C28 80114828 05004014 */  bnez       $v0, .L80114840
    /* 22C2C 8011482C 00000000 */   nop
    /* 22C30 80114830 77DC030C */  jal        func_800F71DC
    /* 22C34 80114834 70000424 */   addiu     $a0, $zero, 0x70
    /* 22C38 80114838 5BE3030C */  jal        func_800F8D6C
    /* 22C3C 8011483C 2C000424 */   addiu     $a0, $zero, 0x2C
  .L80114840:
    /* 22C40 80114840 9CDC030C */  jal        func_800F7270
    /* 22C44 80114844 89000424 */   addiu     $a0, $zero, 0x89
    /* 22C48 80114848 92D7030C */  jal        func_800F5E48
    /* 22C4C 8011484C 00000000 */   nop
    /* 22C50 80114850 5BE3030C */  jal        func_800F8D6C
    /* 22C54 80114854 89000424 */   addiu     $a0, $zero, 0x89
    /* 22C58 80114858 19D7030C */  jal        func_800F5C64
    /* 22C5C 8011485C 02020424 */   addiu     $a0, $zero, 0x202
    /* 22C60 80114860 E5FF4014 */  bnez       $v0, .L801147F8
    /* 22C64 80114864 00000000 */   nop
    /* 22C68 80114868 977A040C */  jal        func_8011EA5C
    /* 22C6C 8011486C 00000000 */   nop
    /* 22C70 80114870 1000BF8F */  lw         $ra, 0x10($sp)
    /* 22C74 80114874 00000000 */  nop
    /* 22C78 80114878 0800E003 */  jr         $ra
    /* 22C7C 8011487C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801147C0
