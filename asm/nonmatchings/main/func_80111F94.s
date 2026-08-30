nonmatching func_80111F94, 0x38

glabel func_80111F94
    /* 20394 80111F94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 20398 80111F98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2039C 80111F9C 77DC030C */  jal        func_800F71DC
    /* 203A0 80111FA0 21200000 */   addu      $a0, $zero, $zero
    /* 203A4 80111FA4 40E3030C */  jal        func_800F8D00
    /* 203A8 80111FA8 2C170424 */   addiu     $a0, $zero, 0x172C
    /* 203AC 80111FAC F347040C */  jal        func_80111FCC
    /* 203B0 80111FB0 00000000 */   nop
    /* 203B4 80111FB4 977A040C */  jal        func_8011EA5C
    /* 203B8 80111FB8 00000000 */   nop
    /* 203BC 80111FBC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 203C0 80111FC0 00000000 */  nop
    /* 203C4 80111FC4 0800E003 */  jr         $ra
    /* 203C8 80111FC8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80111F94
