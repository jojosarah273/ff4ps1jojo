nonmatching func_8017091C, 0xC8

glabel func_8017091C
    /* 7ED1C 8017091C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7ED20 80170920 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7ED24 80170924 53D9030C */  jal        func_800F654C
    /* 7ED28 80170928 18000424 */   addiu     $a0, $zero, 0x18
    /* 7ED2C 8017092C 62E0030C */  jal        func_800F8188
    /* 7ED30 80170930 01430424 */   addiu     $a0, $zero, 0x4301
    /* 7ED34 80170934 77DC030C */  jal        func_800F71DC
    /* 7ED38 80170938 21200000 */   addu      $a0, $zero, $zero
    /* 7ED3C 8017093C 40E3030C */  jal        func_800F8D00
    /* 7ED40 80170940 16210424 */   addiu     $a0, $zero, 0x2116
    /* 7ED44 80170944 40DD030C */  jal        func_800F7500
    /* 7ED48 80170948 21200000 */   addu      $a0, $zero, $zero
  .L8017094C:
    /* 7ED4C 8017094C 53D9030C */  jal        func_800F654C
    /* 7ED50 80170950 80000424 */   addiu     $a0, $zero, 0x80
    /* 7ED54 80170954 62E0030C */  jal        func_800F8188
    /* 7ED58 80170958 15210424 */   addiu     $a0, $zero, 0x2115
    /* 7ED5C 8017095C 53D9030C */  jal        func_800F654C
    /* 7ED60 80170960 01000424 */   addiu     $a0, $zero, 0x1
    /* 7ED64 80170964 62E0030C */  jal        func_800F8188
    /* 7ED68 80170968 00430424 */   addiu     $a0, $zero, 0x4300
    /* 7ED6C 8017096C 77DC030C */  jal        func_800F71DC
    /* 7ED70 80170970 10000424 */   addiu     $a0, $zero, 0x10
    /* 7ED74 80170974 40E3030C */  jal        func_800F8D00
    /* 7ED78 80170978 05430424 */   addiu     $a0, $zero, 0x4305
    /* 7ED7C 8017097C 1AE6030C */  jal        func_800F9868
    /* 7ED80 80170980 21200000 */   addu      $a0, $zero, $zero
    /* 7ED84 80170984 DDE3030C */  jal        func_800F8F74
    /* 7ED88 80170988 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 7ED8C 8017098C DDE3030C */  jal        func_800F8F74
    /* 7ED90 80170990 15210424 */   addiu     $a0, $zero, 0x2115
    /* 7ED94 80170994 DDE3030C */  jal        func_800F8F74
    /* 7ED98 80170998 00430424 */   addiu     $a0, $zero, 0x4300
    /* 7ED9C 8017099C 77DC030C */  jal        func_800F71DC
    /* 7EDA0 801709A0 08000424 */   addiu     $a0, $zero, 0x8
    /* 7EDA4 801709A4 40E3030C */  jal        func_800F8D00
    /* 7EDA8 801709A8 05430424 */   addiu     $a0, $zero, 0x4305
    /* 7EDAC 801709AC 1AE6030C */  jal        func_800F9868
    /* 7EDB0 801709B0 21200000 */   addu      $a0, $zero, $zero
    /* 7EDB4 801709B4 EFD8030C */  jal        func_800F63BC
    /* 7EDB8 801709B8 00000000 */   nop
    /* 7EDBC 801709BC A4D6030C */  jal        func_800F5A90
    /* 7EDC0 801709C0 80010424 */   addiu     $a0, $zero, 0x180
    /* 7EDC4 801709C4 F5D4030C */  jal        func_800F53D4
    /* 7EDC8 801709C8 00000000 */   nop
    /* 7EDCC 801709CC DFFF4010 */  beqz       $v0, .L8017094C
    /* 7EDD0 801709D0 00000000 */   nop
    /* 7EDD4 801709D4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7EDD8 801709D8 00000000 */  nop
    /* 7EDDC 801709DC 0800E003 */  jr         $ra
    /* 7EDE0 801709E0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017091C
