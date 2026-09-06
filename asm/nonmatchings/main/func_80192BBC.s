nonmatching func_80192BBC, 0x30

glabel func_80192BBC
    /* A0FBC 80192BBC 1A80023C */  lui        $v0, %hi(D_8019CEF4)
    /* A0FC0 80192BC0 F4CE428C */  lw         $v0, %lo(D_8019CEF4)($v0)
    /* A0FC4 80192BC4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A0FC8 80192BC8 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0FCC 80192BCC 1400428C */  lw         $v0, 0x14($v0)
    /* A0FD0 80192BD0 00000000 */  nop
    /* A0FD4 80192BD4 09F84000 */  jalr       $v0
    /* A0FD8 80192BD8 00000000 */   nop
    /* A0FDC 80192BDC 1000BF8F */  lw         $ra, 0x10($sp)
    /* A0FE0 80192BE0 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A0FE4 80192BE4 0800E003 */  jr         $ra
    /* A0FE8 80192BE8 00000000 */   nop
endlabel func_80192BBC
