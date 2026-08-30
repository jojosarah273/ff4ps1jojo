nonmatching func_801960EC, 0x24

glabel func_801960EC
    /* A44EC 801960EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A44F0 801960F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* A44F4 801960F4 2138C000 */  addu       $a3, $a2, $zero
    /* A44F8 801960F8 4458060C */  jal        func_80196110
    /* A44FC 801960FC 21300000 */   addu      $a2, $zero, $zero
    /* A4500 80196100 1000BF8F */  lw         $ra, 0x10($sp)
    /* A4504 80196104 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A4508 80196108 0800E003 */  jr         $ra
    /* A450C 8019610C 00000000 */   nop
endlabel func_801960EC
