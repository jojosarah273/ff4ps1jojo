nonmatching func_801875AC, 0x5C

glabel func_801875AC
    /* 959AC 801875AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 959B0 801875B0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 959B4 801875B4 0D80023C */  lui        $v0, %hi(D_800D16B6)
    /* 959B8 801875B8 B6164290 */  lbu        $v0, %lo(D_800D16B6)($v0)
    /* 959BC 801875BC 00000000 */  nop
    /* 959C0 801875C0 3A0282A7 */  sh         $v0, %gp_rel(D_8019EF36)($gp)
    /* 959C4 801875C4 08004014 */  bnez       $v0, .L801875E8
    /* 959C8 801875C8 5F000424 */   addiu     $a0, $zero, 0x5F
    /* 959CC 801875CC 7F000424 */  addiu      $a0, $zero, 0x7F
    /* 959D0 801875D0 21280000 */  addu       $a1, $zero, $zero
    /* 959D4 801875D4 7F000624 */  addiu      $a2, $zero, 0x7F
    /* 959D8 801875D8 BE23060C */  jal        func_80188EF8
    /* 959DC 801875DC 21380000 */   addu      $a3, $zero, $zero
    /* 959E0 801875E0 7E1D0608 */  j          .L801875F8
    /* 959E4 801875E4 00000000 */   nop
  .L801875E8:
    /* 959E8 801875E8 5F000524 */  addiu      $a1, $zero, 0x5F
    /* 959EC 801875EC 5F000624 */  addiu      $a2, $zero, 0x5F
    /* 959F0 801875F0 BE23060C */  jal        func_80188EF8
    /* 959F4 801875F4 5F000724 */   addiu     $a3, $zero, 0x5F
  .L801875F8:
    /* 959F8 801875F8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 959FC 801875FC 00000000 */  nop
    /* 95A00 80187600 0800E003 */  jr         $ra
    /* 95A04 80187604 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801875AC
