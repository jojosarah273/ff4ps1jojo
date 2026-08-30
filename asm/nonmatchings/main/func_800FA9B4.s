nonmatching func_800FA9B4, 0x50

glabel func_800FA9B4
    /* 8DB4 800FA9B4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8DB8 800FA9B8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8DBC 800FA9BC 59D9030C */  jal        func_800F6564
    /* 8DC0 800FA9C0 04170424 */   addiu     $a0, $zero, 0x1704
    /* 8DC4 800FA9C4 A4E5030C */  jal        func_800F9690
    /* 8DC8 800FA9C8 00000000 */   nop
    /* 8DCC 800FA9CC 1A80023C */  lui        $v0, %hi(func_80198A00)
    /* 8DD0 800FA9D0 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* 8DD4 800FA9D4 008A4224 */  addiu      $v0, $v0, %lo(func_80198A00)
    /* 8DD8 800FA9D8 00008394 */  lhu        $v1, 0x0($a0)
    /* 8DDC 800FA9DC 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 8DE0 800FA9E0 21186200 */  addu       $v1, $v1, $v0
    /* 8DE4 800FA9E4 00006290 */  lbu        $v0, 0x0($v1)
    /* 8DE8 800FA9E8 AC000424 */  addiu      $a0, $zero, 0xAC
    /* 8DEC 800FA9EC 93E0030C */  jal        func_800F824C
    /* 8DF0 800FA9F0 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 8DF4 800FA9F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8DF8 800FA9F8 00000000 */  nop
    /* 8DFC 800FA9FC 0800E003 */  jr         $ra
    /* 8E00 800FAA00 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FA9B4
