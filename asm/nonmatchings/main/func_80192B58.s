nonmatching func_80192B58, 0x30

glabel func_80192B58
    /* A0F58 80192B58 1A80023C */  lui        $v0, %hi(D_8019CEF4)
    /* A0F5C 80192B5C F4CE428C */  lw         $v0, %lo(D_8019CEF4)($v0)
    /* A0F60 80192B60 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A0F64 80192B64 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0F68 80192B68 0400428C */  lw         $v0, 0x4($v0)
    /* A0F6C 80192B6C 00000000 */  nop
    /* A0F70 80192B70 09F84000 */  jalr       $v0
    /* A0F74 80192B74 00000000 */   nop
    /* A0F78 80192B78 1000BF8F */  lw         $ra, 0x10($sp)
    /* A0F7C 80192B7C 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A0F80 80192B80 0800E003 */  jr         $ra
    /* A0F84 80192B84 00000000 */   nop
endlabel func_80192B58
