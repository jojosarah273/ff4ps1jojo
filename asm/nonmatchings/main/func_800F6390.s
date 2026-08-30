nonmatching func_800F6390, 0x2C

glabel func_800F6390
    /* 4790 800F6390 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 4794 800F6394 00000000 */  nop
    /* 4798 800F6398 00006290 */  lbu        $v0, 0x0($v1)
    /* 479C 800F639C 00000000 */  nop
    /* 47A0 800F63A0 01004224 */  addiu      $v0, $v0, 0x1
    /* 47A4 800F63A4 000062A0 */  sb         $v0, 0x0($v1)
    /* 47A8 800F63A8 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 47AC 800F63AC 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 47B0 800F63B0 00008290 */  lbu        $v0, 0x0($a0)
    /* 47B4 800F63B4 0800E003 */  jr         $ra
    /* 47B8 800F63B8 000062AC */   sw        $v0, 0x0($v1)
endlabel func_800F6390
