nonmatching func_80156480, 0x56C

glabel func_80156480
    /* 64880 80156480 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 64884 80156484 1000BFAF */  sw         $ra, 0x10($sp)
    /* 64888 80156488 0E00043C */  lui        $a0, (0xEE030 >> 16)
  .L8015648C:
    /* 6488C 8015648C 1ADB030C */  jal        func_800F6C68
    /* 64890 80156490 30E08434 */   ori       $a0, $a0, (0xEE030 & 0xFFFF)
    /* 64894 80156494 58E2030C */  jal        func_800F8960
    /* 64898 80156498 1F530424 */   addiu     $a0, $zero, 0x531F
    /* 6489C 8015649C D9D8030C */  jal        func_800F6364
    /* 648A0 801564A0 00000000 */   nop
    /* 648A4 801564A4 EFD8030C */  jal        func_800F63BC
    /* 648A8 801564A8 00000000 */   nop
    /* 648AC 801564AC 5DD5030C */  jal        func_800F5574
    /* 648B0 801564B0 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 648B4 801564B4 F5D4030C */  jal        func_800F53D4
    /* 648B8 801564B8 00000000 */   nop
    /* 648BC 801564BC F3FF4010 */  beqz       $v0, .L8015648C
    /* 648C0 801564C0 0E00043C */   lui       $a0, (0xEE030 >> 16)
    /* 648C4 801564C4 59D9030C */  jal        func_800F6564
    /* 648C8 801564C8 A0350424 */   addiu     $a0, $zero, 0x35A0
    /* 648CC 801564CC 93E0030C */  jal        func_800F824C
    /* 648D0 801564D0 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 648D4 801564D4 53D9030C */  jal        func_800F654C
    /* 648D8 801564D8 28000424 */   addiu     $a0, $zero, 0x28
    /* 648DC 801564DC 93E0030C */  jal        func_800F824C
    /* 648E0 801564E0 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 648E4 801564E4 0349050C */  jal        func_8015240C
    /* 648E8 801564E8 00000000 */   nop
    /* 648EC 801564EC 65DD030C */  jal        func_800F7594
    /* 648F0 801564F0 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 648F4 801564F4 AFE3030C */  jal        func_800F8EBC
    /* 648F8 801564F8 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 648FC 801564FC AFE3030C */  jal        func_800F8EBC
    /* 64900 80156500 9E000424 */   addiu     $a0, $zero, 0x9E
  .L80156504:
    /* 64904 80156504 9CDC030C */  jal        func_800F7270
    /* 64908 80156508 98000424 */   addiu     $a0, $zero, 0x98
    /* 6490C 8015650C DADA030C */  jal        func_800F6B68
    /* 64910 80156510 1F530424 */   addiu     $a0, $zero, 0x531F
    /* 64914 80156514 5DD5030C */  jal        func_800F5574
    /* 64918 80156518 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6491C 8015651C F5D4030C */  jal        func_800F53D4
    /* 64920 80156520 00000000 */   nop
    /* 64924 80156524 3E004014 */  bnez       $v0, .L80156620
    /* 64928 80156528 00000000 */   nop
    /* 6492C 8015652C 93E0030C */  jal        func_800F824C
    /* 64930 80156530 E5000424 */   addiu     $a0, $zero, 0xE5
    /* 64934 80156534 40DD030C */  jal        func_800F7500
    /* 64938 80156538 00E60434 */   ori       $a0, $zero, 0xE600
    /* 6493C 8015653C 53D9030C */  jal        func_800F654C
    /* 64940 80156540 0E000424 */   addiu     $a0, $zero, 0xE
    /* 64944 80156544 9049050C */  jal        func_80152640
    /* 64948 80156548 00000000 */   nop
    /* 6494C 8015654C 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 64950 80156550 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 64954 80156554 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 64958 80156558 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6495C 8015655C 00004394 */  lhu        $v1, 0x0($v0)
    /* 64960 80156560 9A000424 */  addiu      $a0, $zero, 0x9A
    /* 64964 80156564 65DD030C */  jal        func_800F7594
    /* 64968 80156568 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6496C 8015656C 53D9030C */  jal        func_800F654C
    /* 64970 80156570 04000424 */   addiu     $a0, $zero, 0x4
    /* 64974 80156574 93E0030C */  jal        func_800F824C
    /* 64978 80156578 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6497C 8015657C 0E00043C */  lui        $a0, (0xEE600 >> 16)
  .L80156580:
    /* 64980 80156580 1ADB030C */  jal        func_800F6C68
    /* 64984 80156584 00E68434 */   ori       $a0, $a0, (0xEE600 & 0xFFFF)
    /* 64988 80156588 58E2030C */  jal        func_800F8960
    /* 6498C 8015658C BF530424 */   addiu     $a0, $zero, 0x53BF
    /* 64990 80156590 5DD5030C */  jal        func_800F5574
    /* 64994 80156594 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 64998 80156598 F5D4030C */  jal        func_800F53D4
    /* 6499C 8015659C 00000000 */   nop
    /* 649A0 801565A0 03004014 */  bnez       $v0, .L801565B0
    /* 649A4 801565A4 00000000 */   nop
    /* 649A8 801565A8 D9D8030C */  jal        func_800F6364
    /* 649AC 801565AC 00000000 */   nop
  .L801565B0:
    /* 649B0 801565B0 EFD8030C */  jal        func_800F63BC
    /* 649B4 801565B4 00000000 */   nop
    /* 649B8 801565B8 68D7030C */  jal        func_800F5DA0
    /* 649BC 801565BC A9000424 */   addiu     $a0, $zero, 0xA9
    /* 649C0 801565C0 8CD9030C */  jal        func_800F6630
    /* 649C4 801565C4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 649C8 801565C8 0DD9030C */  jal        func_800F6434
    /* 649CC 801565CC 02020424 */   addiu     $a0, $zero, 0x202
    /* 649D0 801565D0 EBFF4014 */  bnez       $v0, .L80156580
    /* 649D4 801565D4 0E00043C */   lui       $a0, (0xEE600 >> 16)
    /* 649D8 801565D8 AFE3030C */  jal        func_800F8EBC
    /* 649DC 801565DC 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 649E0 801565E0 04D5030C */  jal        func_800F5410
    /* 649E4 801565E4 00000000 */   nop
    /* 649E8 801565E8 8CD9030C */  jal        func_800F6630
    /* 649EC 801565EC 98000424 */   addiu     $a0, $zero, 0x98
    /* 649F0 801565F0 02D0030C */  jal        func_800F4008
    /* 649F4 801565F4 02000424 */   addiu     $a0, $zero, 0x2
    /* 649F8 801565F8 93E0030C */  jal        func_800F824C
    /* 649FC 801565FC 98000424 */   addiu     $a0, $zero, 0x98
    /* 64A00 80156600 8CD9030C */  jal        func_800F6630
    /* 64A04 80156604 99000424 */   addiu     $a0, $zero, 0x99
    /* 64A08 80156608 02D0030C */  jal        func_800F4008
    /* 64A0C 8015660C 21200000 */   addu      $a0, $zero, $zero
    /* 64A10 80156610 93E0030C */  jal        func_800F824C
    /* 64A14 80156614 99000424 */   addiu     $a0, $zero, 0x99
    /* 64A18 80156618 41590508 */  j          .L80156504
    /* 64A1C 8015661C 00000000 */   nop
  .L80156620:
    /* 64A20 80156620 59D9030C */  jal        func_800F6564
    /* 64A24 80156624 A0350424 */   addiu     $a0, $zero, 0x35A0
    /* 64A28 80156628 93E0030C */  jal        func_800F824C
    /* 64A2C 8015662C DF000424 */   addiu     $a0, $zero, 0xDF
    /* 64A30 80156630 53D9030C */  jal        func_800F654C
    /* 64A34 80156634 A0000424 */   addiu     $a0, $zero, 0xA0
    /* 64A38 80156638 93E0030C */  jal        func_800F824C
    /* 64A3C 8015663C E1000424 */   addiu     $a0, $zero, 0xE1
    /* 64A40 80156640 0349050C */  jal        func_8015240C
    /* 64A44 80156644 00000000 */   nop
    /* 64A48 80156648 65DD030C */  jal        func_800F7594
    /* 64A4C 8015664C E3000424 */   addiu     $a0, $zero, 0xE3
    /* 64A50 80156650 AFE3030C */  jal        func_800F8EBC
    /* 64A54 80156654 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 64A58 80156658 53D9030C */  jal        func_800F654C
    /* 64A5C 8015665C 0A000424 */   addiu     $a0, $zero, 0xA
    /* 64A60 80156660 93E0030C */  jal        func_800F824C
    /* 64A64 80156664 AB000424 */   addiu     $a0, $zero, 0xAB
  .L80156668:
    /* 64A68 80156668 53D9030C */  jal        func_800F654C
    /* 64A6C 8015666C 04000424 */   addiu     $a0, $zero, 0x4
    /* 64A70 80156670 93E0030C */  jal        func_800F824C
    /* 64A74 80156674 A9000424 */   addiu     $a0, $zero, 0xA9
  .L80156678:
    /* 64A78 80156678 9CDC030C */  jal        func_800F7270
    /* 64A7C 8015667C 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 64A80 80156680 DADA030C */  jal        func_800F6B68
    /* 64A84 80156684 BF530424 */   addiu     $a0, $zero, 0x53BF
    /* 64A88 80156688 5DD5030C */  jal        func_800F5574
    /* 64A8C 8015668C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 64A90 80156690 F5D4030C */  jal        func_800F53D4
    /* 64A94 80156694 00000000 */   nop
    /* 64A98 80156698 22004014 */  bnez       $v0, .L80156724
    /* 64A9C 8015669C 00000000 */   nop
    /* 64AA0 801566A0 93E0030C */  jal        func_800F824C
    /* 64AA4 801566A4 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 64AA8 801566A8 53D9030C */  jal        func_800F654C
    /* 64AAC 801566AC 04000424 */   addiu     $a0, $zero, 0x4
    /* 64AB0 801566B0 93E0030C */  jal        func_800F824C
    /* 64AB4 801566B4 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 64AB8 801566B8 0349050C */  jal        func_8015240C
    /* 64ABC 801566BC 00000000 */   nop
    /* 64AC0 801566C0 9CDC030C */  jal        func_800F7270
    /* 64AC4 801566C4 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 64AC8 801566C8 65DD030C */  jal        func_800F7594
    /* 64ACC 801566CC 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 64AD0 801566D0 53D9030C */  jal        func_800F654C
    /* 64AD4 801566D4 04000424 */   addiu     $a0, $zero, 0x4
    /* 64AD8 801566D8 93E0030C */  jal        func_800F824C
    /* 64ADC 801566DC AA000424 */   addiu     $a0, $zero, 0xAA
    /* 64AE0 801566E0 0E00043C */  lui        $a0, (0xEE700 >> 16)
  .L801566E4:
    /* 64AE4 801566E4 1ADB030C */  jal        func_800F6C68
    /* 64AE8 801566E8 00E78434 */   ori       $a0, $a0, (0xEE700 & 0xFFFF)
    /* 64AEC 801566EC 58E2030C */  jal        func_800F8960
    /* 64AF0 801566F0 FF540424 */   addiu     $a0, $zero, 0x54FF
    /* 64AF4 801566F4 D9D8030C */  jal        func_800F6364
    /* 64AF8 801566F8 00000000 */   nop
    /* 64AFC 801566FC EFD8030C */  jal        func_800F63BC
    /* 64B00 80156700 00000000 */   nop
    /* 64B04 80156704 68D7030C */  jal        func_800F5DA0
    /* 64B08 80156708 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 64B0C 8015670C 8CD9030C */  jal        func_800F6630
    /* 64B10 80156710 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 64B14 80156714 0DD9030C */  jal        func_800F6434
    /* 64B18 80156718 02020424 */   addiu     $a0, $zero, 0x202
    /* 64B1C 8015671C F1FF4014 */  bnez       $v0, .L801566E4
    /* 64B20 80156720 0E00043C */   lui       $a0, (0xEE700 >> 16)
  .L80156724:
    /* 64B24 80156724 04D5030C */  jal        func_800F5410
    /* 64B28 80156728 00000000 */   nop
    /* 64B2C 8015672C 8CD9030C */  jal        func_800F6630
    /* 64B30 80156730 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 64B34 80156734 02D0030C */  jal        func_800F4008
    /* 64B38 80156738 04000424 */   addiu     $a0, $zero, 0x4
    /* 64B3C 8015673C 93E0030C */  jal        func_800F824C
    /* 64B40 80156740 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 64B44 80156744 8CD9030C */  jal        func_800F6630
    /* 64B48 80156748 9B000424 */   addiu     $a0, $zero, 0x9B
    /* 64B4C 8015674C 02D0030C */  jal        func_800F4008
    /* 64B50 80156750 21200000 */   addu      $a0, $zero, $zero
    /* 64B54 80156754 93E0030C */  jal        func_800F824C
    /* 64B58 80156758 9B000424 */   addiu     $a0, $zero, 0x9B
    /* 64B5C 8015675C 04D5030C */  jal        func_800F5410
    /* 64B60 80156760 00000000 */   nop
    /* 64B64 80156764 8CD9030C */  jal        func_800F6630
    /* 64B68 80156768 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 64B6C 8015676C 02D0030C */  jal        func_800F4008
    /* 64B70 80156770 01000424 */   addiu     $a0, $zero, 0x1
    /* 64B74 80156774 93E0030C */  jal        func_800F824C
    /* 64B78 80156778 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 64B7C 8015677C 8CD9030C */  jal        func_800F6630
    /* 64B80 80156780 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 64B84 80156784 02D0030C */  jal        func_800F4008
    /* 64B88 80156788 21200000 */   addu      $a0, $zero, $zero
    /* 64B8C 8015678C 93E0030C */  jal        func_800F824C
    /* 64B90 80156790 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 64B94 80156794 68D7030C */  jal        func_800F5DA0
    /* 64B98 80156798 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 64B9C 8015679C 8CD9030C */  jal        func_800F6630
    /* 64BA0 801567A0 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 64BA4 801567A4 0DD9030C */  jal        func_800F6434
    /* 64BA8 801567A8 02020424 */   addiu     $a0, $zero, 0x202
    /* 64BAC 801567AC B2FF4014 */  bnez       $v0, .L80156678
    /* 64BB0 801567B0 00000000 */   nop
    /* 64BB4 801567B4 68D7030C */  jal        func_800F5DA0
    /* 64BB8 801567B8 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 64BBC 801567BC 8CD9030C */  jal        func_800F6630
    /* 64BC0 801567C0 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 64BC4 801567C4 0DD9030C */  jal        func_800F6434
    /* 64BC8 801567C8 02020424 */   addiu     $a0, $zero, 0x202
    /* 64BCC 801567CC A6FF4014 */  bnez       $v0, .L80156668
    /* 64BD0 801567D0 00000000 */   nop
    /* 64BD4 801567D4 59D9030C */  jal        func_800F6564
    /* 64BD8 801567D8 A0350424 */   addiu     $a0, $zero, 0x35A0
    /* 64BDC 801567DC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 64BE0 801567E0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 64BE4 801567E4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 64BE8 801567E8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 64BEC 801567EC 00004394 */  lhu        $v1, 0x0($v0)
    /* 64BF0 801567F0 3D390424 */  addiu      $a0, $zero, 0x393D
    /* 64BF4 801567F4 40E3030C */  jal        func_800F8D00
    /* 64BF8 801567F8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 64BFC 801567FC 77DC030C */  jal        func_800F71DC
    /* 64C00 80156800 58020424 */   addiu     $a0, $zero, 0x258
    /* 64C04 80156804 40E3030C */  jal        func_800F8D00
    /* 64C08 80156808 3F390424 */   addiu     $a0, $zero, 0x393F
    /* 64C0C 8015680C DB48050C */  jal        func_8015236C
    /* 64C10 80156810 00000000 */   nop
    /* 64C14 80156814 4DDD030C */  jal        func_800F7534
    /* 64C18 80156818 41390424 */   addiu     $a0, $zero, 0x3941
    /* 64C1C 8015681C AFE3030C */  jal        func_800F8EBC
    /* 64C20 80156820 9A000424 */   addiu     $a0, $zero, 0x9A
  .L80156824:
    /* 64C24 80156824 9CDC030C */  jal        func_800F7270
    /* 64C28 80156828 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 64C2C 8015682C DADA030C */  jal        func_800F6B68
    /* 64C30 80156830 1F530424 */   addiu     $a0, $zero, 0x531F
    /* 64C34 80156834 5DD5030C */  jal        func_800F5574
    /* 64C38 80156838 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 64C3C 8015683C F5D4030C */  jal        func_800F53D4
    /* 64C40 80156840 00000000 */   nop
    /* 64C44 80156844 63004014 */  bnez       $v0, .L801569D4
    /* 64C48 80156848 00000000 */   nop
    /* 64C4C 8015684C D9D8030C */  jal        func_800F6364
    /* 64C50 80156850 00000000 */   nop
    /* 64C54 80156854 DADA030C */  jal        func_800F6B68
    /* 64C58 80156858 1F530424 */   addiu     $a0, $zero, 0x531F
    /* 64C5C 8015685C 93E0030C */  jal        func_800F824C
    /* 64C60 80156860 E5000424 */   addiu     $a0, $zero, 0xE5
    /* 64C64 80156864 40DD030C */  jal        func_800F7500
    /* 64C68 80156868 00E90434 */   ori       $a0, $zero, 0xE900
    /* 64C6C 8015686C 59D9030C */  jal        func_800F6564
    /* 64C70 80156870 EF380424 */   addiu     $a0, $zero, 0x38EF
    /* 64C74 80156874 0DD9030C */  jal        func_800F6434
    /* 64C78 80156878 02000424 */   addiu     $a0, $zero, 0x2
    /* 64C7C 8015687C 03004014 */  bnez       $v0, .L8015688C
    /* 64C80 80156880 00000000 */   nop
    /* 64C84 80156884 40DD030C */  jal        func_800F7500
    /* 64C88 80156888 C0B60434 */   ori       $a0, $zero, 0xB6C0
  .L8015688C:
    /* 64C8C 8015688C 53D9030C */  jal        func_800F654C
    /* 64C90 80156890 0E000424 */   addiu     $a0, $zero, 0xE
    /* 64C94 80156894 9049050C */  jal        func_80152640
    /* 64C98 80156898 00000000 */   nop
    /* 64C9C 8015689C 59D9030C */  jal        func_800F6564
    /* 64CA0 801568A0 EF380424 */   addiu     $a0, $zero, 0x38EF
    /* 64CA4 801568A4 0DD9030C */  jal        func_800F6434
    /* 64CA8 801568A8 02020424 */   addiu     $a0, $zero, 0x202
    /* 64CAC 801568AC 1A004014 */  bnez       $v0, .L80156918
    /* 64CB0 801568B0 00000000 */   nop
    /* 64CB4 801568B4 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 64CB8 801568B8 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 64CBC 801568BC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 64CC0 801568C0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 64CC4 801568C4 00004394 */  lhu        $v1, 0x0($v0)
    /* 64CC8 801568C8 9A000424 */  addiu      $a0, $zero, 0x9A
    /* 64CCC 801568CC 65DD030C */  jal        func_800F7594
    /* 64CD0 801568D0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 64CD4 801568D4 0E00043C */  lui        $a0, (0xEE900 >> 16)
  .L801568D8:
    /* 64CD8 801568D8 1ADB030C */  jal        func_800F6C68
    /* 64CDC 801568DC 00E98434 */   ori       $a0, $a0, (0xEE900 & 0xFFFF)
    /* 64CE0 801568E0 58E2030C */  jal        func_800F8960
    /* 64CE4 801568E4 FF590424 */   addiu     $a0, $zero, 0x59FF
    /* 64CE8 801568E8 D9D8030C */  jal        func_800F6364
    /* 64CEC 801568EC 00000000 */   nop
    /* 64CF0 801568F0 EFD8030C */  jal        func_800F63BC
    /* 64CF4 801568F4 00000000 */   nop
    /* 64CF8 801568F8 5DD5030C */  jal        func_800F5574
    /* 64CFC 801568FC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 64D00 80156900 F5D4030C */  jal        func_800F53D4
    /* 64D04 80156904 00000000 */   nop
    /* 64D08 80156908 F3FF4010 */  beqz       $v0, .L801568D8
    /* 64D0C 8015690C 0E00043C */   lui       $a0, (0xEE900 >> 16)
    /* 64D10 80156910 5D5A0508 */  j          .L80156974
    /* 64D14 80156914 00000000 */   nop
  .L80156918:
    /* 64D18 80156918 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 64D1C 8015691C 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 64D20 80156920 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 64D24 80156924 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 64D28 80156928 00004394 */  lhu        $v1, 0x0($v0)
    /* 64D2C 8015692C 9A000424 */  addiu      $a0, $zero, 0x9A
    /* 64D30 80156930 65DD030C */  jal        func_800F7594
    /* 64D34 80156934 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 64D38 80156938 0E00043C */  lui        $a0, (0xEB6C0 >> 16)
  .L8015693C:
    /* 64D3C 8015693C 1ADB030C */  jal        func_800F6C68
    /* 64D40 80156940 C0B68434 */   ori       $a0, $a0, (0xEB6C0 & 0xFFFF)
    /* 64D44 80156944 58E2030C */  jal        func_800F8960
    /* 64D48 80156948 FF590424 */   addiu     $a0, $zero, 0x59FF
    /* 64D4C 8015694C D9D8030C */  jal        func_800F6364
    /* 64D50 80156950 00000000 */   nop
    /* 64D54 80156954 EFD8030C */  jal        func_800F63BC
    /* 64D58 80156958 00000000 */   nop
    /* 64D5C 8015695C 5DD5030C */  jal        func_800F5574
    /* 64D60 80156960 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 64D64 80156964 F5D4030C */  jal        func_800F53D4
    /* 64D68 80156968 00000000 */   nop
    /* 64D6C 8015696C F3FF4010 */  beqz       $v0, .L8015693C
    /* 64D70 80156970 0E00043C */   lui       $a0, (0xEB6C0 >> 16)
  .L80156974:
    /* 64D74 80156974 91E5030C */  jal        func_800F9644
    /* 64D78 80156978 20000424 */   addiu     $a0, $zero, 0x20
    /* 64D7C 8015697C 04D5030C */  jal        func_800F5410
    /* 64D80 80156980 00000000 */   nop
    /* 64D84 80156984 96D9030C */  jal        func_800F6658
    /* 64D88 80156988 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 64D8C 8015698C 19D0030C */  jal        func_800F4064
    /* 64D90 80156990 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 64D94 80156994 9DE0030C */  jal        func_800F8274
    /* 64D98 80156998 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 64D9C 8015699C 04D5030C */  jal        func_800F5410
    /* 64DA0 801569A0 00000000 */   nop
    /* 64DA4 801569A4 96D9030C */  jal        func_800F6658
    /* 64DA8 801569A8 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 64DAC 801569AC 19D0030C */  jal        func_800F4064
    /* 64DB0 801569B0 02000424 */   addiu     $a0, $zero, 0x2
    /* 64DB4 801569B4 9DE0030C */  jal        func_800F8274
    /* 64DB8 801569B8 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 64DBC 801569BC C7E5030C */  jal        func_800F971C
    /* 64DC0 801569C0 00000000 */   nop
    /* 64DC4 801569C4 98E5030C */  jal        func_800F9660
    /* 64DC8 801569C8 20000424 */   addiu     $a0, $zero, 0x20
    /* 64DCC 801569CC 095A0508 */  j          .L80156824
    /* 64DD0 801569D0 00000000 */   nop
  .L801569D4:
    /* 64DD4 801569D4 7B5A050C */  jal        func_801569EC
    /* 64DD8 801569D8 00000000 */   nop
    /* 64DDC 801569DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 64DE0 801569E0 00000000 */  nop
    /* 64DE4 801569E4 0800E003 */  jr         $ra
    /* 64DE8 801569E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80156480
