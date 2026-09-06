nonmatching func_8011107C, 0x50

glabel func_8011107C
    /* 1F47C 8011107C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1F480 80111080 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1F484 80111084 53D9030C */  jal        func_800F654C
    /* 1F488 80111088 01000424 */   addiu     $a0, $zero, 0x1
    /* 1F48C 8011108C 62E0030C */  jal        func_800F8188
    /* 1F490 80111090 1F170424 */   addiu     $a0, $zero, 0x171F
    /* 1F494 80111094 62E0030C */  jal        func_800F8188
    /* 1F498 80111098 1C170424 */   addiu     $a0, $zero, 0x171C
    /* 1F49C 8011109C EEE3030C */  jal        func_800F8FB8
    /* 1F4A0 801110A0 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 1F4A4 801110A4 77DC030C */  jal        func_800F71DC
    /* 1F4A8 801110A8 66520424 */   addiu     $a0, $zero, 0x5266
    /* 1F4AC 801110AC 40E3030C */  jal        func_800F8D00
    /* 1F4B0 801110B0 1D170424 */   addiu     $a0, $zero, 0x171D
    /* 1F4B4 801110B4 977A040C */  jal        func_8011EA5C
    /* 1F4B8 801110B8 00000000 */   nop
    /* 1F4BC 801110BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1F4C0 801110C0 00000000 */  nop
    /* 1F4C4 801110C4 0800E003 */  jr         $ra
    /* 1F4C8 801110C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011107C
