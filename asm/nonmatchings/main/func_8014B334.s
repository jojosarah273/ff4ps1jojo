nonmatching func_8014B334, 0x38

glabel func_8014B334
    /* 59734 8014B334 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59738 8014B338 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5973C 8014B33C 40DD030C */  jal        func_800F7500
    /* 59740 8014B340 80E30434 */   ori       $a0, $zero, 0xE380
    /* 59744 8014B344 A52C050C */  jal        func_8014B294
    /* 59748 8014B348 00000000 */   nop
    /* 5974C 8014B34C E107050C */  jal        func_80141F84
    /* 59750 8014B350 00000000 */   nop
    /* 59754 8014B354 FD54020C */  jal        func_800953F4
    /* 59758 8014B358 00000000 */   nop
    /* 5975C 8014B35C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59760 8014B360 00000000 */  nop
    /* 59764 8014B364 0800E003 */  jr         $ra
    /* 59768 8014B368 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B334
