nonmatching func_80107B74, 0x124

glabel func_80107B74
    /* 15F74 80107B74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 15F78 80107B78 1000BFAF */  sw         $ra, 0x10($sp)
    /* 15F7C 80107B7C 77DC030C */  jal        func_800F71DC
    /* 15F80 80107B80 21200000 */   addu      $a0, $zero, $zero
  .L80107B84:
    /* 15F84 80107B84 3BE4030C */  jal        func_800F90EC
    /* 15F88 80107B88 12070424 */   addiu     $a0, $zero, 0x712
    /* 15F8C 80107B8C D9D8030C */  jal        func_800F6364
    /* 15F90 80107B90 00000000 */   nop
    /* 15F94 80107B94 56D6030C */  jal        func_800F5958
    /* 15F98 80107B98 60000424 */   addiu     $a0, $zero, 0x60
    /* 15F9C 80107B9C F5D4030C */  jal        func_800F53D4
    /* 15FA0 80107BA0 00000000 */   nop
    /* 15FA4 80107BA4 F7FF4010 */  beqz       $v0, .L80107B84
    /* 15FA8 80107BA8 00000000 */   nop
    /* 15FAC 80107BAC 77DC030C */  jal        func_800F71DC
    /* 15FB0 80107BB0 21200000 */   addu      $a0, $zero, $zero
    /* 15FB4 80107BB4 40DD030C */  jal        func_800F7500
    /* 15FB8 80107BB8 21200000 */   addu      $a0, $zero, $zero
  .L80107BBC:
    /* 15FBC 80107BBC DADA030C */  jal        func_800F6B68
    /* 15FC0 80107BC0 40140424 */   addiu     $a0, $zero, 0x1440
    /* 15FC4 80107BC4 5DD5030C */  jal        func_800F5574
    /* 15FC8 80107BC8 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 15FCC 80107BCC F0D4030C */  jal        func_800F53C0
    /* 15FD0 80107BD0 00000000 */   nop
    /* 15FD4 80107BD4 20004010 */  beqz       $v0, .L80107C58
    /* 15FD8 80107BD8 00000000 */   nop
    /* 15FDC 80107BDC 5DD5030C */  jal        func_800F5574
    /* 15FE0 80107BE0 E7000424 */   addiu     $a0, $zero, 0xE7
    /* 15FE4 80107BE4 F0D4030C */  jal        func_800F53C0
    /* 15FE8 80107BE8 00000000 */   nop
    /* 15FEC 80107BEC 0D004010 */  beqz       $v0, .L80107C24
    /* 15FF0 80107BF0 00000000 */   nop
    /* 15FF4 80107BF4 5DD5030C */  jal        func_800F5574
    /* 15FF8 80107BF8 EB000424 */   addiu     $a0, $zero, 0xEB
    /* 15FFC 80107BFC F0D4030C */  jal        func_800F53C0
    /* 16000 80107C00 00000000 */   nop
    /* 16004 80107C04 14004010 */  beqz       $v0, .L80107C58
    /* 16008 80107C08 00000000 */   nop
    /* 1600C 80107C0C 5DD5030C */  jal        func_800F5574
    /* 16010 80107C10 FE000424 */   addiu     $a0, $zero, 0xFE
    /* 16014 80107C14 F0D4030C */  jal        func_800F53C0
    /* 16018 80107C18 00000000 */   nop
    /* 1601C 80107C1C 0E004014 */  bnez       $v0, .L80107C58
    /* 16020 80107C20 00000000 */   nop
  .L80107C24:
    /* 16024 80107C24 58E2030C */  jal        func_800F8960
    /* 16028 80107C28 12070424 */   addiu     $a0, $zero, 0x712
    /* 1602C 80107C2C DADA030C */  jal        func_800F6B68
    /* 16030 80107C30 41140424 */   addiu     $a0, $zero, 0x1441
    /* 16034 80107C34 58E2030C */  jal        func_800F8960
    /* 16038 80107C38 13070424 */   addiu     $a0, $zero, 0x713
    /* 1603C 80107C3C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 16040 80107C40 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 16044 80107C44 00000000 */  nop
    /* 16048 80107C48 00006294 */  lhu        $v0, 0x0($v1)
    /* 1604C 80107C4C 00000000 */  nop
    /* 16050 80107C50 02004224 */  addiu      $v0, $v0, 0x2
    /* 16054 80107C54 000062A4 */  sh         $v0, 0x0($v1)
  .L80107C58:
    /* 16058 80107C58 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1605C 80107C5C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 16060 80107C60 00000000 */  nop
    /* 16064 80107C64 00006294 */  lhu        $v0, 0x0($v1)
    /* 16068 80107C68 60000424 */  addiu      $a0, $zero, 0x60
    /* 1606C 80107C6C 02004224 */  addiu      $v0, $v0, 0x2
    /* 16070 80107C70 56D6030C */  jal        func_800F5958
    /* 16074 80107C74 000062A4 */   sh        $v0, 0x0($v1)
    /* 16078 80107C78 F5D4030C */  jal        func_800F53D4
    /* 1607C 80107C7C 00000000 */   nop
    /* 16080 80107C80 CEFF4010 */  beqz       $v0, .L80107BBC
    /* 16084 80107C84 00000000 */   nop
    /* 16088 80107C88 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1608C 80107C8C 00000000 */  nop
    /* 16090 80107C90 0800E003 */  jr         $ra
    /* 16094 80107C94 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80107B74
