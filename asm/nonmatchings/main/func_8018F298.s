/* Handwritten function */
nonmatching func_8018F298, 0x44

glabel func_8018F298
    /* 9D698 8018F298 1F80013C */  lui        $at, %hi(D_801F6AF0)
    /* 9D69C 8018F29C F06A3FAC */  sw         $ra, %lo(D_801F6AF0)($at)
    /* 9D6A0 8018F2A0 57000924 */  addiu      $t1, $zero, 0x57
    /* 9D6A4 8018F2A4 B0000A24 */  addiu      $t2, $zero, 0xB0
    /* 9D6A8 8018F2A8 09F84001 */  jalr       $t2
    /* 9D6AC 8018F2AC 00000000 */   nop
    /* 9D6B0 8018F2B0 09000A24 */  addiu      $t2, $zero, 0x9
    /* 9D6B4 8018F2B4 6C01428C */  lw         $v0, 0x16C($v0)
    /* 9D6B8 8018F2B8 00000000 */  nop
    /* 9D6BC 8018F2BC 88194320 */  addi       $v1, $v0, 0x1988 /* handwritten instruction */
    /* 9D6C0 8018F2C0 825D060C */  jal        func_80197608
    /* 9D6C4 8018F2C4 000060AC */   sw        $zero, 0x0($v1)
    /* 9D6C8 8018F2C8 1F801F3C */  lui        $ra, %hi(D_801F6AF0)
    /* 9D6CC 8018F2CC F06AFF8F */  lw         $ra, %lo(D_801F6AF0)($ra)
    /* 9D6D0 8018F2D0 00000000 */  nop
    /* 9D6D4 8018F2D4 0800E003 */  jr         $ra
    /* 9D6D8 8018F2D8 00000000 */   nop
endlabel func_8018F298
