nonmatching func_801100BC, 0x128

glabel func_801100BC
    /* 1E4BC 801100BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1E4C0 801100C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1E4C4 801100C4 40DD030C */  jal        func_800F7500
    /* 1E4C8 801100C8 21200000 */   addu      $a0, $zero, $zero
  .L801100CC:
    /* 1E4CC 801100CC 5CDB030C */  jal        func_800F6D70
    /* 1E4D0 801100D0 B0030424 */   addiu     $a0, $zero, 0x3B0
    /* 1E4D4 801100D4 04D5030C */  jal        func_800F5410
    /* 1E4D8 801100D8 00000000 */   nop
    /* 1E4DC 801100DC 0FCF030C */  jal        func_800F3C3C
    /* 1E4E0 801100E0 28000424 */   addiu     $a0, $zero, 0x28
    /* 1E4E4 801100E4 CECF030C */  jal        func_800F3F38
    /* 1E4E8 801100E8 21204000 */   addu      $a0, $v0, $zero
    /* 1E4EC 801100EC 58E2030C */  jal        func_800F8960
    /* 1E4F0 801100F0 B0030424 */   addiu     $a0, $zero, 0x3B0
    /* 1E4F4 801100F4 5CDB030C */  jal        func_800F6D70
    /* 1E4F8 801100F8 B1030424 */   addiu     $a0, $zero, 0x3B1
    /* 1E4FC 801100FC 04D5030C */  jal        func_800F5410
    /* 1E500 80110100 00000000 */   nop
    /* 1E504 80110104 0FCF030C */  jal        func_800F3C3C
    /* 1E508 80110108 29000424 */   addiu     $a0, $zero, 0x29
    /* 1E50C 8011010C CECF030C */  jal        func_800F3F38
    /* 1E510 80110110 21204000 */   addu      $a0, $v0, $zero
    /* 1E514 80110114 58E2030C */  jal        func_800F8960
    /* 1E518 80110118 B1030424 */   addiu     $a0, $zero, 0x3B1
    /* 1E51C 8011011C 8CD9030C */  jal        func_800F6630
    /* 1E520 80110120 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1E524 80110124 92D0030C */  jal        func_800F4248
    /* 1E528 80110128 01000424 */   addiu     $a0, $zero, 0x1
    /* 1E52C 8011012C 48D0030C */  jal        func_800F4120
    /* 1E530 80110130 02020424 */   addiu     $a0, $zero, 0x202
    /* 1E534 80110134 1B004014 */  bnez       $v0, .L801101A4
    /* 1E538 80110138 00000000 */   nop
    /* 1E53C 8011013C A4D6030C */  jal        func_800F5A90
    /* 1E540 80110140 08000424 */   addiu     $a0, $zero, 0x8
    /* 1E544 80110144 F0D4030C */  jal        func_800F53C0
    /* 1E548 80110148 00000000 */   nop
    /* 1E54C 8011014C 15004014 */  bnez       $v0, .L801101A4
    /* 1E550 80110150 00000000 */   nop
    /* 1E554 80110154 5CDB030C */  jal        func_800F6D70
    /* 1E558 80110158 10040424 */   addiu     $a0, $zero, 0x410
    /* 1E55C 8011015C 04D5030C */  jal        func_800F5410
    /* 1E560 80110160 00000000 */   nop
    /* 1E564 80110164 0FCF030C */  jal        func_800F3C3C
    /* 1E568 80110168 28000424 */   addiu     $a0, $zero, 0x28
    /* 1E56C 8011016C CECF030C */  jal        func_800F3F38
    /* 1E570 80110170 21204000 */   addu      $a0, $v0, $zero
    /* 1E574 80110174 58E2030C */  jal        func_800F8960
    /* 1E578 80110178 10040424 */   addiu     $a0, $zero, 0x410
    /* 1E57C 8011017C 5CDB030C */  jal        func_800F6D70
    /* 1E580 80110180 11040424 */   addiu     $a0, $zero, 0x411
    /* 1E584 80110184 04D5030C */  jal        func_800F5410
    /* 1E588 80110188 00000000 */   nop
    /* 1E58C 8011018C 0FCF030C */  jal        func_800F3C3C
    /* 1E590 80110190 2B000424 */   addiu     $a0, $zero, 0x2B
    /* 1E594 80110194 CECF030C */  jal        func_800F3F38
    /* 1E598 80110198 21204000 */   addu      $a0, $v0, $zero
    /* 1E59C 8011019C 58E2030C */  jal        func_800F8960
    /* 1E5A0 801101A0 11040424 */   addiu     $a0, $zero, 0x411
  .L801101A4:
    /* 1E5A4 801101A4 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 1E5A8 801101A8 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 1E5AC 801101AC 00000000 */  nop
    /* 1E5B0 801101B0 00006294 */  lhu        $v0, 0x0($v1)
    /* 1E5B4 801101B4 10000424 */  addiu      $a0, $zero, 0x10
    /* 1E5B8 801101B8 04004224 */  addiu      $v0, $v0, 0x4
    /* 1E5BC 801101BC A4D6030C */  jal        func_800F5A90
    /* 1E5C0 801101C0 000062A4 */   sh        $v0, 0x0($v1)
    /* 1E5C4 801101C4 F5D4030C */  jal        func_800F53D4
    /* 1E5C8 801101C8 00000000 */   nop
    /* 1E5CC 801101CC BFFF4010 */  beqz       $v0, .L801100CC
    /* 1E5D0 801101D0 00000000 */   nop
    /* 1E5D4 801101D4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1E5D8 801101D8 00000000 */  nop
    /* 1E5DC 801101DC 0800E003 */  jr         $ra
    /* 1E5E0 801101E0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801100BC
