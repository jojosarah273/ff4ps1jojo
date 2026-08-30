nonmatching func_80192C74, 0x18

glabel func_80192C74
    /* A1074 80192C74 1A80033C */  lui        $v1, %hi(D_8019CEFC)
    /* A1078 80192C78 FCCE638C */  lw         $v1, %lo(D_8019CEFC)($v1)
    /* A107C 80192C7C 00000000 */  nop
    /* A1080 80192C80 00006294 */  lhu        $v0, 0x0($v1)
    /* A1084 80192C84 0800E003 */  jr         $ra
    /* A1088 80192C88 000064A4 */   sh        $a0, 0x0($v1)
endlabel func_80192C74
