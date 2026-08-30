nonmatching func_8016AACC, 0x48

glabel func_8016AACC
    /* 78ECC 8016AACC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 78ED0 8016AAD0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 78ED4 8016AAD4 77DC030C */  jal        func_800F71DC
    /* 78ED8 8016AAD8 20000424 */   addiu     $a0, $zero, 0x20
    /* 78EDC 8016AADC 40E3030C */  jal        func_800F8D00
    /* 78EE0 8016AAE0 80200424 */   addiu     $a0, $zero, 0x2080
    /* 78EE4 8016AAE4 40E3030C */  jal        func_800F8D00
    /* 78EE8 8016AAE8 82200424 */   addiu     $a0, $zero, 0x2082
    /* 78EEC 8016AAEC 77DC030C */  jal        func_800F71DC
    /* 78EF0 8016AAF0 40000424 */   addiu     $a0, $zero, 0x40
    /* 78EF4 8016AAF4 40E3030C */  jal        func_800F8D00
    /* 78EF8 8016AAF8 C0200424 */   addiu     $a0, $zero, 0x20C0
    /* 78EFC 8016AAFC 40E3030C */  jal        func_800F8D00
    /* 78F00 8016AB00 C2200424 */   addiu     $a0, $zero, 0x20C2
    /* 78F04 8016AB04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 78F08 8016AB08 00000000 */  nop
    /* 78F0C 8016AB0C 0800E003 */  jr         $ra
    /* 78F10 8016AB10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016AACC
