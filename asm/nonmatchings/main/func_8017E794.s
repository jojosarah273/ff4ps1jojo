nonmatching func_8017E794, 0x19C

glabel func_8017E794
    /* 8CB94 8017E794 C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 8CB98 8017E798 2000B2AF */  sw         $s2, 0x20($sp)
    /* 8CB9C 8017E79C 2190A000 */  addu       $s2, $a1, $zero
    /* 8CBA0 8017E7A0 1A80023C */  lui        $v0, %hi(D_8019EE70)
    /* 8CBA4 8017E7A4 70EE4284 */  lh         $v0, %lo(D_8019EE70)($v0)
    /* 8CBA8 8017E7A8 00340600 */  sll        $a2, $a2, 16
    /* 8CBAC 8017E7AC 2C00B5AF */  sw         $s5, 0x2C($sp)
    /* 8CBB0 8017E7B0 03AC0600 */  sra        $s5, $a2, 16
    /* 8CBB4 8017E7B4 3000BFAF */  sw         $ra, 0x30($sp)
    /* 8CBB8 8017E7B8 2800B4AF */  sw         $s4, 0x28($sp)
    /* 8CBBC 8017E7BC 2400B3AF */  sw         $s3, 0x24($sp)
    /* 8CBC0 8017E7C0 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 8CBC4 8017E7C4 F0004228 */  slti       $v0, $v0, 0xF0
    /* 8CBC8 8017E7C8 03004014 */  bnez       $v0, .L8017E7D8
    /* 8CBCC 8017E7CC 1800B0AF */   sw        $s0, 0x18($sp)
    /* 8CBD0 8017E7D0 4E00A016 */  bnez       $s5, .L8017E90C
    /* 8CBD4 8017E7D4 00000000 */   nop
  .L8017E7D8:
    /* 8CBD8 8017E7D8 0D004292 */  lbu        $v0, 0xD($s2)
    /* 8CBDC 8017E7DC 00000000 */  nop
    /* 8CBE0 8017E7E0 4A004010 */  beqz       $v0, .L8017E90C
    /* 8CBE4 8017E7E4 70009324 */   addiu     $s3, $a0, 0x70
    /* 8CBE8 8017E7E8 10039124 */  addiu      $s1, $a0, 0x310
    /* 8CBEC 8017E7EC 0C004392 */  lbu        $v1, 0xC($s2)
    /* 8CBF0 8017E7F0 1A80043C */  lui        $a0, %hi(D_8019EDEC)
    /* 8CBF4 8017E7F4 ECED8484 */  lh         $a0, %lo(D_8019EDEC)($a0)
    /* 8CBF8 8017E7F8 0A004586 */  lh         $a1, 0xA($s2)
    /* 8CBFC 8017E7FC 80180300 */  sll        $v1, $v1, 2
    /* 8CC00 8017E800 21986302 */  addu       $s3, $s3, $v1
    /* 8CC04 8017E804 40100400 */  sll        $v0, $a0, 1
    /* 8CC08 8017E808 21104400 */  addu       $v0, $v0, $a0
    /* 8CC0C 8017E80C 80100200 */  sll        $v0, $v0, 2
    /* 8CC10 8017E810 21882202 */  addu       $s1, $s1, $v0
    /* 8CC14 8017E814 1A80033C */  lui        $v1, %hi(D_8019EDEC)
    /* 8CC18 8017E818 ECED6394 */  lhu        $v1, %lo(D_8019EDEC)($v1)
    /* 8CC1C 8017E81C 0D004492 */  lbu        $a0, 0xD($s2)
    /* 8CC20 8017E820 06004286 */  lh         $v0, 0x6($s2)
    /* 8CC24 8017E824 21186400 */  addu       $v1, $v1, $a0
    /* 8CC28 8017E828 21104500 */  addu       $v0, $v0, $a1
    /* 8CC2C 8017E82C F1004228 */  slti       $v0, $v0, 0xF1
    /* 8CC30 8017E830 1A80013C */  lui        $at, %hi(D_8019EDEC)
    /* 8CC34 8017E834 ECED23A4 */  sh         $v1, %lo(D_8019EDEC)($at)
    /* 8CC38 8017E838 06004396 */  lhu        $v1, 0x6($s2)
    /* 8CC3C 8017E83C 03004014 */  bnez       $v0, .L8017E84C
    /* 8CC40 8017E840 F0000224 */   addiu     $v0, $zero, 0xF0
    /* 8CC44 8017E844 23104300 */  subu       $v0, $v0, $v1
    /* 8CC48 8017E848 0A0042A6 */  sh         $v0, 0xA($s2)
  .L8017E84C:
    /* 8CC4C 8017E84C 04004286 */  lh         $v0, 0x4($s2)
    /* 8CC50 8017E850 04004496 */  lhu        $a0, 0x4($s2)
    /* 8CC54 8017E854 00014228 */  slti       $v0, $v0, 0x100
    /* 8CC58 8017E858 0F004010 */  beqz       $v0, .L8017E898
    /* 8CC5C 8017E85C 00010324 */   addiu     $v1, $zero, 0x100
    /* 8CC60 8017E860 1A80033C */  lui        $v1, %hi(D_8019EE40)
    /* 8CC64 8017E864 40EE6384 */  lh         $v1, %lo(D_8019EE40)($v1)
    /* 8CC68 8017E868 1000A4A7 */  sh         $a0, 0x10($sp)
    /* 8CC6C 8017E86C 08004496 */  lhu        $a0, 0x8($s2)
    /* 8CC70 8017E870 0A004596 */  lhu        $a1, 0xA($s2)
    /* 8CC74 8017E874 00110300 */  sll        $v0, $v1, 4
    /* 8CC78 8017E878 23104300 */  subu       $v0, $v0, $v1
    /* 8CC7C 8017E87C 06004396 */  lhu        $v1, 0x6($s2)
    /* 8CC80 8017E880 00110200 */  sll        $v0, $v0, 4
    /* 8CC84 8017E884 1400A4A7 */  sh         $a0, 0x14($sp)
    /* 8CC88 8017E888 1600A5A7 */  sh         $a1, 0x16($sp)
    /* 8CC8C 8017E88C 21186200 */  addu       $v1, $v1, $v0
    /* 8CC90 8017E890 2BFA0508 */  j          .L8017E8AC
    /* 8CC94 8017E894 1200A3A7 */   sh        $v1, 0x12($sp)
  .L8017E898:
    /* 8CC98 8017E898 F0000224 */  addiu      $v0, $zero, 0xF0
    /* 8CC9C 8017E89C 1000A3A7 */  sh         $v1, 0x10($sp)
    /* 8CCA0 8017E8A0 1200A0A7 */  sh         $zero, 0x12($sp)
    /* 8CCA4 8017E8A4 1400A3A7 */  sh         $v1, 0x14($sp)
    /* 8CCA8 8017E8A8 1600A2A7 */  sh         $v0, 0x16($sp)
  .L8017E8AC:
    /* 8CCAC 8017E8AC 21202002 */  addu       $a0, $s1, $zero
    /* 8CCB0 8017E8B0 4854060C */  jal        func_80195120
    /* 8CCB4 8017E8B4 1000A527 */   addiu     $a1, $sp, 0x10
    /* 8CCB8 8017E8B8 0D004292 */  lbu        $v0, 0xD($s2)
    /* 8CCBC 8017E8BC 00000000 */  nop
    /* 8CCC0 8017E8C0 0D004010 */  beqz       $v0, .L8017E8F8
    /* 8CCC4 8017E8C4 0100103C */   lui       $s0, (0x10000 >> 16)
    /* 8CCC8 8017E8C8 0100143C */  lui        $s4, (0x10000 >> 16)
  .L8017E8CC:
    /* 8CCCC 8017E8CC 21206002 */  addu       $a0, $s3, $zero
    /* 8CCD0 8017E8D0 825C060C */  jal        func_80197208
    /* 8CCD4 8017E8D4 21282002 */   addu      $a1, $s1, $zero
    /* 8CCD8 8017E8D8 21180002 */  addu       $v1, $s0, $zero
    /* 8CCDC 8017E8DC 21801402 */  addu       $s0, $s0, $s4
    /* 8CCE0 8017E8E0 04007326 */  addiu      $s3, $s3, 0x4
    /* 8CCE4 8017E8E4 0D004292 */  lbu        $v0, 0xD($s2)
    /* 8CCE8 8017E8E8 031C0300 */  sra        $v1, $v1, 16
    /* 8CCEC 8017E8EC 2A106200 */  slt        $v0, $v1, $v0
    /* 8CCF0 8017E8F0 F6FF4014 */  bnez       $v0, .L8017E8CC
    /* 8CCF4 8017E8F4 0C003126 */   addiu     $s1, $s1, 0xC
  .L8017E8F8:
    /* 8CCF8 8017E8F8 06004296 */  lhu        $v0, 0x6($s2)
    /* 8CCFC 8017E8FC 00000000 */  nop
    /* 8CD00 8017E900 2110A202 */  addu       $v0, $s5, $v0
    /* 8CD04 8017E904 1A80013C */  lui        $at, %hi(D_8019EE70)
    /* 8CD08 8017E908 70EE22A4 */  sh         $v0, %lo(D_8019EE70)($at)
  .L8017E90C:
    /* 8CD0C 8017E90C 3000BF8F */  lw         $ra, 0x30($sp)
    /* 8CD10 8017E910 2C00B58F */  lw         $s5, 0x2C($sp)
    /* 8CD14 8017E914 2800B48F */  lw         $s4, 0x28($sp)
    /* 8CD18 8017E918 2400B38F */  lw         $s3, 0x24($sp)
    /* 8CD1C 8017E91C 2000B28F */  lw         $s2, 0x20($sp)
    /* 8CD20 8017E920 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 8CD24 8017E924 1800B08F */  lw         $s0, 0x18($sp)
    /* 8CD28 8017E928 0800E003 */  jr         $ra
    /* 8CD2C 8017E92C 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_8017E794
