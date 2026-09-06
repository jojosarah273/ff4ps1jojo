nonmatching func_80167844, 0xD0

glabel func_80167844
    /* 75C44 80167844 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 75C48 80167848 1400BFAF */  sw         $ra, 0x14($sp)
    /* 75C4C 8016784C 1000B0AF */  sw         $s0, 0x10($sp)
  .L80167850:
    /* 75C50 80167850 5DC0010C */  jal        func_80070174
    /* 75C54 80167854 1A80103C */   lui       $s0, %hi(D_8019A0C4)
    /* 75C58 80167858 EEE3030C */  jal        func_800F8FB8
    /* 75C5C 8016785C 21200000 */   addu      $a0, $zero, $zero
    /* 75C60 80167860 77DC030C */  jal        func_800F71DC
    /* 75C64 80167864 21200000 */   addu      $a0, $zero, $zero
  .L80167868:
    /* 75C68 80167868 DADA030C */  jal        func_800F6B68
    /* 75C6C 8016786C 88F40434 */   ori       $a0, $zero, 0xF488
    /* 75C70 80167870 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 75C74 80167874 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 75C78 80167878 00000000 */  nop
    /* 75C7C 8016787C 00004394 */  lhu        $v1, 0x0($v0)
    /* 75C80 80167880 C4A00426 */  addiu      $a0, $s0, %lo(D_8019A0C4)
    /* 75C84 80167884 21186400 */  addu       $v1, $v1, $a0
    /* 75C88 80167888 00006490 */  lbu        $a0, 0x0($v1)
    /* 75C8C 8016788C 5DD5030C */  jal        func_800F5574
    /* 75C90 80167890 00000000 */   nop
    /* 75C94 80167894 F5D4030C */  jal        func_800F53D4
    /* 75C98 80167898 00000000 */   nop
    /* 75C9C 8016789C 0B004014 */  bnez       $v0, .L801678CC
    /* 75CA0 801678A0 88F40434 */   ori       $a0, $zero, 0xF488
    /* 75CA4 801678A4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 75CA8 801678A8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 75CAC 801678AC 00000000 */  nop
    /* 75CB0 801678B0 00004394 */  lhu        $v1, 0x0($v0)
    /* 75CB4 801678B4 C1CE030C */  jal        func_800F3B04
    /* 75CB8 801678B8 21206400 */   addu      $a0, $v1, $a0
    /* 75CBC 801678BC 12D8030C */  jal        func_800F6048
    /* 75CC0 801678C0 21204000 */   addu      $a0, $v0, $zero
    /* 75CC4 801678C4 AFD8030C */  jal        func_800F62BC
    /* 75CC8 801678C8 21200000 */   addu      $a0, $zero, $zero
  .L801678CC:
    /* 75CCC 801678CC D9D8030C */  jal        func_800F6364
    /* 75CD0 801678D0 00000000 */   nop
    /* 75CD4 801678D4 56D6030C */  jal        func_800F5958
    /* 75CD8 801678D8 12000424 */   addiu     $a0, $zero, 0x12
    /* 75CDC 801678DC F5D4030C */  jal        func_800F53D4
    /* 75CE0 801678E0 00000000 */   nop
    /* 75CE4 801678E4 E0FF4010 */  beqz       $v0, .L80167868
    /* 75CE8 801678E8 00000000 */   nop
    /* 75CEC 801678EC 8CD9030C */  jal        func_800F6630
    /* 75CF0 801678F0 21200000 */   addu      $a0, $zero, $zero
    /* 75CF4 801678F4 0DD9030C */  jal        func_800F6434
    /* 75CF8 801678F8 02020424 */   addiu     $a0, $zero, 0x202
    /* 75CFC 801678FC D4FF4014 */  bnez       $v0, .L80167850
    /* 75D00 80167900 00000000 */   nop
    /* 75D04 80167904 1400BF8F */  lw         $ra, 0x14($sp)
    /* 75D08 80167908 1000B08F */  lw         $s0, 0x10($sp)
    /* 75D0C 8016790C 0800E003 */  jr         $ra
    /* 75D10 80167910 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80167844
