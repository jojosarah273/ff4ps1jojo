nonmatching func_80170458, 0x268

glabel func_80170458
    /* 7E858 80170458 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7E85C 8017045C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7E860 80170460 DDE3030C */  jal        func_800F8F74
    /* 7E864 80170464 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 7E868 80170468 53D9030C */  jal        func_800F654C
    /* 7E86C 8017046C 80000424 */   addiu     $a0, $zero, 0x80
    /* 7E870 80170470 62E0030C */  jal        func_800F8188
    /* 7E874 80170474 15210424 */   addiu     $a0, $zero, 0x2115
    /* 7E878 80170478 53D9030C */  jal        func_800F654C
    /* 7E87C 8017047C 08000424 */   addiu     $a0, $zero, 0x8
    /* 7E880 80170480 62E0030C */  jal        func_800F8188
    /* 7E884 80170484 00430424 */   addiu     $a0, $zero, 0x4300
    /* 7E888 80170488 53D9030C */  jal        func_800F654C
    /* 7E88C 8017048C 19000424 */   addiu     $a0, $zero, 0x19
    /* 7E890 80170490 62E0030C */  jal        func_800F8188
    /* 7E894 80170494 01430424 */   addiu     $a0, $zero, 0x4301
    /* 7E898 80170498 DDE3030C */  jal        func_800F8F74
    /* 7E89C 8017049C 04430424 */   addiu     $a0, $zero, 0x4304
    /* 7E8A0 801704A0 9CDC030C */  jal        func_800F7270
    /* 7E8A4 801704A4 4C000424 */   addiu     $a0, $zero, 0x4C
    /* 7E8A8 801704A8 40E3030C */  jal        func_800F8D00
    /* 7E8AC 801704AC 16210424 */   addiu     $a0, $zero, 0x2116
    /* 7E8B0 801704B0 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 7E8B4 801704B4 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 7E8B8 801704B8 00000000 */  nop
    /* 7E8BC 801704BC 00004394 */  lhu        $v1, 0x0($v0)
    /* 7E8C0 801704C0 1A80013C */  lui        $at, %hi(D_8019EE08)
    /* 7E8C4 801704C4 08EE23A4 */  sh         $v1, %lo(D_8019EE08)($at)
    /* 7E8C8 801704C8 EEE3030C */  jal        func_800F8FB8
    /* 7E8CC 801704CC 10000424 */   addiu     $a0, $zero, 0x10
    /* 7E8D0 801704D0 77DC030C */  jal        func_800F71DC
    /* 7E8D4 801704D4 10060424 */   addiu     $a0, $zero, 0x610
    /* 7E8D8 801704D8 40E3030C */  jal        func_800F8D00
    /* 7E8DC 801704DC 02430424 */   addiu     $a0, $zero, 0x4302
    /* 7E8E0 801704E0 9CDC030C */  jal        func_800F7270
    /* 7E8E4 801704E4 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 7E8E8 801704E8 40E3030C */  jal        func_800F8D00
    /* 7E8EC 801704EC 05430424 */   addiu     $a0, $zero, 0x4305
    /* 7E8F0 801704F0 1AE6030C */  jal        func_800F9868
    /* 7E8F4 801704F4 21200000 */   addu      $a0, $zero, $zero
    /* 7E8F8 801704F8 84DC030C */  jal        func_800F7210
    /* 7E8FC 801704FC 16210424 */   addiu     $a0, $zero, 0x2116
    /* 7E900 80170500 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 7E904 80170504 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 7E908 80170508 00000000 */  nop
    /* 7E90C 8017050C 00004394 */  lhu        $v1, 0x0($v0)
    /* 7E910 80170510 1A80013C */  lui        $at, %hi(D_8019EE0A)
    /* 7E914 80170514 0AEE23A4 */  sh         $v1, %lo(D_8019EE0A)($at)
    /* 7E918 80170518 DDE3030C */  jal        func_800F8F74
    /* 7E91C 8017051C 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 7E920 80170520 0FCF030C */  jal        func_800F3C3C
    /* 7E924 80170524 4F000424 */   addiu     $a0, $zero, 0x4F
    /* 7E928 80170528 AFDD030C */  jal        func_800F76BC
    /* 7E92C 8017052C 21204000 */   addu      $a0, $v0, $zero
    /* 7E930 80170530 BADD030C */  jal        func_800F76E8
    /* 7E934 80170534 00000000 */   nop
    /* 7E938 80170538 0FCF030C */  jal        func_800F3C3C
    /* 7E93C 8017053C 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 7E940 80170540 32DF030C */  jal        func_800F7CC8
    /* 7E944 80170544 21204000 */   addu      $a0, $v0, $zero
    /* 7E948 80170548 0FCF030C */  jal        func_800F3C3C
    /* 7E94C 8017054C 4F000424 */   addiu     $a0, $zero, 0x4F
    /* 7E950 80170550 AFDD030C */  jal        func_800F76BC
    /* 7E954 80170554 21204000 */   addu      $a0, $v0, $zero
    /* 7E958 80170558 BADD030C */  jal        func_800F76E8
    /* 7E95C 8017055C 00000000 */   nop
    /* 7E960 80170560 0FCF030C */  jal        func_800F3C3C
    /* 7E964 80170564 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 7E968 80170568 32DF030C */  jal        func_800F7CC8
    /* 7E96C 8017056C 21204000 */   addu      $a0, $v0, $zero
    /* 7E970 80170570 0FCF030C */  jal        func_800F3C3C
    /* 7E974 80170574 4F000424 */   addiu     $a0, $zero, 0x4F
    /* 7E978 80170578 AFDD030C */  jal        func_800F76BC
    /* 7E97C 8017057C 21204000 */   addu      $a0, $v0, $zero
    /* 7E980 80170580 BADD030C */  jal        func_800F76E8
    /* 7E984 80170584 00000000 */   nop
    /* 7E988 80170588 0FCF030C */  jal        func_800F3C3C
    /* 7E98C 8017058C 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 7E990 80170590 32DF030C */  jal        func_800F7CC8
    /* 7E994 80170594 21204000 */   addu      $a0, $v0, $zero
    /* 7E998 80170598 0FCF030C */  jal        func_800F3C3C
    /* 7E99C 8017059C 4F000424 */   addiu     $a0, $zero, 0x4F
    /* 7E9A0 801705A0 AFDD030C */  jal        func_800F76BC
    /* 7E9A4 801705A4 21204000 */   addu      $a0, $v0, $zero
    /* 7E9A8 801705A8 BADD030C */  jal        func_800F76E8
    /* 7E9AC 801705AC 00000000 */   nop
    /* 7E9B0 801705B0 0FCF030C */  jal        func_800F3C3C
    /* 7E9B4 801705B4 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 7E9B8 801705B8 32DF030C */  jal        func_800F7CC8
    /* 7E9BC 801705BC 21204000 */   addu      $a0, $v0, $zero
    /* 7E9C0 801705C0 53D9030C */  jal        func_800F654C
    /* 7E9C4 801705C4 18000424 */   addiu     $a0, $zero, 0x18
    /* 7E9C8 801705C8 62E0030C */  jal        func_800F8188
    /* 7E9CC 801705CC 01430424 */   addiu     $a0, $zero, 0x4301
    /* 7E9D0 801705D0 9CDC030C */  jal        func_800F7270
    /* 7E9D4 801705D4 4C000424 */   addiu     $a0, $zero, 0x4C
    /* 7E9D8 801705D8 40E3030C */  jal        func_800F8D00
    /* 7E9DC 801705DC 16210424 */   addiu     $a0, $zero, 0x2116
    /* 7E9E0 801705E0 9CDC030C */  jal        func_800F7270
    /* 7E9E4 801705E4 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7E9E8 801705E8 40E3030C */  jal        func_800F8D00
    /* 7E9EC 801705EC 02430424 */   addiu     $a0, $zero, 0x4302
    /* 7E9F0 801705F0 8CD9030C */  jal        func_800F6630
    /* 7E9F4 801705F4 49000424 */   addiu     $a0, $zero, 0x49
    /* 7E9F8 801705F8 62E0030C */  jal        func_800F8188
    /* 7E9FC 801705FC 04430424 */   addiu     $a0, $zero, 0x4304
    /* 7EA00 80170600 40DD030C */  jal        func_800F7500
    /* 7EA04 80170604 21200000 */   addu      $a0, $zero, $zero
  .L80170608:
    /* 7EA08 80170608 DDE3030C */  jal        func_800F8F74
    /* 7EA0C 8017060C 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 7EA10 80170610 53D9030C */  jal        func_800F654C
    /* 7EA14 80170614 80000424 */   addiu     $a0, $zero, 0x80
    /* 7EA18 80170618 62E0030C */  jal        func_800F8188
    /* 7EA1C 8017061C 15210424 */   addiu     $a0, $zero, 0x2115
    /* 7EA20 80170620 53D9030C */  jal        func_800F654C
    /* 7EA24 80170624 01000424 */   addiu     $a0, $zero, 0x1
    /* 7EA28 80170628 62E0030C */  jal        func_800F8188
    /* 7EA2C 8017062C 00430424 */   addiu     $a0, $zero, 0x4300
    /* 7EA30 80170630 77DC030C */  jal        func_800F71DC
    /* 7EA34 80170634 10000424 */   addiu     $a0, $zero, 0x10
    /* 7EA38 80170638 40E3030C */  jal        func_800F8D00
    /* 7EA3C 8017063C 05430424 */   addiu     $a0, $zero, 0x4305
    /* 7EA40 80170640 1AE6030C */  jal        func_800F9868
    /* 7EA44 80170644 21200000 */   addu      $a0, $zero, $zero
    /* 7EA48 80170648 DDE3030C */  jal        func_800F8F74
    /* 7EA4C 8017064C 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 7EA50 80170650 DDE3030C */  jal        func_800F8F74
    /* 7EA54 80170654 15210424 */   addiu     $a0, $zero, 0x2115
    /* 7EA58 80170658 DDE3030C */  jal        func_800F8F74
    /* 7EA5C 8017065C 00430424 */   addiu     $a0, $zero, 0x4300
    /* 7EA60 80170660 77DC030C */  jal        func_800F71DC
    /* 7EA64 80170664 08000424 */   addiu     $a0, $zero, 0x8
    /* 7EA68 80170668 40E3030C */  jal        func_800F8D00
    /* 7EA6C 8017066C 05430424 */   addiu     $a0, $zero, 0x4305
    /* 7EA70 80170670 1AE6030C */  jal        func_800F9868
    /* 7EA74 80170674 21200000 */   addu      $a0, $zero, $zero
    /* 7EA78 80170678 EFD8030C */  jal        func_800F63BC
    /* 7EA7C 8017067C 00000000 */   nop
    /* 7EA80 80170680 0FCF030C */  jal        func_800F3C3C
    /* 7EA84 80170684 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 7EA88 80170688 01D6030C */  jal        func_800F5804
    /* 7EA8C 8017068C 21204000 */   addu      $a0, $v0, $zero
    /* 7EA90 80170690 F5D4030C */  jal        func_800F53D4
    /* 7EA94 80170694 00000000 */   nop
    /* 7EA98 80170698 DBFF4010 */  beqz       $v0, .L80170608
    /* 7EA9C 8017069C 00000000 */   nop
    /* 7EAA0 801706A0 E550060C */  jal        func_80194394
    /* 7EAA4 801706A4 21200000 */   addu      $a0, $zero, $zero
    /* 7EAA8 801706A8 C004060C */  jal        func_80181300
    /* 7EAAC 801706AC 00000000 */   nop
    /* 7EAB0 801706B0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7EAB4 801706B4 00000000 */  nop
    /* 7EAB8 801706B8 0800E003 */  jr         $ra
    /* 7EABC 801706BC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80170458
