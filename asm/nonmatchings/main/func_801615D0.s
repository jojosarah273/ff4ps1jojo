nonmatching func_801615D0, 0x208

glabel func_801615D0
    /* 6F9D0 801615D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6F9D4 801615D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6F9D8 801615D8 53D9030C */  jal        func_800F654C
    /* 6F9DC 801615DC 16000424 */   addiu     $a0, $zero, 0x16
    /* 6F9E0 801615E0 62E0030C */  jal        func_800F8188
    /* 6F9E4 801615E4 C8340424 */   addiu     $a0, $zero, 0x34C8
    /* 6F9E8 801615E8 53D9030C */  jal        func_800F654C
    /* 6F9EC 801615EC 10000424 */   addiu     $a0, $zero, 0x10
    /* 6F9F0 801615F0 62E0030C */  jal        func_800F8188
    /* 6F9F4 801615F4 C7340424 */   addiu     $a0, $zero, 0x34C7
    /* 6F9F8 801615F8 53D9030C */  jal        func_800F654C
    /* 6F9FC 801615FC F8000424 */   addiu     $a0, $zero, 0xF8
    /* 6FA00 80161600 62E0030C */  jal        func_800F8188
    /* 6FA04 80161604 C6330424 */   addiu     $a0, $zero, 0x33C6
    /* 6FA08 80161608 53D9030C */  jal        func_800F654C
    /* 6FA0C 8016160C 04000424 */   addiu     $a0, $zero, 0x4
    /* 6FA10 80161610 62E0030C */  jal        func_800F8188
    /* 6FA14 80161614 C7330424 */   addiu     $a0, $zero, 0x33C7
    /* 6FA18 80161618 8CD9030C */  jal        func_800F6630
    /* 6FA1C 8016161C CE000424 */   addiu     $a0, $zero, 0xCE
    /* 6FA20 80161620 0DD9030C */  jal        func_800F6434
    /* 6FA24 80161624 80000424 */   addiu     $a0, $zero, 0x80
    /* 6FA28 80161628 0D004014 */  bnez       $v0, .L80161660
    /* 6FA2C 8016162C 00000000 */   nop
  .L80161630:
    /* 6FA30 80161630 53D9030C */  jal        func_800F654C
    /* 6FA34 80161634 D3000424 */   addiu     $a0, $zero, 0xD3
    /* 6FA38 80161638 62E0030C */  jal        func_800F8188
    /* 6FA3C 8016163C C4330424 */   addiu     $a0, $zero, 0x33C4
    /* 6FA40 80161640 A74C050C */  jal        func_8015329C
    /* 6FA44 80161644 00000000 */   nop
    /* 6FA48 80161648 53D9030C */  jal        func_800F654C
    /* 6FA4C 8016164C 21200000 */   addu      $a0, $zero, $zero
    /* 6FA50 80161650 62E0030C */  jal        func_800F8188
    /* 6FA54 80161654 CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 6FA58 80161658 F2850508 */  j          .L801617C8
    /* 6FA5C 8016165C 00000000 */   nop
  .L80161660:
    /* 6FA60 80161660 59D9030C */  jal        func_800F6564
    /* 6FA64 80161664 81380424 */   addiu     $a0, $zero, 0x3881
    /* 6FA68 80161668 0DD9030C */  jal        func_800F6434
    /* 6FA6C 8016166C 02020424 */   addiu     $a0, $zero, 0x202
    /* 6FA70 80161670 EFFF4014 */  bnez       $v0, .L80161630
    /* 6FA74 80161674 00000000 */   nop
    /* 6FA78 80161678 59D9030C */  jal        func_800F6564
    /* 6FA7C 8016167C D2260424 */   addiu     $a0, $zero, 0x26D2
    /* 6FA80 80161680 62E0030C */  jal        func_800F8188
    /* 6FA84 80161684 80350424 */   addiu     $a0, $zero, 0x3580
    /* 6FA88 80161688 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6FA8C 8016168C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6FA90 80161690 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6FA94 80161694 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6FA98 80161698 00004394 */  lhu        $v1, 0x0($v0)
    /* 6FA9C 8016169C E5000424 */  addiu      $a0, $zero, 0xE5
    /* 6FAA0 801616A0 5BE3030C */  jal        func_800F8D6C
    /* 6FAA4 801616A4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6FAA8 801616A8 77DC030C */  jal        func_800F71DC
    /* 6FAAC 801616AC 00910434 */   ori       $a0, $zero, 0x9100
    /* 6FAB0 801616B0 5BE3030C */  jal        func_800F8D6C
    /* 6FAB4 801616B4 80000424 */   addiu     $a0, $zero, 0x80
    /* 6FAB8 801616B8 53D9030C */  jal        func_800F654C
    /* 6FABC 801616BC 0F000424 */   addiu     $a0, $zero, 0xF
    /* 6FAC0 801616C0 93E0030C */  jal        func_800F824C
    /* 6FAC4 801616C4 82000424 */   addiu     $a0, $zero, 0x82
    /* 6FAC8 801616C8 53D9030C */  jal        func_800F654C
    /* 6FACC 801616CC 08000424 */   addiu     $a0, $zero, 0x8
    /* 6FAD0 801616D0 BE49050C */  jal        func_801526F8
    /* 6FAD4 801616D4 00000000 */   nop
    /* 6FAD8 801616D8 59D9030C */  jal        func_800F6564
    /* 6FADC 801616DC 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 6FAE0 801616E0 93E0030C */  jal        func_800F824C
    /* 6FAE4 801616E4 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 6FAE8 801616E8 59D9030C */  jal        func_800F6564
    /* 6FAEC 801616EC 82260424 */   addiu     $a0, $zero, 0x2682
    /* 6FAF0 801616F0 93E0030C */  jal        func_800F824C
    /* 6FAF4 801616F4 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 6FAF8 801616F8 0349050C */  jal        func_8015240C
    /* 6FAFC 801616FC 00000000 */   nop
    /* 6FB00 80161700 9CDC030C */  jal        func_800F7270
    /* 6FB04 80161704 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 6FB08 80161708 40E3030C */  jal        func_800F8D00
    /* 6FB0C 8016170C 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 6FB10 80161710 734C050C */  jal        func_801531CC
    /* 6FB14 80161714 00000000 */   nop
    /* 6FB18 80161718 04D5030C */  jal        func_800F5410
    /* 6FB1C 8016171C 00000000 */   nop
    /* 6FB20 80161720 C1CE030C */  jal        func_800F3B04
    /* 6FB24 80161724 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 6FB28 80161728 CECF030C */  jal        func_800F3F38
    /* 6FB2C 8016172C 21204000 */   addu      $a0, $v0, $zero
    /* 6FB30 80161730 93E0030C */  jal        func_800F824C
    /* 6FB34 80161734 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 6FB38 80161738 53D9030C */  jal        func_800F654C
    /* 6FB3C 8016173C 21200000 */   addu      $a0, $zero, $zero
    /* 6FB40 80161740 C1CE030C */  jal        func_800F3B04
    /* 6FB44 80161744 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 6FB48 80161748 CECF030C */  jal        func_800F3F38
    /* 6FB4C 8016174C 21204000 */   addu      $a0, $v0, $zero
    /* 6FB50 80161750 93E0030C */  jal        func_800F824C
    /* 6FB54 80161754 E4000424 */   addiu     $a0, $zero, 0xE4
    /* 6FB58 80161758 9CDC030C */  jal        func_800F7270
    /* 6FB5C 8016175C E3000424 */   addiu     $a0, $zero, 0xE3
    /* 6FB60 80161760 56D6030C */  jal        func_800F5958
    /* 6FB64 80161764 0F270424 */   addiu     $a0, $zero, 0x270F
    /* 6FB68 80161768 F0D4030C */  jal        func_800F53C0
    /* 6FB6C 8016176C 00000000 */   nop
    /* 6FB70 80161770 05004010 */  beqz       $v0, .L80161788
    /* 6FB74 80161774 00000000 */   nop
    /* 6FB78 80161778 77DC030C */  jal        func_800F71DC
    /* 6FB7C 8016177C 0F270424 */   addiu     $a0, $zero, 0x270F
    /* 6FB80 80161780 5BE3030C */  jal        func_800F8D6C
    /* 6FB84 80161784 E3000424 */   addiu     $a0, $zero, 0xE3
  .L80161788:
    /* 6FB88 80161788 8CD9030C */  jal        func_800F6630
    /* 6FB8C 8016178C CE000424 */   addiu     $a0, $zero, 0xCE
    /* 6FB90 80161790 FED8030C */  jal        func_800F63F8
    /* 6FB94 80161794 00000000 */   nop
    /* 6FB98 80161798 0787010C */  jal        func_80061C1C
    /* 6FB9C 8016179C 00000000 */   nop
    /* 6FBA0 801617A0 8CD9030C */  jal        func_800F6630
    /* 6FBA4 801617A4 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 6FBA8 801617A8 DAE1030C */  jal        func_800F8768
    /* 6FBAC 801617AC D4340424 */   addiu     $a0, $zero, 0x34D4
    /* 6FBB0 801617B0 8CD9030C */  jal        func_800F6630
    /* 6FBB4 801617B4 E4000424 */   addiu     $a0, $zero, 0xE4
    /* 6FBB8 801617B8 DAE1030C */  jal        func_800F8768
    /* 6FBBC 801617BC D5340424 */   addiu     $a0, $zero, 0x34D5
    /* 6FBC0 801617C0 2387010C */  jal        func_80061C8C
    /* 6FBC4 801617C4 00000000 */   nop
  .L801617C8:
    /* 6FBC8 801617C8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6FBCC 801617CC 00000000 */  nop
    /* 6FBD0 801617D0 0800E003 */  jr         $ra
    /* 6FBD4 801617D4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801615D0
