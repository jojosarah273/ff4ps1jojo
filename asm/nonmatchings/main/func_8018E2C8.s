nonmatching func_8018E2C8, 0x13C

glabel func_8018E2C8
    /* 9C6C8 8018E2C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9C6CC 8018E2CC 04008010 */  beqz       $a0, .L8018E2E0
    /* 9C6D0 8018E2D0 1000BFAF */   sw        $ra, 0x10($sp)
    /* 9C6D4 8018E2D4 03000224 */  addiu      $v0, $zero, 0x3
    /* 9C6D8 8018E2D8 20008214 */  bne        $a0, $v0, .L8018E35C
    /* 9C6DC 8018E2DC 01000224 */   addiu     $v0, $zero, 0x1
  .L8018E2E0:
    /* 9C6E0 8018E2E0 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 9C6E4 8018E2E4 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 9C6E8 8018E2E8 00000000 */  nop
    /* 9C6EC 8018E2EC AA014394 */  lhu        $v1, 0x1AA($v0)
    /* 9C6F0 8018E2F0 00000000 */  nop
    /* 9C6F4 8018E2F4 BFFF6330 */  andi       $v1, $v1, 0xFFBF
    /* 9C6F8 8018E2F8 AA0143A4 */  sh         $v1, 0x1AA($v0)
    /* 9C6FC 8018E2FC AA014294 */  lhu        $v0, 0x1AA($v0)
    /* 9C700 8018E300 00000000 */  nop
    /* 9C704 8018E304 40004230 */  andi       $v0, $v0, 0x40
    /* 9C708 8018E308 13004010 */  beqz       $v0, .L8018E358
    /* 9C70C 8018E30C 21180000 */   addu      $v1, $zero, $zero
    /* 9C710 8018E310 01006324 */  addiu      $v1, $v1, 0x1
  .L8018E314:
    /* 9C714 8018E314 010F622C */  sltiu      $v0, $v1, 0xF01
    /* 9C718 8018E318 06004014 */  bnez       $v0, .L8018E334
    /* 9C71C 8018E31C 00000000 */   nop
    /* 9C720 8018E320 0F80043C */  lui        $a0, %hi(D_800F3160)
    /* 9C724 8018E324 60318424 */  addiu      $a0, $a0, %lo(D_800F3160)
    /* 9C728 8018E328 0F80053C */  lui        $a1, %hi(D_800F3170)
    /* 9C72C 8018E32C EF380608 */  j          .L8018E3BC
    /* 9C730 8018E330 7031A524 */   addiu     $a1, $a1, %lo(D_800F3170)
  .L8018E334:
    /* 9C734 8018E334 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 9C738 8018E338 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 9C73C 8018E33C 00000000 */  nop
    /* 9C740 8018E340 AA014294 */  lhu        $v0, 0x1AA($v0)
    /* 9C744 8018E344 00000000 */  nop
    /* 9C748 8018E348 40004230 */  andi       $v0, $v0, 0x40
    /* 9C74C 8018E34C F1FF4014 */  bnez       $v0, .L8018E314
    /* 9C750 8018E350 01006324 */   addiu     $v1, $v1, 0x1
    /* 9C754 8018E354 FFFF6324 */  addiu      $v1, $v1, -0x1
  .L8018E358:
    /* 9C758 8018E358 01000224 */  addiu      $v0, $zero, 0x1
  .L8018E35C:
    /* 9C75C 8018E35C 03008210 */  beq        $a0, $v0, .L8018E36C
    /* 9C760 8018E360 03000224 */   addiu     $v0, $zero, 0x3
    /* 9C764 8018E364 23008214 */  bne        $a0, $v0, .L8018E3F4
    /* 9C768 8018E368 21108000 */   addu      $v0, $a0, $zero
  .L8018E36C:
    /* 9C76C 8018E36C 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 9C770 8018E370 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 9C774 8018E374 00000000 */  nop
    /* 9C778 8018E378 AA014394 */  lhu        $v1, 0x1AA($v0)
    /* 9C77C 8018E37C 00000000 */  nop
    /* 9C780 8018E380 40006334 */  ori        $v1, $v1, 0x40
    /* 9C784 8018E384 AA0143A4 */  sh         $v1, 0x1AA($v0)
    /* 9C788 8018E388 AA014294 */  lhu        $v0, 0x1AA($v0)
    /* 9C78C 8018E38C 00000000 */  nop
    /* 9C790 8018E390 40004230 */  andi       $v0, $v0, 0x40
    /* 9C794 8018E394 16004014 */  bnez       $v0, .L8018E3F0
    /* 9C798 8018E398 21180000 */   addu      $v1, $zero, $zero
    /* 9C79C 8018E39C 01006324 */  addiu      $v1, $v1, 0x1
  .L8018E3A0:
    /* 9C7A0 8018E3A0 010F622C */  sltiu      $v0, $v1, 0xF01
    /* 9C7A4 8018E3A4 09004014 */  bnez       $v0, .L8018E3CC
    /* 9C7A8 8018E3A8 00000000 */   nop
    /* 9C7AC 8018E3AC 0F80043C */  lui        $a0, %hi(D_800F3160)
    /* 9C7B0 8018E3B0 60318424 */  addiu      $a0, $a0, %lo(D_800F3160)
    /* 9C7B4 8018E3B4 0F80053C */  lui        $a1, %hi(D_800F3180)
    /* 9C7B8 8018E3B8 8031A524 */  addiu      $a1, $a1, %lo(D_800F3180)
  .L8018E3BC:
    /* 9C7BC 8018E3BC 323C060C */  jal        func_8018F0C8
    /* 9C7C0 8018E3C0 00000000 */   nop
    /* 9C7C4 8018E3C4 FD380608 */  j          .L8018E3F4
    /* 9C7C8 8018E3C8 FFFF0224 */   addiu     $v0, $zero, -0x1
  .L8018E3CC:
    /* 9C7CC 8018E3CC 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 9C7D0 8018E3D0 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 9C7D4 8018E3D4 00000000 */  nop
    /* 9C7D8 8018E3D8 AA014294 */  lhu        $v0, 0x1AA($v0)
    /* 9C7DC 8018E3DC 00000000 */  nop
    /* 9C7E0 8018E3E0 40004230 */  andi       $v0, $v0, 0x40
    /* 9C7E4 8018E3E4 EEFF4010 */  beqz       $v0, .L8018E3A0
    /* 9C7E8 8018E3E8 01006324 */   addiu     $v1, $v1, 0x1
    /* 9C7EC 8018E3EC FFFF6324 */  addiu      $v1, $v1, -0x1
  .L8018E3F0:
    /* 9C7F0 8018E3F0 21108000 */  addu       $v0, $a0, $zero
  .L8018E3F4:
    /* 9C7F4 8018E3F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9C7F8 8018E3F8 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9C7FC 8018E3FC 0800E003 */  jr         $ra
    /* 9C800 8018E400 00000000 */   nop
endlabel func_8018E2C8
    /* 9C804 8018E404 00000000 */  nop
