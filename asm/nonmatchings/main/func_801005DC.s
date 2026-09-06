nonmatching func_801005DC, 0x2B8

glabel func_801005DC
    /* E9DC 801005DC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* E9E0 801005E0 1000BFAF */  sw         $ra, 0x10($sp)
    /* E9E4 801005E4 53D9030C */  jal        func_800F654C
    /* E9E8 801005E8 01000424 */   addiu     $a0, $zero, 0x1
    /* E9EC 801005EC 93E0030C */  jal        func_800F824C
    /* E9F0 801005F0 06000424 */   addiu     $a0, $zero, 0x6
    /* E9F4 801005F4 59D9030C */  jal        func_800F6564
    /* E9F8 801005F8 FB080424 */   addiu     $a0, $zero, 0x8FB
    /* E9FC 801005FC 5DD5030C */  jal        func_800F5574
    /* EA00 80100600 60000424 */   addiu     $a0, $zero, 0x60
    /* EA04 80100604 F0D4030C */  jal        func_800F53C0
    /* EA08 80100608 00000000 */   nop
    /* EA0C 8010060C 0B004014 */  bnez       $v0, .L8010063C
    /* EA10 80100610 00000000 */   nop
    /* EA14 80100614 5DD5030C */  jal        func_800F5574
    /* EA18 80100618 54000424 */   addiu     $a0, $zero, 0x54
    /* EA1C 8010061C F0D4030C */  jal        func_800F53C0
    /* EA20 80100620 00000000 */   nop
    /* EA24 80100624 05004010 */  beqz       $v0, .L8010063C
    /* EA28 80100628 00000000 */   nop
    /* EA2C 8010062C 53D9030C */  jal        func_800F654C
    /* EA30 80100630 0A000424 */   addiu     $a0, $zero, 0xA
    /* EA34 80100634 93E0030C */  jal        func_800F824C
    /* EA38 80100638 06000424 */   addiu     $a0, $zero, 0x6
  .L8010063C:
    /* EA3C 8010063C 40DD030C */  jal        func_800F7500
    /* EA40 80100640 21200000 */   addu      $a0, $zero, $zero
  .L80100644:
    /* EA44 80100644 5CDB030C */  jal        func_800F6D70
    /* EA48 80100648 40140424 */   addiu     $a0, $zero, 0x1440
    /* EA4C 8010064C C1CE030C */  jal        func_800F3B04
    /* EA50 80100650 FB080424 */   addiu     $a0, $zero, 0x8FB
    /* EA54 80100654 35D5030C */  jal        func_800F54D4
    /* EA58 80100658 21204000 */   addu      $a0, $v0, $zero
    /* EA5C 8010065C F5D4030C */  jal        func_800F53D4
    /* EA60 80100660 00000000 */   nop
    /* EA64 80100664 09004010 */  beqz       $v0, .L8010068C
    /* EA68 80100668 00000000 */   nop
    /* EA6C 8010066C 5CDB030C */  jal        func_800F6D70
    /* EA70 80100670 41140424 */   addiu     $a0, $zero, 0x1441
    /* EA74 80100674 5DD5030C */  jal        func_800F5574
    /* EA78 80100678 63000424 */   addiu     $a0, $zero, 0x63
    /* EA7C 8010067C F5D4030C */  jal        func_800F53D4
    /* EA80 80100680 00000000 */   nop
    /* EA84 80100684 63004010 */  beqz       $v0, .L80100814
    /* EA88 80100688 00000000 */   nop
  .L8010068C:
    /* EA8C 8010068C 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* EA90 80100690 00000000 */  nop
    /* EA94 80100694 00006294 */  lhu        $v0, 0x0($v1)
    /* EA98 80100698 60000424 */  addiu      $a0, $zero, 0x60
    /* EA9C 8010069C 02004224 */  addiu      $v0, $v0, 0x2
    /* EAA0 801006A0 A4D6030C */  jal        func_800F5A90
    /* EAA4 801006A4 000062A4 */   sh        $v0, 0x0($v1)
    /* EAA8 801006A8 F5D4030C */  jal        func_800F53D4
    /* EAAC 801006AC 00000000 */   nop
    /* EAB0 801006B0 E4FF4010 */  beqz       $v0, .L80100644
    /* EAB4 801006B4 00000000 */   nop
    /* EAB8 801006B8 40DD030C */  jal        func_800F7500
    /* EABC 801006BC 21200000 */   addu      $a0, $zero, $zero
  .L801006C0:
    /* EAC0 801006C0 5CDB030C */  jal        func_800F6D70
    /* EAC4 801006C4 40140424 */   addiu     $a0, $zero, 0x1440
    /* EAC8 801006C8 0DD9030C */  jal        func_800F6434
    /* EACC 801006CC 02000424 */   addiu     $a0, $zero, 0x2
    /* EAD0 801006D0 4C004014 */  bnez       $v0, .L80100804
    /* EAD4 801006D4 60000424 */   addiu     $a0, $zero, 0x60
    /* EAD8 801006D8 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* EADC 801006DC 00000000 */  nop
    /* EAE0 801006E0 00006294 */  lhu        $v0, 0x0($v1)
    /* EAE4 801006E4 00000000 */  nop
    /* EAE8 801006E8 02004224 */  addiu      $v0, $v0, 0x2
    /* EAEC 801006EC A4D6030C */  jal        func_800F5A90
    /* EAF0 801006F0 000062A4 */   sh        $v0, 0x0($v1)
    /* EAF4 801006F4 F5D4030C */  jal        func_800F53D4
    /* EAF8 801006F8 00000000 */   nop
    /* EAFC 801006FC F0FF4010 */  beqz       $v0, .L801006C0
    /* EB00 80100700 00000000 */   nop
    /* EB04 80100704 59D9030C */  jal        func_800F6564
    /* EB08 80100708 FB080424 */   addiu     $a0, $zero, 0x8FB
    /* EB0C 8010070C 62E0030C */  jal        func_800F8188
    /* EB10 80100710 04180424 */   addiu     $a0, $zero, 0x1804
    /* EB14 80100714 DDE3030C */  jal        func_800F8F74
    /* EB18 80100718 05180424 */   addiu     $a0, $zero, 0x1805
    /* EB1C 8010071C DDE3030C */  jal        func_800F8F74
    /* EB20 80100720 06180424 */   addiu     $a0, $zero, 0x1806
    /* EB24 80100724 DDE3030C */  jal        func_800F8F74
    /* EB28 80100728 07180424 */   addiu     $a0, $zero, 0x1807
    /* EB2C 8010072C DDE3030C */  jal        func_800F8F74
    /* EB30 80100730 08180424 */   addiu     $a0, $zero, 0x1808
    /* EB34 80100734 DDE3030C */  jal        func_800F8F74
    /* EB38 80100738 09180424 */   addiu     $a0, $zero, 0x1809
    /* EB3C 8010073C DDE3030C */  jal        func_800F8F74
    /* EB40 80100740 0A180424 */   addiu     $a0, $zero, 0x180A
    /* EB44 80100744 DDE3030C */  jal        func_800F8F74
    /* EB48 80100748 0B180424 */   addiu     $a0, $zero, 0x180B
    /* EB4C 8010074C 53D9030C */  jal        func_800F654C
    /* EB50 80100750 21200000 */   addu      $a0, $zero, $zero
    /* EB54 80100754 45F6030C */  jal        func_800FD914
    /* EB58 80100758 00000000 */   nop
    /* EB5C 8010075C D77A040C */  jal        func_8011EB5C
    /* EB60 80100760 00000000 */   nop
    /* EB64 80100764 52F1030C */  jal        func_800FC548
    /* EB68 80100768 00000000 */   nop
    /* EB6C 8010076C 77DC030C */  jal        func_800F71DC
    /* EB70 80100770 21200000 */   addu      $a0, $zero, $zero
  .L80100774:
    /* EB74 80100774 3BE4030C */  jal        func_800F90EC
    /* EB78 80100778 04180424 */   addiu     $a0, $zero, 0x1804
    /* EB7C 8010077C D9D8030C */  jal        func_800F6364
    /* EB80 80100780 00000000 */   nop
    /* EB84 80100784 56D6030C */  jal        func_800F5958
    /* EB88 80100788 08000424 */   addiu     $a0, $zero, 0x8
    /* EB8C 8010078C F5D4030C */  jal        func_800F53D4
    /* EB90 80100790 00000000 */   nop
    /* EB94 80100794 F7FF4010 */  beqz       $v0, .L80100774
    /* EB98 80100798 00000000 */   nop
    /* EB9C 8010079C 18D8050C */  jal        func_80176060
    /* EBA0 801007A0 00000000 */   nop
    /* EBA4 801007A4 53D9030C */  jal        func_800F654C
    /* EBA8 801007A8 01000424 */   addiu     $a0, $zero, 0x1
    /* EBAC 801007AC 93E0030C */  jal        func_800F824C
    /* EBB0 801007B0 C5000424 */   addiu     $a0, $zero, 0xC5
    /* EBB4 801007B4 52EB030C */  jal        func_800FAD48
    /* EBB8 801007B8 00000000 */   nop
    /* EBBC 801007BC 9D32040C */  jal        func_8010CA74
    /* EBC0 801007C0 00000000 */   nop
    /* EBC4 801007C4 12D5030C */  jal        func_800F5448
    /* EBC8 801007C8 00000000 */   nop
    /* EBCC 801007CC 53D9030C */  jal        func_800F654C
    /* EBD0 801007D0 81000424 */   addiu     $a0, $zero, 0x81
    /* EBD4 801007D4 62E0030C */  jal        func_800F8188
    /* EBD8 801007D8 00420424 */   addiu     $a0, $zero, 0x4200
    /* EBDC 801007DC 05C3050C */  jal        func_80170C14
    /* EBE0 801007E0 00000000 */   nop
    /* EBE4 801007E4 042C040C */  jal        func_8010B010
    /* EBE8 801007E8 00000000 */   nop
    /* EBEC 801007EC 53D9030C */  jal        func_800F654C
    /* EBF0 801007F0 21200000 */   addu      $a0, $zero, $zero
    /* EBF4 801007F4 17F6030C */  jal        func_800FD85C
    /* EBF8 801007F8 00000000 */   nop
    /* EBFC 801007FC 21020408 */  j          .L80100884
    /* EC00 80100800 00000000 */   nop
  .L80100804:
    /* EC04 80100804 59D9030C */  jal        func_800F6564
    /* EC08 80100808 FB080424 */   addiu     $a0, $zero, 0x8FB
    /* EC0C 8010080C 58E2030C */  jal        func_800F8960
    /* EC10 80100810 40140424 */   addiu     $a0, $zero, 0x1440
  .L80100814:
    /* EC14 80100814 5CDB030C */  jal        func_800F6D70
    /* EC18 80100818 41140424 */   addiu     $a0, $zero, 0x1441
    /* EC1C 8010081C 04D5030C */  jal        func_800F5410
    /* EC20 80100820 00000000 */   nop
    /* EC24 80100824 0FCF030C */  jal        func_800F3C3C
    /* EC28 80100828 06000424 */   addiu     $a0, $zero, 0x6
    /* EC2C 8010082C CECF030C */  jal        func_800F3F38
    /* EC30 80100830 21204000 */   addu      $a0, $v0, $zero
    /* EC34 80100834 5DD5030C */  jal        func_800F5574
    /* EC38 80100838 64000424 */   addiu     $a0, $zero, 0x64
    /* EC3C 8010083C F0D4030C */  jal        func_800F53C0
    /* EC40 80100840 00000000 */   nop
    /* EC44 80100844 0D004010 */  beqz       $v0, .L8010087C
    /* EC48 80100848 00000000 */   nop
    /* EC4C 8010084C 20D5030C */  jal        func_800F5480
    /* EC50 80100850 00000000 */   nop
    /* EC54 80100854 16E0030C */  jal        func_800F8058
    /* EC58 80100858 63000424 */   addiu     $a0, $zero, 0x63
    /* EC5C 8010085C 93E0030C */  jal        func_800F824C
    /* EC60 80100860 06000424 */   addiu     $a0, $zero, 0x6
    /* EC64 80100864 53D9030C */  jal        func_800F654C
    /* EC68 80100868 63000424 */   addiu     $a0, $zero, 0x63
    /* EC6C 8010086C 58E2030C */  jal        func_800F8960
    /* EC70 80100870 41140424 */   addiu     $a0, $zero, 0x1441
    /* EC74 80100874 8F010408 */  j          .L8010063C
    /* EC78 80100878 00000000 */   nop
  .L8010087C:
    /* EC7C 8010087C 58E2030C */  jal        func_800F8960
    /* EC80 80100880 41140424 */   addiu     $a0, $zero, 0x1441
  .L80100884:
    /* EC84 80100884 1000BF8F */  lw         $ra, 0x10($sp)
    /* EC88 80100888 00000000 */  nop
    /* EC8C 8010088C 0800E003 */  jr         $ra
    /* EC90 80100890 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801005DC
