nonmatching func_800F5BE8, 0x2C

glabel func_800F5BE8
    /* 3FE8 800F5BE8 01008390 */  lbu        $v1, 0x1($a0)
    /* 3FEC 800F5BEC 00008290 */  lbu        $v0, 0x0($a0)
    /* 3FF0 800F5BF0 001A0300 */  sll        $v1, $v1, 8
    /* 3FF4 800F5BF4 25104300 */  or         $v0, $v0, $v1
    /* 3FF8 800F5BF8 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 3FFC 800F5BFC 031A0200 */  sra        $v1, $v0, 8
    /* 4000 800F5C00 000082A0 */  sb         $v0, 0x0($a0)
    /* 4004 800F5C04 010083A0 */  sb         $v1, 0x1($a0)
    /* 4008 800F5C08 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 400C 800F5C0C 0800E003 */  jr         $ra
    /* 4010 800F5C10 000082AC */   sw        $v0, 0x0($a0)
endlabel func_800F5BE8
