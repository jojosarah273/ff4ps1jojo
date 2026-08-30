nonmatching func_8018F688, 0x80

glabel func_8018F688
    /* 9DA88 8018F688 00008390 */  lbu        $v1, 0x0($a0)
    /* 9DA8C 8018F68C 01008690 */  lbu        $a2, 0x1($a0)
    /* 9DA90 8018F690 02290300 */  srl        $a1, $v1, 4
    /* 9DA94 8018F694 80100500 */  sll        $v0, $a1, 2
    /* 9DA98 8018F698 21104500 */  addu       $v0, $v0, $a1
    /* 9DA9C 8018F69C 40100200 */  sll        $v0, $v0, 1
    /* 9DAA0 8018F6A0 0F006330 */  andi       $v1, $v1, 0xF
    /* 9DAA4 8018F6A4 21104300 */  addu       $v0, $v0, $v1
    /* 9DAA8 8018F6A8 00290200 */  sll        $a1, $v0, 4
    /* 9DAAC 8018F6AC 2328A200 */  subu       $a1, $a1, $v0
    /* 9DAB0 8018F6B0 80280500 */  sll        $a1, $a1, 2
    /* 9DAB4 8018F6B4 02190600 */  srl        $v1, $a2, 4
    /* 9DAB8 8018F6B8 80100300 */  sll        $v0, $v1, 2
    /* 9DABC 8018F6BC 21104300 */  addu       $v0, $v0, $v1
    /* 9DAC0 8018F6C0 40100200 */  sll        $v0, $v0, 1
    /* 9DAC4 8018F6C4 0F00C630 */  andi       $a2, $a2, 0xF
    /* 9DAC8 8018F6C8 21104600 */  addu       $v0, $v0, $a2
    /* 9DACC 8018F6CC 2128A200 */  addu       $a1, $a1, $v0
    /* 9DAD0 8018F6D0 80180500 */  sll        $v1, $a1, 2
    /* 9DAD4 8018F6D4 21186500 */  addu       $v1, $v1, $a1
    /* 9DAD8 8018F6D8 00110300 */  sll        $v0, $v1, 4
    /* 9DADC 8018F6DC 02008590 */  lbu        $a1, 0x2($a0)
    /* 9DAE0 8018F6E0 23104300 */  subu       $v0, $v0, $v1
    /* 9DAE4 8018F6E4 02210500 */  srl        $a0, $a1, 4
    /* 9DAE8 8018F6E8 80180400 */  sll        $v1, $a0, 2
    /* 9DAEC 8018F6EC 21186400 */  addu       $v1, $v1, $a0
    /* 9DAF0 8018F6F0 40180300 */  sll        $v1, $v1, 1
    /* 9DAF4 8018F6F4 0F00A530 */  andi       $a1, $a1, 0xF
    /* 9DAF8 8018F6F8 21186500 */  addu       $v1, $v1, $a1
    /* 9DAFC 8018F6FC 21104300 */  addu       $v0, $v0, $v1
    /* 9DB00 8018F700 0800E003 */  jr         $ra
    /* 9DB04 8018F704 6AFF4224 */   addiu     $v0, $v0, -0x96
endlabel func_8018F688
