nonmatching func_8010E98C, 0x188

glabel func_8010E98C
    /* 1CD8C 8010E98C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1CD90 8010E990 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1CD94 8010E994 3438040C */  jal        func_8010E0D0
    /* 1CD98 8010E998 00000000 */   nop
    /* 1CD9C 8010E99C 53D9030C */  jal        func_800F654C
    /* 1CDA0 8010E9A0 20000424 */   addiu     $a0, $zero, 0x20
    /* 1CDA4 8010E9A4 93E0030C */  jal        func_800F824C
    /* 1CDA8 8010E9A8 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 1CDAC 8010E9AC 1CFA030C */  jal        func_800FE870
    /* 1CDB0 8010E9B0 00000000 */   nop
  .L8010E9B4:
    /* 1CDB4 8010E9B4 ECF9030C */  jal        func_800FE7B0
    /* 1CDB8 8010E9B8 00000000 */   nop
    /* 1CDBC 8010E9BC DDE3030C */  jal        func_800F8F74
    /* 1CDC0 8010E9C0 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 1CDC4 8010E9C4 AFD8030C */  jal        func_800F62BC
    /* 1CDC8 8010E9C8 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 1CDCC 8010E9CC 75F9030C */  jal        func_800FE5D4
    /* 1CDD0 8010E9D0 00000000 */   nop
    /* 1CDD4 8010E9D4 B9F9030C */  jal        func_800FE6E4
    /* 1CDD8 8010E9D8 00000000 */   nop
    /* 1CDDC 8010E9DC 8CD9030C */  jal        func_800F6630
    /* 1CDE0 8010E9E0 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 1CDE4 8010E9E4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1CDE8 8010E9E8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1CDEC 8010E9EC 00000000 */  nop
    /* 1CDF0 8010E9F0 00006290 */  lbu        $v0, 0x0($v1)
    /* 1CDF4 8010E9F4 00000000 */  nop
    /* 1CDF8 8010E9F8 C2100200 */  srl        $v0, $v0, 3
    /* 1CDFC 8010E9FC 7AD8030C */  jal        func_800F61E8
    /* 1CE00 8010EA00 000062A0 */   sb        $v0, 0x0($v1)
    /* 1CE04 8010EA04 67D5050C */  jal        func_8017559C
    /* 1CE08 8010EA08 00000000 */   nop
    /* 1CE0C 8010EA0C 8CD9030C */  jal        func_800F6630
    /* 1CE10 8010EA10 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 1CE14 8010EA14 5DD5030C */  jal        func_800F5574
    /* 1CE18 8010EA18 78000424 */   addiu     $a0, $zero, 0x78
    /* 1CE1C 8010EA1C F5D4030C */  jal        func_800F53D4
    /* 1CE20 8010EA20 00000000 */   nop
    /* 1CE24 8010EA24 E3FF4010 */  beqz       $v0, .L8010E9B4
    /* 1CE28 8010EA28 00000000 */   nop
  .L8010EA2C:
    /* 1CE2C 8010EA2C ECF9030C */  jal        func_800FE7B0
    /* 1CE30 8010EA30 00000000 */   nop
    /* 1CE34 8010EA34 DDE3030C */  jal        func_800F8F74
    /* 1CE38 8010EA38 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 1CE3C 8010EA3C B9F9030C */  jal        func_800FE6E4
    /* 1CE40 8010EA40 00000000 */   nop
    /* 1CE44 8010EA44 8CD9030C */  jal        func_800F6630
    /* 1CE48 8010EA48 02000424 */   addiu     $a0, $zero, 0x2
    /* 1CE4C 8010EA4C 0DD9030C */  jal        func_800F6434
    /* 1CE50 8010EA50 02020424 */   addiu     $a0, $zero, 0x202
    /* 1CE54 8010EA54 07004014 */  bnez       $v0, .L8010EA74
    /* 1CE58 8010EA58 00000000 */   nop
    /* 1CE5C 8010EA5C 8CD9030C */  jal        func_800F6630
    /* 1CE60 8010EA60 03000424 */   addiu     $a0, $zero, 0x3
    /* 1CE64 8010EA64 0DD9030C */  jal        func_800F6434
    /* 1CE68 8010EA68 02000424 */   addiu     $a0, $zero, 0x2
    /* 1CE6C 8010EA6C EFFF4014 */  bnez       $v0, .L8010EA2C
    /* 1CE70 8010EA70 00000000 */   nop
  .L8010EA74:
    /* 1CE74 8010EA74 4A38040C */  jal        func_8010E128
    /* 1CE78 8010EA78 00000000 */   nop
  .L8010EA7C:
    /* 1CE7C 8010EA7C ECF9030C */  jal        func_800FE7B0
    /* 1CE80 8010EA80 00000000 */   nop
    /* 1CE84 8010EA84 DDE3030C */  jal        func_800F8F74
    /* 1CE88 8010EA88 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 1CE8C 8010EA8C 68D7030C */  jal        func_800F5DA0
    /* 1CE90 8010EA90 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 1CE94 8010EA94 75F9030C */  jal        func_800FE5D4
    /* 1CE98 8010EA98 00000000 */   nop
    /* 1CE9C 8010EA9C B9F9030C */  jal        func_800FE6E4
    /* 1CEA0 8010EAA0 00000000 */   nop
    /* 1CEA4 8010EAA4 8CD9030C */  jal        func_800F6630
    /* 1CEA8 8010EAA8 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 1CEAC 8010EAAC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1CEB0 8010EAB0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1CEB4 8010EAB4 00000000 */  nop
    /* 1CEB8 8010EAB8 00006290 */  lbu        $v0, 0x0($v1)
    /* 1CEBC 8010EABC 00000000 */  nop
    /* 1CEC0 8010EAC0 C2100200 */  srl        $v0, $v0, 3
    /* 1CEC4 8010EAC4 67D5050C */  jal        func_8017559C
    /* 1CEC8 8010EAC8 000062A0 */   sb        $v0, 0x0($v1)
    /* 1CECC 8010EACC 8CD9030C */  jal        func_800F6630
    /* 1CED0 8010EAD0 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 1CED4 8010EAD4 5DD5030C */  jal        func_800F5574
    /* 1CED8 8010EAD8 20000424 */   addiu     $a0, $zero, 0x20
    /* 1CEDC 8010EADC F5D4030C */  jal        func_800F53D4
    /* 1CEE0 8010EAE0 00000000 */   nop
    /* 1CEE4 8010EAE4 E5FF4010 */  beqz       $v0, .L8010EA7C
    /* 1CEE8 8010EAE8 00000000 */   nop
    /* 1CEEC 8010EAEC 53D9030C */  jal        func_800F654C
    /* 1CEF0 8010EAF0 10000424 */   addiu     $a0, $zero, 0x10
    /* 1CEF4 8010EAF4 93E0030C */  jal        func_800F824C
    /* 1CEF8 8010EAF8 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 1CEFC 8010EAFC 977A040C */  jal        func_8011EA5C
    /* 1CF00 8010EB00 00000000 */   nop
    /* 1CF04 8010EB04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1CF08 8010EB08 00000000 */  nop
    /* 1CF0C 8010EB0C 0800E003 */  jr         $ra
    /* 1CF10 8010EB10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E98C
