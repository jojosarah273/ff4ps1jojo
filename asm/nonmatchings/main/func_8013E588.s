nonmatching func_8013E588, 0x48

glabel func_8013E588
    /* 4C988 8013E588 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4C98C 8013E58C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4C990 8013E590 AFD8030C */  jal        func_800F62BC
    /* 4C994 8013E594 97000424 */   addiu     $a0, $zero, 0x97
    /* 4C998 8013E598 8CD9030C */  jal        func_800F6630
    /* 4C99C 8013E59C 97000424 */   addiu     $a0, $zero, 0x97
    /* 4C9A0 8013E5A0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4C9A4 8013E5A4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4C9A8 8013E5A8 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 4C9AC 8013E5AC 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 4C9B0 8013E5B0 00004394 */  lhu        $v1, 0x0($v0)
    /* 4C9B4 8013E5B4 00190424 */  addiu      $a0, $zero, 0x1900
    /* 4C9B8 8013E5B8 5CDB030C */  jal        func_800F6D70
    /* 4C9BC 8013E5BC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4C9C0 8013E5C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4C9C4 8013E5C4 00000000 */  nop
    /* 4C9C8 8013E5C8 0800E003 */  jr         $ra
    /* 4C9CC 8013E5CC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013E588
