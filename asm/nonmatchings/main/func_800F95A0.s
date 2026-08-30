nonmatching func_800F95A0, 0x38

glabel func_800F95A0
    /* 79A0 800F95A0 5000868F */  lw         $a2, %gp_rel(D_8019ED4C)($gp)
    /* 79A4 800F95A4 00000000 */  nop
    /* 79A8 800F95A8 0000C394 */  lhu        $v1, 0x0($a2)
    /* 79AC 800F95AC 0D80023C */  lui        $v0, %hi(D_800D0001)
    /* 79B0 800F95B0 21106200 */  addu       $v0, $v1, $v0
    /* 79B4 800F95B4 01004490 */  lbu        $a0, %lo(D_800D0001)($v0)
    /* 79B8 800F95B8 02004590 */  lbu        $a1, %lo(D_800D0002)($v0)
    /* 79BC 800F95BC 02006324 */  addiu      $v1, $v1, 0x2
    /* 79C0 800F95C0 0000C3A4 */  sh         $v1, 0x0($a2)
    /* 79C4 800F95C4 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 79C8 800F95C8 00220400 */  sll        $a0, $a0, 8
    /* 79CC 800F95CC 2528A400 */  or         $a1, $a1, $a0
    /* 79D0 800F95D0 0800E003 */  jr         $ra
    /* 79D4 800F95D4 000045A4 */   sh        $a1, 0x0($v0)
endlabel func_800F95A0
