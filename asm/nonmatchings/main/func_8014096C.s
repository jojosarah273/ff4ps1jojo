nonmatching func_8014096C, 0x28

glabel func_8014096C
    /* 4ED6C 8014096C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4ED70 80140970 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4ED74 80140974 53D9030C */  jal        func_800F654C
    /* 4ED78 80140978 20000424 */   addiu     $a0, $zero, 0x20
    /* 4ED7C 8014097C 3902050C */  jal        func_801408E4
    /* 4ED80 80140980 00000000 */   nop
    /* 4ED84 80140984 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4ED88 80140988 00000000 */  nop
    /* 4ED8C 8014098C 0800E003 */  jr         $ra
    /* 4ED90 80140990 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014096C
