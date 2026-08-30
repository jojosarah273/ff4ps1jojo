nonmatching func_8010E050, 0x58

glabel func_8010E050
    /* 1C450 8010E050 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1C454 8010E054 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1C458 8010E058 53D9030C */  jal        func_800F654C
    /* 1C45C 8010E05C 80000424 */   addiu     $a0, $zero, 0x80
    /* 1C460 8010E060 62E0030C */  jal        func_800F8188
    /* 1C464 8010E064 00210424 */   addiu     $a0, $zero, 0x2100
    /* 1C468 8010E068 53D9030C */  jal        func_800F654C
    /* 1C46C 8010E06C 21200000 */   addu      $a0, $zero, $zero
    /* 1C470 8010E070 62E0030C */  jal        func_800F8188
    /* 1C474 8010E074 00420424 */   addiu     $a0, $zero, 0x4200
    /* 1C478 8010E078 53D9030C */  jal        func_800F654C
    /* 1C47C 8010E07C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 1C480 8010E080 62E0030C */  jal        func_800F8188
    /* 1C484 8010E084 40210424 */   addiu     $a0, $zero, 0x2140
    /* 1C488 8010E088 3438040C */  jal        func_8010E0D0
    /* 1C48C 8010E08C 00000000 */   nop
    /* 1C490 8010E090 977A040C */  jal        func_8011EA5C
    /* 1C494 8010E094 00000000 */   nop
    /* 1C498 8010E098 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C49C 8010E09C 00000000 */  nop
    /* 1C4A0 8010E0A0 0800E003 */  jr         $ra
    /* 1C4A4 8010E0A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E050
