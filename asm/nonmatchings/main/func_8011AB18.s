nonmatching func_8011AB18, 0x14C

glabel func_8011AB18
    /* 28F18 8011AB18 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 28F1C 8011AB1C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 28F20 8011AB20 80E4030C */  jal        func_800F9200
    /* 28F24 8011AB24 00000000 */   nop
    /* 28F28 8011AB28 8CD9030C */  jal        func_800F6630
    /* 28F2C 8011AB2C CA000424 */   addiu     $a0, $zero, 0xCA
    /* 28F30 8011AB30 0DD9030C */  jal        func_800F6434
    /* 28F34 8011AB34 02020424 */   addiu     $a0, $zero, 0x202
    /* 28F38 8011AB38 05004014 */  bnez       $v0, .L8011AB50
    /* 28F3C 8011AB3C 00000000 */   nop
    /* 28F40 8011AB40 1DFB030C */  jal        func_800FEC74
    /* 28F44 8011AB44 00000000 */   nop
    /* 28F48 8011AB48 DE6A0408 */  j          .L8011AB78
    /* 28F4C 8011AB4C 00000000 */   nop
  .L8011AB50:
    /* 28F50 8011AB50 8CD9030C */  jal        func_800F6630
    /* 28F54 8011AB54 80000424 */   addiu     $a0, $zero, 0x80
    /* 28F58 8011AB58 0DD9030C */  jal        func_800F6434
    /* 28F5C 8011AB5C 02000424 */   addiu     $a0, $zero, 0x2
    /* 28F60 8011AB60 05004014 */  bnez       $v0, .L8011AB78
    /* 28F64 8011AB64 00000000 */   nop
    /* 28F68 8011AB68 53D9030C */  jal        func_800F654C
    /* 28F6C 8011AB6C 21200000 */   addu      $a0, $zero, $zero
    /* 28F70 8011AB70 45F6030C */  jal        func_800FD914
    /* 28F74 8011AB74 00000000 */   nop
  .L8011AB78:
    /* 28F78 8011AB78 F7E4030C */  jal        func_800F93DC
    /* 28F7C 8011AB7C 00000000 */   nop
    /* 28F80 8011AB80 62E0030C */  jal        func_800F8188
    /* 28F84 8011AB84 00170424 */   addiu     $a0, $zero, 0x1700
    /* 28F88 8011AB88 0DD9030C */  jal        func_800F6434
    /* 28F8C 8011AB8C 02020424 */   addiu     $a0, $zero, 0x202
    /* 28F90 8011AB90 05004014 */  bnez       $v0, .L8011ABA8
    /* 28F94 8011AB94 00000000 */   nop
    /* 28F98 8011AB98 27EC030C */  jal        func_800FB09C
    /* 28F9C 8011AB9C 00000000 */   nop
    /* 28FA0 8011ABA0 006B0408 */  j          .L8011AC00
    /* 28FA4 8011ABA4 00000000 */   nop
  .L8011ABA8:
    /* 28FA8 8011ABA8 5DD5030C */  jal        func_800F5574
    /* 28FAC 8011ABAC 01000424 */   addiu     $a0, $zero, 0x1
    /* 28FB0 8011ABB0 F5D4030C */  jal        func_800F53D4
    /* 28FB4 8011ABB4 00000000 */   nop
    /* 28FB8 8011ABB8 05004010 */  beqz       $v0, .L8011ABD0
    /* 28FBC 8011ABBC 00000000 */   nop
    /* 28FC0 8011ABC0 58EC030C */  jal        func_800FB160
    /* 28FC4 8011ABC4 00000000 */   nop
    /* 28FC8 8011ABC8 006B0408 */  j          .L8011AC00
    /* 28FCC 8011ABCC 00000000 */   nop
  .L8011ABD0:
    /* 28FD0 8011ABD0 5DD5030C */  jal        func_800F5574
    /* 28FD4 8011ABD4 02000424 */   addiu     $a0, $zero, 0x2
    /* 28FD8 8011ABD8 F5D4030C */  jal        func_800F53D4
    /* 28FDC 8011ABDC 00000000 */   nop
    /* 28FE0 8011ABE0 05004010 */  beqz       $v0, .L8011ABF8
    /* 28FE4 8011ABE4 00000000 */   nop
    /* 28FE8 8011ABE8 89EC030C */  jal        func_800FB224
    /* 28FEC 8011ABEC 00000000 */   nop
    /* 28FF0 8011ABF0 006B0408 */  j          .L8011AC00
    /* 28FF4 8011ABF4 00000000 */   nop
  .L8011ABF8:
    /* 28FF8 8011ABF8 81EA030C */  jal        func_800FAA04
    /* 28FFC 8011ABFC 00000000 */   nop
  .L8011AC00:
    /* 29000 8011AC00 8CD9030C */  jal        func_800F6630
    /* 29004 8011AC04 CA000424 */   addiu     $a0, $zero, 0xCA
    /* 29008 8011AC08 0DD9030C */  jal        func_800F6434
    /* 2900C 8011AC0C 02020424 */   addiu     $a0, $zero, 0x202
    /* 29010 8011AC10 0A004014 */  bnez       $v0, .L8011AC3C
    /* 29014 8011AC14 1D80043C */   lui       $a0, %hi(D_801CFD68)
    /* 29018 8011AC18 68FD8424 */  addiu      $a0, $a0, %lo(D_801CFD68)
    /* 2901C 8011AC1C 00020524 */  addiu      $a1, $zero, 0x200
    /* 29020 8011AC20 21300000 */  addu       $a2, $zero, $zero
    /* 29024 8011AC24 6AFE050C */  jal        func_8017F9A8
    /* 29028 8011AC28 21380000 */   addu      $a3, $zero, $zero
    /* 2902C 8011AC2C 4FFB030C */  jal        func_800FED3C
    /* 29030 8011AC30 00000000 */   nop
    /* 29034 8011AC34 116B0408 */  j          .L8011AC44
    /* 29038 8011AC38 00000000 */   nop
  .L8011AC3C:
    /* 2903C 8011AC3C AFD8030C */  jal        func_800F62BC
    /* 29040 8011AC40 CA000424 */   addiu     $a0, $zero, 0xCA
  .L8011AC44:
    /* 29044 8011AC44 53D9030C */  jal        func_800F654C
    /* 29048 8011AC48 81000424 */   addiu     $a0, $zero, 0x81
    /* 2904C 8011AC4C 62E0030C */  jal        func_800F8188
    /* 29050 8011AC50 00420424 */   addiu     $a0, $zero, 0x4200
    /* 29054 8011AC54 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29058 8011AC58 00000000 */  nop
    /* 2905C 8011AC5C 0800E003 */  jr         $ra
    /* 29060 8011AC60 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011AB18
