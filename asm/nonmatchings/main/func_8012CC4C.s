nonmatching func_8012CC4C, 0x28

glabel func_8012CC4C
    /* 3B04C 8012CC4C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3B050 8012CC50 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3B054 8012CC54 DDE3030C */  jal        func_800F8F74
    /* 3B058 8012CC58 031A0424 */   addiu     $a0, $zero, 0x1A03
    /* 3B05C 8012CC5C 94B0040C */  jal        func_8012C250
    /* 3B060 8012CC60 00000000 */   nop
    /* 3B064 8012CC64 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B068 8012CC68 00000000 */  nop
    /* 3B06C 8012CC6C 0800E003 */  jr         $ra
    /* 3B070 8012CC70 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012CC4C
