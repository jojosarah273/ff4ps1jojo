nonmatching func_800F4470, 0x5C

glabel func_800F4470
    /* 2870 800F4470 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2874 800F4474 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2878 800F4478 9CCE030C */  jal        func_800F3A70
    /* 287C 800F447C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2880 800F4480 C1CE030C */  jal        func_800F3B04
    /* 2884 800F4484 21204000 */   addu      $a0, $v0, $zero
    /* 2888 800F4488 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 288C 800F448C 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 2890 800F4490 00006490 */  lbu        $a0, 0x0($v1)
    /* 2894 800F4494 0000C390 */  lbu        $v1, 0x0($a2)
    /* 2898 800F4498 21104400 */  addu       $v0, $v0, $a0
    /* 289C 800F449C 00004490 */  lbu        $a0, 0x0($v0)
    /* 28A0 800F44A0 00000000 */  nop
    /* 28A4 800F44A4 24186400 */  and        $v1, $v1, $a0
    /* 28A8 800F44A8 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 28AC 800F44AC 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 28B0 800F44B0 01004490 */  lbu        $a0, 0x1($v0)
    /* 28B4 800F44B4 0100A390 */  lbu        $v1, 0x1($a1)
    /* 28B8 800F44B8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 28BC 800F44BC 24186400 */  and        $v1, $v1, $a0
    /* 28C0 800F44C0 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 28C4 800F44C4 0800E003 */  jr         $ra
    /* 28C8 800F44C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4470
