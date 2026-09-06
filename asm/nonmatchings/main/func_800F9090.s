nonmatching func_800F9090, 0x34

glabel func_800F9090
    /* 7490 800F9090 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7494 800F9094 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7498 800F9098 0FCF030C */  jal        func_800F3C3C
    /* 749C 800F909C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 74A0 800F90A0 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 74A4 800F90A4 00000000 */  nop
    /* 74A8 800F90A8 00006494 */  lhu        $a0, 0x0($v1)
    /* 74AC 800F90AC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 74B0 800F90B0 21104400 */  addu       $v0, $v0, $a0
    /* 74B4 800F90B4 000040A0 */  sb         $zero, 0x0($v0)
    /* 74B8 800F90B8 010040A0 */  sb         $zero, 0x1($v0)
    /* 74BC 800F90BC 0800E003 */  jr         $ra
    /* 74C0 800F90C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F9090
