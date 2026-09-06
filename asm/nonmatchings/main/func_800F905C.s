nonmatching func_800F905C, 0x34

glabel func_800F905C
    /* 745C 800F905C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7460 800F9060 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7464 800F9064 0FCF030C */  jal        func_800F3C3C
    /* 7468 800F9068 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 746C 800F906C 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 7470 800F9070 00000000 */  nop
    /* 7474 800F9074 00006490 */  lbu        $a0, 0x0($v1)
    /* 7478 800F9078 1000BF8F */  lw         $ra, 0x10($sp)
    /* 747C 800F907C 21104400 */  addu       $v0, $v0, $a0
    /* 7480 800F9080 000040A0 */  sb         $zero, 0x0($v0)
    /* 7484 800F9084 010040A0 */  sb         $zero, 0x1($v0)
    /* 7488 800F9088 0800E003 */  jr         $ra
    /* 748C 800F908C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F905C
