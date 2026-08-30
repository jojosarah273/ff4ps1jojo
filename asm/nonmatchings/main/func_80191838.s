nonmatching func_80191838, 0x14

glabel func_80191838
    /* 9FC38 80191838 1A80023C */  lui        $v0, %hi(D_8019B9EC)
    /* 9FC3C 8019183C ECB9428C */  lw         $v0, %lo(D_8019B9EC)($v0)
    /* 9FC40 80191840 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9FC44 80191844 0800E003 */  jr         $ra
    /* 9FC48 80191848 ECB924AC */   sw        $a0, %lo(D_8019B9EC)($at)
endlabel func_80191838
    /* 9FC4C 8019184C 00000000 */  nop
    /* 9FC50 80191850 00000000 */  nop
    /* 9FC54 80191854 00000000 */  nop
