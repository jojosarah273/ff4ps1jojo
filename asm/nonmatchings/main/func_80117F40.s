nonmatching func_80117F40, 0x38

glabel func_80117F40
    /* 26340 80117F40 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 26344 80117F44 1000BFAF */  sw         $ra, 0x10($sp)
    /* 26348 80117F48 62E0030C */  jal        func_800F8188
    /* 2634C 80117F4C 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 26350 80117F50 53D9030C */  jal        func_800F654C
    /* 26354 80117F54 01000424 */   addiu     $a0, $zero, 0x1
    /* 26358 80117F58 62E0030C */  jal        func_800F8188
    /* 2635C 80117F5C 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 26360 80117F60 4AA4050C */  jal        func_80169128
    /* 26364 80117F64 00000000 */   nop
    /* 26368 80117F68 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2636C 80117F6C 00000000 */  nop
    /* 26370 80117F70 0800E003 */  jr         $ra
    /* 26374 80117F74 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80117F40
