nonmatching func_80187C54, 0x48

glabel func_80187C54
    /* 96054 80187C54 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 96058 80187C58 1000BFAF */  sw         $ra, 0x10($sp)
  .L80187C5C:
    /* 9605C 80187C5C 3A4A060C */  jal        func_801928E8
    /* 96060 80187C60 21200000 */   addu      $a0, $zero, $zero
    /* 96064 80187C64 21200000 */  addu       $a0, $zero, $zero
    /* 96068 80187C68 1B1D060C */  jal        func_8018746C
    /* 9606C 80187C6C 21280000 */   addu      $a1, $zero, $zero
    /* 96070 80187C70 BC018287 */  lh         $v0, %gp_rel(D_8019EEB8)($gp)
    /* 96074 80187C74 00000000 */  nop
    /* 96078 80187C78 F8FF401C */  bgtz       $v0, .L80187C5C
    /* 9607C 80187C7C 01000224 */   addiu     $v0, $zero, 0x1
    /* 96080 80187C80 10028397 */  lhu        $v1, %gp_rel(D_8019EF0C)($gp)
    /* 96084 80187C84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 96088 80187C88 2C0280AF */  sw         $zero, %gp_rel(D_8019EF28)($gp)
    /* 9608C 80187C8C 280282AF */  sw         $v0, %gp_rel(D_8019EF24)($gp)
    /* 96090 80187C90 FA0183A7 */  sh         $v1, %gp_rel(D_8019EEF6)($gp)
    /* 96094 80187C94 0800E003 */  jr         $ra
    /* 96098 80187C98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80187C54
