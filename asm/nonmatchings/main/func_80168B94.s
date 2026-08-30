nonmatching func_80168B94, 0x30

glabel func_80168B94
    /* 76F94 80168B94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 76F98 80168B98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 76F9C 80168B9C 7AE0030C */  jal        func_800F81E8
    /* 76FA0 80168BA0 31210424 */   addiu     $a0, $zero, 0x2131
    /* 76FA4 80168BA4 62E0030C */  jal        func_800F8188
    /* 76FA8 80168BA8 3DF40434 */   ori       $a0, $zero, 0xF43D
    /* 76FAC 80168BAC 62E0030C */  jal        func_800F8188
    /* 76FB0 80168BB0 3FF40434 */   ori       $a0, $zero, 0xF43F
    /* 76FB4 80168BB4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 76FB8 80168BB8 00000000 */  nop
    /* 76FBC 80168BBC 0800E003 */  jr         $ra
    /* 76FC0 80168BC0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80168B94
