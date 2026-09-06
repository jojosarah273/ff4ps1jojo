nonmatching func_8018B838, 0xE8

glabel func_8018B838
    /* 99C38 8018B838 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 99C3C 8018B83C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 99C40 8018B840 21808000 */  addu       $s0, $a0, $zero
    /* 99C44 8018B844 06000012 */  beqz       $s0, .L8018B860
    /* 99C48 8018B848 1400BFAF */   sw        $ra, 0x14($sp)
    /* 99C4C 8018B84C 01000224 */  addiu      $v0, $zero, 0x1
    /* 99C50 8018B850 12000212 */  beq        $s0, $v0, .L8018B89C
    /* 99C54 8018B854 00000000 */   nop
    /* 99C58 8018B858 422E0608 */  j          .L8018B908
    /* 99C5C 8018B85C 00000000 */   nop
  .L8018B860:
    /* 99C60 8018B860 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 99C64 8018B864 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 99C68 8018B868 00000000 */  nop
    /* 99C6C 8018B86C AA014494 */  lhu        $a0, 0x1AA($v0)
    /* 99C70 8018B870 1A80013C */  lui        $at, %hi(D_8019B0A8)
    /* 99C74 8018B874 A8B020AC */  sw         $zero, %lo(D_8019B0A8)($at)
    /* 99C78 8018B878 7FFF8330 */  andi       $v1, $a0, 0xFF7F
    /* 99C7C 8018B87C AA0143A4 */  sh         $v1, 0x1AA($v0)
    /* 99C80 8018B880 840140A4 */  sh         $zero, 0x184($v0)
    /* 99C84 8018B884 860140A4 */  sh         $zero, 0x186($v0)
    /* 99C88 8018B888 1A80023C */  lui        $v0, %hi(D_8019B0BC)
    /* 99C8C 8018B88C BCB04224 */  addiu      $v0, $v0, %lo(D_8019B0BC)
    /* 99C90 8018B890 000040A4 */  sh         $zero, 0x0($v0)
    /* 99C94 8018B894 422E0608 */  j          .L8018B908
    /* 99C98 8018B898 020040A4 */   sh        $zero, 0x2($v0)
  .L8018B89C:
    /* 99C9C 8018B89C 1A80023C */  lui        $v0, %hi(D_8019B0AC)
    /* 99CA0 8018B8A0 ACB0428C */  lw         $v0, %lo(D_8019B0AC)($v0)
    /* 99CA4 8018B8A4 00000000 */  nop
    /* 99CA8 8018B8A8 0F005010 */  beq        $v0, $s0, .L8018B8E8
    /* 99CAC 8018B8AC 00000000 */   nop
    /* 99CB0 8018B8B0 1A80043C */  lui        $a0, %hi(D_8019B0B0)
    /* 99CB4 8018B8B4 B0B0848C */  lw         $a0, %lo(D_8019B0B0)($a0)
    /* 99CB8 8018B8B8 6A2E060C */  jal        func_8018B9A8
    /* 99CBC 8018B8BC 00000000 */   nop
    /* 99CC0 8018B8C0 09004010 */  beqz       $v0, .L8018B8E8
    /* 99CC4 8018B8C4 00000000 */   nop
    /* 99CC8 8018B8C8 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 99CCC 8018B8CC 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 99CD0 8018B8D0 00000000 */  nop
    /* 99CD4 8018B8D4 AA016494 */  lhu        $a0, 0x1AA($v1)
    /* 99CD8 8018B8D8 1A80013C */  lui        $at, %hi(D_8019B0A8)
    /* 99CDC 8018B8DC A8B020AC */  sw         $zero, %lo(D_8019B0A8)($at)
    /* 99CE0 8018B8E0 412E0608 */  j          .L8018B904
    /* 99CE4 8018B8E4 7FFF8230 */   andi      $v0, $a0, 0xFF7F
  .L8018B8E8:
    /* 99CE8 8018B8E8 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 99CEC 8018B8EC 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 99CF0 8018B8F0 00000000 */  nop
    /* 99CF4 8018B8F4 AA016494 */  lhu        $a0, 0x1AA($v1)
    /* 99CF8 8018B8F8 1A80013C */  lui        $at, %hi(D_8019B0A8)
    /* 99CFC 8018B8FC A8B030AC */  sw         $s0, %lo(D_8019B0A8)($at)
    /* 99D00 8018B900 80008234 */  ori        $v0, $a0, 0x80
  .L8018B904:
    /* 99D04 8018B904 AA0162A4 */  sh         $v0, 0x1AA($v1)
  .L8018B908:
    /* 99D08 8018B908 1A80023C */  lui        $v0, %hi(D_8019B0A8)
    /* 99D0C 8018B90C A8B0428C */  lw         $v0, %lo(D_8019B0A8)($v0)
    /* 99D10 8018B910 1400BF8F */  lw         $ra, 0x14($sp)
    /* 99D14 8018B914 1000B08F */  lw         $s0, 0x10($sp)
    /* 99D18 8018B918 0800E003 */  jr         $ra
    /* 99D1C 8018B91C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8018B838
    /* 99D20 8018B920 00000000 */  nop
    /* 99D24 8018B924 00000000 */  nop
