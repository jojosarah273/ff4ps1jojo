nonmatching func_80124158, 0x28

glabel func_80124158
    /* 32558 80124158 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3255C 8012415C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 32560 80124160 77DC030C */  jal        func_800F71DC
    /* 32564 80124164 00D60434 */   ori       $a0, $zero, 0xD600
    /* 32568 80124168 3E90040C */  jal        func_801240F8
    /* 3256C 8012416C 00000000 */   nop
    /* 32570 80124170 1000BF8F */  lw         $ra, 0x10($sp)
    /* 32574 80124174 00000000 */  nop
    /* 32578 80124178 0800E003 */  jr         $ra
    /* 3257C 8012417C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80124158
