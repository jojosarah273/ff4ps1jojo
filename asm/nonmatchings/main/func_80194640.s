nonmatching func_80194640, 0x60

glabel func_80194640
    /* A2A40 80194640 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A2A44 80194644 1000B0AF */  sw         $s0, 0x10($sp)
    /* A2A48 80194648 21808000 */  addu       $s0, $a0, $zero
    /* A2A4C 8019464C 1400B1AF */  sw         $s1, 0x14($sp)
    /* A2A50 80194650 2188A000 */  addu       $s1, $a1, $zero
    /* A2A54 80194654 0F80043C */  lui        $a0, %hi(D_800F394C)
    /* A2A58 80194658 4C398424 */  addiu      $a0, $a0, %lo(D_800F394C)
    /* A2A5C 8019465C 1800BFAF */  sw         $ra, 0x18($sp)
    /* A2A60 80194660 FF50060C */  jal        func_801943FC
    /* A2A64 80194664 21280002 */   addu      $a1, $s0, $zero
    /* A2A68 80194668 21280002 */  addu       $a1, $s0, $zero
    /* A2A6C 8019466C 1A80023C */  lui        $v0, %hi(D_8019DB4C)
    /* A2A70 80194670 4CDB428C */  lw         $v0, %lo(D_8019DB4C)($v0)
    /* A2A74 80194674 08000624 */  addiu      $a2, $zero, 0x8
    /* A2A78 80194678 2000448C */  lw         $a0, 0x20($v0)
    /* A2A7C 8019467C 0800428C */  lw         $v0, 0x8($v0)
    /* A2A80 80194680 00000000 */  nop
    /* A2A84 80194684 09F84000 */  jalr       $v0
    /* A2A88 80194688 21382002 */   addu      $a3, $s1, $zero
    /* A2A8C 8019468C 1800BF8F */  lw         $ra, 0x18($sp)
    /* A2A90 80194690 1400B18F */  lw         $s1, 0x14($sp)
    /* A2A94 80194694 1000B08F */  lw         $s0, 0x10($sp)
    /* A2A98 80194698 0800E003 */  jr         $ra
    /* A2A9C 8019469C 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80194640
