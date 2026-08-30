nonmatching func_80196F18, 0x14

glabel func_80196F18
    /* A5318 80196F18 1A80023C */  lui        $v0, %hi(D_8019DCA4)
    /* A531C 80196F1C A4DC428C */  lw         $v0, %lo(D_8019DCA4)($v0)
    /* A5320 80196F20 1A80013C */  lui        $at, %hi(D_8019DCA4)
    /* A5324 80196F24 0800E003 */  jr         $ra
    /* A5328 80196F28 A4DC24AC */   sw        $a0, %lo(D_8019DCA4)($at)
endlabel func_80196F18
