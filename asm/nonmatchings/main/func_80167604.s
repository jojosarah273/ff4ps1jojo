nonmatching func_80167604, 0x28

glabel func_80167604
    /* 75A04 80167604 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 75A08 80167608 1000BFAF */  sw         $ra, 0x10($sp)
    /* 75A0C 8016760C 77DC030C */  jal        func_800F71DC
    /* 75A10 80167610 08000424 */   addiu     $a0, $zero, 0x8
    /* 75A14 80167614 8B9D050C */  jal        func_8016762C
    /* 75A18 80167618 00000000 */   nop
    /* 75A1C 8016761C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 75A20 80167620 00000000 */  nop
    /* 75A24 80167624 0800E003 */  jr         $ra
    /* 75A28 80167628 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80167604
