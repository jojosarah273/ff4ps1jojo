nonmatching func_801950F0, 0x30

glabel func_801950F0
    /* A34F0 801950F0 1A80023C */  lui        $v0, %hi(D_8019DB4C)
    /* A34F4 801950F4 4CDB428C */  lw         $v0, %lo(D_8019DB4C)($v0)
    /* A34F8 801950F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A34FC 801950FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* A3500 80195100 3800428C */  lw         $v0, 0x38($v0)
    /* A3504 80195104 00000000 */  nop
    /* A3508 80195108 09F84000 */  jalr       $v0
    /* A350C 8019510C 00000000 */   nop
    /* A3510 80195110 1000BF8F */  lw         $ra, 0x10($sp)
    /* A3514 80195114 C2170200 */  srl        $v0, $v0, 31
    /* A3518 80195118 0800E003 */  jr         $ra
    /* A351C 8019511C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801950F0
