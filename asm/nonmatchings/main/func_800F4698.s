nonmatching func_800F4698, 0x50

glabel func_800F4698
    /* 2A98 800F4698 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2A9C 800F469C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2AA0 800F46A0 0FCF030C */  jal        func_800F3C3C
    /* 2AA4 800F46A4 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2AA8 800F46A8 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 2AAC 800F46AC 00000000 */  nop
    /* 2AB0 800F46B0 00006490 */  lbu        $a0, 0x0($v1)
    /* 2AB4 800F46B4 00000000 */  nop
    /* 2AB8 800F46B8 21104400 */  addu       $v0, $v0, $a0
    /* 2ABC 800F46BC 00004494 */  lhu        $a0, 0x0($v0)
    /* 2AC0 800F46C0 C1CE030C */  jal        func_800F3B04
    /* 2AC4 800F46C4 00000000 */   nop
    /* 2AC8 800F46C8 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2ACC 800F46CC 00004490 */  lbu        $a0, 0x0($v0)
    /* 2AD0 800F46D0 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2AD4 800F46D4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2AD8 800F46D8 24186400 */  and        $v1, $v1, $a0
    /* 2ADC 800F46DC 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2AE0 800F46E0 0800E003 */  jr         $ra
    /* 2AE4 800F46E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4698
