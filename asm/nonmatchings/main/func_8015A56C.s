nonmatching func_8015A56C, 0x4C

glabel func_8015A56C
    /* 6896C 8015A56C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 68970 8015A570 1000BFAF */  sw         $ra, 0x10($sp)
    /* 68974 8015A574 0FCF030C */  jal        func_800F3C3C
    /* 68978 8015A578 21200000 */   addu      $a0, $zero, $zero
    /* 6897C 8015A57C 21284000 */  addu       $a1, $v0, $zero
    /* 68980 8015A580 AC00A290 */  lbu        $v0, 0xAC($a1)
    /* 68984 8015A584 AB00A490 */  lbu        $a0, 0xAB($a1)
    /* 68988 8015A588 00120200 */  sll        $v0, $v0, 8
    /* 6898C 8015A58C 25208200 */  or         $a0, $a0, $v0
    /* 68990 8015A590 00808330 */  andi       $v1, $a0, 0x8000
    /* 68994 8015A594 02006010 */  beqz       $v1, .L8015A5A0
    /* 68998 8015A598 00000000 */   nop
    /* 6899C 8015A59C 21200000 */  addu       $a0, $zero, $zero
  .L8015A5A0:
    /* 689A0 8015A5A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 689A4 8015A5A4 02120400 */  srl        $v0, $a0, 8
    /* 689A8 8015A5A8 D400A4A0 */  sb         $a0, 0xD4($a1)
    /* 689AC 8015A5AC D500A2A0 */  sb         $v0, 0xD5($a1)
    /* 689B0 8015A5B0 0800E003 */  jr         $ra
    /* 689B4 8015A5B4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015A56C
