nonmatching func_80126B88, 0x30

glabel func_80126B88
    /* 34F88 80126B88 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34F8C 80126B8C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 34F90 80126B90 8CD9030C */  jal        func_800F6630
    /* 34F94 80126B94 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 34F98 80126B98 AB93040C */  jal        func_80124EAC
    /* 34F9C 80126B9C 00000000 */   nop
    /* 34FA0 80126BA0 DADA030C */  jal        func_800F6B68
    /* 34FA4 80126BA4 03000424 */   addiu     $a0, $zero, 0x3
    /* 34FA8 80126BA8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 34FAC 80126BAC 00000000 */  nop
    /* 34FB0 80126BB0 0800E003 */  jr         $ra
    /* 34FB4 80126BB4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80126B88
