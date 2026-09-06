nonmatching func_800FB430, 0xA14

glabel func_800FB430
    /* 9830 800FB430 C0FFBD27 */  addiu      $sp, $sp, -0x40
    /* 9834 800FB434 3800B4AF */  sw         $s4, 0x38($sp)
    /* 9838 800FB438 01001424 */  addiu      $s4, $zero, 0x1
    /* 983C 800FB43C 3C00BFAF */  sw         $ra, 0x3C($sp)
    /* 9840 800FB440 3400B3AF */  sw         $s3, 0x34($sp)
    /* 9844 800FB444 3000B2AF */  sw         $s2, 0x30($sp)
    /* 9848 800FB448 2C00B1AF */  sw         $s1, 0x2C($sp)
    /* 984C 800FB44C FEEC030C */  jal        func_800FB3F8
    /* 9850 800FB450 2800B0AF */   sw        $s0, 0x28($sp)
    /* 9854 800FB454 DDE3030C */  jal        func_800F8F74
    /* 9858 800FB458 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 985C 800FB45C DDE3030C */  jal        func_800F8F74
    /* 9860 800FB460 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 9864 800FB464 53D9030C */  jal        func_800F654C
    /* 9868 800FB468 01000424 */   addiu     $a0, $zero, 0x1
    /* 986C 800FB46C 62E0030C */  jal        func_800F8188
    /* 9870 800FB470 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 9874 800FB474 53D9030C */  jal        func_800F654C
    /* 9878 800FB478 15000424 */   addiu     $a0, $zero, 0x15
    /* 987C 800FB47C 62E0030C */  jal        func_800F8188
    /* 9880 800FB480 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 9884 800FB484 40A4050C */  jal        func_80169100
    /* 9888 800FB488 1A80123C */   lui       $s2, %hi(D_80198A08)
    /* 988C 800FB48C 18D8050C */  jal        func_80176060
    /* 9890 800FB490 1A80133C */   lui       $s3, %hi(D_80198A54)
    /* 9894 800FB494 53D9030C */  jal        func_800F654C
    /* 9898 800FB498 03000424 */   addiu     $a0, $zero, 0x3
    /* 989C 800FB49C 62E0030C */  jal        func_800F8188
    /* 98A0 800FB4A0 00170424 */   addiu     $a0, $zero, 0x1700
    /* 98A4 800FB4A4 53D9030C */  jal        func_800F654C
    /* 98A8 800FB4A8 13000424 */   addiu     $a0, $zero, 0x13
    /* 98AC 800FB4AC 62E0030C */  jal        func_800F8188
    /* 98B0 800FB4B0 2C210424 */   addiu     $a0, $zero, 0x212C
    /* 98B4 800FB4B4 53D9030C */  jal        func_800F654C
    /* 98B8 800FB4B8 02000424 */   addiu     $a0, $zero, 0x2
    /* 98BC 800FB4BC 62E0030C */  jal        func_800F8188
    /* 98C0 800FB4C0 2D210424 */   addiu     $a0, $zero, 0x212D
    /* 98C4 800FB4C4 62E0030C */  jal        func_800F8188
    /* 98C8 800FB4C8 30210424 */   addiu     $a0, $zero, 0x2130
    /* 98CC 800FB4CC 53D9030C */  jal        func_800F654C
    /* 98D0 800FB4D0 43000424 */   addiu     $a0, $zero, 0x43
    /* 98D4 800FB4D4 62E0030C */  jal        func_800F8188
    /* 98D8 800FB4D8 31210424 */   addiu     $a0, $zero, 0x2131
    /* 98DC 800FB4DC 53D9030C */  jal        func_800F654C
    /* 98E0 800FB4E0 01000424 */   addiu     $a0, $zero, 0x1
    /* 98E4 800FB4E4 62E0030C */  jal        func_800F8188
    /* 98E8 800FB4E8 05210424 */   addiu     $a0, $zero, 0x2105
    /* 98EC 800FB4EC 1CFA030C */  jal        func_800FE870
    /* 98F0 800FB4F0 FF3F1024 */   addiu     $s0, $zero, 0x3FFF
    /* 98F4 800FB4F4 91EF030C */  jal        func_800FBE44
    /* 98F8 800FB4F8 00000000 */   nop
    /* 98FC 800FB4FC 53D9030C */  jal        func_800F654C
    /* 9900 800FB500 80000424 */   addiu     $a0, $zero, 0x80
    /* 9904 800FB504 62E0030C */  jal        func_800F8188
    /* 9908 800FB508 15210424 */   addiu     $a0, $zero, 0x2115
    /* 990C 800FB50C DF000424 */  addiu      $a0, $zero, 0xDF
    /* 9910 800FB510 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* 9914 800FB514 68FD4224 */  addiu      $v0, $v0, %lo(D_801CFD68)
    /* 9918 800FB518 FEAF0334 */  ori        $v1, $zero, 0xAFFE
    /* 991C 800FB51C 21104300 */  addu       $v0, $v0, $v1
  .L800FB520:
    /* 9920 800FB520 000044A4 */  sh         $a0, 0x0($v0)
    /* 9924 800FB524 FFFF1026 */  addiu      $s0, $s0, -0x1
    /* 9928 800FB528 FDFF0106 */  bgez       $s0, .L800FB520
    /* 992C 800FB52C FEFF4224 */   addiu     $v0, $v0, -0x2
    /* 9930 800FB530 77DC030C */  jal        func_800F71DC
    /* 9934 800FB534 80180424 */   addiu     $a0, $zero, 0x1880
    /* 9938 800FB538 5BE3030C */  jal        func_800F8D6C
    /* 993C 800FB53C 47000424 */   addiu     $a0, $zero, 0x47
    /* 9940 800FB540 77DC030C */  jal        func_800F71DC
    /* 9944 800FB544 80010424 */   addiu     $a0, $zero, 0x180
    /* 9948 800FB548 5BE3030C */  jal        func_800F8D6C
    /* 994C 800FB54C 45000424 */   addiu     $a0, $zero, 0x45
    /* 9950 800FB550 77DC030C */  jal        func_800F71DC
    /* 9954 800FB554 00E80434 */   ori       $a0, $zero, 0xE800
    /* 9958 800FB558 5BE3030C */  jal        func_800F8D6C
    /* 995C 800FB55C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 9960 800FB560 ACD9050C */  jal        func_801766B0
    /* 9964 800FB564 F8001124 */   addiu     $s1, $zero, 0xF8
    /* 9968 800FB568 77DC030C */  jal        func_800F71DC
    /* 996C 800FB56C 80300424 */   addiu     $a0, $zero, 0x3080
    /* 9970 800FB570 5BE3030C */  jal        func_800F8D6C
    /* 9974 800FB574 47000424 */   addiu     $a0, $zero, 0x47
    /* 9978 800FB578 77DC030C */  jal        func_800F71DC
    /* 997C 800FB57C 80E90434 */   ori       $a0, $zero, 0xE980
    /* 9980 800FB580 5BE3030C */  jal        func_800F8D6C
    /* 9984 800FB584 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 9988 800FB588 ACD9050C */  jal        func_801766B0
    /* 998C 800FB58C 08001024 */   addiu     $s0, $zero, 0x8
    /* 9990 800FB590 1000A427 */  addiu      $a0, $sp, 0x10
    /* 9994 800FB594 00030524 */  addiu      $a1, $zero, 0x300
    /* 9998 800FB598 F0000624 */  addiu      $a2, $zero, 0xF0
    /* 999C 800FB59C 40030224 */  addiu      $v0, $zero, 0x340
    /* 99A0 800FB5A0 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 99A4 800FB5A4 40000224 */  addiu      $v0, $zero, 0x40
    /* 99A8 800FB5A8 1200B1A7 */  sh         $s1, 0x12($sp)
    /* 99AC 800FB5AC 1400A2A7 */  sh         $v0, 0x14($sp)
    /* 99B0 800FB5B0 C051060C */  jal        func_80194700
    /* 99B4 800FB5B4 1600B0A7 */   sh        $s0, 0x16($sp)
    /* 99B8 800FB5B8 E550060C */  jal        func_80194394
    /* 99BC 800FB5BC 21200000 */   addu      $a0, $zero, $zero
    /* 99C0 800FB5C0 1000A427 */  addiu      $a0, $sp, 0x10
    /* 99C4 800FB5C4 00030524 */  addiu      $a1, $zero, 0x300
    /* 99C8 800FB5C8 F8000624 */  addiu      $a2, $zero, 0xF8
    /* 99CC 800FB5CC 60030224 */  addiu      $v0, $zero, 0x360
    /* 99D0 800FB5D0 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 99D4 800FB5D4 1200B1A7 */  sh         $s1, 0x12($sp)
    /* 99D8 800FB5D8 1400B0A7 */  sh         $s0, 0x14($sp)
    /* 99DC 800FB5DC C051060C */  jal        func_80194700
    /* 99E0 800FB5E0 1600B0A7 */   sh        $s0, 0x16($sp)
    /* 99E4 800FB5E4 E550060C */  jal        func_80194394
    /* 99E8 800FB5E8 21200000 */   addu      $a0, $zero, $zero
    /* 99EC 800FB5EC 77DC030C */  jal        func_800F71DC
    /* 99F0 800FB5F0 21200000 */   addu      $a0, $zero, $zero
  .L800FB5F4:
    /* 99F4 800FB5F4 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 99F8 800FB5F8 088A4426 */  addiu      $a0, $s2, %lo(D_80198A08)
    /* 99FC 800FB5FC 00004394 */  lhu        $v1, 0x0($v0)
    /* 9A00 800FB600 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 9A04 800FB604 21186400 */  addu       $v1, $v1, $a0
    /* 9A08 800FB608 00006290 */  lbu        $v0, 0x0($v1)
    /* 9A0C 800FB60C 00030424 */  addiu      $a0, $zero, 0x300
    /* 9A10 800FB610 DAE1030C */  jal        func_800F8768
    /* 9A14 800FB614 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 9A18 800FB618 D9D8030C */  jal        func_800F6364
    /* 9A1C 800FB61C 00000000 */   nop
    /* 9A20 800FB620 56D6030C */  jal        func_800F5958
    /* 9A24 800FB624 4C000424 */   addiu     $a0, $zero, 0x4C
    /* 9A28 800FB628 F5D4030C */  jal        func_800F53D4
    /* 9A2C 800FB62C 00000000 */   nop
    /* 9A30 800FB630 F0FF4010 */  beqz       $v0, .L800FB5F4
    /* 9A34 800FB634 00000000 */   nop
    /* 9A38 800FB638 40DD030C */  jal        func_800F7500
    /* 9A3C 800FB63C 21200000 */   addu      $a0, $zero, $zero
    /* 9A40 800FB640 77DC030C */  jal        func_800F71DC
    /* 9A44 800FB644 00EB0434 */   ori       $a0, $zero, 0xEB00
    /* 9A48 800FB648 5BE3030C */  jal        func_800F8D6C
    /* 9A4C 800FB64C 3D000424 */   addiu     $a0, $zero, 0x3D
  .L800FB650:
    /* 9A50 800FB650 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 9A54 800FB654 548A7026 */  addiu      $s0, $s3, %lo(D_80198A54)
    /* 9A58 800FB658 00004394 */  lhu        $v1, 0x0($v0)
    /* 9A5C 800FB65C 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 9A60 800FB660 21187000 */  addu       $v1, $v1, $s0
    /* 9A64 800FB664 00006290 */  lbu        $v0, 0x0($v1)
    /* 9A68 800FB668 47000424 */  addiu      $a0, $zero, 0x47
    /* 9A6C 800FB66C 93E0030C */  jal        func_800F824C
    /* 9A70 800FB670 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 9A74 800FB674 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 9A78 800FB678 00000000 */  nop
    /* 9A7C 800FB67C 00006294 */  lhu        $v0, 0x0($v1)
    /* 9A80 800FB680 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 9A84 800FB684 21105000 */  addu       $v0, $v0, $s0
    /* 9A88 800FB688 01004390 */  lbu        $v1, 0x1($v0)
    /* 9A8C 800FB68C 48000424 */  addiu      $a0, $zero, 0x48
    /* 9A90 800FB690 93E0030C */  jal        func_800F824C
    /* 9A94 800FB694 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 9A98 800FB698 D4EF030C */  jal        func_800FBF50
    /* 9A9C 800FB69C 00000000 */   nop
    /* 9AA0 800FB6A0 A4D6030C */  jal        func_800F5A90
    /* 9AA4 800FB6A4 14000424 */   addiu     $a0, $zero, 0x14
    /* 9AA8 800FB6A8 F5D4030C */  jal        func_800F53D4
    /* 9AAC 800FB6AC 00000000 */   nop
    /* 9AB0 800FB6B0 E7FF4010 */  beqz       $v0, .L800FB650
    /* 9AB4 800FB6B4 00000000 */   nop
    /* 9AB8 800FB6B8 40DD030C */  jal        func_800F7500
    /* 9ABC 800FB6BC 21200000 */   addu      $a0, $zero, $zero
    /* 9AC0 800FB6C0 77DC030C */  jal        func_800F71DC
    /* 9AC4 800FB6C4 50EB0434 */   ori       $a0, $zero, 0xEB50
    /* 9AC8 800FB6C8 5BE3030C */  jal        func_800F8D6C
    /* 9ACC 800FB6CC 3D000424 */   addiu     $a0, $zero, 0x3D
  .L800FB6D0:
    /* 9AD0 800FB6D0 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 9AD4 800FB6D4 548A7026 */  addiu      $s0, $s3, %lo(D_80198A54)
    /* 9AD8 800FB6D8 00004394 */  lhu        $v1, 0x0($v0)
    /* 9ADC 800FB6DC 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 9AE0 800FB6E0 21187000 */  addu       $v1, $v1, $s0
    /* 9AE4 800FB6E4 00006290 */  lbu        $v0, 0x0($v1)
    /* 9AE8 800FB6E8 47000424 */  addiu      $a0, $zero, 0x47
    /* 9AEC 800FB6EC 93E0030C */  jal        func_800F824C
    /* 9AF0 800FB6F0 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 9AF4 800FB6F4 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 9AF8 800FB6F8 00000000 */  nop
    /* 9AFC 800FB6FC 00006294 */  lhu        $v0, 0x0($v1)
    /* 9B00 800FB700 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* 9B04 800FB704 21105000 */  addu       $v0, $v0, $s0
    /* 9B08 800FB708 01004390 */  lbu        $v1, 0x1($v0)
    /* 9B0C 800FB70C 04D5030C */  jal        func_800F5410
    /* 9B10 800FB710 000083A0 */   sb        $v1, 0x0($a0)
    /* 9B14 800FB714 02D0030C */  jal        func_800F4008
    /* 9B18 800FB718 18000424 */   addiu     $a0, $zero, 0x18
    /* 9B1C 800FB71C 93E0030C */  jal        func_800F824C
    /* 9B20 800FB720 48000424 */   addiu     $a0, $zero, 0x48
    /* 9B24 800FB724 D4EF030C */  jal        func_800FBF50
    /* 9B28 800FB728 00000000 */   nop
    /* 9B2C 800FB72C A4D6030C */  jal        func_800F5A90
    /* 9B30 800FB730 14000424 */   addiu     $a0, $zero, 0x14
    /* 9B34 800FB734 F5D4030C */  jal        func_800F53D4
    /* 9B38 800FB738 00000000 */   nop
    /* 9B3C 800FB73C E4FF4010 */  beqz       $v0, .L800FB6D0
    /* 9B40 800FB740 00000000 */   nop
    /* 9B44 800FB744 77DC030C */  jal        func_800F71DC
    /* 9B48 800FB748 21200000 */   addu      $a0, $zero, $zero
  .L800FB74C:
    /* 9B4C 800FB74C 3BE4030C */  jal        func_800F90EC
    /* 9B50 800FB750 DB0C0424 */   addiu     $a0, $zero, 0xCDB
    /* 9B54 800FB754 D9D8030C */  jal        func_800F6364
    /* 9B58 800FB758 00000000 */   nop
    /* 9B5C 800FB75C 56D6030C */  jal        func_800F5958
    /* 9B60 800FB760 00020424 */   addiu     $a0, $zero, 0x200
    /* 9B64 800FB764 F5D4030C */  jal        func_800F53D4
    /* 9B68 800FB768 00000000 */   nop
    /* 9B6C 800FB76C F7FF4010 */  beqz       $v0, .L800FB74C
    /* 9B70 800FB770 00000000 */   nop
    /* 9B74 800FB774 A3D9050C */  jal        func_8017668C
    /* 9B78 800FB778 00000000 */   nop
    /* 9B7C 800FB77C 77DC030C */  jal        func_800F71DC
    /* 9B80 800FB780 60000424 */   addiu     $a0, $zero, 0x60
    /* 9B84 800FB784 40E3030C */  jal        func_800F8D00
    /* 9B88 800FB788 6D0A0424 */   addiu     $a0, $zero, 0xA6D
    /* 9B8C 800FB78C 77DC030C */  jal        func_800F71DC
    /* 9B90 800FB790 68000424 */   addiu     $a0, $zero, 0x68
    /* 9B94 800FB794 40E3030C */  jal        func_800F8D00
    /* 9B98 800FB798 6F0A0424 */   addiu     $a0, $zero, 0xA6F
    /* 9B9C 800FB79C 40E3030C */  jal        func_800F8D00
    /* 9BA0 800FB7A0 730A0424 */   addiu     $a0, $zero, 0xA73
    /* 9BA4 800FB7A4 77DC030C */  jal        func_800F71DC
    /* 9BA8 800FB7A8 48000424 */   addiu     $a0, $zero, 0x48
    /* 9BAC 800FB7AC 40E3030C */  jal        func_800F8D00
    /* 9BB0 800FB7B0 710A0424 */   addiu     $a0, $zero, 0xA71
    /* 9BB4 800FB7B4 77DC030C */  jal        func_800F71DC
    /* 9BB8 800FB7B8 21200000 */   addu      $a0, $zero, $zero
    /* 9BBC 800FB7BC 5BE3030C */  jal        func_800F8D6C
    /* 9BC0 800FB7C0 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 9BC4 800FB7C4 5BE3030C */  jal        func_800F8D6C
    /* 9BC8 800FB7C8 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 9BCC 800FB7CC D9D8030C */  jal        func_800F6364
    /* 9BD0 800FB7D0 00000000 */   nop
    /* 9BD4 800FB7D4 5BE3030C */  jal        func_800F8D6C
    /* 9BD8 800FB7D8 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 9BDC 800FB7DC 77DC030C */  jal        func_800F71DC
    /* 9BE0 800FB7E0 FFFF0434 */   ori       $a0, $zero, 0xFFFF
    /* 9BE4 800FB7E4 5BE3030C */  jal        func_800F8D6C
    /* 9BE8 800FB7E8 60000424 */   addiu     $a0, $zero, 0x60
    /* 9BEC 800FB7EC 53D9030C */  jal        func_800F654C
    /* 9BF0 800FB7F0 01000424 */   addiu     $a0, $zero, 0x1
    /* 9BF4 800FB7F4 93E0030C */  jal        func_800F824C
    /* 9BF8 800FB7F8 54000424 */   addiu     $a0, $zero, 0x54
    /* 9BFC 800FB7FC EEE3030C */  jal        func_800F8FB8
    /* 9C00 800FB800 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 9C04 800FB804 53D9030C */  jal        func_800F654C
    /* 9C08 800FB808 01000424 */   addiu     $a0, $zero, 0x1
    /* 9C0C 800FB80C 93E0030C */  jal        func_800F824C
    /* 9C10 800FB810 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 9C14 800FB814 53D9030C */  jal        func_800F654C
    /* 9C18 800FB818 0F000424 */   addiu     $a0, $zero, 0xF
    /* 9C1C 800FB81C 62E0030C */  jal        func_800F8188
    /* 9C20 800FB820 00210424 */   addiu     $a0, $zero, 0x2100
    /* 9C24 800FB824 53D9030C */  jal        func_800F654C
    /* 9C28 800FB828 81000424 */   addiu     $a0, $zero, 0x81
    /* 9C2C 800FB82C 62E0030C */  jal        func_800F8188
    /* 9C30 800FB830 00420424 */   addiu     $a0, $zero, 0x4200
  .L800FB834:
    /* 9C34 800FB834 ECF9030C */  jal        func_800FE7B0
    /* 9C38 800FB838 00000000 */   nop
    /* 9C3C 800FB83C AFD8030C */  jal        func_800F62BC
    /* 9C40 800FB840 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 9C44 800FB844 8CD9030C */  jal        func_800F6630
    /* 9C48 800FB848 02000424 */   addiu     $a0, $zero, 0x2
    /* 9C4C 800FB84C 92D0030C */  jal        func_800F4248
    /* 9C50 800FB850 80000424 */   addiu     $a0, $zero, 0x80
    /* 9C54 800FB854 48D0030C */  jal        func_800F4120
    /* 9C58 800FB858 02020424 */   addiu     $a0, $zero, 0x202
    /* 9C5C 800FB85C 05004014 */  bnez       $v0, .L800FB874
    /* 9C60 800FB860 00000000 */   nop
    /* 9C64 800FB864 EEE3030C */  jal        func_800F8FB8
    /* 9C68 800FB868 54000424 */   addiu     $a0, $zero, 0x54
    /* 9C6C 800FB86C 23EE0308 */  j          .L800FB88C
    /* 9C70 800FB870 00000000 */   nop
  .L800FB874:
    /* 9C74 800FB874 8CD9030C */  jal        func_800F6630
    /* 9C78 800FB878 54000424 */   addiu     $a0, $zero, 0x54
    /* 9C7C 800FB87C 0DD9030C */  jal        func_800F6434
    /* 9C80 800FB880 02020424 */   addiu     $a0, $zero, 0x202
    /* 9C84 800FB884 60014010 */  beqz       $v0, .L800FBE08
    /* 9C88 800FB888 00000000 */   nop
  .L800FB88C:
    /* 9C8C 800FB88C 8CD9030C */  jal        func_800F6630
    /* 9C90 800FB890 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 9C94 800FB894 92D0030C */  jal        func_800F4248
    /* 9C98 800FB898 07000424 */   addiu     $a0, $zero, 0x7
    /* 9C9C 800FB89C 48D0030C */  jal        func_800F4120
    /* 9CA0 800FB8A0 02020424 */   addiu     $a0, $zero, 0x202
    /* 9CA4 800FB8A4 E3FF4014 */  bnez       $v0, .L800FB834
    /* 9CA8 800FB8A8 00000000 */   nop
    /* 9CAC 800FB8AC 53D9030C */  jal        func_800F654C
    /* 9CB0 800FB8B0 10000424 */   addiu     $a0, $zero, 0x10
    /* 9CB4 800FB8B4 93E0030C */  jal        func_800F824C
    /* 9CB8 800FB8B8 07000424 */   addiu     $a0, $zero, 0x7
    /* 9CBC 800FB8BC 40DD030C */  jal        func_800F7500
    /* 9CC0 800FB8C0 20000424 */   addiu     $a0, $zero, 0x20
    /* 9CC4 800FB8C4 84DC030C */  jal        func_800F7210
    /* 9CC8 800FB8C8 6D0A0424 */   addiu     $a0, $zero, 0xA6D
  .L800FB8CC:
    /* 9CCC 800FB8CC 56D6030C */  jal        func_800F5958
    /* 9CD0 800FB8D0 20000424 */   addiu     $a0, $zero, 0x20
    /* 9CD4 800FB8D4 F0D4030C */  jal        func_800F53C0
    /* 9CD8 800FB8D8 00000000 */   nop
    /* 9CDC 800FB8DC 0E004014 */  bnez       $v0, .L800FB918
    /* 9CE0 800FB8E0 00000000 */   nop
    /* 9CE4 800FB8E4 91E5030C */  jal        func_800F9644
    /* 9CE8 800FB8E8 20000424 */   addiu     $a0, $zero, 0x20
    /* 9CEC 800FB8EC 0800043C */  lui        $a0, (0x8EC20 >> 16)
    /* 9CF0 800FB8F0 3DDB030C */  jal        func_800F6CF4
    /* 9CF4 800FB8F4 20EC8434 */   ori       $a0, $a0, (0x8EC20 & 0xFFFF)
    /* 9CF8 800FB8F8 75E2030C */  jal        func_800F89D4
    /* 9CFC 800FB8FC FB0C0424 */   addiu     $a0, $zero, 0xCFB
    /* 9D00 800FB900 C7E5030C */  jal        func_800F971C
    /* 9D04 800FB904 00000000 */   nop
    /* 9D08 800FB908 52CF030C */  jal        func_800F3D48
    /* 9D0C 800FB90C 00000000 */   nop
    /* 9D10 800FB910 98E5030C */  jal        func_800F9660
    /* 9D14 800FB914 20000424 */   addiu     $a0, $zero, 0x20
  .L800FB918:
    /* 9D18 800FB918 A8D7030C */  jal        func_800F5EA0
    /* 9D1C 800FB91C 00000000 */   nop
    /* 9D20 800FB920 A8D7030C */  jal        func_800F5EA0
    /* 9D24 800FB924 00000000 */   nop
    /* 9D28 800FB928 92D7030C */  jal        func_800F5E48
    /* 9D2C 800FB92C 00000000 */   nop
    /* 9D30 800FB930 92D7030C */  jal        func_800F5E48
    /* 9D34 800FB934 00000000 */   nop
    /* 9D38 800FB938 68D7030C */  jal        func_800F5DA0
    /* 9D3C 800FB93C 07000424 */   addiu     $a0, $zero, 0x7
    /* 9D40 800FB940 E3D6030C */  jal        func_800F5B8C
    /* 9D44 800FB944 02020424 */   addiu     $a0, $zero, 0x202
    /* 9D48 800FB948 E0FF4014 */  bnez       $v0, .L800FB8CC
    /* 9D4C 800FB94C 00000000 */   nop
    /* 9D50 800FB950 84DC030C */  jal        func_800F7210
    /* 9D54 800FB954 6D0A0424 */   addiu     $a0, $zero, 0xA6D
    /* 9D58 800FB958 56D6030C */  jal        func_800F5958
    /* 9D5C 800FB95C 20000424 */   addiu     $a0, $zero, 0x20
    /* 9D60 800FB960 F5D4030C */  jal        func_800F53D4
    /* 9D64 800FB964 00000000 */   nop
    /* 9D68 800FB968 07004014 */  bnez       $v0, .L800FB988
    /* 9D6C 800FB96C 00000000 */   nop
    /* 9D70 800FB970 92D7030C */  jal        func_800F5E48
    /* 9D74 800FB974 00000000 */   nop
    /* 9D78 800FB978 92D7030C */  jal        func_800F5E48
    /* 9D7C 800FB97C 00000000 */   nop
    /* 9D80 800FB980 40E3030C */  jal        func_800F8D00
    /* 9D84 800FB984 6D0A0424 */   addiu     $a0, $zero, 0xA6D
  .L800FB988:
    /* 9D88 800FB988 53D9030C */  jal        func_800F654C
    /* 9D8C 800FB98C 10000424 */   addiu     $a0, $zero, 0x10
    /* 9D90 800FB990 93E0030C */  jal        func_800F824C
    /* 9D94 800FB994 07000424 */   addiu     $a0, $zero, 0x7
    /* 9D98 800FB998 40DD030C */  jal        func_800F7500
    /* 9D9C 800FB99C 20000424 */   addiu     $a0, $zero, 0x20
    /* 9DA0 800FB9A0 84DC030C */  jal        func_800F7210
    /* 9DA4 800FB9A4 6F0A0424 */   addiu     $a0, $zero, 0xA6F
  .L800FB9A8:
    /* 9DA8 800FB9A8 56D6030C */  jal        func_800F5958
    /* 9DAC 800FB9AC 20000424 */   addiu     $a0, $zero, 0x20
    /* 9DB0 800FB9B0 F0D4030C */  jal        func_800F53C0
    /* 9DB4 800FB9B4 00000000 */   nop
    /* 9DB8 800FB9B8 0E004014 */  bnez       $v0, .L800FB9F4
    /* 9DBC 800FB9BC 00000000 */   nop
    /* 9DC0 800FB9C0 91E5030C */  jal        func_800F9644
    /* 9DC4 800FB9C4 20000424 */   addiu     $a0, $zero, 0x20
    /* 9DC8 800FB9C8 0800043C */  lui        $a0, (0x8EC40 >> 16)
    /* 9DCC 800FB9CC 3DDB030C */  jal        func_800F6CF4
    /* 9DD0 800FB9D0 40EC8434 */   ori       $a0, $a0, (0x8EC40 & 0xFFFF)
    /* 9DD4 800FB9D4 75E2030C */  jal        func_800F89D4
    /* 9DD8 800FB9D8 1B0D0424 */   addiu     $a0, $zero, 0xD1B
    /* 9DDC 800FB9DC C7E5030C */  jal        func_800F971C
    /* 9DE0 800FB9E0 00000000 */   nop
    /* 9DE4 800FB9E4 52CF030C */  jal        func_800F3D48
    /* 9DE8 800FB9E8 00000000 */   nop
    /* 9DEC 800FB9EC 98E5030C */  jal        func_800F9660
    /* 9DF0 800FB9F0 20000424 */   addiu     $a0, $zero, 0x20
  .L800FB9F4:
    /* 9DF4 800FB9F4 92D7030C */  jal        func_800F5E48
    /* 9DF8 800FB9F8 00000000 */   nop
    /* 9DFC 800FB9FC 92D7030C */  jal        func_800F5E48
    /* 9E00 800FBA00 00000000 */   nop
    /* 9E04 800FBA04 A8D7030C */  jal        func_800F5EA0
    /* 9E08 800FBA08 00000000 */   nop
    /* 9E0C 800FBA0C A8D7030C */  jal        func_800F5EA0
    /* 9E10 800FBA10 00000000 */   nop
    /* 9E14 800FBA14 68D7030C */  jal        func_800F5DA0
    /* 9E18 800FBA18 07000424 */   addiu     $a0, $zero, 0x7
    /* 9E1C 800FBA1C E3D6030C */  jal        func_800F5B8C
    /* 9E20 800FBA20 02020424 */   addiu     $a0, $zero, 0x202
    /* 9E24 800FBA24 E0FF4014 */  bnez       $v0, .L800FB9A8
    /* 9E28 800FBA28 00000000 */   nop
    /* 9E2C 800FBA2C 84DC030C */  jal        func_800F7210
    /* 9E30 800FBA30 6F0A0424 */   addiu     $a0, $zero, 0xA6F
    /* 9E34 800FBA34 56D6030C */  jal        func_800F5958
    /* 9E38 800FBA38 20000424 */   addiu     $a0, $zero, 0x20
    /* 9E3C 800FBA3C F5D4030C */  jal        func_800F53D4
    /* 9E40 800FBA40 00000000 */   nop
    /* 9E44 800FBA44 3E004014 */  bnez       $v0, .L800FBB40
    /* 9E48 800FBA48 00000000 */   nop
    /* 9E4C 800FBA4C 92D7030C */  jal        func_800F5E48
    /* 9E50 800FBA50 00000000 */   nop
    /* 9E54 800FBA54 92D7030C */  jal        func_800F5E48
    /* 9E58 800FBA58 00000000 */   nop
    /* 9E5C 800FBA5C 40E3030C */  jal        func_800F8D00
    /* 9E60 800FBA60 6F0A0424 */   addiu     $a0, $zero, 0xA6F
    /* 9E64 800FBA64 53D9030C */  jal        func_800F654C
    /* 9E68 800FBA68 10000424 */   addiu     $a0, $zero, 0x10
    /* 9E6C 800FBA6C 93E0030C */  jal        func_800F824C
    /* 9E70 800FBA70 07000424 */   addiu     $a0, $zero, 0x7
    /* 9E74 800FBA74 40DD030C */  jal        func_800F7500
    /* 9E78 800FBA78 20000424 */   addiu     $a0, $zero, 0x20
    /* 9E7C 800FBA7C 84DC030C */  jal        func_800F7210
    /* 9E80 800FBA80 710A0424 */   addiu     $a0, $zero, 0xA71
  .L800FBA84:
    /* 9E84 800FBA84 56D6030C */  jal        func_800F5958
    /* 9E88 800FBA88 20000424 */   addiu     $a0, $zero, 0x20
    /* 9E8C 800FBA8C F0D4030C */  jal        func_800F53C0
    /* 9E90 800FBA90 00000000 */   nop
    /* 9E94 800FBA94 0E004014 */  bnez       $v0, .L800FBAD0
    /* 9E98 800FBA98 00000000 */   nop
    /* 9E9C 800FBA9C 91E5030C */  jal        func_800F9644
    /* 9EA0 800FBAA0 20000424 */   addiu     $a0, $zero, 0x20
    /* 9EA4 800FBAA4 0800043C */  lui        $a0, (0x8EC60 >> 16)
    /* 9EA8 800FBAA8 3DDB030C */  jal        func_800F6CF4
    /* 9EAC 800FBAAC 60EC8434 */   ori       $a0, $a0, (0x8EC60 & 0xFFFF)
    /* 9EB0 800FBAB0 75E2030C */  jal        func_800F89D4
    /* 9EB4 800FBAB4 3B0D0424 */   addiu     $a0, $zero, 0xD3B
    /* 9EB8 800FBAB8 C7E5030C */  jal        func_800F971C
    /* 9EBC 800FBABC 00000000 */   nop
    /* 9EC0 800FBAC0 52CF030C */  jal        func_800F3D48
    /* 9EC4 800FBAC4 00000000 */   nop
    /* 9EC8 800FBAC8 98E5030C */  jal        func_800F9660
    /* 9ECC 800FBACC 20000424 */   addiu     $a0, $zero, 0x20
  .L800FBAD0:
    /* 9ED0 800FBAD0 92D7030C */  jal        func_800F5E48
    /* 9ED4 800FBAD4 00000000 */   nop
    /* 9ED8 800FBAD8 92D7030C */  jal        func_800F5E48
    /* 9EDC 800FBADC 00000000 */   nop
    /* 9EE0 800FBAE0 A8D7030C */  jal        func_800F5EA0
    /* 9EE4 800FBAE4 00000000 */   nop
    /* 9EE8 800FBAE8 A8D7030C */  jal        func_800F5EA0
    /* 9EEC 800FBAEC 00000000 */   nop
    /* 9EF0 800FBAF0 68D7030C */  jal        func_800F5DA0
    /* 9EF4 800FBAF4 07000424 */   addiu     $a0, $zero, 0x7
    /* 9EF8 800FBAF8 E3D6030C */  jal        func_800F5B8C
    /* 9EFC 800FBAFC 02020424 */   addiu     $a0, $zero, 0x202
    /* 9F00 800FBB00 E0FF4014 */  bnez       $v0, .L800FBA84
    /* 9F04 800FBB04 00000000 */   nop
    /* 9F08 800FBB08 84DC030C */  jal        func_800F7210
    /* 9F0C 800FBB0C 710A0424 */   addiu     $a0, $zero, 0xA71
    /* 9F10 800FBB10 56D6030C */  jal        func_800F5958
    /* 9F14 800FBB14 20000424 */   addiu     $a0, $zero, 0x20
    /* 9F18 800FBB18 F5D4030C */  jal        func_800F53D4
    /* 9F1C 800FBB1C 00000000 */   nop
    /* 9F20 800FBB20 07004014 */  bnez       $v0, .L800FBB40
    /* 9F24 800FBB24 00000000 */   nop
    /* 9F28 800FBB28 92D7030C */  jal        func_800F5E48
    /* 9F2C 800FBB2C 00000000 */   nop
    /* 9F30 800FBB30 92D7030C */  jal        func_800F5E48
    /* 9F34 800FBB34 00000000 */   nop
    /* 9F38 800FBB38 40E3030C */  jal        func_800F8D00
    /* 9F3C 800FBB3C 710A0424 */   addiu     $a0, $zero, 0xA71
  .L800FBB40:
    /* 9F40 800FBB40 84DC030C */  jal        func_800F7210
    /* 9F44 800FBB44 730A0424 */   addiu     $a0, $zero, 0xA73
    /* 9F48 800FBB48 56D6030C */  jal        func_800F5958
    /* 9F4C 800FBB4C 20000424 */   addiu     $a0, $zero, 0x20
    /* 9F50 800FBB50 F0D4030C */  jal        func_800F53C0
    /* 9F54 800FBB54 00000000 */   nop
    /* 9F58 800FBB58 45004014 */  bnez       $v0, .L800FBC70
    /* 9F5C 800FBB5C 20000424 */   addiu     $a0, $zero, 0x20
    /* 9F60 800FBB60 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 9F64 800FBB64 00000000 */  nop
    /* 9F68 800FBB68 00004394 */  lhu        $v1, 0x0($v0)
    /* 9F6C 800FBB6C 10000224 */  addiu      $v0, $zero, 0x10
    /* 9F70 800FBB70 42180300 */  srl        $v1, $v1, 1
    /* 9F74 800FBB74 91E5030C */  jal        func_800F9644
    /* 9F78 800FBB78 23804300 */   subu      $s0, $v0, $v1
    /* 9F7C 800FBB7C 77DC030C */  jal        func_800F71DC
    /* 9F80 800FBB80 1E000424 */   addiu     $a0, $zero, 0x1E
  .L800FBB84:
    /* 9F84 800FBB84 0800043C */  lui        $a0, (0x8EC00 >> 16)
    /* 9F88 800FBB88 3DDB030C */  jal        func_800F6CF4
    /* 9F8C 800FBB8C 00EC8434 */   ori       $a0, $a0, (0x8EC00 & 0xFFFF)
    /* 9F90 800FBB90 4800878F */  lw         $a3, %gp_rel(D_8019ED44)($gp)
    /* 9F94 800FBB94 00000000 */  nop
    /* 9F98 800FBB98 0000E694 */  lhu        $a2, 0x0($a3)
    /* 9F9C 800FBB9C 00000000 */  nop
    /* 9FA0 800FBBA0 1F00C230 */  andi       $v0, $a2, 0x1F
    /* 9FA4 800FBBA4 18005000 */  mult       $v0, $s0
    /* 9FA8 800FBBA8 42190600 */  srl        $v1, $a2, 5
    /* 9FAC 800FBBAC 1F006330 */  andi       $v1, $v1, 0x1F
    /* 9FB0 800FBBB0 1800A2AF */  sw         $v0, 0x18($sp)
    /* 9FB4 800FBBB4 82120600 */  srl        $v0, $a2, 10
    /* 9FB8 800FBBB8 1F004530 */  andi       $a1, $v0, 0x1F
    /* 9FBC 800FBBBC 1C00A3AF */  sw         $v1, 0x1C($sp)
    /* 9FC0 800FBBC0 12200000 */  mflo       $a0
    /* 9FC4 800FBBC4 02008104 */  bgez       $a0, .L800FBBD0
    /* 9FC8 800FBBC8 2000A5AF */   sw        $a1, 0x20($sp)
    /* 9FCC 800FBBCC 0F008424 */  addiu      $a0, $a0, 0xF
  .L800FBBD0:
    /* 9FD0 800FBBD0 18007000 */  mult       $v1, $s0
    /* 9FD4 800FBBD4 03110400 */  sra        $v0, $a0, 4
    /* 9FD8 800FBBD8 12180000 */  mflo       $v1
    /* 9FDC 800FBBDC 02006104 */  bgez       $v1, .L800FBBE8
    /* 9FE0 800FBBE0 1800A2AF */   sw        $v0, 0x18($sp)
    /* 9FE4 800FBBE4 0F006324 */  addiu      $v1, $v1, 0xF
  .L800FBBE8:
    /* 9FE8 800FBBE8 1800B000 */  mult       $a1, $s0
    /* 9FEC 800FBBEC 03110300 */  sra        $v0, $v1, 4
    /* 9FF0 800FBBF0 12280000 */  mflo       $a1
    /* 9FF4 800FBBF4 0200A104 */  bgez       $a1, .L800FBC00
    /* 9FF8 800FBBF8 1C00A2AF */   sw        $v0, 0x1C($sp)
    /* 9FFC 800FBBFC 0F00A524 */  addiu      $a1, $a1, 0xF
  .L800FBC00:
    /* A000 800FBC00 DB0D0424 */  addiu      $a0, $zero, 0xDDB
    /* A004 800FBC04 1800A697 */  lhu        $a2, 0x18($sp)
    /* A008 800FBC08 1C00A297 */  lhu        $v0, 0x1C($sp)
    /* A00C 800FBC0C 03190500 */  sra        $v1, $a1, 4
    /* A010 800FBC10 2000A3AF */  sw         $v1, 0x20($sp)
    /* A014 800FBC14 2000A397 */  lhu        $v1, 0x20($sp)
    /* A018 800FBC18 40110200 */  sll        $v0, $v0, 5
    /* A01C 800FBC1C 2510C200 */  or         $v0, $a2, $v0
    /* A020 800FBC20 801A0300 */  sll        $v1, $v1, 10
    /* A024 800FBC24 25104300 */  or         $v0, $v0, $v1
    /* A028 800FBC28 F7E1030C */  jal        func_800F87DC
    /* A02C 800FBC2C 0000E2A4 */   sh        $v0, 0x0($a3)
    /* A030 800FBC30 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* A034 800FBC34 00000000 */  nop
    /* A038 800FBC38 00008294 */  lhu        $v0, 0x0($a0)
    /* A03C 800FBC3C 00000000 */  nop
    /* A040 800FBC40 FEFF4224 */  addiu      $v0, $v0, -0x2
    /* A044 800FBC44 000082A4 */  sh         $v0, 0x0($a0)
    /* A048 800FBC48 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* A04C 800FBC4C 00000000 */  nop
    /* A050 800FBC50 00006294 */  lhu        $v0, 0x0($v1)
    /* A054 800FBC54 00000000 */  nop
    /* A058 800FBC58 CAFF4014 */  bnez       $v0, .L800FBB84
    /* A05C 800FBC5C 00000000 */   nop
    /* A060 800FBC60 4800828F */  lw         $v0, %gp_rel(D_8019ED44)($gp)
    /* A064 800FBC64 20000424 */  addiu      $a0, $zero, 0x20
    /* A068 800FBC68 98E5030C */  jal        func_800F9660
    /* A06C 800FBC6C 000040A4 */   sh        $zero, 0x0($v0)
  .L800FBC70:
    /* A070 800FBC70 84DC030C */  jal        func_800F7210
    /* A074 800FBC74 730A0424 */   addiu     $a0, $zero, 0xA73
    /* A078 800FBC78 92D7030C */  jal        func_800F5E48
    /* A07C 800FBC7C 00000000 */   nop
    /* A080 800FBC80 92D7030C */  jal        func_800F5E48
    /* A084 800FBC84 00000000 */   nop
    /* A088 800FBC88 05D7030C */  jal        func_800F5C14
    /* A08C 800FBC8C 00000000 */   nop
    /* A090 800FBC90 40E3030C */  jal        func_800F8D00
    /* A094 800FBC94 730A0424 */   addiu     $a0, $zero, 0xA73
    /* A098 800FBC98 F5D4030C */  jal        func_800F53D4
    /* A09C 800FBC9C 00000000 */   nop
    /* A0A0 800FBCA0 E4FE4010 */  beqz       $v0, .L800FB834
    /* A0A4 800FBCA4 00000000 */   nop
    /* A0A8 800FBCA8 77DC030C */  jal        func_800F71DC
    /* A0AC 800FBCAC 21200000 */   addu      $a0, $zero, $zero
  .L800FBCB0:
    /* A0B0 800FBCB0 DADA030C */  jal        func_800F6B68
    /* A0B4 800FBCB4 FB0C0424 */   addiu     $a0, $zero, 0xCFB
    /* A0B8 800FBCB8 DAE1030C */  jal        func_800F8768
    /* A0BC 800FBCBC 6D0A0424 */   addiu     $a0, $zero, 0xA6D
    /* A0C0 800FBCC0 D9D8030C */  jal        func_800F6364
    /* A0C4 800FBCC4 00000000 */   nop
    /* A0C8 800FBCC8 56D6030C */  jal        func_800F5958
    /* A0CC 800FBCCC 60000424 */   addiu     $a0, $zero, 0x60
    /* A0D0 800FBCD0 F5D4030C */  jal        func_800F53D4
    /* A0D4 800FBCD4 00000000 */   nop
    /* A0D8 800FBCD8 F5FF4010 */  beqz       $v0, .L800FBCB0
    /* A0DC 800FBCDC 00000000 */   nop
    /* A0E0 800FBCE0 EEE3030C */  jal        func_800F8FB8
    /* A0E4 800FBCE4 7A000424 */   addiu     $a0, $zero, 0x7A
    /* A0E8 800FBCE8 21800000 */  addu       $s0, $zero, $zero
  .L800FBCEC:
    /* A0EC 800FBCEC ECF9030C */  jal        func_800FE7B0
    /* A0F0 800FBCF0 00000000 */   nop
    /* A0F4 800FBCF4 AFD8030C */  jal        func_800F62BC
    /* A0F8 800FBCF8 7E000424 */   addiu     $a0, $zero, 0x7E
    /* A0FC 800FBCFC 8CD9030C */  jal        func_800F6630
    /* A100 800FBD00 02000424 */   addiu     $a0, $zero, 0x2
    /* A104 800FBD04 92D0030C */  jal        func_800F4248
    /* A108 800FBD08 80000424 */   addiu     $a0, $zero, 0x80
    /* A10C 800FBD0C 48D0030C */  jal        func_800F4120
    /* A110 800FBD10 02020424 */   addiu     $a0, $zero, 0x202
    /* A114 800FBD14 0A004014 */  bnez       $v0, .L800FBD40
    /* A118 800FBD18 00000000 */   nop
    /* A11C 800FBD1C 01001026 */  addiu      $s0, $s0, 0x1
    /* A120 800FBD20 C119022A */  slti       $v0, $s0, 0x19C1
    /* A124 800FBD24 05004010 */  beqz       $v0, .L800FBD3C
    /* A128 800FBD28 00000000 */   nop
    /* A12C 800FBD2C EEE3030C */  jal        func_800F8FB8
    /* A130 800FBD30 54000424 */   addiu     $a0, $zero, 0x54
    /* A134 800FBD34 56EF0308 */  j          .L800FBD58
    /* A138 800FBD38 00000000 */   nop
  .L800FBD3C:
    /* A13C 800FBD3C 21A00000 */  addu       $s4, $zero, $zero
  .L800FBD40:
    /* A140 800FBD40 8CD9030C */  jal        func_800F6630
    /* A144 800FBD44 54000424 */   addiu     $a0, $zero, 0x54
    /* A148 800FBD48 0DD9030C */  jal        func_800F6434
    /* A14C 800FBD4C 02020424 */   addiu     $a0, $zero, 0x202
    /* A150 800FBD50 2D004010 */  beqz       $v0, .L800FBE08
    /* A154 800FBD54 00000000 */   nop
  .L800FBD58:
    /* A158 800FBD58 77DC030C */  jal        func_800F71DC
    /* A15C 800FBD5C 21200000 */   addu      $a0, $zero, $zero
  .L800FBD60:
    /* A160 800FBD60 DADA030C */  jal        func_800F6B68
    /* A164 800FBD64 6D0A0424 */   addiu     $a0, $zero, 0xA6D
    /* A168 800FBD68 DAE1030C */  jal        func_800F8768
    /* A16C 800FBD6C FB0C0424 */   addiu     $a0, $zero, 0xCFB
    /* A170 800FBD70 D9D8030C */  jal        func_800F6364
    /* A174 800FBD74 00000000 */   nop
    /* A178 800FBD78 56D6030C */  jal        func_800F5958
    /* A17C 800FBD7C 60000424 */   addiu     $a0, $zero, 0x60
    /* A180 800FBD80 F5D4030C */  jal        func_800F53D4
    /* A184 800FBD84 00000000 */   nop
    /* A188 800FBD88 F5FF4010 */  beqz       $v0, .L800FBD60
    /* A18C 800FBD8C 00000000 */   nop
    /* A190 800FBD90 8CD9030C */  jal        func_800F6630
    /* A194 800FBD94 7A000424 */   addiu     $a0, $zero, 0x7A
    /* A198 800FBD98 19DE030C */  jal        func_800F7864
    /* A19C 800FBD9C 00000000 */   nop
    /* A1A0 800FBDA0 92D0030C */  jal        func_800F4248
    /* A1A4 800FBDA4 7E000424 */   addiu     $a0, $zero, 0x7E
    /* A1A8 800FBDA8 5DD5030C */  jal        func_800F5574
    /* A1AC 800FBDAC 16000424 */   addiu     $a0, $zero, 0x16
    /* A1B0 800FBDB0 F0D4030C */  jal        func_800F53C0
    /* A1B4 800FBDB4 00000000 */   nop
    /* A1B8 800FBDB8 CCFF4014 */  bnez       $v0, .L800FBCEC
    /* A1BC 800FBDBC 00000000 */   nop
    /* A1C0 800FBDC0 B8E5030C */  jal        func_800F96E0
    /* A1C4 800FBDC4 00000000 */   nop
    /* A1C8 800FBDC8 91E5030C */  jal        func_800F9644
    /* A1CC 800FBDCC 20000424 */   addiu     $a0, $zero, 0x20
    /* A1D0 800FBDD0 56D9030C */  jal        func_800F6558
    /* A1D4 800FBDD4 FFFF0434 */   ori       $a0, $zero, 0xFFFF
    /* A1D8 800FBDD8 75E2030C */  jal        func_800F89D4
    /* A1DC 800FBDDC 3D0D0424 */   addiu     $a0, $zero, 0xD3D
    /* A1E0 800FBDE0 75E2030C */  jal        func_800F89D4
    /* A1E4 800FBDE4 FD0C0424 */   addiu     $a0, $zero, 0xCFD
    /* A1E8 800FBDE8 C7E5030C */  jal        func_800F971C
    /* A1EC 800FBDEC 00000000 */   nop
    /* A1F0 800FBDF0 52CF030C */  jal        func_800F3D48
    /* A1F4 800FBDF4 00000000 */   nop
    /* A1F8 800FBDF8 98E5030C */  jal        func_800F9660
    /* A1FC 800FBDFC 20000424 */   addiu     $a0, $zero, 0x20
    /* A200 800FBE00 3BEF0308 */  j          .L800FBCEC
    /* A204 800FBE04 00000000 */   nop
  .L800FBE08:
    /* A208 800FBE08 53D9030C */  jal        func_800F654C
    /* A20C 800FBE0C 21200000 */   addu      $a0, $zero, $zero
    /* A210 800FBE10 45F6030C */  jal        func_800FD914
    /* A214 800FBE14 00000000 */   nop
    /* A218 800FBE18 FEEC030C */  jal        func_800FB3F8
    /* A21C 800FBE1C 00000000 */   nop
    /* A220 800FBE20 21108002 */  addu       $v0, $s4, $zero
    /* A224 800FBE24 3C00BF8F */  lw         $ra, 0x3C($sp)
    /* A228 800FBE28 3800B48F */  lw         $s4, 0x38($sp)
    /* A22C 800FBE2C 3400B38F */  lw         $s3, 0x34($sp)
    /* A230 800FBE30 3000B28F */  lw         $s2, 0x30($sp)
    /* A234 800FBE34 2C00B18F */  lw         $s1, 0x2C($sp)
    /* A238 800FBE38 2800B08F */  lw         $s0, 0x28($sp)
    /* A23C 800FBE3C 0800E003 */  jr         $ra
    /* A240 800FBE40 4000BD27 */   addiu     $sp, $sp, 0x40
endlabel func_800FB430
