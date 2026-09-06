nonmatching func_8011117C, 0x48

glabel func_8011117C
    /* 1F57C 8011117C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1F580 80111180 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1F584 80111184 77DC030C */  jal        func_800F71DC
    /* 1F588 80111188 00010424 */   addiu     $a0, $zero, 0x100
    /* 1F58C 8011118C 5BE3030C */  jal        func_800F8D6C
    /* 1F590 80111190 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 1F594 80111194 77DC030C */  jal        func_800F71DC
    /* 1F598 80111198 E0010424 */   addiu     $a0, $zero, 0x1E0
    /* 1F59C 8011119C 5BE3030C */  jal        func_800F8D6C
    /* 1F5A0 801111A0 60000424 */   addiu     $a0, $zero, 0x60
    /* 1F5A4 801111A4 7144040C */  jal        func_801111C4
    /* 1F5A8 801111A8 00000000 */   nop
    /* 1F5AC 801111AC 977A040C */  jal        func_8011EA5C
    /* 1F5B0 801111B0 00000000 */   nop
    /* 1F5B4 801111B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1F5B8 801111B8 00000000 */  nop
    /* 1F5BC 801111BC 0800E003 */  jr         $ra
    /* 1F5C0 801111C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011117C
