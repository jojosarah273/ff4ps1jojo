nonmatching func_8018ABAC, 0x3C

glabel func_8018ABAC
    /* 98FAC 8018ABAC 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 98FB0 8018ABB0 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 98FB4 8018ABB4 40200400 */  sll        $a0, $a0, 1
    /* 98FB8 8018ABB8 21208200 */  addu       $a0, $a0, $v0
    /* 98FBC 8018ABBC FFFF0224 */  addiu      $v0, $zero, -0x1
    /* 98FC0 8018ABC0 00008494 */  lhu        $a0, 0x0($a0)
    /* 98FC4 8018ABC4 0500A210 */  beq        $a1, $v0, .L8018ABDC
    /* 98FC8 8018ABC8 00000000 */   nop
    /* 98FCC 8018ABCC 1A80023C */  lui        $v0, %hi(D_8019B13C)
    /* 98FD0 8018ABD0 3CB1428C */  lw         $v0, %lo(D_8019B13C)($v0)
    /* 98FD4 8018ABD4 F82A0608 */  j          .L8018ABE0
    /* 98FD8 8018ABD8 04104400 */   sllv      $v0, $a0, $v0
  .L8018ABDC:
    /* 98FDC 8018ABDC 21108000 */  addu       $v0, $a0, $zero
  .L8018ABE0:
    /* 98FE0 8018ABE0 0800E003 */  jr         $ra
    /* 98FE4 8018ABE4 00000000 */   nop
endlabel func_8018ABAC
