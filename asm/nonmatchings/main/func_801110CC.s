nonmatching func_801110CC, 0x68

glabel func_801110CC
    /* 1F4CC 801110CC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1F4D0 801110D0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1F4D4 801110D4 53D9030C */  jal        func_800F654C
    /* 1F4D8 801110D8 16000424 */   addiu     $a0, $zero, 0x16
    /* 1F4DC 801110DC 62E0030C */  jal        func_800F8188
    /* 1F4E0 801110E0 2C210424 */   addiu     $a0, $zero, 0x212C
    /* 1F4E4 801110E4 53D9030C */  jal        func_800F654C
    /* 1F4E8 801110E8 01000424 */   addiu     $a0, $zero, 0x1
    /* 1F4EC 801110EC 93E0030C */  jal        func_800F824C
    /* 1F4F0 801110F0 C9000424 */   addiu     $a0, $zero, 0xC9
    /* 1F4F4 801110F4 77DC030C */  jal        func_800F71DC
    /* 1F4F8 801110F8 21200000 */   addu      $a0, $zero, $zero
    /* 1F4FC 801110FC 5BE3030C */  jal        func_800F8D6C
    /* 1F500 80111100 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 1F504 80111104 77DC030C */  jal        func_800F71DC
    /* 1F508 80111108 E0020424 */   addiu     $a0, $zero, 0x2E0
    /* 1F50C 8011110C 5BE3030C */  jal        func_800F8D6C
    /* 1F510 80111110 60000424 */   addiu     $a0, $zero, 0x60
    /* 1F514 80111114 7144040C */  jal        func_801111C4
    /* 1F518 80111118 00000000 */   nop
    /* 1F51C 8011111C 977A040C */  jal        func_8011EA5C
    /* 1F520 80111120 00000000 */   nop
    /* 1F524 80111124 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1F528 80111128 00000000 */  nop
    /* 1F52C 8011112C 0800E003 */  jr         $ra
    /* 1F530 80111130 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801110CC
