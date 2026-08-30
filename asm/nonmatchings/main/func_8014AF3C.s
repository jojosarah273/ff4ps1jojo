nonmatching func_8014AF3C, 0x38

glabel func_8014AF3C
    /* 5933C 8014AF3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59340 8014AF40 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59344 8014AF44 59D9030C */  jal        func_800F6564
    /* 59348 8014AF48 31F40434 */   ori       $a0, $zero, 0xF431
    /* 5934C 8014AF4C 62E0030C */  jal        func_800F8188
    /* 59350 8014AF50 49000424 */   addiu     $a0, $zero, 0x49
    /* 59354 8014AF54 84DC030C */  jal        func_800F7210
    /* 59358 8014AF58 2FF40434 */   ori       $a0, $zero, 0xF42F
    /* 5935C 8014AF5C 40E3030C */  jal        func_800F8D00
    /* 59360 8014AF60 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 59364 8014AF64 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59368 8014AF68 00000000 */  nop
    /* 5936C 8014AF6C 0800E003 */  jr         $ra
    /* 59370 8014AF70 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014AF3C
