nonmatching func_801972B8, 0x18

glabel func_801972B8
    /* A56B8 801972B8 FF00033C */  lui        $v1, (0xFFFFFF >> 16)
    /* A56BC 801972BC 0000828C */  lw         $v0, 0x0($a0)
    /* A56C0 801972C0 FFFF6334 */  ori        $v1, $v1, (0xFFFFFF & 0xFFFF)
    /* A56C4 801972C4 25104300 */  or         $v0, $v0, $v1
    /* A56C8 801972C8 0800E003 */  jr         $ra
    /* A56CC 801972CC 000082AC */   sw        $v0, 0x0($a0)
endlabel func_801972B8
    /* A56D0 801972D0 00000000 */  nop
    /* A56D4 801972D4 00000000 */  nop
