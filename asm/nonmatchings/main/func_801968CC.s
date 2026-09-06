nonmatching func_801968CC, 0x144

glabel func_801968CC
    /* A4CCC 801968CC E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A4CD0 801968D0 1800BFAF */  sw         $ra, 0x18($sp)
    /* A4CD4 801968D4 3A4A060C */  jal        func_801928E8
    /* A4CD8 801968D8 FFFF0424 */   addiu     $a0, $zero, -0x1
    /* A4CDC 801968DC 1A80033C */  lui        $v1, %hi(D_8019DC90)
    /* A4CE0 801968E0 90DC638C */  lw         $v1, %lo(D_8019DC90)($v1)
    /* A4CE4 801968E4 00000000 */  nop
    /* A4CE8 801968E8 2A186200 */  slt        $v1, $v1, $v0
    /* A4CEC 801968EC 0C006014 */  bnez       $v1, .L80196920
    /* A4CF0 801968F0 00000000 */   nop
    /* A4CF4 801968F4 1A80033C */  lui        $v1, %hi(D_8019DC94)
    /* A4CF8 801968F8 94DC6324 */  addiu      $v1, $v1, %lo(D_8019DC94)
    /* A4CFC 801968FC 0000628C */  lw         $v0, 0x0($v1)
    /* A4D00 80196900 00000000 */  nop
    /* A4D04 80196904 21204000 */  addu       $a0, $v0, $zero
    /* A4D08 80196908 01004224 */  addiu      $v0, $v0, 0x1
    /* A4D0C 8019690C 000062AC */  sw         $v0, 0x0($v1)
    /* A4D10 80196910 0F00023C */  lui        $v0, (0xF0000 >> 16)
    /* A4D14 80196914 2A104400 */  slt        $v0, $v0, $a0
    /* A4D18 80196918 38004010 */  beqz       $v0, .L801969FC
    /* A4D1C 8019691C 00000000 */   nop
  .L80196920:
    /* A4D20 80196920 1A80063C */  lui        $a2, %hi(D_8019DC5C)
    /* A4D24 80196924 5CDCC68C */  lw         $a2, %lo(D_8019DC5C)($a2)
    /* A4D28 80196928 0F80043C */  lui        $a0, %hi(D_800F3A00)
    /* A4D2C 8019692C 003A8424 */  addiu      $a0, $a0, %lo(D_800F3A00)
    /* A4D30 80196930 0000C28C */  lw         $v0, 0x0($a2)
    /* A4D34 80196934 1A80053C */  lui        $a1, %hi(D_8019DC7C)
    /* A4D38 80196938 7CDCA58C */  lw         $a1, %lo(D_8019DC7C)($a1)
    /* A4D3C 8019693C 1A80023C */  lui        $v0, %hi(D_8019DC60)
    /* A4D40 80196940 60DC428C */  lw         $v0, %lo(D_8019DC60)($v0)
    /* A4D44 80196944 1A80033C */  lui        $v1, %hi(D_8019DC80)
    /* A4D48 80196948 80DC638C */  lw         $v1, %lo(D_8019DC80)($v1)
    /* A4D4C 8019694C 0000428C */  lw         $v0, 0x0($v0)
    /* A4D50 80196950 2328A300 */  subu       $a1, $a1, $v1
    /* A4D54 80196954 1000A2AF */  sw         $v0, 0x10($sp)
    /* A4D58 80196958 1A80023C */  lui        $v0, %hi(D_8019DC68)
    /* A4D5C 8019695C 68DC428C */  lw         $v0, %lo(D_8019DC68)($v0)
    /* A4D60 80196960 0000C68C */  lw         $a2, 0x0($a2)
    /* A4D64 80196964 0000478C */  lw         $a3, 0x0($v0)
    /* A4D68 80196968 323C060C */  jal        func_8018F0C8
    /* A4D6C 8019696C 3F00A530 */   andi      $a1, $a1, 0x3F
    /* A4D70 80196970 1D4B060C */  jal        func_80192C74
    /* A4D74 80196974 21200000 */   addu      $a0, $zero, $zero
    /* A4D78 80196978 1A80013C */  lui        $at, %hi(D_8019DC80)
    /* A4D7C 8019697C 80DC20AC */  sw         $zero, %lo(D_8019DC80)($at)
    /* A4D80 80196980 1A80033C */  lui        $v1, %hi(D_8019DC80)
    /* A4D84 80196984 80DC638C */  lw         $v1, %lo(D_8019DC80)($v1)
    /* A4D88 80196988 1A80013C */  lui        $at, %hi(D_8019DC8C)
    /* A4D8C 8019698C 8CDC22AC */  sw         $v0, %lo(D_8019DC8C)($at)
    /* A4D90 80196990 1A80013C */  lui        $at, %hi(D_8019DC7C)
    /* A4D94 80196994 7CDC23AC */  sw         $v1, %lo(D_8019DC7C)($at)
    /* A4D98 80196998 1A80033C */  lui        $v1, %hi(D_8019DC68)
    /* A4D9C 8019699C 68DC638C */  lw         $v1, %lo(D_8019DC68)($v1)
    /* A4DA0 801969A0 01040224 */  addiu      $v0, $zero, 0x401
    /* A4DA4 801969A4 000062AC */  sw         $v0, 0x0($v1)
    /* A4DA8 801969A8 1A80033C */  lui        $v1, %hi(D_8019DC78)
    /* A4DAC 801969AC 78DC638C */  lw         $v1, %lo(D_8019DC78)($v1)
    /* A4DB0 801969B0 00000000 */  nop
    /* A4DB4 801969B4 0000628C */  lw         $v0, 0x0($v1)
    /* A4DB8 801969B8 00000000 */  nop
    /* A4DBC 801969BC 00084234 */  ori        $v0, $v0, 0x800
    /* A4DC0 801969C0 000062AC */  sw         $v0, 0x0($v1)
    /* A4DC4 801969C4 1A80033C */  lui        $v1, %hi(D_8019DC5C)
    /* A4DC8 801969C8 5CDC638C */  lw         $v1, %lo(D_8019DC5C)($v1)
    /* A4DCC 801969CC 0002023C */  lui        $v0, (0x2000000 >> 16)
    /* A4DD0 801969D0 000062AC */  sw         $v0, 0x0($v1)
    /* A4DD4 801969D4 1A80033C */  lui        $v1, %hi(D_8019DC5C)
    /* A4DD8 801969D8 5CDC638C */  lw         $v1, %lo(D_8019DC5C)($v1)
    /* A4DDC 801969DC 0001023C */  lui        $v0, (0x1000000 >> 16)
    /* A4DE0 801969E0 000062AC */  sw         $v0, 0x0($v1)
    /* A4DE4 801969E4 1A80043C */  lui        $a0, %hi(D_8019DC8C)
    /* A4DE8 801969E8 8CDC848C */  lw         $a0, %lo(D_8019DC8C)($a0)
    /* A4DEC 801969EC 1D4B060C */  jal        func_80192C74
    /* A4DF0 801969F0 00000000 */   nop
    /* A4DF4 801969F4 805A0608 */  j          .L80196A00
    /* A4DF8 801969F8 FFFF0224 */   addiu     $v0, $zero, -0x1
  .L801969FC:
    /* A4DFC 801969FC 21100000 */  addu       $v0, $zero, $zero
  .L80196A00:
    /* A4E00 80196A00 1800BF8F */  lw         $ra, 0x18($sp)
    /* A4E04 80196A04 2000BD27 */  addiu      $sp, $sp, 0x20
    /* A4E08 80196A08 0800E003 */  jr         $ra
    /* A4E0C 80196A0C 00000000 */   nop
endlabel func_801968CC
