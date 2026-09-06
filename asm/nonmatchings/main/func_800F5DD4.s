nonmatching func_800F5DD4, 0x48

glabel func_800F5DD4
    /* 41D4 800F5DD4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 41D8 800F5DD8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 41DC 800F5DDC 0FCF030C */  jal        func_800F3C3C
    /* 41E0 800F5DE0 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 41E4 800F5DE4 01004490 */  lbu        $a0, 0x1($v0)
    /* 41E8 800F5DE8 00004390 */  lbu        $v1, 0x0($v0)
    /* 41EC 800F5DEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 41F0 800F5DF0 00220400 */  sll        $a0, $a0, 8
    /* 41F4 800F5DF4 25186400 */  or         $v1, $v1, $a0
    /* 41F8 800F5DF8 FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 41FC 800F5DFC 03220300 */  sra        $a0, $v1, 8
    /* 4200 800F5E00 000043A0 */  sb         $v1, 0x0($v0)
    /* 4204 800F5E04 010044A0 */  sb         $a0, 0x1($v0)
    /* 4208 800F5E08 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 420C 800F5E0C 00000000 */  nop
    /* 4210 800F5E10 000043AC */  sw         $v1, 0x0($v0)
    /* 4214 800F5E14 0800E003 */  jr         $ra
    /* 4218 800F5E18 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F5DD4
