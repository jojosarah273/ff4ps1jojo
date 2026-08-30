nonmatching func_801490AC, 0x20

glabel func_801490AC
    /* 574AC 801490AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 574B0 801490B0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 574B4 801490B4 3324050C */  jal        func_801490CC
    /* 574B8 801490B8 00000000 */   nop
    /* 574BC 801490BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 574C0 801490C0 00000000 */  nop
    /* 574C4 801490C4 0800E003 */  jr         $ra
    /* 574C8 801490C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801490AC
