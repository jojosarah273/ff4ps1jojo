nonmatching func_80150B88, 0xB0

glabel func_80150B88
    /* 5EF88 80150B88 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5EF8C 80150B8C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5EF90 80150B90 59D9030C */  jal        func_800F6564
    /* 5EF94 80150B94 3E350424 */   addiu     $a0, $zero, 0x353E
    /* 5EF98 80150B98 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5EF9C 80150B9C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5EFA0 80150BA0 00000000 */  nop
    /* 5EFA4 80150BA4 00006290 */  lbu        $v0, 0x0($v1)
    /* 5EFA8 80150BA8 3E350424 */  addiu      $a0, $zero, 0x353E
    /* 5EFAC 80150BAC 01004238 */  xori       $v0, $v0, 0x1
    /* 5EFB0 80150BB0 62E0030C */  jal        func_800F8188
    /* 5EFB4 80150BB4 000062A0 */   sb        $v0, 0x0($v1)
    /* 5EFB8 80150BB8 C8D7030C */  jal        func_800F5F20
    /* 5EFBC 80150BBC 02020424 */   addiu     $a0, $zero, 0x202
    /* 5EFC0 80150BC0 19004014 */  bnez       $v0, .L80150C28
    /* 5EFC4 80150BC4 00000000 */   nop
    /* 5EFC8 80150BC8 59D9030C */  jal        func_800F6564
    /* 5EFCC 80150BCC 3F350424 */   addiu     $a0, $zero, 0x353F
    /* 5EFD0 80150BD0 5DD5030C */  jal        func_800F5574
    /* 5EFD4 80150BD4 02000424 */   addiu     $a0, $zero, 0x2
    /* 5EFD8 80150BD8 F5D4030C */  jal        func_800F53D4
    /* 5EFDC 80150BDC 00000000 */   nop
    /* 5EFE0 80150BE0 05004010 */  beqz       $v0, .L80150BF8
    /* 5EFE4 80150BE4 00000000 */   nop
    /* 5EFE8 80150BE8 53D9030C */  jal        func_800F654C
    /* 5EFEC 80150BEC 21200000 */   addu      $a0, $zero, $zero
    /* 5EFF0 80150BF0 62E0030C */  jal        func_800F8188
    /* 5EFF4 80150BF4 3F350424 */   addiu     $a0, $zero, 0x353F
  .L80150BF8:
    /* 5EFF8 80150BF8 59D9030C */  jal        func_800F6564
    /* 5EFFC 80150BFC 3F350424 */   addiu     $a0, $zero, 0x353F
    /* 5F000 80150C00 0DD9030C */  jal        func_800F6434
    /* 5F004 80150C04 02020424 */   addiu     $a0, $zero, 0x202
    /* 5F008 80150C08 05004010 */  beqz       $v0, .L80150C20
    /* 5F00C 80150C0C 00000000 */   nop
    /* 5F010 80150C10 53D9030C */  jal        func_800F654C
    /* 5F014 80150C14 0D000424 */   addiu     $a0, $zero, 0xD
    /* 5F018 80150C18 0E43050C */  jal        func_80150C38
    /* 5F01C 80150C1C 00000000 */   nop
  .L80150C20:
    /* 5F020 80150C20 90D8030C */  jal        func_800F6240
    /* 5F024 80150C24 3F350424 */   addiu     $a0, $zero, 0x353F
  .L80150C28:
    /* 5F028 80150C28 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5F02C 80150C2C 00000000 */  nop
    /* 5F030 80150C30 0800E003 */  jr         $ra
    /* 5F034 80150C34 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80150B88
