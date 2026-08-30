nonmatching func_80192C5C, 0x18

glabel func_80192C5C
    /* A105C 80192C5C 1A80023C */  lui        $v0, %hi(D_8019CEFC)
    /* A1060 80192C60 FCCE428C */  lw         $v0, %lo(D_8019CEFC)($v0)
    /* A1064 80192C64 00000000 */  nop
    /* A1068 80192C68 00004294 */  lhu        $v0, 0x0($v0)
    /* A106C 80192C6C 0800E003 */  jr         $ra
    /* A1070 80192C70 00000000 */   nop
endlabel func_80192C5C
