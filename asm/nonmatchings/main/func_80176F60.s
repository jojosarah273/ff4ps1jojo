nonmatching func_80176F60, 0x28

glabel func_80176F60
    /* 85360 80176F60 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 85364 80176F64 1000BFAF */  sw         $ra, 0x10($sp)
    /* 85368 80176F68 EEE3030C */  jal        func_800F8FB8
    /* 8536C 80176F6C 52000424 */   addiu     $a0, $zero, 0x52
    /* 85370 80176F70 E2DB050C */  jal        func_80176F88
    /* 85374 80176F74 00000000 */   nop
    /* 85378 80176F78 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8537C 80176F7C 00000000 */  nop
    /* 85380 80176F80 0800E003 */  jr         $ra
    /* 85384 80176F84 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80176F60
