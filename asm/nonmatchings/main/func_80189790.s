nonmatching func_80189790, 0x90

glabel func_80189790
    /* 97B90 80189790 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 97B94 80189794 1000BFAF */  sw         $ra, 0x10($sp)
    /* 97B98 80189798 4A2B060C */  jal        func_8018AD28
    /* 97B9C 8018979C 00000000 */   nop
    /* 97BA0 801897A0 08000424 */  addiu      $a0, $zero, 0x8
    /* 97BA4 801897A4 1F80053C */  lui        $a1, %hi(D_801F6698)
    /* 97BA8 801897A8 722B060C */  jal        func_8018ADC8
    /* 97BAC 801897AC 9866A524 */   addiu     $a1, $a1, %lo(D_801F6698)
    /* 97BB0 801897B0 8632060C */  jal        func_8018CA18
    /* 97BB4 801897B4 21200000 */   addu      $a0, $zero, $zero
    /* 97BB8 801897B8 6E32060C */  jal        func_8018C9B8
    /* 97BBC 801897BC 10100424 */   addiu     $a0, $zero, 0x1010
    /* 97BC0 801897C0 0700043C */  lui        $a0, (0x7EFF0 >> 16)
    /* 97BC4 801897C4 1632060C */  jal        func_8018C858
    /* 97BC8 801897C8 F0EF8434 */   ori       $a0, $a0, (0x7EFF0 & 0xFFFF)
    /* 97BCC 801897CC 07000324 */  addiu      $v1, $zero, 0x7
    /* 97BD0 801897D0 1F80023C */  lui        $v0, %hi(D_801F66E8)
    /* 97BD4 801897D4 E8664224 */  addiu      $v0, $v0, %lo(D_801F66E8)
    /* 97BD8 801897D8 8C004224 */  addiu      $v0, $v0, 0x8C
    /* 97BDC 801897DC 9C0280A7 */  sh         $zero, %gp_rel(D_8019EF98)($gp)
  .L801897E0:
    /* 97BE0 801897E0 000040AC */  sw         $zero, 0x0($v0)
    /* 97BE4 801897E4 FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 97BE8 801897E8 FDFF6104 */  bgez       $v1, .L801897E0
    /* 97BEC 801897EC ECFF4224 */   addiu     $v0, $v0, -0x14
    /* 97BF0 801897F0 21200000 */  addu       $a0, $zero, $zero
    /* 97BF4 801897F4 FF00053C */  lui        $a1, (0xFFFFFF >> 16)
    /* 97BF8 801897F8 0E31060C */  jal        func_8018C438
    /* 97BFC 801897FC FFFFA534 */   ori       $a1, $a1, (0xFFFFFF & 0xFFFF)
    /* 97C00 80189800 21200000 */  addu       $a0, $zero, $zero
    /* 97C04 80189804 FF00053C */  lui        $a1, (0xFFFFFF >> 16)
    /* 97C08 80189808 522D060C */  jal        func_8018B548
    /* 97C0C 8018980C FFFFA534 */   ori       $a1, $a1, (0xFFFFFF & 0xFFFF)
    /* 97C10 80189810 1000BF8F */  lw         $ra, 0x10($sp)
    /* 97C14 80189814 00000000 */  nop
    /* 97C18 80189818 0800E003 */  jr         $ra
    /* 97C1C 8018981C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80189790
