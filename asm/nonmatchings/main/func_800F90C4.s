nonmatching func_800F90C4, 0x28

glabel func_800F90C4
    /* 74C4 800F90C4 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 74C8 800F90C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 74CC 800F90CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 74D0 800F90D0 00004390 */  lbu        $v1, 0x0($v0)
    /* 74D4 800F90D4 C1CE030C */  jal        func_800F3B04
    /* 74D8 800F90D8 21208300 */   addu      $a0, $a0, $v1
    /* 74DC 800F90DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 74E0 800F90E0 000040A0 */  sb         $zero, 0x0($v0)
    /* 74E4 800F90E4 0800E003 */  jr         $ra
    /* 74E8 800F90E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F90C4
