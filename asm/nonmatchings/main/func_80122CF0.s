nonmatching func_80122CF0, 0x30

glabel func_80122CF0
    /* 310F0 80122CF0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 310F4 80122CF4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 310F8 80122CF8 D58A040C */  jal        func_80122B54
    /* 310FC 80122CFC 00000000 */   nop
    /* 31100 80122D00 8CD9030C */  jal        func_800F6630
    /* 31104 80122D04 60000424 */   addiu     $a0, $zero, 0x60
    /* 31108 80122D08 C191040C */  jal        func_80124704
    /* 3110C 80122D0C 00000000 */   nop
    /* 31110 80122D10 1000BF8F */  lw         $ra, 0x10($sp)
    /* 31114 80122D14 00000000 */  nop
    /* 31118 80122D18 0800E003 */  jr         $ra
    /* 3111C 80122D1C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80122CF0
