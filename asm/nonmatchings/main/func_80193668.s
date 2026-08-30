nonmatching func_80193668, 0x2BC

glabel func_80193668
    /* A1A68 80193668 1A80033C */  lui        $v1, %hi(D_8019D0F4)
    /* A1A6C 8019366C F4D0638C */  lw         $v1, %lo(D_8019D0F4)($v1)
    /* A1A70 80193670 B8FFBD27 */  addiu      $sp, $sp, -0x48
    /* A1A74 80193674 2800B2AF */  sw         $s2, 0x28($sp)
    /* A1A78 80193678 5C00B28F */  lw         $s2, 0x5C($sp)
    /* A1A7C 8019367C 3000B4AF */  sw         $s4, 0x30($sp)
    /* A1A80 80193680 5800B48F */  lw         $s4, 0x58($sp)
    /* A1A84 80193684 3400B5AF */  sw         $s5, 0x34($sp)
    /* A1A88 80193688 21A88000 */  addu       $s5, $a0, $zero
    /* A1A8C 8019368C 3800B6AF */  sw         $s6, 0x38($sp)
    /* A1A90 80193690 21B0A000 */  addu       $s6, $a1, $zero
    /* A1A94 80193694 2C00B3AF */  sw         $s3, 0x2C($sp)
    /* A1A98 80193698 2198C000 */  addu       $s3, $a2, $zero
    /* A1A9C 8019369C 3C00B7AF */  sw         $s7, 0x3C($sp)
    /* A1AA0 801936A0 21B8E000 */  addu       $s7, $a3, $zero
    /* A1AA4 801936A4 4000BFAF */  sw         $ra, 0x40($sp)
    /* A1AA8 801936A8 2400B1AF */  sw         $s1, 0x24($sp)
    /* A1AAC 801936AC 08006228 */  slti       $v0, $v1, 0x8
    /* A1AB0 801936B0 03004014 */  bnez       $v0, .L801936C0
    /* A1AB4 801936B4 2000B0AF */   sw        $s0, 0x20($sp)
    /* A1AB8 801936B8 3E4E0608 */  j          .L801938F8
    /* A1ABC 801936BC FFFF0224 */   addiu     $v0, $zero, -0x1
  .L801936C0:
    /* A1AC0 801936C0 03006014 */  bnez       $v1, .L801936D0
    /* A1AC4 801936C4 40100300 */   sll       $v0, $v1, 1
    /* A1AC8 801936C8 1A80013C */  lui        $at, %hi(D_8019DAFC)
    /* A1ACC 801936CC FCDA20AC */  sw         $zero, %lo(D_8019DAFC)($at)
  .L801936D0:
    /* A1AD0 801936D0 21104300 */  addu       $v0, $v0, $v1
    /* A1AD4 801936D4 00210200 */  sll        $a0, $v0, 4
    /* A1AD8 801936D8 1A80033C */  lui        $v1, %hi(D_8019DAFC)
    /* A1ADC 801936DC FCDA638C */  lw         $v1, %lo(D_8019DAFC)($v1)
    /* A1AE0 801936E0 0100622E */  sltiu      $v0, $s3, 0x1
    /* A1AE4 801936E4 1A80013C */  lui        $at, %hi(D_8019CFA0)
    /* A1AE8 801936E8 21082400 */  addu       $at, $at, $a0
    /* A1AEC 801936EC A0CF22AC */  sw         $v0, %lo(D_8019CFA0)($at)
    /* A1AF0 801936F0 21107200 */  addu       $v0, $v1, $s2
    /* A1AF4 801936F4 01044228 */  slti       $v0, $v0, 0x401
    /* A1AF8 801936F8 02004014 */  bnez       $v0, .L80193704
    /* A1AFC 801936FC 00040224 */   addiu     $v0, $zero, 0x400
    /* A1B00 80193700 23904300 */  subu       $s2, $v0, $v1
  .L80193704:
    /* A1B04 80193704 1A80113C */  lui        $s1, %hi(D_8019CF84)
    /* A1B08 80193708 84CF3126 */  addiu      $s1, $s1, %lo(D_8019CF84)
    /* A1B0C 8019370C 21209100 */  addu       $a0, $a0, $s1
    /* A1B10 80193710 21280000 */  addu       $a1, $zero, $zero
    /* A1B14 80193714 00010224 */  addiu      $v0, $zero, 0x100
    /* A1B18 80193718 1C00A2A7 */  sh         $v0, 0x1C($sp)
    /* A1B1C 8019371C 1E00A2A7 */  sh         $v0, 0x1E($sp)
    /* A1B20 80193720 1800A227 */  addiu      $v0, $sp, 0x18
    /* A1B24 80193724 2080073C */  lui        $a3, %hi(D_801FD350)
    /* A1B28 80193728 50D3E794 */  lhu        $a3, %lo(D_801FD350)($a3)
    /* A1B2C 8019372C 21300000 */  addu       $a2, $zero, $zero
    /* A1B30 80193730 1800A0A7 */  sh         $zero, 0x18($sp)
    /* A1B34 80193734 1A00A0A7 */  sh         $zero, 0x1A($sp)
    /* A1B38 80193738 EE5C060C */  jal        func_801973B8
    /* A1B3C 8019373C 1000A2AF */   sw        $v0, 0x10($sp)
    /* A1B40 80193740 29008012 */  beqz       $s4, .L801937E8
    /* A1B44 80193744 F0FF3026 */   addiu     $s0, $s1, -0x10
    /* A1B48 80193748 1A80023C */  lui        $v0, %hi(D_8019D0F4)
    /* A1B4C 8019374C F4D0428C */  lw         $v0, %lo(D_8019D0F4)($v0)
    /* A1B50 80193750 00000000 */  nop
    /* A1B54 80193754 40200200 */  sll        $a0, $v0, 1
    /* A1B58 80193758 21208200 */  addu       $a0, $a0, $v0
    /* A1B5C 8019375C 00210400 */  sll        $a0, $a0, 4
    /* A1B60 80193760 E65C060C */  jal        func_80197398
    /* A1B64 80193764 21209000 */   addu      $a0, $a0, $s0
    /* A1B68 80193768 1A80033C */  lui        $v1, %hi(D_8019D0F4)
    /* A1B6C 8019376C F4D0638C */  lw         $v1, %lo(D_8019D0F4)($v1)
    /* A1B70 80193770 00000000 */  nop
    /* A1B74 80193774 40100300 */  sll        $v0, $v1, 1
    /* A1B78 80193778 21104300 */  addu       $v0, $v0, $v1
    /* A1B7C 8019377C 00110200 */  sll        $v0, $v0, 4
    /* A1B80 80193780 21105000 */  addu       $v0, $v0, $s0
    /* A1B84 80193784 040040A0 */  sb         $zero, 0x4($v0)
    /* A1B88 80193788 1A80033C */  lui        $v1, %hi(D_8019D0F4)
    /* A1B8C 8019378C F4D0638C */  lw         $v1, %lo(D_8019D0F4)($v1)
    /* A1B90 80193790 00000000 */  nop
    /* A1B94 80193794 40100300 */  sll        $v0, $v1, 1
    /* A1B98 80193798 21104300 */  addu       $v0, $v0, $v1
    /* A1B9C 8019379C 00110200 */  sll        $v0, $v0, 4
    /* A1BA0 801937A0 21105000 */  addu       $v0, $v0, $s0
    /* A1BA4 801937A4 050040A0 */  sb         $zero, 0x5($v0)
    /* A1BA8 801937A8 1A80033C */  lui        $v1, %hi(D_8019D0F4)
    /* A1BAC 801937AC F4D0638C */  lw         $v1, %lo(D_8019D0F4)($v1)
    /* A1BB0 801937B0 0200853A */  xori       $a1, $s4, 0x2
    /* A1BB4 801937B4 40100300 */  sll        $v0, $v1, 1
    /* A1BB8 801937B8 21104300 */  addu       $v0, $v0, $v1
    /* A1BBC 801937BC 00110200 */  sll        $v0, $v0, 4
    /* A1BC0 801937C0 21105000 */  addu       $v0, $v0, $s0
    /* A1BC4 801937C4 060040A0 */  sb         $zero, 0x6($v0)
    /* A1BC8 801937C8 1A80023C */  lui        $v0, %hi(D_8019D0F4)
    /* A1BCC 801937CC F4D0428C */  lw         $v0, %lo(D_8019D0F4)($v0)
    /* A1BD0 801937D0 0100A52C */  sltiu      $a1, $a1, 0x1
    /* A1BD4 801937D4 40200200 */  sll        $a0, $v0, 1
    /* A1BD8 801937D8 21208200 */  addu       $a0, $a0, $v0
    /* A1BDC 801937DC 00210400 */  sll        $a0, $a0, 4
    /* A1BE0 801937E0 B65C060C */  jal        func_801972D8
    /* A1BE4 801937E4 21209000 */   addu      $a0, $a0, $s0
  .L801937E8:
    /* A1BE8 801937E8 F0FF2226 */  addiu      $v0, $s1, -0x10
    /* A1BEC 801937EC 1A80043C */  lui        $a0, %hi(D_8019D0F4)
    /* A1BF0 801937F0 F4D0848C */  lw         $a0, %lo(D_8019D0F4)($a0)
    /* A1BF4 801937F4 1A80053C */  lui        $a1, %hi(D_8019DAFC)
    /* A1BF8 801937F8 FCDAA58C */  lw         $a1, %lo(D_8019DAFC)($a1)
    /* A1BFC 801937FC 40180400 */  sll        $v1, $a0, 1
    /* A1C00 80193800 21186400 */  addu       $v1, $v1, $a0
    /* A1C04 80193804 00190300 */  sll        $v1, $v1, 4
    /* A1C08 80193808 21106200 */  addu       $v0, $v1, $v0
    /* A1C0C 8019380C 2120A400 */  addu       $a0, $a1, $a0
    /* A1C10 80193810 080055A4 */  sh         $s5, 0x8($v0)
    /* A1C14 80193814 0A0056A4 */  sh         $s6, 0xA($v0)
    /* A1C18 80193818 0C0053A4 */  sh         $s3, 0xC($v0)
    /* A1C1C 8019381C 0E0057A4 */  sh         $s7, 0xE($v0)
    /* A1C20 80193820 2080023C */  lui        $v0, %hi(D_801F8F48)
    /* A1C24 80193824 488F4224 */  addiu      $v0, $v0, %lo(D_801F8F48)
    /* A1C28 80193828 21208200 */  addu       $a0, $a0, $v0
    /* A1C2C 8019382C 00290500 */  sll        $a1, $a1, 4
    /* A1C30 80193830 2080023C */  lui        $v0, %hi(D_801F9350)
    /* A1C34 80193834 50934224 */  addiu      $v0, $v0, %lo(D_801F9350)
    /* A1C38 80193838 1A80013C */  lui        $at, %hi(D_8019CF98)
    /* A1C3C 8019383C 21082300 */  addu       $at, $at, $v1
    /* A1C40 80193840 98CF24AC */  sw         $a0, %lo(D_8019CF98)($at)
    /* A1C44 80193844 1A80043C */  lui        $a0, %hi(D_8019CF98)
    /* A1C48 80193848 21208300 */  addu       $a0, $a0, $v1
    /* A1C4C 8019384C 98CF848C */  lw         $a0, %lo(D_8019CF98)($a0)
    /* A1C50 80193850 2128A200 */  addu       $a1, $a1, $v0
    /* A1C54 80193854 1A80013C */  lui        $at, %hi(D_8019CF90)
    /* A1C58 80193858 21082300 */  addu       $at, $at, $v1
    /* A1C5C 8019385C 90CF32AC */  sw         $s2, %lo(D_8019CF90)($at)
    /* A1C60 80193860 1A80013C */  lui        $at, %hi(D_8019CF94)
    /* A1C64 80193864 21082300 */  addu       $at, $at, $v1
    /* A1C68 80193868 94CF25AC */  sw         $a1, %lo(D_8019CF94)($at)
    /* A1C6C 8019386C 1A80013C */  lui        $at, %hi(D_8019CF9C)
    /* A1C70 80193870 21082300 */  addu       $at, $at, $v1
    /* A1C74 80193874 9CCF20AC */  sw         $zero, %lo(D_8019CF9C)($at)
    /* A1C78 80193878 000080A0 */  sb         $zero, 0x0($a0)
    /* A1C7C 8019387C 1A80033C */  lui        $v1, %hi(D_8019D0F4)
    /* A1C80 80193880 F4D0638C */  lw         $v1, %lo(D_8019D0F4)($v1)
    /* A1C84 80193884 00000000 */  nop
    /* A1C88 80193888 40100300 */  sll        $v0, $v1, 1
    /* A1C8C 8019388C 21104300 */  addu       $v0, $v0, $v1
    /* A1C90 80193890 00110200 */  sll        $v0, $v0, 4
    /* A1C94 80193894 1A80103C */  lui        $s0, %hi(D_8019CF94)
    /* A1C98 80193898 21800202 */  addu       $s0, $s0, $v0
    /* A1C9C 8019389C 94CF108E */  lw         $s0, %lo(D_8019CF94)($s0)
    /* A1CA0 801938A0 0A00401A */  blez       $s2, .L801938CC
    /* A1CA4 801938A4 21880000 */   addu      $s1, $zero, $zero
  .L801938A8:
    /* A1CA8 801938A8 D65C060C */  jal        func_80197358
    /* A1CAC 801938AC 21200002 */   addu      $a0, $s0, $zero
    /* A1CB0 801938B0 2080023C */  lui        $v0, %hi(D_801FD352)
    /* A1CB4 801938B4 52D34294 */  lhu        $v0, %lo(D_801FD352)($v0)
    /* A1CB8 801938B8 01003126 */  addiu      $s1, $s1, 0x1
    /* A1CBC 801938BC 0E0002A6 */  sh         $v0, 0xE($s0)
    /* A1CC0 801938C0 2A103202 */  slt        $v0, $s1, $s2
    /* A1CC4 801938C4 F8FF4014 */  bnez       $v0, .L801938A8
    /* A1CC8 801938C8 10001026 */   addiu     $s0, $s0, 0x10
  .L801938CC:
    /* A1CCC 801938CC 1A80053C */  lui        $a1, %hi(D_8019D0F4)
    /* A1CD0 801938D0 F4D0A524 */  addiu      $a1, $a1, %lo(D_8019D0F4)
    /* A1CD4 801938D4 0000A48C */  lw         $a0, 0x0($a1)
    /* A1CD8 801938D8 1A80033C */  lui        $v1, %hi(D_8019DAFC)
    /* A1CDC 801938DC FCDA638C */  lw         $v1, %lo(D_8019DAFC)($v1)
    /* A1CE0 801938E0 21108000 */  addu       $v0, $a0, $zero
    /* A1CE4 801938E4 01008424 */  addiu      $a0, $a0, 0x1
    /* A1CE8 801938E8 21187200 */  addu       $v1, $v1, $s2
    /* A1CEC 801938EC 1A80013C */  lui        $at, %hi(D_8019DAFC)
    /* A1CF0 801938F0 FCDA23AC */  sw         $v1, %lo(D_8019DAFC)($at)
    /* A1CF4 801938F4 0000A4AC */  sw         $a0, 0x0($a1)
  .L801938F8:
    /* A1CF8 801938F8 4000BF8F */  lw         $ra, 0x40($sp)
    /* A1CFC 801938FC 3C00B78F */  lw         $s7, 0x3C($sp)
    /* A1D00 80193900 3800B68F */  lw         $s6, 0x38($sp)
    /* A1D04 80193904 3400B58F */  lw         $s5, 0x34($sp)
    /* A1D08 80193908 3000B48F */  lw         $s4, 0x30($sp)
    /* A1D0C 8019390C 2C00B38F */  lw         $s3, 0x2C($sp)
    /* A1D10 80193910 2800B28F */  lw         $s2, 0x28($sp)
    /* A1D14 80193914 2400B18F */  lw         $s1, 0x24($sp)
    /* A1D18 80193918 2000B08F */  lw         $s0, 0x20($sp)
    /* A1D1C 8019391C 0800E003 */  jr         $ra
    /* A1D20 80193920 4800BD27 */   addiu     $sp, $sp, 0x48
endlabel func_80193668
