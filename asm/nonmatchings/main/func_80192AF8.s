nonmatching func_80192AF8, 0x30

glabel func_80192AF8
    /* A0EF8 80192AF8 1A80023C */  lui        $v0, %hi(D_8019CEF4)
    /* A0EFC 80192AFC F4CE428C */  lw         $v0, %lo(D_8019CEF4)($v0)
    /* A0F00 80192B00 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A0F04 80192B04 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0F08 80192B08 0C00428C */  lw         $v0, 0xC($v0)
    /* A0F0C 80192B0C 00000000 */  nop
    /* A0F10 80192B10 09F84000 */  jalr       $v0
    /* A0F14 80192B14 00000000 */   nop
    /* A0F18 80192B18 1000BF8F */  lw         $ra, 0x10($sp)
    /* A0F1C 80192B1C 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A0F20 80192B20 0800E003 */  jr         $ra
    /* A0F24 80192B24 00000000 */   nop
endlabel func_80192AF8
