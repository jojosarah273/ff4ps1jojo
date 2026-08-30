nonmatching func_80122904, 0x30

glabel func_80122904
    /* 30D04 80122904 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30D08 80122908 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30D0C 8012290C 8CD9030C */  jal        func_800F6630
    /* 30D10 80122910 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 30D14 80122914 77DC030C */  jal        func_800F71DC
    /* 30D18 80122918 B5880434 */   ori       $a0, $zero, 0x88B5
    /* 30D1C 8012291C 1C80040C */  jal        func_80120070
    /* 30D20 80122920 00000000 */   nop
    /* 30D24 80122924 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30D28 80122928 00000000 */  nop
    /* 30D2C 8012292C 0800E003 */  jr         $ra
    /* 30D30 80122930 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80122904
