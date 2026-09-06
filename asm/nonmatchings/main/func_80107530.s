nonmatching func_80107530, 0x300

glabel func_80107530
    /* 15930 80107530 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 15934 80107534 1000BFAF */  sw         $ra, 0x10($sp)
    /* 15938 80107538 8CD9030C */  jal        func_800F6630
    /* 1593C 8010753C E6000424 */   addiu     $a0, $zero, 0xE6
    /* 15940 80107540 0DD9030C */  jal        func_800F6434
    /* 15944 80107544 02020424 */   addiu     $a0, $zero, 0x202
    /* 15948 80107548 05004014 */  bnez       $v0, .L80107560
    /* 1594C 8010754C 00000000 */   nop
    /* 15950 80107550 C71A040C */  jal        func_80106B1C
    /* 15954 80107554 00000000 */   nop
    /* 15958 80107558 081E0408 */  j          .L80107820
    /* 1595C 8010755C 00000000 */   nop
  .L80107560:
    /* 15960 80107560 EEE3030C */  jal        func_800F8FB8
    /* 15964 80107564 E6000424 */   addiu     $a0, $zero, 0xE6
    /* 15968 80107568 8CD9030C */  jal        func_800F6630
    /* 1596C 8010756C BA000424 */   addiu     $a0, $zero, 0xBA
    /* 15970 80107570 92D0030C */  jal        func_800F4248
    /* 15974 80107574 0F000424 */   addiu     $a0, $zero, 0xF
    /* 15978 80107578 93E0030C */  jal        func_800F824C
    /* 1597C 8010757C 13000424 */   addiu     $a0, $zero, 0x13
    /* 15980 80107580 EEE3030C */  jal        func_800F8FB8
    /* 15984 80107584 12000424 */   addiu     $a0, $zero, 0x12
    /* 15988 80107588 0FCF030C */  jal        func_800F3C3C
    /* 1598C 8010758C 13000424 */   addiu     $a0, $zero, 0x13
    /* 15990 80107590 AFDD030C */  jal        func_800F76BC
    /* 15994 80107594 21204000 */   addu      $a0, $v0, $zero
    /* 15998 80107598 BADD030C */  jal        func_800F76E8
    /* 1599C 8010759C 00000000 */   nop
    /* 159A0 801075A0 0FCF030C */  jal        func_800F3C3C
    /* 159A4 801075A4 12000424 */   addiu     $a0, $zero, 0x12
    /* 159A8 801075A8 32DF030C */  jal        func_800F7CC8
    /* 159AC 801075AC 21204000 */   addu      $a0, $v0, $zero
    /* 159B0 801075B0 0FCF030C */  jal        func_800F3C3C
    /* 159B4 801075B4 13000424 */   addiu     $a0, $zero, 0x13
    /* 159B8 801075B8 AFDD030C */  jal        func_800F76BC
    /* 159BC 801075BC 21204000 */   addu      $a0, $v0, $zero
    /* 159C0 801075C0 BADD030C */  jal        func_800F76E8
    /* 159C4 801075C4 00000000 */   nop
    /* 159C8 801075C8 0FCF030C */  jal        func_800F3C3C
    /* 159CC 801075CC 12000424 */   addiu     $a0, $zero, 0x12
    /* 159D0 801075D0 32DF030C */  jal        func_800F7CC8
    /* 159D4 801075D4 21204000 */   addu      $a0, $v0, $zero
    /* 159D8 801075D8 8CD9030C */  jal        func_800F6630
    /* 159DC 801075DC 12000424 */   addiu     $a0, $zero, 0x12
    /* 159E0 801075E0 04D5030C */  jal        func_800F5410
    /* 159E4 801075E4 00000000 */   nop
    /* 159E8 801075E8 02D0030C */  jal        func_800F4008
    /* 159EC 801075EC 04000424 */   addiu     $a0, $zero, 0x4
    /* 159F0 801075F0 93E0030C */  jal        func_800F824C
    /* 159F4 801075F4 12000424 */   addiu     $a0, $zero, 0x12
    /* 159F8 801075F8 8CD9030C */  jal        func_800F6630
    /* 159FC 801075FC 13000424 */   addiu     $a0, $zero, 0x13
    /* 15A00 80107600 92D0030C */  jal        func_800F4248
    /* 15A04 80107604 03000424 */   addiu     $a0, $zero, 0x3
    /* 15A08 80107608 04D5030C */  jal        func_800F5410
    /* 15A0C 8010760C 00000000 */   nop
    /* 15A10 80107610 02D0030C */  jal        func_800F4008
    /* 15A14 80107614 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 15A18 80107618 93E0030C */  jal        func_800F824C
    /* 15A1C 8010761C 13000424 */   addiu     $a0, $zero, 0x13
    /* 15A20 80107620 77DC030C */  jal        func_800F71DC
    /* 15A24 80107624 74070424 */   addiu     $a0, $zero, 0x774
    /* 15A28 80107628 5BE3030C */  jal        func_800F8D6C
    /* 15A2C 8010762C 14000424 */   addiu     $a0, $zero, 0x14
    /* 15A30 80107630 77DC030C */  jal        func_800F71DC
    /* 15A34 80107634 34080424 */   addiu     $a0, $zero, 0x834
    /* 15A38 80107638 5BE3030C */  jal        func_800F8D6C
    /* 15A3C 8010763C 16000424 */   addiu     $a0, $zero, 0x16
    /* 15A40 80107640 DDE3030C */  jal        func_800F8F74
    /* 15A44 80107644 15210424 */   addiu     $a0, $zero, 0x2115
    /* 15A48 80107648 21F3030C */  jal        func_800FCC84
    /* 15A4C 8010764C 00000000 */   nop
    /* 15A50 80107650 DDE3030C */  jal        func_800F8F74
    /* 15A54 80107654 00430424 */   addiu     $a0, $zero, 0x4300
    /* 15A58 80107658 53D9030C */  jal        func_800F654C
    /* 15A5C 8010765C 04000424 */   addiu     $a0, $zero, 0x4
    /* 15A60 80107660 93E0030C */  jal        func_800F824C
    /* 15A64 80107664 11000424 */   addiu     $a0, $zero, 0x11
  .L80107668:
    /* 15A68 80107668 9CDC030C */  jal        func_800F7270
    /* 15A6C 8010766C 16000424 */   addiu     $a0, $zero, 0x16
    /* 15A70 80107670 40E3030C */  jal        func_800F8D00
    /* 15A74 80107674 02430424 */   addiu     $a0, $zero, 0x4302
    /* 15A78 80107678 9CDC030C */  jal        func_800F7270
    /* 15A7C 8010767C 12000424 */   addiu     $a0, $zero, 0x12
    /* 15A80 80107680 40E3030C */  jal        func_800F8D00
    /* 15A84 80107684 16210424 */   addiu     $a0, $zero, 0x2116
    /* 15A88 80107688 77DC030C */  jal        func_800F71DC
    /* 15A8C 8010768C 18000424 */   addiu     $a0, $zero, 0x18
    /* 15A90 80107690 40E3030C */  jal        func_800F8D00
    /* 15A94 80107694 05430424 */   addiu     $a0, $zero, 0x4305
    /* 15A98 80107698 2FF3030C */  jal        func_800FCCBC
    /* 15A9C 8010769C 00000000 */   nop
    /* 15AA0 801076A0 8CD9030C */  jal        func_800F6630
    /* 15AA4 801076A4 12000424 */   addiu     $a0, $zero, 0x12
    /* 15AA8 801076A8 04D5030C */  jal        func_800F5410
    /* 15AAC 801076AC 00000000 */   nop
    /* 15AB0 801076B0 02D0030C */  jal        func_800F4008
    /* 15AB4 801076B4 20000424 */   addiu     $a0, $zero, 0x20
    /* 15AB8 801076B8 93E0030C */  jal        func_800F824C
    /* 15ABC 801076BC 12000424 */   addiu     $a0, $zero, 0x12
    /* 15AC0 801076C0 8CD9030C */  jal        func_800F6630
    /* 15AC4 801076C4 13000424 */   addiu     $a0, $zero, 0x13
    /* 15AC8 801076C8 02D0030C */  jal        func_800F4008
    /* 15ACC 801076CC 21200000 */   addu      $a0, $zero, $zero
    /* 15AD0 801076D0 93E0030C */  jal        func_800F824C
    /* 15AD4 801076D4 13000424 */   addiu     $a0, $zero, 0x13
    /* 15AD8 801076D8 DDE3030C */  jal        func_800F8F74
    /* 15ADC 801076DC 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 15AE0 801076E0 9CDC030C */  jal        func_800F7270
    /* 15AE4 801076E4 14000424 */   addiu     $a0, $zero, 0x14
    /* 15AE8 801076E8 40E3030C */  jal        func_800F8D00
    /* 15AEC 801076EC 02430424 */   addiu     $a0, $zero, 0x4302
    /* 15AF0 801076F0 9CDC030C */  jal        func_800F7270
    /* 15AF4 801076F4 12000424 */   addiu     $a0, $zero, 0x12
    /* 15AF8 801076F8 40E3030C */  jal        func_800F8D00
    /* 15AFC 801076FC 16210424 */   addiu     $a0, $zero, 0x2116
    /* 15B00 80107700 77DC030C */  jal        func_800F71DC
    /* 15B04 80107704 18000424 */   addiu     $a0, $zero, 0x18
    /* 15B08 80107708 40E3030C */  jal        func_800F8D00
    /* 15B0C 8010770C 05430424 */   addiu     $a0, $zero, 0x4305
    /* 15B10 80107710 2FF3030C */  jal        func_800FCCBC
    /* 15B14 80107714 00000000 */   nop
    /* 15B18 80107718 8CD9030C */  jal        func_800F6630
    /* 15B1C 8010771C 12000424 */   addiu     $a0, $zero, 0x12
    /* 15B20 80107720 04D5030C */  jal        func_800F5410
    /* 15B24 80107724 00000000 */   nop
    /* 15B28 80107728 02D0030C */  jal        func_800F4008
    /* 15B2C 8010772C 20000424 */   addiu     $a0, $zero, 0x20
    /* 15B30 80107730 93E0030C */  jal        func_800F824C
    /* 15B34 80107734 12000424 */   addiu     $a0, $zero, 0x12
    /* 15B38 80107738 8CD9030C */  jal        func_800F6630
    /* 15B3C 8010773C 13000424 */   addiu     $a0, $zero, 0x13
    /* 15B40 80107740 02D0030C */  jal        func_800F4008
    /* 15B44 80107744 21200000 */   addu      $a0, $zero, $zero
    /* 15B48 80107748 93E0030C */  jal        func_800F824C
    /* 15B4C 8010774C 13000424 */   addiu     $a0, $zero, 0x13
    /* 15B50 80107750 20D5030C */  jal        func_800F5480
    /* 15B54 80107754 00000000 */   nop
    /* 15B58 80107758 16E0030C */  jal        func_800F8058
    /* 15B5C 8010775C 30000424 */   addiu     $a0, $zero, 0x30
    /* 15B60 80107760 F0D4030C */  jal        func_800F53C0
    /* 15B64 80107764 00000000 */   nop
    /* 15B68 80107768 09004010 */  beqz       $v0, .L80107790
    /* 15B6C 8010776C 00000000 */   nop
    /* 15B70 80107770 92D0030C */  jal        func_800F4248
    /* 15B74 80107774 03000424 */   addiu     $a0, $zero, 0x3
    /* 15B78 80107778 04D5030C */  jal        func_800F5410
    /* 15B7C 8010777C 00000000 */   nop
    /* 15B80 80107780 02D0030C */  jal        func_800F4008
    /* 15B84 80107784 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 15B88 80107788 93E0030C */  jal        func_800F824C
    /* 15B8C 8010778C 13000424 */   addiu     $a0, $zero, 0x13
  .L80107790:
    /* 15B90 80107790 8CD9030C */  jal        func_800F6630
    /* 15B94 80107794 14000424 */   addiu     $a0, $zero, 0x14
    /* 15B98 80107798 04D5030C */  jal        func_800F5410
    /* 15B9C 8010779C 00000000 */   nop
    /* 15BA0 801077A0 02D0030C */  jal        func_800F4008
    /* 15BA4 801077A4 18000424 */   addiu     $a0, $zero, 0x18
    /* 15BA8 801077A8 93E0030C */  jal        func_800F824C
    /* 15BAC 801077AC 14000424 */   addiu     $a0, $zero, 0x14
    /* 15BB0 801077B0 8CD9030C */  jal        func_800F6630
    /* 15BB4 801077B4 15000424 */   addiu     $a0, $zero, 0x15
    /* 15BB8 801077B8 02D0030C */  jal        func_800F4008
    /* 15BBC 801077BC 21200000 */   addu      $a0, $zero, $zero
    /* 15BC0 801077C0 93E0030C */  jal        func_800F824C
    /* 15BC4 801077C4 15000424 */   addiu     $a0, $zero, 0x15
    /* 15BC8 801077C8 8CD9030C */  jal        func_800F6630
    /* 15BCC 801077CC 16000424 */   addiu     $a0, $zero, 0x16
    /* 15BD0 801077D0 04D5030C */  jal        func_800F5410
    /* 15BD4 801077D4 00000000 */   nop
    /* 15BD8 801077D8 02D0030C */  jal        func_800F4008
    /* 15BDC 801077DC 18000424 */   addiu     $a0, $zero, 0x18
    /* 15BE0 801077E0 93E0030C */  jal        func_800F824C
    /* 15BE4 801077E4 16000424 */   addiu     $a0, $zero, 0x16
    /* 15BE8 801077E8 8CD9030C */  jal        func_800F6630
    /* 15BEC 801077EC 17000424 */   addiu     $a0, $zero, 0x17
    /* 15BF0 801077F0 02D0030C */  jal        func_800F4008
    /* 15BF4 801077F4 21200000 */   addu      $a0, $zero, $zero
    /* 15BF8 801077F8 93E0030C */  jal        func_800F824C
    /* 15BFC 801077FC 17000424 */   addiu     $a0, $zero, 0x17
    /* 15C00 80107800 68D7030C */  jal        func_800F5DA0
    /* 15C04 80107804 11000424 */   addiu     $a0, $zero, 0x11
    /* 15C08 80107808 E3D6030C */  jal        func_800F5B8C
    /* 15C0C 8010780C 02000424 */   addiu     $a0, $zero, 0x2
    /* 15C10 80107810 95FF4010 */  beqz       $v0, .L80107668
    /* 15C14 80107814 00000000 */   nop
    /* 15C18 80107818 C71A040C */  jal        func_80106B1C
    /* 15C1C 8010781C 00000000 */   nop
  .L80107820:
    /* 15C20 80107820 1000BF8F */  lw         $ra, 0x10($sp)
    /* 15C24 80107824 00000000 */  nop
    /* 15C28 80107828 0800E003 */  jr         $ra
    /* 15C2C 8010782C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80107530
