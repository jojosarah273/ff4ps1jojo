nonmatching func_8017F9FC, 0x30

glabel func_8017F9FC
    /* 8DDFC 8017F9FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8DE00 8017FA00 1A80043C */  lui        $a0, %hi(D_801A0A90)
    /* 8DE04 8017FA04 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8DE08 8017FA08 91FD050C */  jal        func_8017F644
    /* 8DE0C 8017FA0C 900A8424 */   addiu     $a0, $a0, %lo(D_801A0A90)
    /* 8DE10 8017FA10 1B80043C */  lui        $a0, %hi(D_801B57A0)
    /* 8DE14 8017FA14 91FD050C */  jal        func_8017F644
    /* 8DE18 8017FA18 A0578424 */   addiu     $a0, $a0, %lo(D_801B57A0)
    /* 8DE1C 8017FA1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8DE20 8017FA20 00000000 */  nop
    /* 8DE24 8017FA24 0800E003 */  jr         $ra
    /* 8DE28 8017FA28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017F9FC
