nonmatching func_80152E54, 0x58

glabel func_80152E54
    /* 61254 80152E54 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 61258 80152E58 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6125C 80152E5C 91E5030C */  jal        func_800F9644
    /* 61260 80152E60 20000424 */   addiu     $a0, $zero, 0x20
    /* 61264 80152E64 20D5030C */  jal        func_800F5480
    /* 61268 80152E68 00000000 */   nop
    /* 6126C 80152E6C 63D9030C */  jal        func_800F658C
    /* 61270 80152E70 5E390424 */   addiu     $a0, $zero, 0x395E
    /* 61274 80152E74 C1CE030C */  jal        func_800F3B04
    /* 61278 80152E78 60390424 */   addiu     $a0, $zero, 0x3960
    /* 6127C 80152E7C F3DF030C */  jal        func_800F7FCC
    /* 61280 80152E80 21204000 */   addu      $a0, $v0, $zero
    /* 61284 80152E84 6CE0030C */  jal        func_800F81B0
    /* 61288 80152E88 62390424 */   addiu     $a0, $zero, 0x3962
    /* 6128C 80152E8C C7E5030C */  jal        func_800F971C
    /* 61290 80152E90 00000000 */   nop
    /* 61294 80152E94 98E5030C */  jal        func_800F9660
    /* 61298 80152E98 20000424 */   addiu     $a0, $zero, 0x20
    /* 6129C 80152E9C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 612A0 80152EA0 00000000 */  nop
    /* 612A4 80152EA4 0800E003 */  jr         $ra
    /* 612A8 80152EA8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80152E54
