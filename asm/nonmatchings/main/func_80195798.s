nonmatching func_80195798, 0x1C

glabel func_80195798
    /* A3B98 80195798 FF07A530 */  andi       $a1, $a1, 0x7FF
    /* A3B9C 8019579C C02A0500 */  sll        $a1, $a1, 11
    /* A3BA0 801957A0 FF078230 */  andi       $v0, $a0, 0x7FF
    /* A3BA4 801957A4 00E5033C */  lui        $v1, (0xE5000000 >> 16)
    /* A3BA8 801957A8 25104300 */  or         $v0, $v0, $v1
    /* A3BAC 801957AC 0800E003 */  jr         $ra
    /* A3BB0 801957B0 2510A200 */   or        $v0, $a1, $v0
endlabel func_80195798
