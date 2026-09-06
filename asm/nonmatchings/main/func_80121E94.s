nonmatching func_80121E94, 0x28

glabel func_80121E94
    /* 30294 80121E94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30298 80121E98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3029C 80121E9C 3987040C */  jal        func_80121CE4
    /* 302A0 80121EA0 00000000 */   nop
    /* 302A4 80121EA4 AF87040C */  jal        func_80121EBC
    /* 302A8 80121EA8 00000000 */   nop
    /* 302AC 80121EAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 302B0 80121EB0 00000000 */  nop
    /* 302B4 80121EB4 0800E003 */  jr         $ra
    /* 302B8 80121EB8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121E94
