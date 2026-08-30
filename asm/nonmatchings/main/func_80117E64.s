nonmatching func_80117E64, 0x38

glabel func_80117E64
    /* 26264 80117E64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 26268 80117E68 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2626C 80117E6C 3BE4030C */  jal        func_800F90EC
    /* 26270 80117E70 03100424 */   addiu     $a0, $zero, 0x1003
    /* 26274 80117E74 3BE4030C */  jal        func_800F90EC
    /* 26278 80117E78 04100424 */   addiu     $a0, $zero, 0x1004
    /* 2627C 80117E7C 3BE4030C */  jal        func_800F90EC
    /* 26280 80117E80 05100424 */   addiu     $a0, $zero, 0x1005
    /* 26284 80117E84 3BE4030C */  jal        func_800F90EC
    /* 26288 80117E88 06100424 */   addiu     $a0, $zero, 0x1006
    /* 2628C 80117E8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 26290 80117E90 00000000 */  nop
    /* 26294 80117E94 0800E003 */  jr         $ra
    /* 26298 80117E98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80117E64
