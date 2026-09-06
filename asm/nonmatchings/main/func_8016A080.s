nonmatching func_8016A080, 0x48

glabel func_8016A080
    /* 78480 8016A080 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 78484 8016A084 1000BFAF */  sw         $ra, 0x10($sp)
    /* 78488 8016A088 77DC030C */  jal        func_800F71DC
    /* 7848C 8016A08C 32000424 */   addiu     $a0, $zero, 0x32
    /* 78490 8016A090 5BE3030C */  jal        func_800F8D6C
    /* 78494 8016A094 21200000 */   addu      $a0, $zero, $zero
    /* 78498 8016A098 77DC030C */  jal        func_800F71DC
    /* 7849C 8016A09C 00D30434 */   ori       $a0, $zero, 0xD300
    /* 784A0 8016A0A0 40DD030C */  jal        func_800F7500
    /* 784A4 8016A0A4 00400424 */   addiu     $a0, $zero, 0x4000
    /* 784A8 8016A0A8 53D9030C */  jal        func_800F654C
    /* 784AC 8016A0AC 13000424 */   addiu     $a0, $zero, 0x13
    /* 784B0 8016A0B0 32A8050C */  jal        func_8016A0C8
    /* 784B4 8016A0B4 00000000 */   nop
    /* 784B8 8016A0B8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 784BC 8016A0BC 00000000 */  nop
    /* 784C0 8016A0C0 0800E003 */  jr         $ra
    /* 784C4 8016A0C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016A080
