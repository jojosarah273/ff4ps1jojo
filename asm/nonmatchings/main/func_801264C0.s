nonmatching func_801264C0, 0x28

glabel func_801264C0
    /* 348C0 801264C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 348C4 801264C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 348C8 801264C8 C87C040C */  jal        func_8011F320
    /* 348CC 801264CC 00000000 */   nop
    /* 348D0 801264D0 3A99040C */  jal        func_801264E8
    /* 348D4 801264D4 00000000 */   nop
    /* 348D8 801264D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 348DC 801264DC 00000000 */  nop
    /* 348E0 801264E0 0800E003 */  jr         $ra
    /* 348E4 801264E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801264C0
