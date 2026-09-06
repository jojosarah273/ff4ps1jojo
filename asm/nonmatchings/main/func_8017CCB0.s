nonmatching func_8017CCB0, 0x1EC

glabel func_8017CCB0
    /* 8B0B0 8017CCB0 C0FFBD27 */  addiu      $sp, $sp, -0x40
    /* 8B0B4 8017CCB4 1800B0AF */  sw         $s0, 0x18($sp)
    /* 8B0B8 8017CCB8 21808000 */  addu       $s0, $a0, $zero
    /* 8B0BC 8017CCBC 08000224 */  addiu      $v0, $zero, 0x8
    /* 8B0C0 8017CCC0 002C0500 */  sll        $a1, $a1, 16
    /* 8B0C4 8017CCC4 2C00B5AF */  sw         $s5, 0x2C($sp)
    /* 8B0C8 8017CCC8 03AC0500 */  sra        $s5, $a1, 16
    /* 8B0CC 8017CCCC 00340600 */  sll        $a2, $a2, 16
    /* 8B0D0 8017CCD0 2400B3AF */  sw         $s3, 0x24($sp)
    /* 8B0D4 8017CCD4 039C0600 */  sra        $s3, $a2, 16
    /* 8B0D8 8017CCD8 003C0700 */  sll        $a3, $a3, 16
    /* 8B0DC 8017CCDC 3C00BFAF */  sw         $ra, 0x3C($sp)
    /* 8B0E0 8017CCE0 3800BEAF */  sw         $fp, 0x38($sp)
    /* 8B0E4 8017CCE4 3400B7AF */  sw         $s7, 0x34($sp)
    /* 8B0E8 8017CCE8 3000B6AF */  sw         $s6, 0x30($sp)
    /* 8B0EC 8017CCEC 2800B4AF */  sw         $s4, 0x28($sp)
    /* 8B0F0 8017CCF0 2000B2AF */  sw         $s2, 0x20($sp)
    /* 8B0F4 8017CCF4 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 8B0F8 8017CCF8 100002A6 */  sh         $v0, 0x10($s0)
    /* 8B0FC 8017CCFC 120002A6 */  sh         $v0, 0x12($s0)
    /* 8B100 8017CD00 0C0015A2 */  sb         $s5, 0xC($s0)
    /* 8B104 8017CD04 0D0013A2 */  sb         $s3, 0xD($s0)
    /* 8B108 8017CD08 5000B487 */  lh         $s4, 0x50($sp)
    /* 8B10C 8017CD0C 5800B697 */  lhu        $s6, 0x58($sp)
    /* 8B110 8017CD10 03940700 */  sra        $s2, $a3, 16
    /* 8B114 8017CD14 080012A6 */  sh         $s2, 0x8($s0)
    /* 8B118 8017CD18 0020C232 */  andi       $v0, $s6, 0x2000
    /* 8B11C 8017CD1C 0A0014A6 */  sh         $s4, 0xA($s0)
    /* 8B120 8017CD20 5400B18F */  lw         $s1, 0x54($sp)
    /* 8B124 8017CD24 5C00B797 */  lhu        $s7, 0x5C($sp)
    /* 8B128 8017CD28 04004010 */  beqz       $v0, .L8017CD3C
    /* 8B12C 8017CD2C 00000000 */   nop
    /* 8B130 8017CD30 0400228E */  lw         $v0, 0x4($s1)
    /* 8B134 8017CD34 52F30508 */  j          .L8017CD48
    /* 8B138 8017CD38 080022AE */   sw        $v0, 0x8($s1)
  .L8017CD3C:
    /* 8B13C 8017CD3C 0000228E */  lw         $v0, 0x0($s1)
    /* 8B140 8017CD40 00000000 */  nop
    /* 8B144 8017CD44 080022AE */  sw         $v0, 0x8($s1)
  .L8017CD48:
    /* 8B148 8017CD48 0800248E */  lw         $a0, 0x8($s1)
    /* 8B14C 8017CD4C 825C060C */  jal        func_80197208
    /* 8B150 8017CD50 21280002 */   addu      $a1, $s0, $zero
    /* 8B154 8017CD54 14001026 */  addiu      $s0, $s0, 0x14
    /* 8B158 8017CD58 08000224 */  addiu      $v0, $zero, 0x8
    /* 8B15C 8017CD5C 0800A426 */  addiu      $a0, $s5, 0x8
    /* 8B160 8017CD60 08004326 */  addiu      $v1, $s2, 0x8
    /* 8B164 8017CD64 100002A6 */  sh         $v0, 0x10($s0)
    /* 8B168 8017CD68 120002A6 */  sh         $v0, 0x12($s0)
    /* 8B16C 8017CD6C 0010C232 */  andi       $v0, $s6, 0x1000
    /* 8B170 8017CD70 21F08000 */  addu       $fp, $a0, $zero
    /* 8B174 8017CD74 0C0004A2 */  sb         $a0, 0xC($s0)
    /* 8B178 8017CD78 0D0013A2 */  sb         $s3, 0xD($s0)
    /* 8B17C 8017CD7C 080003A6 */  sh         $v1, 0x8($s0)
    /* 8B180 8017CD80 0A0014A6 */  sh         $s4, 0xA($s0)
    /* 8B184 8017CD84 04004010 */  beqz       $v0, .L8017CD98
    /* 8B188 8017CD88 1000A3AF */   sw        $v1, 0x10($sp)
    /* 8B18C 8017CD8C 0400228E */  lw         $v0, 0x4($s1)
    /* 8B190 8017CD90 69F30508 */  j          .L8017CDA4
    /* 8B194 8017CD94 080022AE */   sw        $v0, 0x8($s1)
  .L8017CD98:
    /* 8B198 8017CD98 0000228E */  lw         $v0, 0x0($s1)
    /* 8B19C 8017CD9C 00000000 */  nop
    /* 8B1A0 8017CDA0 080022AE */  sw         $v0, 0x8($s1)
  .L8017CDA4:
    /* 8B1A4 8017CDA4 0E0017A6 */  sh         $s7, 0xE($s0)
    /* 8B1A8 8017CDA8 0800248E */  lw         $a0, 0x8($s1)
    /* 8B1AC 8017CDAC 825C060C */  jal        func_80197208
    /* 8B1B0 8017CDB0 21280002 */   addu      $a1, $s0, $zero
    /* 8B1B4 8017CDB4 14001026 */  addiu      $s0, $s0, 0x14
    /* 8B1B8 8017CDB8 08000224 */  addiu      $v0, $zero, 0x8
    /* 8B1BC 8017CDBC 08006426 */  addiu      $a0, $s3, 0x8
    /* 8B1C0 8017CDC0 100002A6 */  sh         $v0, 0x10($s0)
    /* 8B1C4 8017CDC4 120002A6 */  sh         $v0, 0x12($s0)
    /* 8B1C8 8017CDC8 08008226 */  addiu      $v0, $s4, 0x8
    /* 8B1CC 8017CDCC 0008C332 */  andi       $v1, $s6, 0x800
    /* 8B1D0 8017CDD0 080012A6 */  sh         $s2, 0x8($s0)
    /* 8B1D4 8017CDD4 21908000 */  addu       $s2, $a0, $zero
    /* 8B1D8 8017CDD8 21984000 */  addu       $s3, $v0, $zero
    /* 8B1DC 8017CDDC 0C0015A2 */  sb         $s5, 0xC($s0)
    /* 8B1E0 8017CDE0 0D0004A2 */  sb         $a0, 0xD($s0)
    /* 8B1E4 8017CDE4 04006010 */  beqz       $v1, .L8017CDF8
    /* 8B1E8 8017CDE8 0A0002A6 */   sh        $v0, 0xA($s0)
    /* 8B1EC 8017CDEC 0400228E */  lw         $v0, 0x4($s1)
    /* 8B1F0 8017CDF0 81F30508 */  j          .L8017CE04
    /* 8B1F4 8017CDF4 080022AE */   sw        $v0, 0x8($s1)
  .L8017CDF8:
    /* 8B1F8 8017CDF8 0000228E */  lw         $v0, 0x0($s1)
    /* 8B1FC 8017CDFC 00000000 */  nop
    /* 8B200 8017CE00 080022AE */  sw         $v0, 0x8($s1)
  .L8017CE04:
    /* 8B204 8017CE04 0E0017A6 */  sh         $s7, 0xE($s0)
    /* 8B208 8017CE08 0800248E */  lw         $a0, 0x8($s1)
    /* 8B20C 8017CE0C 825C060C */  jal        func_80197208
    /* 8B210 8017CE10 21280002 */   addu      $a1, $s0, $zero
    /* 8B214 8017CE14 14001026 */  addiu      $s0, $s0, 0x14
    /* 8B218 8017CE18 08000224 */  addiu      $v0, $zero, 0x8
    /* 8B21C 8017CE1C 100002A6 */  sh         $v0, 0x10($s0)
    /* 8B220 8017CE20 120002A6 */  sh         $v0, 0x12($s0)
    /* 8B224 8017CE24 0C001EA2 */  sb         $fp, 0xC($s0)
    /* 8B228 8017CE28 0D0012A2 */  sb         $s2, 0xD($s0)
    /* 8B22C 8017CE2C 1000A28F */  lw         $v0, 0x10($sp)
    /* 8B230 8017CE30 0A0013A6 */  sh         $s3, 0xA($s0)
    /* 8B234 8017CE34 080002A6 */  sh         $v0, 0x8($s0)
    /* 8B238 8017CE38 0004C232 */  andi       $v0, $s6, 0x400
    /* 8B23C 8017CE3C 04004010 */  beqz       $v0, .L8017CE50
    /* 8B240 8017CE40 00000000 */   nop
    /* 8B244 8017CE44 0400228E */  lw         $v0, 0x4($s1)
    /* 8B248 8017CE48 97F30508 */  j          .L8017CE5C
    /* 8B24C 8017CE4C 080022AE */   sw        $v0, 0x8($s1)
  .L8017CE50:
    /* 8B250 8017CE50 0000228E */  lw         $v0, 0x0($s1)
    /* 8B254 8017CE54 00000000 */  nop
    /* 8B258 8017CE58 080022AE */  sw         $v0, 0x8($s1)
  .L8017CE5C:
    /* 8B25C 8017CE5C 0E0017A6 */  sh         $s7, 0xE($s0)
    /* 8B260 8017CE60 0800248E */  lw         $a0, 0x8($s1)
    /* 8B264 8017CE64 825C060C */  jal        func_80197208
    /* 8B268 8017CE68 21280002 */   addu      $a1, $s0, $zero
    /* 8B26C 8017CE6C 3C00BF8F */  lw         $ra, 0x3C($sp)
    /* 8B270 8017CE70 3800BE8F */  lw         $fp, 0x38($sp)
    /* 8B274 8017CE74 3400B78F */  lw         $s7, 0x34($sp)
    /* 8B278 8017CE78 3000B68F */  lw         $s6, 0x30($sp)
    /* 8B27C 8017CE7C 2C00B58F */  lw         $s5, 0x2C($sp)
    /* 8B280 8017CE80 2800B48F */  lw         $s4, 0x28($sp)
    /* 8B284 8017CE84 2400B38F */  lw         $s3, 0x24($sp)
    /* 8B288 8017CE88 2000B28F */  lw         $s2, 0x20($sp)
    /* 8B28C 8017CE8C 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 8B290 8017CE90 1800B08F */  lw         $s0, 0x18($sp)
    /* 8B294 8017CE94 0800E003 */  jr         $ra
    /* 8B298 8017CE98 4000BD27 */   addiu     $sp, $sp, 0x40
endlabel func_8017CCB0
