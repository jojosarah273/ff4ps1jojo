nonmatching func_8014D568, 0x38

glabel func_8014D568
    /* 5B968 8014D568 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B96C 8014D56C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B970 8014D570 62E0030C */  jal        func_800F8188
    /* 5B974 8014D574 7FF40434 */   ori       $a0, $zero, 0xF47F
    /* 5B978 8014D578 CCE4030C */  jal        func_800F9330
    /* 5B97C 8014D57C 00000000 */   nop
    /* 5B980 8014D580 E7E4030C */  jal        func_800F939C
    /* 5B984 8014D584 00000000 */   nop
    /* 5B988 8014D588 6835050C */  jal        func_8014D5A0
    /* 5B98C 8014D58C 00000000 */   nop
    /* 5B990 8014D590 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B994 8014D594 00000000 */  nop
    /* 5B998 8014D598 0800E003 */  jr         $ra
    /* 5B99C 8014D59C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D568
