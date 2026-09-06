nonmatching func_8017E930, 0x160

glabel func_8017E930
    /* 8CD30 8017E930 C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 8CD34 8017E934 2400B3AF */  sw         $s3, 0x24($sp)
    /* 8CD38 8017E938 2198A000 */  addu       $s3, $a1, $zero
    /* 8CD3C 8017E93C 1A80023C */  lui        $v0, %hi(D_8019EE70)
    /* 8CD40 8017E940 70EE4284 */  lh         $v0, %lo(D_8019EE70)($v0)
    /* 8CD44 8017E944 00340600 */  sll        $a2, $a2, 16
    /* 8CD48 8017E948 2C00B5AF */  sw         $s5, 0x2C($sp)
    /* 8CD4C 8017E94C 03AC0600 */  sra        $s5, $a2, 16
    /* 8CD50 8017E950 3000BFAF */  sw         $ra, 0x30($sp)
    /* 8CD54 8017E954 2800B4AF */  sw         $s4, 0x28($sp)
    /* 8CD58 8017E958 2000B2AF */  sw         $s2, 0x20($sp)
    /* 8CD5C 8017E95C 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 8CD60 8017E960 F0004228 */  slti       $v0, $v0, 0xF0
    /* 8CD64 8017E964 03004014 */  bnez       $v0, .L8017E974
    /* 8CD68 8017E968 1800B0AF */   sw        $s0, 0x18($sp)
    /* 8CD6C 8017E96C 3F00A016 */  bnez       $s5, .L8017EA6C
    /* 8CD70 8017E970 00000000 */   nop
  .L8017E974:
    /* 8CD74 8017E974 0D006292 */  lbu        $v0, 0xD($s3)
    /* 8CD78 8017E978 00000000 */  nop
    /* 8CD7C 8017E97C 3B004010 */  beqz       $v0, .L8017EA6C
    /* 8CD80 8017E980 70009124 */   addiu     $s1, $a0, 0x70
    /* 8CD84 8017E984 10039024 */  addiu      $s0, $a0, 0x310
    /* 8CD88 8017E988 0C006392 */  lbu        $v1, 0xC($s3)
    /* 8CD8C 8017E98C 1A80043C */  lui        $a0, %hi(D_8019EDEC)
    /* 8CD90 8017E990 ECED8484 */  lh         $a0, %lo(D_8019EDEC)($a0)
    /* 8CD94 8017E994 0A006586 */  lh         $a1, 0xA($s3)
    /* 8CD98 8017E998 80180300 */  sll        $v1, $v1, 2
    /* 8CD9C 8017E99C 21882302 */  addu       $s1, $s1, $v1
    /* 8CDA0 8017E9A0 40100400 */  sll        $v0, $a0, 1
    /* 8CDA4 8017E9A4 21104400 */  addu       $v0, $v0, $a0
    /* 8CDA8 8017E9A8 80100200 */  sll        $v0, $v0, 2
    /* 8CDAC 8017E9AC 21800202 */  addu       $s0, $s0, $v0
    /* 8CDB0 8017E9B0 1A80033C */  lui        $v1, %hi(D_8019EDEC)
    /* 8CDB4 8017E9B4 ECED6394 */  lhu        $v1, %lo(D_8019EDEC)($v1)
    /* 8CDB8 8017E9B8 0D006492 */  lbu        $a0, 0xD($s3)
    /* 8CDBC 8017E9BC 06006286 */  lh         $v0, 0x6($s3)
    /* 8CDC0 8017E9C0 21186400 */  addu       $v1, $v1, $a0
    /* 8CDC4 8017E9C4 21104500 */  addu       $v0, $v0, $a1
    /* 8CDC8 8017E9C8 F1004228 */  slti       $v0, $v0, 0xF1
    /* 8CDCC 8017E9CC 1A80013C */  lui        $at, %hi(D_8019EDEC)
    /* 8CDD0 8017E9D0 ECED23A4 */  sh         $v1, %lo(D_8019EDEC)($at)
    /* 8CDD4 8017E9D4 06006396 */  lhu        $v1, 0x6($s3)
    /* 8CDD8 8017E9D8 04004014 */  bnez       $v0, .L8017E9EC
    /* 8CDDC 8017E9DC 21200002 */   addu      $a0, $s0, $zero
    /* 8CDE0 8017E9E0 F0000224 */  addiu      $v0, $zero, 0xF0
    /* 8CDE4 8017E9E4 23104300 */  subu       $v0, $v0, $v1
    /* 8CDE8 8017E9E8 0A0062A6 */  sh         $v0, 0xA($s3)
  .L8017E9EC:
    /* 8CDEC 8017E9EC 1000A527 */  addiu      $a1, $sp, 0x10
    /* 8CDF0 8017E9F0 04006296 */  lhu        $v0, 0x4($s3)
    /* 8CDF4 8017E9F4 06006396 */  lhu        $v1, 0x6($s3)
    /* 8CDF8 8017E9F8 08006696 */  lhu        $a2, 0x8($s3)
    /* 8CDFC 8017E9FC 0A006796 */  lhu        $a3, 0xA($s3)
    /* 8CE00 8017EA00 00014224 */  addiu      $v0, $v0, 0x100
    /* 8CE04 8017EA04 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 8CE08 8017EA08 1200A3A7 */  sh         $v1, 0x12($sp)
    /* 8CE0C 8017EA0C 1400A6A7 */  sh         $a2, 0x14($sp)
    /* 8CE10 8017EA10 4854060C */  jal        func_80195120
    /* 8CE14 8017EA14 1600A7A7 */   sh        $a3, 0x16($sp)
    /* 8CE18 8017EA18 0D006292 */  lbu        $v0, 0xD($s3)
    /* 8CE1C 8017EA1C 00000000 */  nop
    /* 8CE20 8017EA20 0D004010 */  beqz       $v0, .L8017EA58
    /* 8CE24 8017EA24 0100123C */   lui       $s2, (0x10000 >> 16)
    /* 8CE28 8017EA28 0100143C */  lui        $s4, (0x10000 >> 16)
  .L8017EA2C:
    /* 8CE2C 8017EA2C 21202002 */  addu       $a0, $s1, $zero
    /* 8CE30 8017EA30 825C060C */  jal        func_80197208
    /* 8CE34 8017EA34 21280002 */   addu      $a1, $s0, $zero
    /* 8CE38 8017EA38 21184002 */  addu       $v1, $s2, $zero
    /* 8CE3C 8017EA3C 21905402 */  addu       $s2, $s2, $s4
    /* 8CE40 8017EA40 04003126 */  addiu      $s1, $s1, 0x4
    /* 8CE44 8017EA44 0D006292 */  lbu        $v0, 0xD($s3)
    /* 8CE48 8017EA48 031C0300 */  sra        $v1, $v1, 16
    /* 8CE4C 8017EA4C 2A106200 */  slt        $v0, $v1, $v0
    /* 8CE50 8017EA50 F6FF4014 */  bnez       $v0, .L8017EA2C
    /* 8CE54 8017EA54 0C001026 */   addiu     $s0, $s0, 0xC
  .L8017EA58:
    /* 8CE58 8017EA58 06006296 */  lhu        $v0, 0x6($s3)
    /* 8CE5C 8017EA5C 00000000 */  nop
    /* 8CE60 8017EA60 2110A202 */  addu       $v0, $s5, $v0
    /* 8CE64 8017EA64 1A80013C */  lui        $at, %hi(D_8019EE70)
    /* 8CE68 8017EA68 70EE22A4 */  sh         $v0, %lo(D_8019EE70)($at)
  .L8017EA6C:
    /* 8CE6C 8017EA6C 3000BF8F */  lw         $ra, 0x30($sp)
    /* 8CE70 8017EA70 2C00B58F */  lw         $s5, 0x2C($sp)
    /* 8CE74 8017EA74 2800B48F */  lw         $s4, 0x28($sp)
    /* 8CE78 8017EA78 2400B38F */  lw         $s3, 0x24($sp)
    /* 8CE7C 8017EA7C 2000B28F */  lw         $s2, 0x20($sp)
    /* 8CE80 8017EA80 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 8CE84 8017EA84 1800B08F */  lw         $s0, 0x18($sp)
    /* 8CE88 8017EA88 0800E003 */  jr         $ra
    /* 8CE8C 8017EA8C 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_8017E930
