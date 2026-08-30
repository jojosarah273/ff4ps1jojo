nonmatching func_80189B8C, 0x40

glabel func_80189B8C
    /* 97F8C 80189B8C C0FFBD27 */  addiu      $sp, $sp, -0x40
    /* 97F90 80189B90 C0030224 */  addiu      $v0, $zero, 0x3C0
    /* 97F94 80189B94 C0290500 */  sll        $a1, $a1, 7
    /* 97F98 80189B98 C0310600 */  sll        $a2, $a2, 7
    /* 97F9C 80189B9C 2800A4AF */  sw         $a0, 0x28($sp)
    /* 97FA0 80189BA0 1000A427 */  addiu      $a0, $sp, 0x10
    /* 97FA4 80189BA4 3800BFAF */  sw         $ra, 0x38($sp)
    /* 97FA8 80189BA8 1000A2AF */  sw         $v0, 0x10($sp)
    /* 97FAC 80189BAC 2000A5A7 */  sh         $a1, 0x20($sp)
    /* 97FB0 80189BB0 2200A6A7 */  sh         $a2, 0x22($sp)
    /* 97FB4 80189BB4 3A3B060C */  jal        func_8018ECE8
    /* 97FB8 80189BB8 2400A7AF */   sw        $a3, 0x24($sp)
    /* 97FBC 80189BBC 3800BF8F */  lw         $ra, 0x38($sp)
    /* 97FC0 80189BC0 00000000 */  nop
    /* 97FC4 80189BC4 0800E003 */  jr         $ra
    /* 97FC8 80189BC8 4000BD27 */   addiu     $sp, $sp, 0x40
endlabel func_80189B8C
