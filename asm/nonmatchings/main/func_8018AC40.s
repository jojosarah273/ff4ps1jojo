nonmatching func_8018AC40, 0x28

glabel func_8018AC40
    /* 99040 8018AC40 1A80043C */  lui        $a0, %hi(D_8019B128)
    /* 99044 8018AC44 28B1848C */  lw         $a0, %lo(D_8019B128)($a0)
    /* 99048 8018AC48 FFF0033C */  lui        $v1, (0xF0FFFFFF >> 16)
    /* 9904C 8018AC4C 0000828C */  lw         $v0, 0x0($a0)
    /* 99050 8018AC50 FFFF6334 */  ori        $v1, $v1, (0xF0FFFFFF & 0xFFFF)
    /* 99054 8018AC54 24104300 */  and        $v0, $v0, $v1
    /* 99058 8018AC58 0020033C */  lui        $v1, (0x20000000 >> 16)
    /* 9905C 8018AC5C 25104300 */  or         $v0, $v0, $v1
    /* 99060 8018AC60 0800E003 */  jr         $ra
    /* 99064 8018AC64 000082AC */   sw        $v0, 0x0($a0)
endlabel func_8018AC40
