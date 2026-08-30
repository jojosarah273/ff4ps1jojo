nonmatching func_800F4880, 0x54

glabel func_800F4880
    /* 2C80 800F4880 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2C84 800F4884 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2C88 800F4888 0FCF030C */  jal        func_800F3C3C
    /* 2C8C 800F488C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2C90 800F4890 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 2C94 800F4894 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 2C98 800F4898 00006490 */  lbu        $a0, 0x0($v1)
    /* 2C9C 800F489C 0000C390 */  lbu        $v1, 0x0($a2)
    /* 2CA0 800F48A0 21104400 */  addu       $v0, $v0, $a0
    /* 2CA4 800F48A4 00004490 */  lbu        $a0, 0x0($v0)
    /* 2CA8 800F48A8 00000000 */  nop
    /* 2CAC 800F48AC 24186400 */  and        $v1, $v1, $a0
    /* 2CB0 800F48B0 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 2CB4 800F48B4 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2CB8 800F48B8 01004490 */  lbu        $a0, 0x1($v0)
    /* 2CBC 800F48BC 0100A390 */  lbu        $v1, 0x1($a1)
    /* 2CC0 800F48C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CC4 800F48C4 24186400 */  and        $v1, $v1, $a0
    /* 2CC8 800F48C8 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 2CCC 800F48CC 0800E003 */  jr         $ra
    /* 2CD0 800F48D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4880
