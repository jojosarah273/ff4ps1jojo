nonmatching func_80196018, 0x14

glabel func_80196018
    /* A4418 80196018 1A80023C */  lui        $v0, %hi(D_8019DC5C)
    /* A441C 8019601C 5CDC428C */  lw         $v0, %lo(D_8019DC5C)($v0)
    /* A4420 80196020 00000000 */  nop
    /* A4424 80196024 0800E003 */  jr         $ra
    /* A4428 80196028 000044AC */   sw        $a0, 0x0($v0)
endlabel func_80196018
