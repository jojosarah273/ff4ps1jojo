/* Handwritten function */
nonmatching func_80197E78, 0x68

glabel func_80197E78
    /* A6278 80197E78 2080013C */  lui        $at, %hi(D_801FEC08)
    /* A627C 80197E7C 08EC3FAC */  sw         $ra, %lo(D_801FEC08)($at)
    /* A6280 80197E80 BA5D060C */  jal        func_801976E8
    /* A6284 80197E84 00000000 */   nop
    /* A6288 80197E88 57000924 */  addiu      $t1, $zero, 0x57
    /* A628C 80197E8C B0000A24 */  addiu      $t2, $zero, 0xB0
    /* A6290 80197E90 09F84001 */  jalr       $t2
    /* A6294 80197E94 00000000 */   nop
    /* A6298 80197E98 09000A24 */  addiu      $t2, $zero, 0x9
    /* A629C 80197E9C 6C01428C */  lw         $v0, 0x16C($v0)
    /* A62A0 80197EA0 00000000 */  nop
    /* A62A4 80197EA4 2C064320 */  addi       $v1, $v0, 0x62C /* handwritten instruction */
  .L80197EA8:
    /* A62A8 80197EA8 000060AC */  sw         $zero, 0x0($v1)
    /* A62AC 80197EAC 04006324 */  addiu      $v1, $v1, 0x4
    /* A62B0 80197EB0 FFFF4A25 */  addiu      $t2, $t2, -0x1
    /* A62B4 80197EB4 FCFF4015 */  bnez       $t2, .L80197EA8
    /* A62B8 80197EB8 00000000 */   nop
    /* A62BC 80197EBC 825D060C */  jal        func_80197608
    /* A62C0 80197EC0 00000000 */   nop
    /* A62C4 80197EC4 BE5D060C */  jal        func_801976F8
    /* A62C8 80197EC8 00000000 */   nop
    /* A62CC 80197ECC 20801F3C */  lui        $ra, %hi(D_801FEC08)
    /* A62D0 80197ED0 08ECFF8F */  lw         $ra, %lo(D_801FEC08)($ra)
    /* A62D4 80197ED4 00000000 */  nop
    /* A62D8 80197ED8 0800E003 */  jr         $ra
    /* A62DC 80197EDC 00000000 */   nop
endlabel func_80197E78
    /* A62E0 80197EE0 00000000 */  nop
    /* A62E4 80197EE4 00000000 */  nop
