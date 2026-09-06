nonmatching func_8013E984, 0x178

glabel func_8013E984
    /* 4CD84 8013E984 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4CD88 8013E988 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4CD8C 8013E98C 59D9030C */  jal        func_800F6564
    /* 4CD90 8013E990 02180424 */   addiu     $a0, $zero, 0x1802
    /* 4CD94 8013E994 92D0030C */  jal        func_800F4248
    /* 4CD98 8013E998 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 4CD9C 8013E99C 80E4030C */  jal        func_800F9200
    /* 4CDA0 8013E9A0 00000000 */   nop
    /* 4CDA4 8013E9A4 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 4CDA8 8013E9A8 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 4CDAC 8013E9AC 00000000 */  nop
    /* 4CDB0 8013E9B0 0000A290 */  lbu        $v0, 0x0($a1)
    /* 4CDB4 8013E9B4 0D00043C */  lui        $a0, (0xDFCCE >> 16)
    /* 4CDB8 8013E9B8 80100200 */  sll        $v0, $v0, 2
    /* 4CDBC 8013E9BC 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 4CDC0 8013E9C0 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4CDC4 8013E9C4 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4CDC8 8013E9C8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4CDCC 8013E9CC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4CDD0 8013E9D0 00006294 */  lhu        $v0, 0x0($v1)
    /* 4CDD4 8013E9D4 CEFC8434 */  ori        $a0, $a0, (0xDFCCE & 0xFFFF)
    /* 4CDD8 8013E9D8 1ADB030C */  jal        func_800F6C68
    /* 4CDDC 8013E9DC 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 4CDE0 8013E9E0 93E0030C */  jal        func_800F824C
    /* 4CDE4 8013E9E4 06000424 */   addiu     $a0, $zero, 0x6
    /* 4CDE8 8013E9E8 0D00043C */  lui        $a0, (0xDFCCD >> 16)
    /* 4CDEC 8013E9EC 1ADB030C */  jal        func_800F6C68
    /* 4CDF0 8013E9F0 CDFC8434 */   ori       $a0, $a0, (0xDFCCD & 0xFFFF)
    /* 4CDF4 8013E9F4 CBFA040C */  jal        func_8013EB2C
    /* 4CDF8 8013E9F8 00000000 */   nop
    /* 4CDFC 8013E9FC C7E5030C */  jal        func_800F971C
    /* 4CE00 8013EA00 00000000 */   nop
    /* 4CE04 8013EA04 0D00043C */  lui        $a0, (0xDFCCB >> 16)
    /* 4CE08 8013EA08 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4CE0C 8013EA0C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4CE10 8013EA10 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 4CE14 8013EA14 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 4CE18 8013EA18 00004394 */  lhu        $v1, 0x0($v0)
    /* 4CE1C 8013EA1C CBFC8434 */  ori        $a0, $a0, (0xDFCCB & 0xFFFF)
    /* 4CE20 8013EA20 1ADB030C */  jal        func_800F6C68
    /* 4CE24 8013EA24 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4CE28 8013EA28 CCE4030C */  jal        func_800F9330
    /* 4CE2C 8013EA2C 00000000 */   nop
    /* 4CE30 8013EA30 BFFA040C */  jal        func_8013EAFC
    /* 4CE34 8013EA34 00000000 */   nop
    /* 4CE38 8013EA38 45FB040C */  jal        func_8013ED14
    /* 4CE3C 8013EA3C 00000000 */   nop
    /* 4CE40 8013EA40 68E5030C */  jal        func_800F95A0
    /* 4CE44 8013EA44 00000000 */   nop
    /* 4CE48 8013EA48 0D00043C */  lui        $a0, (0xDFCCC >> 16)
    /* 4CE4C 8013EA4C 1ADB030C */  jal        func_800F6C68
    /* 4CE50 8013EA50 CCFC8434 */   ori       $a0, $a0, (0xDFCCC & 0xFFFF)
    /* 4CE54 8013EA54 0DD9030C */  jal        func_800F6434
    /* 4CE58 8013EA58 02000424 */   addiu     $a0, $zero, 0x2
    /* 4CE5C 8013EA5C 05004014 */  bnez       $v0, .L8013EA74
    /* 4CE60 8013EA60 00000000 */   nop
    /* 4CE64 8013EA64 BFFA040C */  jal        func_8013EAFC
    /* 4CE68 8013EA68 00000000 */   nop
    /* 4CE6C 8013EA6C 45FB040C */  jal        func_8013ED14
    /* 4CE70 8013EA70 00000000 */   nop
  .L8013EA74:
    /* 4CE74 8013EA74 F7E4030C */  jal        func_800F93DC
    /* 4CE78 8013EA78 00000000 */   nop
    /* 4CE7C 8013EA7C 5DD5030C */  jal        func_800F5574
    /* 4CE80 8013EA80 10000424 */   addiu     $a0, $zero, 0x10
    /* 4CE84 8013EA84 F5D4030C */  jal        func_800F53D4
    /* 4CE88 8013EA88 00000000 */   nop
    /* 4CE8C 8013EA8C 17004010 */  beqz       $v0, .L8013EAEC
    /* 4CE90 8013EA90 00000000 */   nop
    /* 4CE94 8013EA94 77DC030C */  jal        func_800F71DC
    /* 4CE98 8013EA98 21200000 */   addu      $a0, $zero, $zero
  .L8013EA9C:
    /* 4CE9C 8013EA9C DADA030C */  jal        func_800F6B68
    /* 4CEA0 8013EAA0 7E700424 */   addiu     $a0, $zero, 0x707E
    /* 4CEA4 8013EAA4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4CEA8 8013EAA8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4CEAC 8013EAAC 00000000 */  nop
    /* 4CEB0 8013EAB0 00006290 */  lbu        $v0, 0x0($v1)
    /* 4CEB4 8013EAB4 7E700424 */  addiu      $a0, $zero, 0x707E
    /* 4CEB8 8013EAB8 20004234 */  ori        $v0, $v0, 0x20
    /* 4CEBC 8013EABC DAE1030C */  jal        func_800F8768
    /* 4CEC0 8013EAC0 000062A0 */   sb        $v0, 0x0($v1)
    /* 4CEC4 8013EAC4 D9D8030C */  jal        func_800F6364
    /* 4CEC8 8013EAC8 00000000 */   nop
    /* 4CECC 8013EACC D9D8030C */  jal        func_800F6364
    /* 4CED0 8013EAD0 00000000 */   nop
    /* 4CED4 8013EAD4 56D6030C */  jal        func_800F5958
    /* 4CED8 8013EAD8 40040424 */   addiu     $a0, $zero, 0x440
    /* 4CEDC 8013EADC F5D4030C */  jal        func_800F53D4
    /* 4CEE0 8013EAE0 00000000 */   nop
    /* 4CEE4 8013EAE4 EDFF4010 */  beqz       $v0, .L8013EA9C
    /* 4CEE8 8013EAE8 00000000 */   nop
  .L8013EAEC:
    /* 4CEEC 8013EAEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4CEF0 8013EAF0 00000000 */  nop
    /* 4CEF4 8013EAF4 0800E003 */  jr         $ra
    /* 4CEF8 8013EAF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013E984
