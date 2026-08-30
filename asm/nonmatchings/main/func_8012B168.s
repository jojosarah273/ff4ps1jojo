nonmatching func_8012B168, 0x28

glabel func_8012B168
    /* 39568 8012B168 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3956C 8012B16C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 39570 8012B170 40DD030C */  jal        func_800F7500
    /* 39574 8012B174 00030424 */   addiu     $a0, $zero, 0x300
    /* 39578 8012B178 40AC040C */  jal        func_8012B100
    /* 3957C 8012B17C 00000000 */   nop
    /* 39580 8012B180 1000BF8F */  lw         $ra, 0x10($sp)
    /* 39584 8012B184 00000000 */  nop
    /* 39588 8012B188 0800E003 */  jr         $ra
    /* 3958C 8012B18C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012B168
