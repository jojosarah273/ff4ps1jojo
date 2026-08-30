nonmatching func_80192B28, 0x30

glabel func_80192B28
    /* A0F28 80192B28 1A80023C */  lui        $v0, %hi(D_8019CEF4)
    /* A0F2C 80192B2C F4CE428C */  lw         $v0, %lo(D_8019CEF4)($v0)
    /* A0F30 80192B30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A0F34 80192B34 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0F38 80192B38 0800428C */  lw         $v0, 0x8($v0)
    /* A0F3C 80192B3C 00000000 */  nop
    /* A0F40 80192B40 09F84000 */  jalr       $v0
    /* A0F44 80192B44 00000000 */   nop
    /* A0F48 80192B48 1000BF8F */  lw         $ra, 0x10($sp)
    /* A0F4C 80192B4C 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A0F50 80192B50 0800E003 */  jr         $ra
    /* A0F54 80192B54 00000000 */   nop
endlabel func_80192B28
