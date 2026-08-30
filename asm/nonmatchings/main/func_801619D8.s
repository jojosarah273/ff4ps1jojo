nonmatching func_801619D8, 0x28

glabel func_801619D8
    /* 6FDD8 801619D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6FDDC 801619DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6FDE0 801619E0 53D9030C */  jal        func_800F654C
    /* 6FDE4 801619E4 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6FDE8 801619E8 62E0030C */  jal        func_800F8188
    /* 6FDEC 801619EC 7C350424 */   addiu     $a0, $zero, 0x357C
    /* 6FDF0 801619F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6FDF4 801619F4 00000000 */  nop
    /* 6FDF8 801619F8 0800E003 */  jr         $ra
    /* 6FDFC 801619FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801619D8
