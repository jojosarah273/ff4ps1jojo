nonmatching func_80114880, 0xB8

glabel func_80114880
    /* 22C80 80114880 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 22C84 80114884 1000BFAF */  sw         $ra, 0x10($sp)
    /* 22C88 80114888 77DC030C */  jal        func_800F71DC
    /* 22C8C 8011488C 70000424 */   addiu     $a0, $zero, 0x70
    /* 22C90 80114890 5BE3030C */  jal        func_800F8D6C
    /* 22C94 80114894 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 22C98 80114898 77DC030C */  jal        func_800F71DC
    /* 22C9C 8011489C 70000424 */   addiu     $a0, $zero, 0x70
    /* 22CA0 801148A0 5BE3030C */  jal        func_800F8D6C
    /* 22CA4 801148A4 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 22CA8 801148A8 77DC030C */  jal        func_800F71DC
    /* 22CAC 801148AC D0000424 */   addiu     $a0, $zero, 0xD0
    /* 22CB0 801148B0 5BE3030C */  jal        func_800F8D6C
    /* 22CB4 801148B4 89000424 */   addiu     $a0, $zero, 0x89
  .L801148B8:
    /* 22CB8 801148B8 4653040C */  jal        func_80114D18
    /* 22CBC 801148BC 00000000 */   nop
    /* 22CC0 801148C0 9CDC030C */  jal        func_800F7270
    /* 22CC4 801148C4 89000424 */   addiu     $a0, $zero, 0x89
    /* 22CC8 801148C8 92D7030C */  jal        func_800F5E48
    /* 22CCC 801148CC 00000000 */   nop
    /* 22CD0 801148D0 5BE3030C */  jal        func_800F8D6C
    /* 22CD4 801148D4 89000424 */   addiu     $a0, $zero, 0x89
    /* 22CD8 801148D8 56D6030C */  jal        func_800F5958
    /* 22CDC 801148DC 80000424 */   addiu     $a0, $zero, 0x80
    /* 22CE0 801148E0 F0D4030C */  jal        func_800F53C0
    /* 22CE4 801148E4 00000000 */   nop
    /* 22CE8 801148E8 F3FF4014 */  bnez       $v0, .L801148B8
    /* 22CEC 801148EC 00000000 */   nop
    /* 22CF0 801148F0 9CDC030C */  jal        func_800F7270
    /* 22CF4 801148F4 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 22CF8 801148F8 92D7030C */  jal        func_800F5E48
    /* 22CFC 801148FC 00000000 */   nop
    /* 22D00 80114900 5BE3030C */  jal        func_800F8D6C
    /* 22D04 80114904 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 22D08 80114908 56D6030C */  jal        func_800F5958
    /* 22D0C 8011490C F0FF0434 */   ori       $a0, $zero, 0xFFF0
    /* 22D10 80114910 F5D4030C */  jal        func_800F53D4
    /* 22D14 80114914 00000000 */   nop
    /* 22D18 80114918 E7FF4010 */  beqz       $v0, .L801148B8
    /* 22D1C 8011491C 00000000 */   nop
    /* 22D20 80114920 977A040C */  jal        func_8011EA5C
    /* 22D24 80114924 00000000 */   nop
    /* 22D28 80114928 1000BF8F */  lw         $ra, 0x10($sp)
    /* 22D2C 8011492C 00000000 */  nop
    /* 22D30 80114930 0800E003 */  jr         $ra
    /* 22D34 80114934 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80114880
