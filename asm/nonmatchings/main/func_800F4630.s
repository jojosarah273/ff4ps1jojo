nonmatching func_800F4630, 0x68

glabel func_800F4630
    /* 2A30 800F4630 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2A34 800F4634 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2A38 800F4638 ADCE030C */  jal        func_800F3AB4
    /* 2A3C 800F463C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2A40 800F4640 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 2A44 800F4644 00000000 */  nop
    /* 2A48 800F4648 00006594 */  lhu        $a1, 0x0($v1)
    /* 2A4C 800F464C E7CE030C */  jal        func_800F3B9C
    /* 2A50 800F4650 21204000 */   addu      $a0, $v0, $zero
    /* 2A54 800F4654 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 2A58 800F4658 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 2A5C 800F465C 00006494 */  lhu        $a0, 0x0($v1)
    /* 2A60 800F4660 0000C390 */  lbu        $v1, 0x0($a2)
    /* 2A64 800F4664 21104400 */  addu       $v0, $v0, $a0
    /* 2A68 800F4668 00004490 */  lbu        $a0, 0x0($v0)
    /* 2A6C 800F466C 00000000 */  nop
    /* 2A70 800F4670 24186400 */  and        $v1, $v1, $a0
    /* 2A74 800F4674 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 2A78 800F4678 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2A7C 800F467C 01004490 */  lbu        $a0, 0x1($v0)
    /* 2A80 800F4680 0100A390 */  lbu        $v1, 0x1($a1)
    /* 2A84 800F4684 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2A88 800F4688 24186400 */  and        $v1, $v1, $a0
    /* 2A8C 800F468C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 2A90 800F4690 0800E003 */  jr         $ra
    /* 2A94 800F4694 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4630
