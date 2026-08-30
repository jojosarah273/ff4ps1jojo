nonmatching func_800F8FFC, 0x30

glabel func_800F8FFC
    /* 73FC 800F8FFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7400 800F9000 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7404 800F9004 0FCF030C */  jal        func_800F3C3C
    /* 7408 800F9008 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 740C 800F900C 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 7410 800F9010 00000000 */  nop
    /* 7414 800F9014 00006490 */  lbu        $a0, 0x0($v1)
    /* 7418 800F9018 1000BF8F */  lw         $ra, 0x10($sp)
    /* 741C 800F901C 21104400 */  addu       $v0, $v0, $a0
    /* 7420 800F9020 000040A0 */  sb         $zero, 0x0($v0)
    /* 7424 800F9024 0800E003 */  jr         $ra
    /* 7428 800F9028 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8FFC
