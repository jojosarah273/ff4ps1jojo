nonmatching func_80197288, 0x24

glabel func_80197288
    /* A5688 80197288 FF00063C */  lui        $a2, (0xFFFFFF >> 16)
    /* A568C 8019728C FFFFC634 */  ori        $a2, $a2, (0xFFFFFF & 0xFFFF)
    /* A5690 80197290 00FF033C */  lui        $v1, (0xFF000000 >> 16)
    /* A5694 80197294 0000828C */  lw         $v0, 0x0($a0)
    /* A5698 80197298 2428A600 */  and        $a1, $a1, $a2
    /* A569C 8019729C 24104300 */  and        $v0, $v0, $v1
    /* A56A0 801972A0 25104500 */  or         $v0, $v0, $a1
    /* A56A4 801972A4 0800E003 */  jr         $ra
    /* A56A8 801972A8 000082AC */   sw        $v0, 0x0($a0)
endlabel func_80197288
    /* A56AC 801972AC 00000000 */  nop
    /* A56B0 801972B0 00000000 */  nop
    /* A56B4 801972B4 00000000 */  nop
