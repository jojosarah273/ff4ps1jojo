nonmatching func_8016A4E4, 0x570

glabel func_8016A4E4
    /* 788E4 8016A4E4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 788E8 8016A4E8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 788EC 8016A4EC C7E5030C */  jal        func_800F971C
    /* 788F0 8016A4F0 00000000 */   nop
    /* 788F4 8016A4F4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 788F8 8016A4F8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 788FC 8016A4FC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 78900 8016A500 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 78904 8016A504 00004394 */  lhu        $v1, 0x0($v0)
    /* 78908 8016A508 21200000 */  addu       $a0, $zero, $zero
    /* 7890C 8016A50C 5BE3030C */  jal        func_800F8D6C
    /* 78910 8016A510 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 78914 8016A514 EEE3030C */  jal        func_800F8FB8
    /* 78918 8016A518 0A000424 */   addiu     $a0, $zero, 0xA
  .L8016A51C:
    /* 7891C 8016A51C DADA030C */  jal        func_800F6B68
    /* 78920 8016A520 03270424 */   addiu     $a0, $zero, 0x2703
    /* 78924 8016A524 50D4030C */  jal        func_800F5140
    /* 78928 8016A528 00000000 */   nop
    /* 7892C 8016A52C D3D3030C */  jal        func_800F4F4C
    /* 78930 8016A530 00000000 */   nop
    /* 78934 8016A534 E4A8050C */  jal        func_8016A390
    /* 78938 8016A538 00000000 */   nop
    /* 7893C 8016A53C E4A8050C */  jal        func_8016A390
    /* 78940 8016A540 00000000 */   nop
    /* 78944 8016A544 91E5030C */  jal        func_800F9644
    /* 78948 8016A548 20000424 */   addiu     $a0, $zero, 0x20
    /* 7894C 8016A54C F8DA030C */  jal        func_800F6BE0
    /* 78950 8016A550 03270424 */   addiu     $a0, $zero, 0x2703
    /* 78954 8016A554 F7E1030C */  jal        func_800F87DC
    /* 78958 8016A558 032B0424 */   addiu     $a0, $zero, 0x2B03
    /* 7895C 8016A55C F8DA030C */  jal        func_800F6BE0
    /* 78960 8016A560 05270424 */   addiu     $a0, $zero, 0x2705
    /* 78964 8016A564 F7E1030C */  jal        func_800F87DC
    /* 78968 8016A568 052B0424 */   addiu     $a0, $zero, 0x2B05
    /* 7896C 8016A56C F8DA030C */  jal        func_800F6BE0
    /* 78970 8016A570 07270424 */   addiu     $a0, $zero, 0x2707
    /* 78974 8016A574 F7E1030C */  jal        func_800F87DC
    /* 78978 8016A578 072B0424 */   addiu     $a0, $zero, 0x2B07
    /* 7897C 8016A57C F8DA030C */  jal        func_800F6BE0
    /* 78980 8016A580 09270424 */   addiu     $a0, $zero, 0x2709
    /* 78984 8016A584 F7E1030C */  jal        func_800F87DC
    /* 78988 8016A588 092B0424 */   addiu     $a0, $zero, 0x2B09
    /* 7898C 8016A58C 50E4030C */  jal        func_800F9140
    /* 78990 8016A590 032F0424 */   addiu     $a0, $zero, 0x2F03
    /* 78994 8016A594 50E4030C */  jal        func_800F9140
    /* 78998 8016A598 052F0424 */   addiu     $a0, $zero, 0x2F05
    /* 7899C 8016A59C 50E4030C */  jal        func_800F9140
    /* 789A0 8016A5A0 072F0424 */   addiu     $a0, $zero, 0x2F07
    /* 789A4 8016A5A4 50E4030C */  jal        func_800F9140
    /* 789A8 8016A5A8 082F0424 */   addiu     $a0, $zero, 0x2F08
    /* 789AC 8016A5AC C7E5030C */  jal        func_800F971C
    /* 789B0 8016A5B0 00000000 */   nop
    /* 789B4 8016A5B4 98E5030C */  jal        func_800F9660
    /* 789B8 8016A5B8 20000424 */   addiu     $a0, $zero, 0x20
    /* 789BC 8016A5BC CCE4030C */  jal        func_800F9330
    /* 789C0 8016A5C0 00000000 */   nop
    /* 789C4 8016A5C4 8CD9030C */  jal        func_800F6630
    /* 789C8 8016A5C8 21200000 */   addu      $a0, $zero, $zero
    /* 789CC 8016A5CC 04D5030C */  jal        func_800F5410
    /* 789D0 8016A5D0 00000000 */   nop
    /* 789D4 8016A5D4 0FCF030C */  jal        func_800F3C3C
    /* 789D8 8016A5D8 01000424 */   addiu     $a0, $zero, 0x1
    /* 789DC 8016A5DC CECF030C */  jal        func_800F3F38
    /* 789E0 8016A5E0 21204000 */   addu      $a0, $v0, $zero
    /* 789E4 8016A5E4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 789E8 8016A5E8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 789EC 8016A5EC 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 789F0 8016A5F0 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 789F4 8016A5F4 00006294 */  lhu        $v0, 0x0($v1)
    /* 789F8 8016A5F8 C7E5030C */  jal        func_800F971C
    /* 789FC 8016A5FC 000082A4 */   sh        $v0, 0x0($a0)
    /* 78A00 8016A600 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 78A04 8016A604 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 78A08 8016A608 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 78A0C 8016A60C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 78A10 8016A610 00006294 */  lhu        $v0, 0x0($v1)
    /* 78A14 8016A614 00000000 */  nop
    /* 78A18 8016A618 000082A4 */  sh         $v0, 0x0($a0)
    /* 78A1C 8016A61C 1300043C */  lui        $a0, (0x13DF57 >> 16)
  .L8016A620:
    /* 78A20 8016A620 1ADB030C */  jal        func_800F6C68
    /* 78A24 8016A624 57DF8434 */   ori       $a0, $a0, (0x13DF57 & 0xFFFF)
    /* 78A28 8016A628 58E2030C */  jal        func_800F8960
    /* 78A2C 8016A62C 42000424 */   addiu     $a0, $zero, 0x42
    /* 78A30 8016A630 D9D8030C */  jal        func_800F6364
    /* 78A34 8016A634 00000000 */   nop
    /* 78A38 8016A638 EFD8030C */  jal        func_800F63BC
    /* 78A3C 8016A63C 00000000 */   nop
    /* 78A40 8016A640 A4D6030C */  jal        func_800F5A90
    /* 78A44 8016A644 08000424 */   addiu     $a0, $zero, 0x8
    /* 78A48 8016A648 F5D4030C */  jal        func_800F53D4
    /* 78A4C 8016A64C 00000000 */   nop
    /* 78A50 8016A650 F3FF4010 */  beqz       $v0, .L8016A620
    /* 78A54 8016A654 1300043C */   lui       $a0, (0x13DF57 >> 16)
    /* 78A58 8016A658 68E5030C */  jal        func_800F95A0
    /* 78A5C 8016A65C 00000000 */   nop
    /* 78A60 8016A660 53D9030C */  jal        func_800F654C
    /* 78A64 8016A664 30000424 */   addiu     $a0, $zero, 0x30
    /* 78A68 8016A668 93E0030C */  jal        func_800F824C
    /* 78A6C 8016A66C 04000424 */   addiu     $a0, $zero, 0x4
  .L8016A670:
    /* 78A70 8016A670 1FA7050C */  jal        func_80169C7C
    /* 78A74 8016A674 00000000 */   nop
    /* 78A78 8016A678 0FCF030C */  jal        func_800F3C3C
    /* 78A7C 8016A67C 47000424 */   addiu     $a0, $zero, 0x47
    /* 78A80 8016A680 CAD3030C */  jal        func_800F4F28
    /* 78A84 8016A684 21204000 */   addu      $a0, $v0, $zero
    /* 78A88 8016A688 D3D3030C */  jal        func_800F4F4C
    /* 78A8C 8016A68C 00000000 */   nop
    /* 78A90 8016A690 0FCF030C */  jal        func_800F3C3C
    /* 78A94 8016A694 46000424 */   addiu     $a0, $zero, 0x46
    /* 78A98 8016A698 90DE030C */  jal        func_800F7A40
    /* 78A9C 8016A69C 21204000 */   addu      $a0, $v0, $zero
    /* 78AA0 8016A6A0 9ADE030C */  jal        func_800F7A68
    /* 78AA4 8016A6A4 00000000 */   nop
    /* 78AA8 8016A6A8 0FCF030C */  jal        func_800F3C3C
    /* 78AAC 8016A6AC 45000424 */   addiu     $a0, $zero, 0x45
    /* 78AB0 8016A6B0 90DE030C */  jal        func_800F7A40
    /* 78AB4 8016A6B4 21204000 */   addu      $a0, $v0, $zero
    /* 78AB8 8016A6B8 9ADE030C */  jal        func_800F7A68
    /* 78ABC 8016A6BC 00000000 */   nop
    /* 78AC0 8016A6C0 0FCF030C */  jal        func_800F3C3C
    /* 78AC4 8016A6C4 44000424 */   addiu     $a0, $zero, 0x44
    /* 78AC8 8016A6C8 90DE030C */  jal        func_800F7A40
    /* 78ACC 8016A6CC 21204000 */   addu      $a0, $v0, $zero
    /* 78AD0 8016A6D0 9ADE030C */  jal        func_800F7A68
    /* 78AD4 8016A6D4 00000000 */   nop
    /* 78AD8 8016A6D8 0FCF030C */  jal        func_800F3C3C
    /* 78ADC 8016A6DC 43000424 */   addiu     $a0, $zero, 0x43
    /* 78AE0 8016A6E0 90DE030C */  jal        func_800F7A40
    /* 78AE4 8016A6E4 21204000 */   addu      $a0, $v0, $zero
    /* 78AE8 8016A6E8 9ADE030C */  jal        func_800F7A68
    /* 78AEC 8016A6EC 00000000 */   nop
    /* 78AF0 8016A6F0 0FCF030C */  jal        func_800F3C3C
    /* 78AF4 8016A6F4 42000424 */   addiu     $a0, $zero, 0x42
    /* 78AF8 8016A6F8 90DE030C */  jal        func_800F7A40
    /* 78AFC 8016A6FC 21204000 */   addu      $a0, $v0, $zero
    /* 78B00 8016A700 B2DE030C */  jal        func_800F7AC8
    /* 78B04 8016A704 01010424 */   addiu     $a0, $zero, 0x101
    /* 78B08 8016A708 03004014 */  bnez       $v0, .L8016A718
    /* 78B0C 8016A70C 00000000 */   nop
    /* 78B10 8016A710 7AA7050C */  jal        func_80169DE8
    /* 78B14 8016A714 00000000 */   nop
  .L8016A718:
    /* 78B18 8016A718 68D7030C */  jal        func_800F5DA0
    /* 78B1C 8016A71C 04000424 */   addiu     $a0, $zero, 0x4
    /* 78B20 8016A720 E3D6030C */  jal        func_800F5B8C
    /* 78B24 8016A724 02020424 */   addiu     $a0, $zero, 0x202
    /* 78B28 8016A728 D1FF4014 */  bnez       $v0, .L8016A670
    /* 78B2C 8016A72C 00000000 */   nop
    /* 78B30 8016A730 CCE4030C */  jal        func_800F9330
    /* 78B34 8016A734 00000000 */   nop
    /* 78B38 8016A738 8CD9030C */  jal        func_800F6630
    /* 78B3C 8016A73C 21200000 */   addu      $a0, $zero, $zero
    /* 78B40 8016A740 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 78B44 8016A744 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 78B48 8016A748 00000000 */  nop
    /* 78B4C 8016A74C 00006290 */  lbu        $v0, 0x0($v1)
    /* 78B50 8016A750 04000424 */  addiu      $a0, $zero, 0x4
    /* 78B54 8016A754 C2100200 */  srl        $v0, $v0, 3
    /* 78B58 8016A758 93E0030C */  jal        func_800F824C
    /* 78B5C 8016A75C 000062A0 */   sb        $v0, 0x0($v1)
    /* 78B60 8016A760 8CD9030C */  jal        func_800F6630
    /* 78B64 8016A764 01000424 */   addiu     $a0, $zero, 0x1
    /* 78B68 8016A768 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 78B6C 8016A76C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 78B70 8016A770 00000000 */  nop
    /* 78B74 8016A774 00006290 */  lbu        $v0, 0x0($v1)
    /* 78B78 8016A778 00000000 */  nop
    /* 78B7C 8016A77C C2100200 */  srl        $v0, $v0, 3
    /* 78B80 8016A780 04D5030C */  jal        func_800F5410
    /* 78B84 8016A784 000062A0 */   sb        $v0, 0x0($v1)
    /* 78B88 8016A788 0FCF030C */  jal        func_800F3C3C
    /* 78B8C 8016A78C 04000424 */   addiu     $a0, $zero, 0x4
    /* 78B90 8016A790 CECF030C */  jal        func_800F3F38
    /* 78B94 8016A794 21204000 */   addu      $a0, $v0, $zero
    /* 78B98 8016A798 92D0030C */  jal        func_800F4248
    /* 78B9C 8016A79C 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 78BA0 8016A7A0 1300043C */  lui        $a0, (0x13E4F2 >> 16)
    /* 78BA4 8016A7A4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 78BA8 8016A7A8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 78BAC 8016A7AC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 78BB0 8016A7B0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 78BB4 8016A7B4 00004394 */  lhu        $v1, 0x0($v0)
    /* 78BB8 8016A7B8 F2E48434 */  ori        $a0, $a0, (0x13E4F2 & 0xFFFF)
    /* 78BBC 8016A7BC 1ADB030C */  jal        func_800F6C68
    /* 78BC0 8016A7C0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 78BC4 8016A7C4 0DD9030C */  jal        func_800F6434
    /* 78BC8 8016A7C8 02000424 */   addiu     $a0, $zero, 0x2
    /* 78BCC 8016A7CC 5D004014 */  bnez       $v0, .L8016A944
    /* 78BD0 8016A7D0 00000000 */   nop
    /* 78BD4 8016A7D4 68E5030C */  jal        func_800F95A0
    /* 78BD8 8016A7D8 00000000 */   nop
    /* 78BDC 8016A7DC 93E0030C */  jal        func_800F824C
    /* 78BE0 8016A7E0 04000424 */   addiu     $a0, $zero, 0x4
  .L8016A7E4:
    /* 78BE4 8016A7E4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 78BE8 8016A7E8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 78BEC 8016A7EC 00000000 */  nop
    /* 78BF0 8016A7F0 00004494 */  lhu        $a0, 0x0($v0)
    /* 78BF4 8016A7F4 C1CE030C */  jal        func_800F3B04
    /* 78BF8 8016A7F8 032F8424 */   addiu     $a0, $a0, 0x2F03
    /* 78BFC 8016A7FC AFDD030C */  jal        func_800F76BC
    /* 78C00 8016A800 21204000 */   addu      $a0, $v0, $zero
    /* 78C04 8016A804 BADD030C */  jal        func_800F76E8
    /* 78C08 8016A808 00000000 */   nop
    /* 78C0C 8016A80C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 78C10 8016A810 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 78C14 8016A814 00000000 */  nop
    /* 78C18 8016A818 00004494 */  lhu        $a0, 0x0($v0)
    /* 78C1C 8016A81C C1CE030C */  jal        func_800F3B04
    /* 78C20 8016A820 042F8424 */   addiu     $a0, $a0, 0x2F04
    /* 78C24 8016A824 32DF030C */  jal        func_800F7CC8
    /* 78C28 8016A828 21204000 */   addu      $a0, $v0, $zero
    /* 78C2C 8016A82C 43DF030C */  jal        func_800F7D0C
    /* 78C30 8016A830 00000000 */   nop
    /* 78C34 8016A834 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 78C38 8016A838 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 78C3C 8016A83C 00000000 */  nop
    /* 78C40 8016A840 00004494 */  lhu        $a0, 0x0($v0)
    /* 78C44 8016A844 C1CE030C */  jal        func_800F3B04
    /* 78C48 8016A848 052F8424 */   addiu     $a0, $a0, 0x2F05
    /* 78C4C 8016A84C 32DF030C */  jal        func_800F7CC8
    /* 78C50 8016A850 21204000 */   addu      $a0, $v0, $zero
    /* 78C54 8016A854 43DF030C */  jal        func_800F7D0C
    /* 78C58 8016A858 00000000 */   nop
    /* 78C5C 8016A85C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 78C60 8016A860 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 78C64 8016A864 00000000 */  nop
    /* 78C68 8016A868 00004494 */  lhu        $a0, 0x0($v0)
    /* 78C6C 8016A86C C1CE030C */  jal        func_800F3B04
    /* 78C70 8016A870 062F8424 */   addiu     $a0, $a0, 0x2F06
    /* 78C74 8016A874 32DF030C */  jal        func_800F7CC8
    /* 78C78 8016A878 21204000 */   addu      $a0, $v0, $zero
    /* 78C7C 8016A87C 43DF030C */  jal        func_800F7D0C
    /* 78C80 8016A880 00000000 */   nop
    /* 78C84 8016A884 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 78C88 8016A888 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 78C8C 8016A88C 00000000 */  nop
    /* 78C90 8016A890 00004494 */  lhu        $a0, 0x0($v0)
    /* 78C94 8016A894 C1CE030C */  jal        func_800F3B04
    /* 78C98 8016A898 072F8424 */   addiu     $a0, $a0, 0x2F07
    /* 78C9C 8016A89C 32DF030C */  jal        func_800F7CC8
    /* 78CA0 8016A8A0 21204000 */   addu      $a0, $v0, $zero
    /* 78CA4 8016A8A4 43DF030C */  jal        func_800F7D0C
    /* 78CA8 8016A8A8 00000000 */   nop
    /* 78CAC 8016A8AC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 78CB0 8016A8B0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 78CB4 8016A8B4 00000000 */  nop
    /* 78CB8 8016A8B8 00004494 */  lhu        $a0, 0x0($v0)
    /* 78CBC 8016A8BC C1CE030C */  jal        func_800F3B04
    /* 78CC0 8016A8C0 082F8424 */   addiu     $a0, $a0, 0x2F08
    /* 78CC4 8016A8C4 32DF030C */  jal        func_800F7CC8
    /* 78CC8 8016A8C8 21204000 */   addu      $a0, $v0, $zero
    /* 78CCC 8016A8CC 43DF030C */  jal        func_800F7D0C
    /* 78CD0 8016A8D0 00000000 */   nop
    /* 78CD4 8016A8D4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 78CD8 8016A8D8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 78CDC 8016A8DC 00000000 */  nop
    /* 78CE0 8016A8E0 00004494 */  lhu        $a0, 0x0($v0)
    /* 78CE4 8016A8E4 C1CE030C */  jal        func_800F3B04
    /* 78CE8 8016A8E8 092F8424 */   addiu     $a0, $a0, 0x2F09
    /* 78CEC 8016A8EC 32DF030C */  jal        func_800F7CC8
    /* 78CF0 8016A8F0 21204000 */   addu      $a0, $v0, $zero
    /* 78CF4 8016A8F4 43DF030C */  jal        func_800F7D0C
    /* 78CF8 8016A8F8 00000000 */   nop
    /* 78CFC 8016A8FC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 78D00 8016A900 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 78D04 8016A904 00000000 */  nop
    /* 78D08 8016A908 00004494 */  lhu        $a0, 0x0($v0)
    /* 78D0C 8016A90C C1CE030C */  jal        func_800F3B04
    /* 78D10 8016A910 0A2F8424 */   addiu     $a0, $a0, 0x2F0A
    /* 78D14 8016A914 32DF030C */  jal        func_800F7CC8
    /* 78D18 8016A918 21204000 */   addu      $a0, $v0, $zero
    /* 78D1C 8016A91C 43DF030C */  jal        func_800F7D0C
    /* 78D20 8016A920 00000000 */   nop
    /* 78D24 8016A924 68D7030C */  jal        func_800F5DA0
    /* 78D28 8016A928 04000424 */   addiu     $a0, $zero, 0x4
    /* 78D2C 8016A92C E3D6030C */  jal        func_800F5B8C
    /* 78D30 8016A930 02020424 */   addiu     $a0, $zero, 0x202
    /* 78D34 8016A934 ABFF4014 */  bnez       $v0, .L8016A7E4
    /* 78D38 8016A938 00000000 */   nop
    /* 78D3C 8016A93C CCE4030C */  jal        func_800F9330
    /* 78D40 8016A940 00000000 */   nop
  .L8016A944:
    /* 78D44 8016A944 8CD9030C */  jal        func_800F6630
    /* 78D48 8016A948 21200000 */   addu      $a0, $zero, $zero
    /* 78D4C 8016A94C 04D5030C */  jal        func_800F5410
    /* 78D50 8016A950 00000000 */   nop
    /* 78D54 8016A954 02D0030C */  jal        func_800F4008
    /* 78D58 8016A958 40000424 */   addiu     $a0, $zero, 0x40
    /* 78D5C 8016A95C 93E0030C */  jal        func_800F824C
    /* 78D60 8016A960 21200000 */   addu      $a0, $zero, $zero
    /* 78D64 8016A964 AFD8030C */  jal        func_800F62BC
    /* 78D68 8016A968 0A000424 */   addiu     $a0, $zero, 0xA
    /* 78D6C 8016A96C 8CD9030C */  jal        func_800F6630
    /* 78D70 8016A970 0A000424 */   addiu     $a0, $zero, 0xA
    /* 78D74 8016A974 92D0030C */  jal        func_800F4248
    /* 78D78 8016A978 07000424 */   addiu     $a0, $zero, 0x7
    /* 78D7C 8016A97C 48D0030C */  jal        func_800F4120
    /* 78D80 8016A980 02020424 */   addiu     $a0, $zero, 0x202
    /* 78D84 8016A984 09004014 */  bnez       $v0, .L8016A9AC
    /* 78D88 8016A988 00000000 */   nop
    /* 78D8C 8016A98C 8CD9030C */  jal        func_800F6630
    /* 78D90 8016A990 01000424 */   addiu     $a0, $zero, 0x1
    /* 78D94 8016A994 04D5030C */  jal        func_800F5410
    /* 78D98 8016A998 00000000 */   nop
    /* 78D9C 8016A99C 02D0030C */  jal        func_800F4008
    /* 78DA0 8016A9A0 08000424 */   addiu     $a0, $zero, 0x8
    /* 78DA4 8016A9A4 93E0030C */  jal        func_800F824C
    /* 78DA8 8016A9A8 01000424 */   addiu     $a0, $zero, 0x1
  .L8016A9AC:
    /* 78DAC 8016A9AC 8CD9030C */  jal        func_800F6630
    /* 78DB0 8016A9B0 0A000424 */   addiu     $a0, $zero, 0xA
    /* 78DB4 8016A9B4 92D0030C */  jal        func_800F4248
    /* 78DB8 8016A9B8 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 78DBC 8016A9BC 48D0030C */  jal        func_800F4120
    /* 78DC0 8016A9C0 02020424 */   addiu     $a0, $zero, 0x202
    /* 78DC4 8016A9C4 03004014 */  bnez       $v0, .L8016A9D4
    /* 78DC8 8016A9C8 00000000 */   nop
    /* 78DCC 8016A9CC EEE3030C */  jal        func_800F8FB8
    /* 78DD0 8016A9D0 01000424 */   addiu     $a0, $zero, 0x1
  .L8016A9D4:
    /* 78DD4 8016A9D4 68E5030C */  jal        func_800F95A0
    /* 78DD8 8016A9D8 00000000 */   nop
    /* 78DDC 8016A9DC 91E5030C */  jal        func_800F9644
    /* 78DE0 8016A9E0 20000424 */   addiu     $a0, $zero, 0x20
    /* 78DE4 8016A9E4 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 78DE8 8016A9E8 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 78DEC 8016A9EC 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 78DF0 8016A9F0 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 78DF4 8016A9F4 00006294 */  lhu        $v0, 0x0($v1)
    /* 78DF8 8016A9F8 04D5030C */  jal        func_800F5410
    /* 78DFC 8016A9FC 000082A4 */   sh        $v0, 0x0($a0)
    /* 78E00 8016AA00 19D0030C */  jal        func_800F4064
    /* 78E04 8016AA04 08000424 */   addiu     $a0, $zero, 0x8
    /* 78E08 8016AA08 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 78E0C 8016AA0C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 78E10 8016AA10 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 78E14 8016AA14 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 78E18 8016AA18 00006294 */  lhu        $v0, 0x0($v1)
    /* 78E1C 8016AA1C C7E5030C */  jal        func_800F971C
    /* 78E20 8016AA20 000082A4 */   sh        $v0, 0x0($a0)
    /* 78E24 8016AA24 98E5030C */  jal        func_800F9660
    /* 78E28 8016AA28 20000424 */   addiu     $a0, $zero, 0x20
    /* 78E2C 8016AA2C 56D6030C */  jal        func_800F5958
    /* 78E30 8016AA30 00040424 */   addiu     $a0, $zero, 0x400
    /* 78E34 8016AA34 F5D4030C */  jal        func_800F53D4
    /* 78E38 8016AA38 00000000 */   nop
    /* 78E3C 8016AA3C B7FE4010 */  beqz       $v0, .L8016A51C
    /* 78E40 8016AA40 00000000 */   nop
    /* 78E44 8016AA44 1000BF8F */  lw         $ra, 0x10($sp)
    /* 78E48 8016AA48 00000000 */  nop
    /* 78E4C 8016AA4C 0800E003 */  jr         $ra
    /* 78E50 8016AA50 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016A4E4
