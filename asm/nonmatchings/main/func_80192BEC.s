nonmatching func_80192BEC, 0x30

glabel func_80192BEC
    /* A0FEC 80192BEC 1A80023C */  lui        $v0, %hi(D_8019CEF4)
    /* A0FF0 80192BF0 F4CE428C */  lw         $v0, %lo(D_8019CEF4)($v0)
    /* A0FF4 80192BF4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A0FF8 80192BF8 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0FFC 80192BFC 1000428C */  lw         $v0, 0x10($v0)
    /* A1000 80192C00 00000000 */  nop
    /* A1004 80192C04 09F84000 */  jalr       $v0
    /* A1008 80192C08 00000000 */   nop
    /* A100C 80192C0C 1000BF8F */  lw         $ra, 0x10($sp)
    /* A1010 80192C10 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A1014 80192C14 0800E003 */  jr         $ra
    /* A1018 80192C18 00000000 */   nop
endlabel func_80192BEC
