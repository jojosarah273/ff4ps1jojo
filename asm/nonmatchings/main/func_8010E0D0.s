nonmatching func_8010E0D0, 0x30

glabel func_8010E0D0
    /* 1C4D0 8010E0D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1C4D4 8010E0D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1C4D8 8010E0D8 53D9030C */  jal        func_800F654C
    /* 1C4DC 8010E0DC 87000424 */   addiu     $a0, $zero, 0x87
    /* 1C4E0 8010E0E0 62E0030C */  jal        func_800F8188
    /* 1C4E4 8010E0E4 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 1C4E8 8010E0E8 4AA4050C */  jal        func_80169128
    /* 1C4EC 8010E0EC 00000000 */   nop
    /* 1C4F0 8010E0F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C4F4 8010E0F4 00000000 */  nop
    /* 1C4F8 8010E0F8 0800E003 */  jr         $ra
    /* 1C4FC 8010E0FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E0D0
