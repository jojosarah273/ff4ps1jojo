nonmatching func_80124F28, 0x38

glabel func_80124F28
    /* 33328 80124F28 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3332C 80124F2C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 33330 80124F30 E7E4030C */  jal        func_800F939C
    /* 33334 80124F34 00000000 */   nop
    /* 33338 80124F38 CCE4030C */  jal        func_800F9330
    /* 3333C 80124F3C 00000000 */   nop
    /* 33340 80124F40 B6D9030C */  jal        func_800F66D8
    /* 33344 80124F44 60000424 */   addiu     $a0, $zero, 0x60
    /* 33348 80124F48 D893040C */  jal        func_80124F60
    /* 3334C 80124F4C 00000000 */   nop
    /* 33350 80124F50 1000BF8F */  lw         $ra, 0x10($sp)
    /* 33354 80124F54 00000000 */  nop
    /* 33358 80124F58 0800E003 */  jr         $ra
    /* 3335C 80124F5C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80124F28
