nonmatching func_80189CF4, 0x44

glabel func_80189CF4
    /* 980F4 80189CF4 9C028287 */  lh         $v0, %gp_rel(D_8019EF98)($gp)
    /* 980F8 80189CF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 980FC 80189CFC 0A004010 */  beqz       $v0, .L80189D28
    /* 98100 80189D00 1000BFAF */   sw        $ra, 0x10($sp)
    /* 98104 80189D04 21200000 */  addu       $a0, $zero, $zero
    /* 98108 80189D08 FF00053C */  lui        $a1, (0xFFFFFF >> 16)
    /* 9810C 80189D0C 0E31060C */  jal        func_8018C438
    /* 98110 80189D10 FFFFA534 */   ori       $a1, $a1, (0xFFFFFF & 0xFFFF)
    /* 98114 80189D14 0E2E060C */  jal        func_8018B838
    /* 98118 80189D18 21200000 */   addu      $a0, $zero, $zero
    /* 9811C 80189D1C FA30060C */  jal        func_8018C3E8
    /* 98120 80189D20 21200000 */   addu      $a0, $zero, $zero
    /* 98124 80189D24 9C0280A7 */  sh         $zero, %gp_rel(D_8019EF98)($gp)
  .L80189D28:
    /* 98128 80189D28 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9812C 80189D2C 00000000 */  nop
    /* 98130 80189D30 0800E003 */  jr         $ra
    /* 98134 80189D34 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80189CF4
