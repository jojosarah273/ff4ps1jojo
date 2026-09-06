nonmatching func_800F4808, 0x3C

glabel func_800F4808
    /* 2C08 800F4808 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2C0C 800F480C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2C10 800F4810 0FCF030C */  jal        func_800F3C3C
    /* 2C14 800F4814 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2C18 800F4818 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 2C1C 800F481C 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2C20 800F4820 00006490 */  lbu        $a0, 0x0($v1)
    /* 2C24 800F4824 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2C28 800F4828 21104400 */  addu       $v0, $v0, $a0
    /* 2C2C 800F482C 00004490 */  lbu        $a0, 0x0($v0)
    /* 2C30 800F4830 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2C34 800F4834 24186400 */  and        $v1, $v1, $a0
    /* 2C38 800F4838 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2C3C 800F483C 0800E003 */  jr         $ra
    /* 2C40 800F4840 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4808
