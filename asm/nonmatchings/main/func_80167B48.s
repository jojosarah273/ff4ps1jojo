nonmatching func_80167B48, 0x58

glabel func_80167B48
    /* 75F48 80167B48 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 75F4C 80167B4C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 75F50 80167B50 CCE4030C */  jal        func_800F9330
    /* 75F54 80167B54 00000000 */   nop
    /* 75F58 80167B58 AFD8030C */  jal        func_800F62BC
    /* 75F5C 80167B5C 97000424 */   addiu     $a0, $zero, 0x97
    /* 75F60 80167B60 8CD9030C */  jal        func_800F6630
    /* 75F64 80167B64 97000424 */   addiu     $a0, $zero, 0x97
    /* 75F68 80167B68 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 75F6C 80167B6C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 75F70 80167B70 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 75F74 80167B74 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 75F78 80167B78 00004394 */  lhu        $v1, 0x0($v0)
    /* 75F7C 80167B7C 00190424 */  addiu      $a0, $zero, 0x1900
    /* 75F80 80167B80 DADA030C */  jal        func_800F6B68
    /* 75F84 80167B84 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 75F88 80167B88 68E5030C */  jal        func_800F95A0
    /* 75F8C 80167B8C 00000000 */   nop
    /* 75F90 80167B90 1000BF8F */  lw         $ra, 0x10($sp)
    /* 75F94 80167B94 00000000 */  nop
    /* 75F98 80167B98 0800E003 */  jr         $ra
    /* 75F9C 80167B9C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80167B48
