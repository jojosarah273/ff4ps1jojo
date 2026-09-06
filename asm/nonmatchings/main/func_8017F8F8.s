nonmatching func_8017F8F8, 0x5C

glabel func_8017F8F8
    /* 8DCF8 8017F8F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8DCFC 8017F8FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8DD00 8017F900 FFFFA530 */  andi       $a1, $a1, 0xFFFF
    /* 8DD04 8017F904 003C0700 */  sll        $a3, $a3, 16
    /* 8DD08 8017F908 033C0700 */  sra        $a3, $a3, 16
    /* 8DD0C 8017F90C 0700E004 */  bltz       $a3, .L8017F92C
    /* 8DD10 8017F910 FFFFC630 */   andi      $a2, $a2, 0xFFFF
    /* 8DD14 8017F914 0D80023C */  lui        $v0, %hi(D_800D2105)
    /* 8DD18 8017F918 05214290 */  lbu        $v0, %lo(D_800D2105)($v0)
    /* 8DD1C 8017F91C 07000324 */  addiu      $v1, $zero, 0x7
    /* 8DD20 8017F920 07004230 */  andi       $v0, $v0, 0x7
    /* 8DD24 8017F924 05004310 */  beq        $v0, $v1, .L8017F93C
    /* 8DD28 8017F928 00000000 */   nop
  .L8017F92C:
    /* 8DD2C 8017F92C 8105060C */  jal        func_80181604
    /* 8DD30 8017F930 00000000 */   nop
    /* 8DD34 8017F934 51FE0508 */  j          .L8017F944
    /* 8DD38 8017F938 00000000 */   nop
  .L8017F93C:
    /* 8DD3C 8017F93C 8BFE050C */  jal        func_8017FA2C
    /* 8DD40 8017F940 00000000 */   nop
  .L8017F944:
    /* 8DD44 8017F944 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8DD48 8017F948 00000000 */  nop
    /* 8DD4C 8017F94C 0800E003 */  jr         $ra
    /* 8DD50 8017F950 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017F8F8
