nonmatching func_80192C1C, 0x30

glabel func_80192C1C
    /* A101C 80192C1C 1A80023C */  lui        $v0, %hi(D_8019CEF4)
    /* A1020 80192C20 F4CE428C */  lw         $v0, %lo(D_8019CEF4)($v0)
    /* A1024 80192C24 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A1028 80192C28 1000BFAF */  sw         $ra, 0x10($sp)
    /* A102C 80192C2C 1800428C */  lw         $v0, 0x18($v0)
    /* A1030 80192C30 00000000 */  nop
    /* A1034 80192C34 09F84000 */  jalr       $v0
    /* A1038 80192C38 00000000 */   nop
    /* A103C 80192C3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* A1040 80192C40 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A1044 80192C44 0800E003 */  jr         $ra
    /* A1048 80192C48 00000000 */   nop
endlabel func_80192C1C
