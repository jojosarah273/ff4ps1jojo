nonmatching func_801368E8, 0xD0

glabel func_801368E8
    /* 44CE8 801368E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 44CEC 801368EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 44CF0 801368F0 DDE3030C */  jal        func_800F8F74
    /* 44CF4 801368F4 15FE0434 */   ori       $a0, $zero, 0xFE15
    /* 44CF8 801368F8 DDE3030C */  jal        func_800F8F74
    /* 44CFC 801368FC 19FE0434 */   ori       $a0, $zero, 0xFE19
    /* 44D00 80136900 DDE3030C */  jal        func_800F8F74
    /* 44D04 80136904 1DFE0434 */   ori       $a0, $zero, 0xFE1D
    /* 44D08 80136908 DDE3030C */  jal        func_800F8F74
    /* 44D0C 8013690C 21FE0434 */   ori       $a0, $zero, 0xFE21
    /* 44D10 80136910 DDE3030C */  jal        func_800F8F74
    /* 44D14 80136914 25FE0434 */   ori       $a0, $zero, 0xFE25
    /* 44D18 80136918 59D9030C */  jal        func_800F6564
    /* 44D1C 8013691C 7B1B0424 */   addiu     $a0, $zero, 0x1B7B
    /* 44D20 80136920 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 44D24 80136924 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 44D28 80136928 00000000 */  nop
    /* 44D2C 8013692C 00006290 */  lbu        $v0, 0x0($v1)
    /* 44D30 80136930 00000000 */  nop
    /* 44D34 80136934 80100200 */  sll        $v0, $v0, 2
    /* 44D38 80136938 3489040C */  jal        func_801224D0
    /* 44D3C 8013693C 000062A0 */   sb        $v0, 0x0($v1)
    /* 44D40 80136940 DADA030C */  jal        func_800F6B68
    /* 44D44 80136944 551B0424 */   addiu     $a0, $zero, 0x1B55
    /* 44D48 80136948 0DD9030C */  jal        func_800F6434
    /* 44D4C 8013694C 02020424 */   addiu     $a0, $zero, 0x202
    /* 44D50 80136950 15004010 */  beqz       $v0, .L801369A8
    /* 44D54 80136954 00000000 */   nop
    /* 44D58 80136958 5DD5030C */  jal        func_800F5574
    /* 44D5C 8013695C CE000424 */   addiu     $a0, $zero, 0xCE
    /* 44D60 80136960 F0D4030C */  jal        func_800F53C0
    /* 44D64 80136964 00000000 */   nop
    /* 44D68 80136968 0F004014 */  bnez       $v0, .L801369A8
    /* 44D6C 8013696C 00000000 */   nop
    /* 44D70 80136970 62E0030C */  jal        func_800F8188
    /* 44D74 80136974 391B0424 */   addiu     $a0, $zero, 0x1B39
    /* 44D78 80136978 53D9030C */  jal        func_800F654C
    /* 44D7C 8013697C 21200000 */   addu      $a0, $zero, $zero
  .L80136980:
    /* 44D80 80136980 6EDA040C */  jal        func_801369B8
    /* 44D84 80136984 00000000 */   nop
    /* 44D88 80136988 7AD8030C */  jal        func_800F61E8
    /* 44D8C 8013698C 00000000 */   nop
    /* 44D90 80136990 5DD5030C */  jal        func_800F5574
    /* 44D94 80136994 05000424 */   addiu     $a0, $zero, 0x5
    /* 44D98 80136998 F5D4030C */  jal        func_800F53D4
    /* 44D9C 8013699C 00000000 */   nop
    /* 44DA0 801369A0 F7FF4010 */  beqz       $v0, .L80136980
    /* 44DA4 801369A4 00000000 */   nop
  .L801369A8:
    /* 44DA8 801369A8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 44DAC 801369AC 00000000 */  nop
    /* 44DB0 801369B0 0800E003 */  jr         $ra
    /* 44DB4 801369B4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801368E8
