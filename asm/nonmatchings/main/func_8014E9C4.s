nonmatching func_8014E9C4, 0x48

glabel func_8014E9C4
    /* 5CDC4 8014E9C4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5CDC8 8014E9C8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5CDCC 8014E9CC AFD8030C */  jal        func_800F62BC
    /* 5CDD0 8014E9D0 97000424 */   addiu     $a0, $zero, 0x97
    /* 5CDD4 8014E9D4 8CD9030C */  jal        func_800F6630
    /* 5CDD8 8014E9D8 97000424 */   addiu     $a0, $zero, 0x97
    /* 5CDDC 8014E9DC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5CDE0 8014E9E0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5CDE4 8014E9E4 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 5CDE8 8014E9E8 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 5CDEC 8014E9EC 00004394 */  lhu        $v1, 0x0($v0)
    /* 5CDF0 8014E9F0 00190424 */  addiu      $a0, $zero, 0x1900
    /* 5CDF4 8014E9F4 5CDB030C */  jal        func_800F6D70
    /* 5CDF8 8014E9F8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5CDFC 8014E9FC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5CE00 8014EA00 00000000 */  nop
    /* 5CE04 8014EA04 0800E003 */  jr         $ra
    /* 5CE08 8014EA08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014E9C4
