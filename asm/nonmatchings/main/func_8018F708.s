nonmatching func_8018F708, 0x2D8

glabel func_8018F708
    /* 9DB08 8018F708 1A80033C */  lui        $v1, %hi(D_8019B9D8)
    /* 9DB0C 8018F70C D8B9638C */  lw         $v1, %lo(D_8019B9D8)($v1)
    /* 9DB10 8018F710 1A80023C */  lui        $v0, %hi(D_8019BA00)
    /* 9DB14 8018F714 00BA428C */  lw         $v0, %lo(D_8019BA00)($v0)
    /* 9DB18 8018F718 B0FFBD27 */  addiu      $sp, $sp, -0x50
    /* 9DB1C 8018F71C 4800B6AF */  sw         $s6, 0x48($sp)
    /* 9DB20 8018F720 21B08000 */  addu       $s6, $a0, $zero
    /* 9DB24 8018F724 3C00B3AF */  sw         $s3, 0x3C($sp)
    /* 9DB28 8018F728 2198A000 */  addu       $s3, $a1, $zero
    /* 9DB2C 8018F72C 4C00BFAF */  sw         $ra, 0x4C($sp)
    /* 9DB30 8018F730 4400B5AF */  sw         $s5, 0x44($sp)
    /* 9DB34 8018F734 4000B4AF */  sw         $s4, 0x40($sp)
    /* 9DB38 8018F738 3800B2AF */  sw         $s2, 0x38($sp)
    /* 9DB3C 8018F73C 3400B1AF */  sw         $s1, 0x34($sp)
    /* 9DB40 8018F740 09006210 */  beq        $v1, $v0, .L8018F768
    /* 9DB44 8018F744 3000B0AF */   sw        $s0, 0x30($sp)
    /* 9DB48 8018F748 803E060C */  jal        func_8018FA00
    /* 9DB4C 8018F74C 00000000 */   nop
    /* 9DB50 8018F750 99004010 */  beqz       $v0, .L8018F9B8
    /* 9DB54 8018F754 21100000 */   addu      $v0, $zero, $zero
    /* 9DB58 8018F758 1A80023C */  lui        $v0, %hi(D_8019BA00)
    /* 9DB5C 8018F75C 00BA428C */  lw         $v0, %lo(D_8019BA00)($v0)
    /* 9DB60 8018F760 1A80013C */  lui        $at, %hi(D_8019B9D8)
    /* 9DB64 8018F764 D8B922AC */  sw         $v0, %lo(D_8019B9D8)($at)
  .L8018F768:
    /* 9DB68 8018F768 00006382 */  lb         $v1, 0x0($s3)
    /* 9DB6C 8018F76C 5C000224 */  addiu      $v0, $zero, 0x5C
    /* 9DB70 8018F770 05006210 */  beq        $v1, $v0, .L8018F788
    /* 9DB74 8018F774 21100000 */   addu      $v0, $zero, $zero
    /* 9DB78 8018F778 6E3E0608 */  j          .L8018F9B8
    /* 9DB7C 8018F77C 00000000 */   nop
  .L8018F780:
    /* 9DB80 8018F780 043E0608 */  j          .L8018F810
    /* 9DB84 8018F784 1000A0A3 */   sb        $zero, 0x10($sp)
  .L8018F788:
    /* 9DB88 8018F788 1000A0A3 */  sb         $zero, 0x10($sp)
    /* 9DB8C 8018F78C 01000424 */  addiu      $a0, $zero, 0x1
    /* 9DB90 8018F790 21806002 */  addu       $s0, $s3, $zero
    /* 9DB94 8018F794 21900000 */  addu       $s2, $zero, $zero
    /* 9DB98 8018F798 5C001524 */  addiu      $s5, $zero, 0x5C
    /* 9DB9C 8018F79C FFFF1424 */  addiu      $s4, $zero, -0x1
  .L8018F7A0:
    /* 9DBA0 8018F7A0 00000282 */  lb         $v0, 0x0($s0)
    /* 9DBA4 8018F7A4 00000392 */  lbu        $v1, 0x0($s0)
    /* 9DBA8 8018F7A8 0C005510 */  beq        $v0, $s5, .L8018F7DC
    /* 9DBAC 8018F7AC 1000B127 */   addiu     $s1, $sp, 0x10
    /* 9DBB0 8018F7B0 5C000524 */  addiu      $a1, $zero, 0x5C
  .L8018F7B4:
    /* 9DBB4 8018F7B4 17006010 */  beqz       $v1, .L8018F814
    /* 9DBB8 8018F7B8 0800422A */   slti      $v0, $s2, 0x8
    /* 9DBBC 8018F7BC 01001026 */  addiu      $s0, $s0, 0x1
    /* 9DBC0 8018F7C0 000023A2 */  sb         $v1, 0x0($s1)
    /* 9DBC4 8018F7C4 00000282 */  lb         $v0, 0x0($s0)
    /* 9DBC8 8018F7C8 00000392 */  lbu        $v1, 0x0($s0)
    /* 9DBCC 8018F7CC F9FF4514 */  bne        $v0, $a1, .L8018F7B4
    /* 9DBD0 8018F7D0 01003126 */   addiu     $s1, $s1, 0x1
    /* 9DBD4 8018F7D4 00000282 */  lb         $v0, 0x0($s0)
    /* 9DBD8 8018F7D8 00000000 */  nop
  .L8018F7DC:
    /* 9DBDC 8018F7DC 0D004010 */  beqz       $v0, .L8018F814
    /* 9DBE0 8018F7E0 0800422A */   slti      $v0, $s2, 0x8
    /* 9DBE4 8018F7E4 01001026 */  addiu      $s0, $s0, 0x1
    /* 9DBE8 8018F7E8 000020A2 */  sb         $zero, 0x0($s1)
    /* 9DBEC 8018F7EC 313F060C */  jal        func_8018FCC4
    /* 9DBF0 8018F7F0 1000A527 */   addiu     $a1, $sp, 0x10
    /* 9DBF4 8018F7F4 21204000 */  addu       $a0, $v0, $zero
    /* 9DBF8 8018F7F8 E1FF9410 */  beq        $a0, $s4, .L8018F780
    /* 9DBFC 8018F7FC 00000000 */   nop
    /* 9DC00 8018F800 01005226 */  addiu      $s2, $s2, 0x1
    /* 9DC04 8018F804 0800422A */  slti       $v0, $s2, 0x8
    /* 9DC08 8018F808 E5FF4014 */  bnez       $v0, .L8018F7A0
    /* 9DC0C 8018F80C 00000000 */   nop
  .L8018F810:
    /* 9DC10 8018F810 0800422A */  slti       $v0, $s2, 0x8
  .L8018F814:
    /* 9DC14 8018F814 0C004014 */  bnez       $v0, .L8018F848
    /* 9DC18 8018F818 00000000 */   nop
    /* 9DC1C 8018F81C 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9DC20 8018F820 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9DC24 8018F824 00000000 */  nop
    /* 9DC28 8018F828 62004018 */  blez       $v0, .L8018F9B4
    /* 9DC2C 8018F82C 21286002 */   addu      $a1, $s3, $zero
    /* 9DC30 8018F830 0F80043C */  lui        $a0, %hi(D_800F3230)
    /* 9DC34 8018F834 30328424 */  addiu      $a0, $a0, %lo(D_800F3230)
    /* 9DC38 8018F838 323C060C */  jal        func_8018F0C8
    /* 9DC3C 8018F83C 21304002 */   addu      $a2, $s2, $zero
    /* 9DC40 8018F840 6E3E0608 */  j          .L8018F9B8
    /* 9DC44 8018F844 21100000 */   addu      $v0, $zero, $zero
  .L8018F848:
    /* 9DC48 8018F848 1000A283 */  lb         $v0, 0x10($sp)
    /* 9DC4C 8018F84C 00000000 */  nop
    /* 9DC50 8018F850 09004014 */  bnez       $v0, .L8018F878
    /* 9DC54 8018F854 00000000 */   nop
    /* 9DC58 8018F858 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9DC5C 8018F85C F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9DC60 8018F860 00000000 */  nop
    /* 9DC64 8018F864 53004018 */  blez       $v0, .L8018F9B4
    /* 9DC68 8018F868 21286002 */   addu      $a1, $s3, $zero
    /* 9DC6C 8018F86C 0F80043C */  lui        $a0, %hi(D_800F324C)
    /* 9DC70 8018F870 6B3E0608 */  j          .L8018F9AC
    /* 9DC74 8018F874 4C328424 */   addiu     $a0, $a0, %lo(D_800F324C)
  .L8018F878:
    /* 9DC78 8018F878 5A3F060C */  jal        func_8018FD68
    /* 9DC7C 8018F87C 000020A2 */   sb        $zero, 0x0($s1)
    /* 9DC80 8018F880 0B004014 */  bnez       $v0, .L8018F8B0
    /* 9DC84 8018F884 00000000 */   nop
    /* 9DC88 8018F888 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9DC8C 8018F88C F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9DC90 8018F890 00000000 */  nop
    /* 9DC94 8018F894 48004018 */  blez       $v0, .L8018F9B8
    /* 9DC98 8018F898 21100000 */   addu      $v0, $zero, $zero
    /* 9DC9C 8018F89C 0F80043C */  lui        $a0, %hi(D_800F3264)
    /* 9DCA0 8018F8A0 323C060C */  jal        func_8018F0C8
    /* 9DCA4 8018F8A4 64328424 */   addiu     $a0, $a0, %lo(D_800F3264)
    /* 9DCA8 8018F8A8 6E3E0608 */  j          .L8018F9B8
    /* 9DCAC 8018F8AC 21100000 */   addu      $v0, $zero, $zero
  .L8018F8B0:
    /* 9DCB0 8018F8B0 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9DCB4 8018F8B4 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9DCB8 8018F8B8 00000000 */  nop
    /* 9DCBC 8018F8BC 02004228 */  slti       $v0, $v0, 0x2
    /* 9DCC0 8018F8C0 06004014 */  bnez       $v0, .L8018F8DC
    /* 9DCC4 8018F8C4 21900000 */   addu      $s2, $zero, $zero
    /* 9DCC8 8018F8C8 0F80043C */  lui        $a0, %hi(D_800F3280)
    /* 9DCCC 8018F8CC 80328424 */  addiu      $a0, $a0, %lo(D_800F3280)
    /* 9DCD0 8018F8D0 323C060C */  jal        func_8018F0C8
    /* 9DCD4 8018F8D4 1000A527 */   addiu     $a1, $sp, 0x10
    /* 9DCD8 8018F8D8 21900000 */  addu       $s2, $zero, $zero
  .L8018F8DC:
    /* 9DCDC 8018F8DC 1F80023C */  lui        $v0, %hi(D_801F6B18)
    /* 9DCE0 8018F8E0 186B4224 */  addiu      $v0, $v0, %lo(D_801F6B18)
    /* 9DCE4 8018F8E4 F8FF5024 */  addiu      $s0, $v0, -0x8
    /* 9DCE8 8018F8E8 21984000 */  addu       $s3, $v0, $zero
    /* 9DCEC 8018F8EC 21880000 */  addu       $s1, $zero, $zero
  .L8018F8F0:
    /* 9DCF0 8018F8F0 1F80023C */  lui        $v0, %hi(D_801F6B18)
    /* 9DCF4 8018F8F4 21105100 */  addu       $v0, $v0, $s1
    /* 9DCF8 8018F8F8 186B4280 */  lb         $v0, %lo(D_801F6B18)($v0)
    /* 9DCFC 8018F8FC 00000000 */  nop
    /* 9DD00 8018F900 23004010 */  beqz       $v0, .L8018F990
    /* 9DD04 8018F904 21206002 */   addu      $a0, $s3, $zero
    /* 9DD08 8018F908 783E060C */  jal        func_8018F9E0
    /* 9DD0C 8018F90C 1000A527 */   addiu     $a1, $sp, 0x10
    /* 9DD10 8018F910 19004010 */  beqz       $v0, .L8018F978
    /* 9DD14 8018F914 00000000 */   nop
    /* 9DD18 8018F918 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9DD1C 8018F91C F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9DD20 8018F920 00000000 */  nop
    /* 9DD24 8018F924 02004228 */  slti       $v0, $v0, 0x2
    /* 9DD28 8018F928 05004014 */  bnez       $v0, .L8018F940
    /* 9DD2C 8018F92C 00000000 */   nop
    /* 9DD30 8018F930 0F80043C */  lui        $a0, %hi(D_800F32A0)
    /* 9DD34 8018F934 A0328424 */  addiu      $a0, $a0, %lo(D_800F32A0)
    /* 9DD38 8018F938 323C060C */  jal        func_8018F0C8
    /* 9DD3C 8018F93C 1000A527 */   addiu     $a1, $sp, 0x10
  .L8018F940:
    /* 9DD40 8018F940 0000028E */  lw         $v0, 0x0($s0)
    /* 9DD44 8018F944 0400038E */  lw         $v1, 0x4($s0)
    /* 9DD48 8018F948 0800048E */  lw         $a0, 0x8($s0)
    /* 9DD4C 8018F94C 0C00058E */  lw         $a1, 0xC($s0)
    /* 9DD50 8018F950 0000C2AE */  sw         $v0, 0x0($s6)
    /* 9DD54 8018F954 0400C3AE */  sw         $v1, 0x4($s6)
    /* 9DD58 8018F958 0800C4AE */  sw         $a0, 0x8($s6)
    /* 9DD5C 8018F95C 0C00C5AE */  sw         $a1, 0xC($s6)
    /* 9DD60 8018F960 1000028E */  lw         $v0, 0x10($s0)
    /* 9DD64 8018F964 1400038E */  lw         $v1, 0x14($s0)
    /* 9DD68 8018F968 1000C2AE */  sw         $v0, 0x10($s6)
    /* 9DD6C 8018F96C 1400C3AE */  sw         $v1, 0x14($s6)
    /* 9DD70 8018F970 6E3E0608 */  j          .L8018F9B8
    /* 9DD74 8018F974 21100002 */   addu      $v0, $s0, $zero
  .L8018F978:
    /* 9DD78 8018F978 18001026 */  addiu      $s0, $s0, 0x18
    /* 9DD7C 8018F97C 18007326 */  addiu      $s3, $s3, 0x18
    /* 9DD80 8018F980 01005226 */  addiu      $s2, $s2, 0x1
    /* 9DD84 8018F984 4000422A */  slti       $v0, $s2, 0x40
    /* 9DD88 8018F988 D9FF4014 */  bnez       $v0, .L8018F8F0
    /* 9DD8C 8018F98C 18003126 */   addiu     $s1, $s1, 0x18
  .L8018F990:
    /* 9DD90 8018F990 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9DD94 8018F994 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9DD98 8018F998 00000000 */  nop
    /* 9DD9C 8018F99C 05004018 */  blez       $v0, .L8018F9B4
    /* 9DDA0 8018F9A0 1000A527 */   addiu     $a1, $sp, 0x10
    /* 9DDA4 8018F9A4 0F80043C */  lui        $a0, %hi(D_800F32AC)
    /* 9DDA8 8018F9A8 AC328424 */  addiu      $a0, $a0, %lo(D_800F32AC)
  .L8018F9AC:
    /* 9DDAC 8018F9AC 323C060C */  jal        func_8018F0C8
    /* 9DDB0 8018F9B0 00000000 */   nop
  .L8018F9B4:
    /* 9DDB4 8018F9B4 21100000 */  addu       $v0, $zero, $zero
  .L8018F9B8:
    /* 9DDB8 8018F9B8 4C00BF8F */  lw         $ra, 0x4C($sp)
    /* 9DDBC 8018F9BC 4800B68F */  lw         $s6, 0x48($sp)
    /* 9DDC0 8018F9C0 4400B58F */  lw         $s5, 0x44($sp)
    /* 9DDC4 8018F9C4 4000B48F */  lw         $s4, 0x40($sp)
    /* 9DDC8 8018F9C8 3C00B38F */  lw         $s3, 0x3C($sp)
    /* 9DDCC 8018F9CC 3800B28F */  lw         $s2, 0x38($sp)
    /* 9DDD0 8018F9D0 3400B18F */  lw         $s1, 0x34($sp)
    /* 9DDD4 8018F9D4 3000B08F */  lw         $s0, 0x30($sp)
    /* 9DDD8 8018F9D8 0800E003 */  jr         $ra
    /* 9DDDC 8018F9DC 5000BD27 */   addiu     $sp, $sp, 0x50
endlabel func_8018F708
