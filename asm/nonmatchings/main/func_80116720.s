nonmatching func_80116720, 0x680

glabel func_80116720
    /* 24B20 80116720 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 24B24 80116724 21200000 */  addu       $a0, $zero, $zero
    /* 24B28 80116728 1400BFAF */  sw         $ra, 0x14($sp)
    /* 24B2C 8011672C 77DC030C */  jal        func_800F71DC
    /* 24B30 80116730 1000B0AF */   sw        $s0, 0x10($sp)
    /* 24B34 80116734 5BE3030C */  jal        func_800F8D6C
    /* 24B38 80116738 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 24B3C 8011673C DADA030C */  jal        func_800F6B68
    /* 24B40 80116740 D5090424 */   addiu     $a0, $zero, 0x9D5
    /* 24B44 80116744 62E0030C */  jal        func_800F8188
    /* 24B48 80116748 160A0424 */   addiu     $a0, $zero, 0xA16
    /* 24B4C 8011674C 5DD5030C */  jal        func_800F5574
    /* 24B50 80116750 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 24B54 80116754 F0D4030C */  jal        func_800F53C0
    /* 24B58 80116758 00000000 */   nop
    /* 24B5C 8011675C B1004014 */  bnez       $v0, .L80116A24
    /* 24B60 80116760 00000000 */   nop
  .L80116764:
    /* 24B64 80116764 9CDC030C */  jal        func_800F7270
    /* 24B68 80116768 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 24B6C 8011676C DADA030C */  jal        func_800F6B68
    /* 24B70 80116770 D5090424 */   addiu     $a0, $zero, 0x9D5
    /* 24B74 80116774 62E0030C */  jal        func_800F8188
    /* 24B78 80116778 160A0424 */   addiu     $a0, $zero, 0xA16
    /* 24B7C 8011677C 5DD5030C */  jal        func_800F5574
    /* 24B80 80116780 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 24B84 80116784 F5D4030C */  jal        func_800F53D4
    /* 24B88 80116788 00000000 */   nop
    /* 24B8C 8011678C 15004014 */  bnez       $v0, .L801167E4
    /* 24B90 80116790 00000000 */   nop
    /* 24B94 80116794 5DD5030C */  jal        func_800F5574
    /* 24B98 80116798 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 24B9C 8011679C F0D4030C */  jal        func_800F53C0
    /* 24BA0 801167A0 00000000 */   nop
    /* 24BA4 801167A4 05004014 */  bnez       $v0, .L801167BC
    /* 24BA8 801167A8 00000000 */   nop
    /* 24BAC 801167AC 685B040C */  jal        func_80116DA0
    /* 24BB0 801167B0 00000000 */   nop
    /* 24BB4 801167B4 F1590408 */  j          .L801167C4
    /* 24BB8 801167B8 00000000 */   nop
  .L801167BC:
    /* 24BBC 801167BC B75C040C */  jal        func_801172DC
    /* 24BC0 801167C0 00000000 */   nop
  .L801167C4:
    /* 24BC4 801167C4 9CDC030C */  jal        func_800F7270
    /* 24BC8 801167C8 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 24BCC 801167CC D9D8030C */  jal        func_800F6364
    /* 24BD0 801167D0 00000000 */   nop
    /* 24BD4 801167D4 5BE3030C */  jal        func_800F8D6C
    /* 24BD8 801167D8 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 24BDC 801167DC D9590408 */  j          .L80116764
    /* 24BE0 801167E0 00000000 */   nop
  .L801167E4:
    /* 24BE4 801167E4 DEF9030C */  jal        func_800FE778
    /* 24BE8 801167E8 00000000 */   nop
    /* 24BEC 801167EC EEE3030C */  jal        func_800F8FB8
    /* 24BF0 801167F0 D5000424 */   addiu     $a0, $zero, 0xD5
    /* 24BF4 801167F4 1CFA030C */  jal        func_800FE870
    /* 24BF8 801167F8 00000000 */   nop
    /* 24BFC 801167FC 0C0B040C */  jal        func_80102C30
    /* 24C00 80116800 00000000 */   nop
    /* 24C04 80116804 59D9030C */  jal        func_800F6564
    /* 24C08 80116808 00170424 */   addiu     $a0, $zero, 0x1700
    /* 24C0C 8011680C 5DD5030C */  jal        func_800F5574
    /* 24C10 80116810 03000424 */   addiu     $a0, $zero, 0x3
    /* 24C14 80116814 F5D4030C */  jal        func_800F53D4
    /* 24C18 80116818 00000000 */   nop
    /* 24C1C 8011681C 23004014 */  bnez       $v0, .L801168AC
    /* 24C20 80116820 00000000 */   nop
    /* 24C24 80116824 DC09040C */  jal        func_80102770
    /* 24C28 80116828 00000000 */   nop
    /* 24C2C 8011682C 09FC030C */  jal        func_800FF024
    /* 24C30 80116830 00000000 */   nop
    /* 24C34 80116834 8CD9030C */  jal        func_800F6630
    /* 24C38 80116838 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 24C3C 8011683C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 24C40 80116840 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 24C44 80116844 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 24C48 80116848 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 24C4C 8011684C 00004394 */  lhu        $v1, 0x0($v0)
    /* 24C50 80116850 7B000424 */  addiu      $a0, $zero, 0x7B
    /* 24C54 80116854 8CD9030C */  jal        func_800F6630
    /* 24C58 80116858 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 24C5C 8011685C 1A80043C */  lui        $a0, %hi(D_8019927C)
    /* 24C60 80116860 7C928424 */  addiu      $a0, $a0, %lo(D_8019927C)
    /* 24C64 80116864 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 24C68 80116868 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 24C6C 8011686C 1A80063C */  lui        $a2, %hi(D_8019ED40)
    /* 24C70 80116870 40EDC68C */  lw         $a2, %lo(D_8019ED40)($a2)
    /* 24C74 80116874 00006294 */  lhu        $v0, 0x0($v1)
    /* 24C78 80116878 0000C390 */  lbu        $v1, 0x0($a2)
    /* 24C7C 8011687C 21104400 */  addu       $v0, $v0, $a0
    /* 24C80 80116880 00004590 */  lbu        $a1, 0x0($v0)
    /* 24C84 80116884 02020424 */  addiu      $a0, $zero, 0x202
    /* 24C88 80116888 24186500 */  and        $v1, $v1, $a1
    /* 24C8C 8011688C 48D0030C */  jal        func_800F4120
    /* 24C90 80116890 0000C3A0 */   sb        $v1, 0x0($a2)
    /* 24C94 80116894 D3FF4014 */  bnez       $v0, .L801167E4
    /* 24C98 80116898 00000000 */   nop
    /* 24C9C 8011689C EEE3030C */  jal        func_800F8FB8
    /* 24CA0 801168A0 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 24CA4 801168A4 835A0408 */  j          .L80116A0C
    /* 24CA8 801168A8 00000000 */   nop
  .L801168AC:
    /* 24CAC 801168AC 0FCF030C */  jal        func_800F3C3C
    /* 24CB0 801168B0 21200000 */   addu      $a0, $zero, $zero
    /* 24CB4 801168B4 03004390 */  lbu        $v1, 0x3($v0)
    /* 24CB8 801168B8 00000000 */  nop
    /* 24CBC 801168BC 7F006330 */  andi       $v1, $v1, 0x7F
    /* 24CC0 801168C0 DC09040C */  jal        func_80102770
    /* 24CC4 801168C4 030043A0 */   sb        $v1, 0x3($v0)
    /* 24CC8 801168C8 DA30040C */  jal        func_8010C368
    /* 24CCC 801168CC 00000000 */   nop
    /* 24CD0 801168D0 05C3050C */  jal        func_80170C14
    /* 24CD4 801168D4 00000000 */   nop
    /* 24CD8 801168D8 042C040C */  jal        func_8010B010
    /* 24CDC 801168DC 00000000 */   nop
    /* 24CE0 801168E0 8CD9030C */  jal        func_800F6630
    /* 24CE4 801168E4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 24CE8 801168E8 0DD9030C */  jal        func_800F6434
    /* 24CEC 801168EC 02000424 */   addiu     $a0, $zero, 0x2
    /* 24CF0 801168F0 1D004014 */  bnez       $v0, .L80116968
    /* 24CF4 801168F4 00000000 */   nop
    /* 24CF8 801168F8 8CD9030C */  jal        func_800F6630
    /* 24CFC 801168FC AC000424 */   addiu     $a0, $zero, 0xAC
    /* 24D00 80116900 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 24D04 80116904 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 24D08 80116908 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 24D0C 8011690C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 24D10 80116910 00004394 */  lhu        $v1, 0x0($v0)
    /* 24D14 80116914 7B000424 */  addiu      $a0, $zero, 0x7B
    /* 24D18 80116918 8CD9030C */  jal        func_800F6630
    /* 24D1C 8011691C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 24D20 80116920 1A80043C */  lui        $a0, %hi(D_8019927C)
    /* 24D24 80116924 7C928424 */  addiu      $a0, $a0, %lo(D_8019927C)
    /* 24D28 80116928 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 24D2C 8011692C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 24D30 80116930 1A80063C */  lui        $a2, %hi(D_8019ED40)
    /* 24D34 80116934 40EDC68C */  lw         $a2, %lo(D_8019ED40)($a2)
    /* 24D38 80116938 00006294 */  lhu        $v0, 0x0($v1)
    /* 24D3C 8011693C 0000C390 */  lbu        $v1, 0x0($a2)
    /* 24D40 80116940 21104400 */  addu       $v0, $v0, $a0
    /* 24D44 80116944 00004590 */  lbu        $a1, 0x0($v0)
    /* 24D48 80116948 02020424 */  addiu      $a0, $zero, 0x202
    /* 24D4C 8011694C 24186500 */  and        $v1, $v1, $a1
    /* 24D50 80116950 48D0030C */  jal        func_800F4120
    /* 24D54 80116954 0000C3A0 */   sb        $v1, 0x0($a2)
    /* 24D58 80116958 A2FF4014 */  bnez       $v0, .L801167E4
    /* 24D5C 8011695C 00000000 */   nop
    /* 24D60 80116960 EEE3030C */  jal        func_800F8FB8
    /* 24D64 80116964 AB000424 */   addiu     $a0, $zero, 0xAB
  .L80116968:
    /* 24D68 80116968 77DC030C */  jal        func_800F71DC
    /* 24D6C 8011696C 21200000 */   addu      $a0, $zero, $zero
    /* 24D70 80116970 5BE3030C */  jal        func_800F8D6C
    /* 24D74 80116974 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 24D78 80116978 59D9030C */  jal        func_800F6564
    /* 24D7C 8011697C FE080424 */   addiu     $a0, $zero, 0x8FE
    /* 24D80 80116980 0DD9030C */  jal        func_800F6434
    /* 24D84 80116984 02000424 */   addiu     $a0, $zero, 0x2
    /* 24D88 80116988 20004014 */  bnez       $v0, .L80116A0C
    /* 24D8C 8011698C 00000000 */   nop
    /* 24D90 80116990 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 24D94 80116994 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 24D98 80116998 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 24D9C 8011699C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 24DA0 801169A0 00004394 */  lhu        $v1, 0x0($v0)
    /* 24DA4 801169A4 00000000 */  nop
    /* 24DA8 801169A8 000083A4 */  sh         $v1, 0x0($a0)
  .L801169AC:
    /* 24DAC 801169AC 9CDC030C */  jal        func_800F7270
    /* 24DB0 801169B0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 24DB4 801169B4 DADA030C */  jal        func_800F6B68
    /* 24DB8 801169B8 08090424 */   addiu     $a0, $zero, 0x908
    /* 24DBC 801169BC 0DD9030C */  jal        func_800F6434
    /* 24DC0 801169C0 02020424 */   addiu     $a0, $zero, 0x202
    /* 24DC4 801169C4 87FF4014 */  bnez       $v0, .L801167E4
    /* 24DC8 801169C8 00000000 */   nop
    /* 24DCC 801169CC 3BE4030C */  jal        func_800F90EC
    /* 24DD0 801169D0 0C090424 */   addiu     $a0, $zero, 0x90C
    /* 24DD4 801169D4 8CD9030C */  jal        func_800F6630
    /* 24DD8 801169D8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 24DDC 801169DC 04D5030C */  jal        func_800F5410
    /* 24DE0 801169E0 00000000 */   nop
    /* 24DE4 801169E4 02D0030C */  jal        func_800F4008
    /* 24DE8 801169E8 0F000424 */   addiu     $a0, $zero, 0xF
    /* 24DEC 801169EC 93E0030C */  jal        func_800F824C
    /* 24DF0 801169F0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 24DF4 801169F4 A8D7030C */  jal        func_800F5EA0
    /* 24DF8 801169F8 00000000 */   nop
    /* 24DFC 801169FC 19D7030C */  jal        func_800F5C64
    /* 24E00 80116A00 02020424 */   addiu     $a0, $zero, 0x202
    /* 24E04 80116A04 E9FF4014 */  bnez       $v0, .L801169AC
    /* 24E08 80116A08 00000000 */   nop
  .L80116A0C:
    /* 24E0C 80116A0C 53D9030C */  jal        func_800F654C
    /* 24E10 80116A10 01000424 */   addiu     $a0, $zero, 0x1
    /* 24E14 80116A14 93E0030C */  jal        func_800F824C
    /* 24E18 80116A18 D5000424 */   addiu     $a0, $zero, 0xD5
    /* 24E1C 80116A1C 645B0408 */  j          .L80116D90
    /* 24E20 80116A20 21100000 */   addu      $v0, $zero, $zero
  .L80116A24:
    /* 24E24 80116A24 20D5030C */  jal        func_800F5480
    /* 24E28 80116A28 00000000 */   nop
    /* 24E2C 80116A2C 16E0030C */  jal        func_800F8058
    /* 24E30 80116A30 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 24E34 80116A34 EEE3030C */  jal        func_800F8FB8
    /* 24E38 80116A38 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 24E3C 80116A3C 50D4030C */  jal        func_800F5140
    /* 24E40 80116A40 00000000 */   nop
    /* 24E44 80116A44 D3D3030C */  jal        func_800F4F4C
    /* 24E48 80116A48 00000000 */   nop
    /* 24E4C 80116A4C 0FCF030C */  jal        func_800F3C3C
    /* 24E50 80116A50 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 24E54 80116A54 90DE030C */  jal        func_800F7A40
    /* 24E58 80116A58 21204000 */   addu      $a0, $v0, $zero
    /* 24E5C 80116A5C 93E0030C */  jal        func_800F824C
    /* 24E60 80116A60 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 24E64 80116A64 9CDC030C */  jal        func_800F7270
    /* 24E68 80116A68 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 24E6C 80116A6C 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 24E70 80116A70 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 24E74 80116A74 00000000 */  nop
    /* 24E78 80116A78 00005090 */  lbu        $s0, 0x0($v0)
    /* 24E7C 80116A7C 9CDC030C */  jal        func_800F7270
    /* 24E80 80116A80 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 24E84 80116A84 5D00022E */  sltiu      $v0, $s0, 0x5D
    /* 24E88 80116A88 C0004010 */  beqz       $v0, .L80116D8C
    /* 24E8C 80116A8C 0F80023C */   lui       $v0, %hi(jtbl_800F2664)
    /* 24E90 80116A90 64264224 */  addiu      $v0, $v0, %lo(jtbl_800F2664)
    /* 24E94 80116A94 80181000 */  sll        $v1, $s0, 2
    /* 24E98 80116A98 21186200 */  addu       $v1, $v1, $v0
    /* 24E9C 80116A9C 0000648C */  lw         $a0, 0x0($v1)
    /* 24EA0 80116AA0 00000000 */  nop
    /* 24EA4 80116AA4 08008000 */  jr         $a0
    /* 24EA8 80116AA8 00000000 */   nop
  jlabel .L80116AAC
    /* 24EAC 80116AAC F766040C */  jal        func_80119BDC
    /* 24EB0 80116AB0 00000000 */   nop
    /* 24EB4 80116AB4 645B0408 */  j          .L80116D90
    /* 24EB8 80116AB8 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116ABC
    /* 24EBC 80116ABC 0967040C */  jal        func_80119C24
    /* 24EC0 80116AC0 00000000 */   nop
    /* 24EC4 80116AC4 645B0408 */  j          .L80116D90
    /* 24EC8 80116AC8 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116ACC
    /* 24ECC 80116ACC 5267040C */  jal        func_80119D48
    /* 24ED0 80116AD0 00000000 */   nop
    /* 24ED4 80116AD4 645B0408 */  j          .L80116D90
    /* 24ED8 80116AD8 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116ADC
    /* 24EDC 80116ADC 7967040C */  jal        func_80119DE4
    /* 24EE0 80116AE0 00000000 */   nop
    /* 24EE4 80116AE4 645B0408 */  j          .L80116D90
    /* 24EE8 80116AE8 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116AEC
    /* 24EEC 80116AEC 985D040C */  jal        func_80117660
    /* 24EF0 80116AF0 00000000 */   nop
    /* 24EF4 80116AF4 645B0408 */  j          .L80116D90
    /* 24EF8 80116AF8 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116AFC
    /* 24EFC 80116AFC 9F67040C */  jal        func_80119E7C
    /* 24F00 80116B00 00000000 */   nop
    /* 24F04 80116B04 645B0408 */  j          .L80116D90
    /* 24F08 80116B08 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116B0C
    /* 24F0C 80116B0C A666040C */  jal        func_80119A98
    /* 24F10 80116B10 00000000 */   nop
    /* 24F14 80116B14 645B0408 */  j          .L80116D90
    /* 24F18 80116B18 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116B1C
    /* 24F1C 80116B1C A75F040C */  jal        func_80117E9C
    /* 24F20 80116B20 00000000 */   nop
    /* 24F24 80116B24 645B0408 */  j          .L80116D90
    /* 24F28 80116B28 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116B2C
    /* 24F2C 80116B2C D55D040C */  jal        func_80117754
    /* 24F30 80116B30 00000000 */   nop
    /* 24F34 80116B34 645B0408 */  j          .L80116D90
    /* 24F38 80116B38 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116B3C
    /* 24F3C 80116B3C 8A5D040C */  jal        func_80117628
    /* 24F40 80116B40 00000000 */   nop
    /* 24F44 80116B44 645B0408 */  j          .L80116D90
    /* 24F48 80116B48 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116B4C
    /* 24F4C 80116B4C 9062040C */  jal        func_80118A40
    /* 24F50 80116B50 00000000 */   nop
    /* 24F54 80116B54 645B0408 */  j          .L80116D90
    /* 24F58 80116B58 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116B5C
    /* 24F5C 80116B5C 0864040C */  jal        func_80119020
    /* 24F60 80116B60 00000000 */   nop
    /* 24F64 80116B64 645B0408 */  j          .L80116D90
    /* 24F68 80116B68 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116B6C
    /* 24F6C 80116B6C FE64040C */  jal        func_801193F8
    /* 24F70 80116B70 00000000 */   nop
    /* 24F74 80116B74 645B0408 */  j          .L80116D90
    /* 24F78 80116B78 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116B7C
    /* 24F7C 80116B7C BE64040C */  jal        func_801192F8
    /* 24F80 80116B80 00000000 */   nop
    /* 24F84 80116B84 645B0408 */  j          .L80116D90
    /* 24F88 80116B88 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116B8C
    /* 24F8C 80116B8C E062040C */  jal        func_80118B80
    /* 24F90 80116B90 00000000 */   nop
    /* 24F94 80116B94 645B0408 */  j          .L80116D90
    /* 24F98 80116B98 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116B9C
    /* 24F9C 80116B9C 4863040C */  jal        func_80118D20
    /* 24FA0 80116BA0 00000000 */   nop
    /* 24FA4 80116BA4 645B0408 */  j          .L80116D90
    /* 24FA8 80116BA8 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116BAC
    /* 24FAC 80116BAC B063040C */  jal        func_80118EC0
    /* 24FB0 80116BB0 00000000 */   nop
    /* 24FB4 80116BB4 645B0408 */  j          .L80116D90
    /* 24FB8 80116BB8 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116BBC
    /* 24FBC 80116BBC BE63040C */  jal        func_80118EF8
    /* 24FC0 80116BC0 00000000 */   nop
    /* 24FC4 80116BC4 645B0408 */  j          .L80116D90
    /* 24FC8 80116BC8 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116BCC
    /* 24FCC 80116BCC AA62040C */  jal        func_80118AA8
    /* 24FD0 80116BD0 00000000 */   nop
    /* 24FD4 80116BD4 645B0408 */  j          .L80116D90
    /* 24FD8 80116BD8 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116BDC
    /* 24FDC 80116BDC 2A64040C */  jal        func_801190A8
    /* 24FE0 80116BE0 00000000 */   nop
    /* 24FE4 80116BE4 645B0408 */  j          .L80116D90
    /* 24FE8 80116BE8 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116BEC
    /* 24FEC 80116BEC 4A64040C */  jal        func_80119128
    /* 24FF0 80116BF0 00000000 */   nop
    /* 24FF4 80116BF4 645B0408 */  j          .L80116D90
    /* 24FF8 80116BF8 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116BFC
    /* 24FFC 80116BFC 6C64040C */  jal        func_801191B0
    /* 25000 80116C00 00000000 */   nop
    /* 25004 80116C04 645B0408 */  j          .L80116D90
    /* 25008 80116C08 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116C0C
    /* 2500C 80116C0C 8464040C */  jal        func_80119210
    /* 25010 80116C10 00000000 */   nop
    /* 25014 80116C14 645B0408 */  j          .L80116D90
    /* 25018 80116C18 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116C1C
    /* 2501C 80116C1C EA5F040C */  jal        func_80117FA8
    /* 25020 80116C20 00000000 */   nop
    /* 25024 80116C24 645B0408 */  j          .L80116D90
    /* 25028 80116C28 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116C2C
    /* 2502C 80116C2C 4D61040C */  jal        func_80118534
    /* 25030 80116C30 00000000 */   nop
    /* 25034 80116C34 645B0408 */  j          .L80116D90
    /* 25038 80116C38 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116C3C
    /* 2503C 80116C3C D065040C */  jal        func_80119740
    /* 25040 80116C40 00000000 */   nop
    /* 25044 80116C44 645B0408 */  j          .L80116D90
    /* 25048 80116C48 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116C4C
    /* 2504C 80116C4C C35D040C */  jal        func_8011770C
    /* 25050 80116C50 00000000 */   nop
    /* 25054 80116C54 645B0408 */  j          .L80116D90
    /* 25058 80116C58 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116C5C
    /* 2505C 80116C5C DF5D040C */  jal        func_8011777C
    /* 25060 80116C60 00000000 */   nop
    /* 25064 80116C64 49004010 */  beqz       $v0, .L80116D8C
    /* 25068 80116C68 01000224 */   addiu     $v0, $zero, 0x1
    /* 2506C 80116C6C 645B0408 */  j          .L80116D90
    /* 25070 80116C70 00000000 */   nop
  jlabel .L80116C74
    /* 25074 80116C74 A65D040C */  jal        func_80117698
    /* 25078 80116C78 00000000 */   nop
    /* 2507C 80116C7C 645B0408 */  j          .L80116D90
    /* 25080 80116C80 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116C84
    /* 25084 80116C84 2B6B040C */  jal        func_8011ACAC
    /* 25088 80116C88 00000000 */   nop
    /* 2508C 80116C8C 645B0408 */  j          .L80116D90
    /* 25090 80116C90 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116C94
    /* 25094 80116C94 196B040C */  jal        func_8011AC64
    /* 25098 80116C98 00000000 */   nop
    /* 2509C 80116C9C 645B0408 */  j          .L80116D90
    /* 250A0 80116CA0 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116CA4
    /* 250A4 80116CA4 456B040C */  jal        func_8011AD14
    /* 250A8 80116CA8 00000000 */   nop
    /* 250AC 80116CAC 645B0408 */  j          .L80116D90
    /* 250B0 80116CB0 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116CB4
    /* 250B4 80116CB4 576B040C */  jal        func_8011AD5C
    /* 250B8 80116CB8 00000000 */   nop
    /* 250BC 80116CBC 645B0408 */  j          .L80116D90
    /* 250C0 80116CC0 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116CC4
    /* 250C4 80116CC4 7B6B040C */  jal        func_8011ADEC
    /* 250C8 80116CC8 00000000 */   nop
    /* 250CC 80116CCC 645B0408 */  j          .L80116D90
    /* 250D0 80116CD0 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116CD4
    /* 250D4 80116CD4 876B040C */  jal        func_8011AE1C
    /* 250D8 80116CD8 00000000 */   nop
    /* 250DC 80116CDC 645B0408 */  j          .L80116D90
    /* 250E0 80116CE0 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116CE4
    /* 250E4 80116CE4 936B040C */  jal        func_8011AE4C
    /* 250E8 80116CE8 00000000 */   nop
    /* 250EC 80116CEC 645B0408 */  j          .L80116D90
    /* 250F0 80116CF0 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116CF4
    /* 250F4 80116CF4 9F6B040C */  jal        func_8011AE7C
    /* 250F8 80116CF8 00000000 */   nop
    /* 250FC 80116CFC 645B0408 */  j          .L80116D90
    /* 25100 80116D00 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116D04
    /* 25104 80116D04 696B040C */  jal        func_8011ADA4
    /* 25108 80116D08 00000000 */   nop
    /* 2510C 80116D0C 645B0408 */  j          .L80116D90
    /* 25110 80116D10 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116D14
    /* 25114 80116D14 3C66040C */  jal        func_801198F0
    /* 25118 80116D18 00000000 */   nop
    /* 2511C 80116D1C 645B0408 */  j          .L80116D90
    /* 25120 80116D20 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116D24
    /* 25124 80116D24 1866040C */  jal        func_80119860
    /* 25128 80116D28 00000000 */   nop
    /* 2512C 80116D2C 645B0408 */  j          .L80116D90
    /* 25130 80116D30 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116D34
    /* 25134 80116D34 D461040C */  jal        func_80118750
    /* 25138 80116D38 00000000 */   nop
    /* 2513C 80116D3C 645B0408 */  j          .L80116D90
    /* 25140 80116D40 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116D44
    /* 25144 80116D44 C45F040C */  jal        func_80117F10
    /* 25148 80116D48 00000000 */   nop
    /* 2514C 80116D4C 645B0408 */  j          .L80116D90
    /* 25150 80116D50 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116D54
    /* 25154 80116D54 DE5F040C */  jal        func_80117F78
    /* 25158 80116D58 00000000 */   nop
    /* 2515C 80116D5C 645B0408 */  j          .L80116D90
    /* 25160 80116D60 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116D64
    /* 25164 80116D64 24E7030C */  jal        func_800F9C90
    /* 25168 80116D68 00000000 */   nop
    /* 2516C 80116D6C 645B0408 */  j          .L80116D90
    /* 25170 80116D70 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116D74
    /* 25174 80116D74 A236040C */  jal        func_8010DA88
    /* 25178 80116D78 00000000 */   nop
    /* 2517C 80116D7C 645B0408 */  j          .L80116D90
    /* 25180 80116D80 21100000 */   addu      $v0, $zero, $zero
  jlabel .L80116D84
    /* 25184 80116D84 A469040C */  jal        func_8011A690
    /* 25188 80116D88 00000000 */   nop
  jlabel .L80116D8C
    /* 2518C 80116D8C 21100000 */  addu       $v0, $zero, $zero
  .L80116D90:
    /* 25190 80116D90 1400BF8F */  lw         $ra, 0x14($sp)
    /* 25194 80116D94 1000B08F */  lw         $s0, 0x10($sp)
    /* 25198 80116D98 0800E003 */  jr         $ra
    /* 2519C 80116D9C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80116720
