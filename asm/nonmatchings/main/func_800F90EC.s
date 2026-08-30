nonmatching func_800F90EC, 0x28

glabel func_800F90EC
    /* 74EC 800F90EC 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 74F0 800F90F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 74F4 800F90F4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 74F8 800F90F8 00004394 */  lhu        $v1, 0x0($v0)
    /* 74FC 800F90FC C1CE030C */  jal        func_800F3B04
    /* 7500 800F9100 21208300 */   addu      $a0, $a0, $v1
    /* 7504 800F9104 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7508 800F9108 000040A0 */  sb         $zero, 0x0($v0)
    /* 750C 800F910C 0800E003 */  jr         $ra
    /* 7510 800F9110 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F90EC
