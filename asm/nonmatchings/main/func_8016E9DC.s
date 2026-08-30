nonmatching func_8016E9DC, 0x20

glabel func_8016E9DC
    /* 7CDDC 8016E9DC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7CDE0 8016E9E0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7CDE4 8016E9E4 59BB050C */  jal        func_8016ED64
    /* 7CDE8 8016E9E8 00000000 */   nop
    /* 7CDEC 8016E9EC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7CDF0 8016E9F0 00000000 */  nop
    /* 7CDF4 8016E9F4 0800E003 */  jr         $ra
    /* 7CDF8 8016E9F8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016E9DC
