nonmatching func_80111EF4, 0x40

glabel func_80111EF4
    /* 202F4 80111EF4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 202F8 80111EF8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 202FC 80111EFC 53D9030C */  jal        func_800F654C
    /* 20300 80111F00 01000424 */   addiu     $a0, $zero, 0x1
    /* 20304 80111F04 62E0030C */  jal        func_800F8188
    /* 20308 80111F08 28170424 */   addiu     $a0, $zero, 0x1728
    /* 2030C 80111F0C 77DC030C */  jal        func_800F71DC
    /* 20310 80111F10 DE380424 */   addiu     $a0, $zero, 0x38DE
    /* 20314 80111F14 40E3030C */  jal        func_800F8D00
    /* 20318 80111F18 29170424 */   addiu     $a0, $zero, 0x1729
    /* 2031C 80111F1C 977A040C */  jal        func_8011EA5C
    /* 20320 80111F20 00000000 */   nop
    /* 20324 80111F24 1000BF8F */  lw         $ra, 0x10($sp)
    /* 20328 80111F28 00000000 */  nop
    /* 2032C 80111F2C 0800E003 */  jr         $ra
    /* 20330 80111F30 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80111EF4
