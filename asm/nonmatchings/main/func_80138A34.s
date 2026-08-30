nonmatching func_80138A34, 0x38

glabel func_80138A34
    /* 46E34 80138A34 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 46E38 80138A38 1000BFAF */  sw         $ra, 0x10($sp)
    /* 46E3C 80138A3C 62E0030C */  jal        func_800F8188
    /* 46E40 80138A40 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 46E44 80138A44 53D9030C */  jal        func_800F654C
    /* 46E48 80138A48 01000424 */   addiu     $a0, $zero, 0x1
    /* 46E4C 80138A4C 62E0030C */  jal        func_800F8188
    /* 46E50 80138A50 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 46E54 80138A54 4AA4050C */  jal        func_80169128
    /* 46E58 80138A58 00000000 */   nop
    /* 46E5C 80138A5C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 46E60 80138A60 00000000 */  nop
    /* 46E64 80138A64 0800E003 */  jr         $ra
    /* 46E68 80138A68 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80138A34
