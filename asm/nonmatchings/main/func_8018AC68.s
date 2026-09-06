nonmatching func_8018AC68, 0x28

glabel func_8018AC68
    /* 99068 8018AC68 1A80043C */  lui        $a0, %hi(D_8019B128)
    /* 9906C 8018AC6C 28B1848C */  lw         $a0, %lo(D_8019B128)($a0)
    /* 99070 8018AC70 FFF0033C */  lui        $v1, (0xF0FFFFFF >> 16)
    /* 99074 8018AC74 0000828C */  lw         $v0, 0x0($a0)
    /* 99078 8018AC78 FFFF6334 */  ori        $v1, $v1, (0xF0FFFFFF & 0xFFFF)
    /* 9907C 8018AC7C 24104300 */  and        $v0, $v0, $v1
    /* 99080 8018AC80 0022033C */  lui        $v1, (0x22000000 >> 16)
    /* 99084 8018AC84 25104300 */  or         $v0, $v0, $v1
    /* 99088 8018AC88 0800E003 */  jr         $ra
    /* 9908C 8018AC8C 000082AC */   sw        $v0, 0x0($a0)
endlabel func_8018AC68
