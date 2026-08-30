nonmatching func_800F5ECC, 0x1C

glabel func_800F5ECC
    /* 42CC 800F5ECC 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 42D0 800F5ED0 00008590 */  lbu        $a1, 0x0($a0)
    /* 42D4 800F5ED4 00004390 */  lbu        $v1, 0x0($v0)
    /* 42D8 800F5ED8 00000000 */  nop
    /* 42DC 800F5EDC 26186500 */  xor        $v1, $v1, $a1
    /* 42E0 800F5EE0 0800E003 */  jr         $ra
    /* 42E4 800F5EE4 000043A0 */   sb        $v1, 0x0($v0)
endlabel func_800F5ECC
