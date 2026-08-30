nonmatching func_8010E338, 0x50

glabel func_8010E338
    /* 1C738 8010E338 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1C73C 8010E33C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1C740 8010E340 52F1030C */  jal        func_800FC548
    /* 1C744 8010E344 00000000 */   nop
    /* 1C748 8010E348 18D8050C */  jal        func_80176060
    /* 1C74C 8010E34C 00000000 */   nop
    /* 1C750 8010E350 12D5030C */  jal        func_800F5448
    /* 1C754 8010E354 00000000 */   nop
    /* 1C758 8010E358 53D9030C */  jal        func_800F654C
    /* 1C75C 8010E35C 21200000 */   addu      $a0, $zero, $zero
    /* 1C760 8010E360 62E0030C */  jal        func_800F8188
    /* 1C764 8010E364 00210424 */   addiu     $a0, $zero, 0x2100
    /* 1C768 8010E368 53D9030C */  jal        func_800F654C
    /* 1C76C 8010E36C 81000424 */   addiu     $a0, $zero, 0x81
    /* 1C770 8010E370 62E0030C */  jal        func_800F8188
    /* 1C774 8010E374 00420424 */   addiu     $a0, $zero, 0x4200
    /* 1C778 8010E378 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C77C 8010E37C 00000000 */  nop
    /* 1C780 8010E380 0800E003 */  jr         $ra
    /* 1C784 8010E384 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E338
