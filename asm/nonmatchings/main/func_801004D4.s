nonmatching func_801004D4, 0x108

glabel func_801004D4
    /* E8D4 801004D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* E8D8 801004D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* E8DC 801004DC 59D9030C */  jal        func_800F6564
    /* E8E0 801004E0 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* E8E4 801004E4 04D5030C */  jal        func_800F5410
    /* E8E8 801004E8 00000000 */   nop
    /* E8EC 801004EC 0FCF030C */  jal        func_800F3C3C
    /* E8F0 801004F0 30000424 */   addiu     $a0, $zero, 0x30
    /* E8F4 801004F4 CECF030C */  jal        func_800F3F38
    /* E8F8 801004F8 21204000 */   addu      $a0, $v0, $zero
    /* E8FC 801004FC 62E0030C */  jal        func_800F8188
    /* E900 80100500 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* E904 80100504 59D9030C */  jal        func_800F6564
    /* E908 80100508 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* E90C 8010050C 0FCF030C */  jal        func_800F3C3C
    /* E910 80100510 31000424 */   addiu     $a0, $zero, 0x31
    /* E914 80100514 CECF030C */  jal        func_800F3F38
    /* E918 80100518 21204000 */   addu      $a0, $v0, $zero
    /* E91C 8010051C 62E0030C */  jal        func_800F8188
    /* E920 80100520 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* E924 80100524 59D9030C */  jal        func_800F6564
    /* E928 80100528 A2160424 */   addiu     $a0, $zero, 0x16A2
    /* E92C 8010052C 0FCF030C */  jal        func_800F3C3C
    /* E930 80100530 32000424 */   addiu     $a0, $zero, 0x32
    /* E934 80100534 CECF030C */  jal        func_800F3F38
    /* E938 80100538 21204000 */   addu      $a0, $v0, $zero
    /* E93C 8010053C 62E0030C */  jal        func_800F8188
    /* E940 80100540 A2160424 */   addiu     $a0, $zero, 0x16A2
    /* E944 80100544 5DD5030C */  jal        func_800F5574
    /* E948 80100548 98000424 */   addiu     $a0, $zero, 0x98
    /* E94C 8010054C F0D4030C */  jal        func_800F53C0
    /* E950 80100550 00000000 */   nop
    /* E954 80100554 1D004010 */  beqz       $v0, .L801005CC
    /* E958 80100558 00000000 */   nop
    /* E95C 8010055C 59D9030C */  jal        func_800F6564
    /* E960 80100560 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* E964 80100564 5DD5030C */  jal        func_800F5574
    /* E968 80100568 96000424 */   addiu     $a0, $zero, 0x96
    /* E96C 8010056C F0D4030C */  jal        func_800F53C0
    /* E970 80100570 00000000 */   nop
    /* E974 80100574 15004010 */  beqz       $v0, .L801005CC
    /* E978 80100578 00000000 */   nop
    /* E97C 8010057C 59D9030C */  jal        func_800F6564
    /* E980 80100580 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* E984 80100584 5DD5030C */  jal        func_800F5574
    /* E988 80100588 7F000424 */   addiu     $a0, $zero, 0x7F
    /* E98C 8010058C F0D4030C */  jal        func_800F53C0
    /* E990 80100590 00000000 */   nop
    /* E994 80100594 0D004010 */  beqz       $v0, .L801005CC
    /* E998 80100598 00000000 */   nop
    /* E99C 8010059C 53D9030C */  jal        func_800F654C
    /* E9A0 801005A0 7F000424 */   addiu     $a0, $zero, 0x7F
    /* E9A4 801005A4 62E0030C */  jal        func_800F8188
    /* E9A8 801005A8 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* E9AC 801005AC 53D9030C */  jal        func_800F654C
    /* E9B0 801005B0 96000424 */   addiu     $a0, $zero, 0x96
    /* E9B4 801005B4 62E0030C */  jal        func_800F8188
    /* E9B8 801005B8 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* E9BC 801005BC 53D9030C */  jal        func_800F654C
    /* E9C0 801005C0 98000424 */   addiu     $a0, $zero, 0x98
    /* E9C4 801005C4 62E0030C */  jal        func_800F8188
    /* E9C8 801005C8 A2160424 */   addiu     $a0, $zero, 0x16A2
  .L801005CC:
    /* E9CC 801005CC 1000BF8F */  lw         $ra, 0x10($sp)
    /* E9D0 801005D0 00000000 */  nop
    /* E9D4 801005D4 0800E003 */  jr         $ra
    /* E9D8 801005D8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801004D4
