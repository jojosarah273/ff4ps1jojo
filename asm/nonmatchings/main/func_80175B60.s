nonmatching func_80175B60, 0x154

glabel func_80175B60
    /* 83F60 80175B60 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 83F64 80175B64 D4000424 */  addiu      $a0, $zero, 0xD4
    /* 83F68 80175B68 1800BFAF */  sw         $ra, 0x18($sp)
    /* 83F6C 80175B6C 1400B1AF */  sw         $s1, 0x14($sp)
    /* 83F70 80175B70 8CD9030C */  jal        func_800F6630
    /* 83F74 80175B74 1000B0AF */   sw        $s0, 0x10($sp)
    /* 83F78 80175B78 0DD9030C */  jal        func_800F6434
    /* 83F7C 80175B7C 02020424 */   addiu     $a0, $zero, 0x202
    /* 83F80 80175B80 47004010 */  beqz       $v0, .L80175CA0
    /* 83F84 80175B84 00000000 */   nop
    /* 83F88 80175B88 EEE3030C */  jal        func_800F8FB8
    /* 83F8C 80175B8C D4000424 */   addiu     $a0, $zero, 0xD4
    /* 83F90 80175B90 53D9030C */  jal        func_800F654C
    /* 83F94 80175B94 80000424 */   addiu     $a0, $zero, 0x80
    /* 83F98 80175B98 62E0030C */  jal        func_800F8188
    /* 83F9C 80175B9C 15210424 */   addiu     $a0, $zero, 0x2115
    /* 83FA0 80175BA0 84DC030C */  jal        func_800F7210
    /* 83FA4 80175BA4 FE060424 */   addiu     $a0, $zero, 0x6FE
    /* 83FA8 80175BA8 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 83FAC 80175BAC 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 83FB0 80175BB0 00000000 */  nop
    /* 83FB4 80175BB4 00005094 */  lhu        $s0, 0x0($v0)
    /* 83FB8 80175BB8 84DC030C */  jal        func_800F7210
    /* 83FBC 80175BBC 00070424 */   addiu     $a0, $zero, 0x700
    /* 83FC0 80175BC0 02070424 */  addiu      $a0, $zero, 0x702
    /* 83FC4 80175BC4 1D80113C */  lui        $s1, %hi(D_801CFD68)
    /* 83FC8 80175BC8 68FD3126 */  addiu      $s1, $s1, %lo(D_801CFD68)
    /* 83FCC 80175BCC 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 83FD0 80175BD0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 83FD4 80175BD4 40101000 */  sll        $v0, $s0, 1
    /* 83FD8 80175BD8 21105100 */  addu       $v0, $v0, $s1
    /* 83FDC 80175BDC 01001026 */  addiu      $s0, $s0, 0x1
    /* 83FE0 80175BE0 00006594 */  lhu        $a1, 0x0($v1)
    /* 83FE4 80175BE4 FFFF1032 */  andi       $s0, $s0, 0xFFFF
    /* 83FE8 80175BE8 84DC030C */  jal        func_800F7210
    /* 83FEC 80175BEC 000045A4 */   sh        $a1, 0x0($v0)
    /* 83FF0 80175BF0 FE060424 */  addiu      $a0, $zero, 0x6FE
    /* 83FF4 80175BF4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 83FF8 80175BF8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 83FFC 80175BFC 40801000 */  sll        $s0, $s0, 1
    /* 84000 80175C00 00004394 */  lhu        $v1, 0x0($v0)
    /* 84004 80175C04 21801102 */  addu       $s0, $s0, $s1
    /* 84008 80175C08 59D9030C */  jal        func_800F6564
    /* 8400C 80175C0C 000003A6 */   sh        $v1, 0x0($s0)
    /* 84010 80175C10 04D5030C */  jal        func_800F5410
    /* 84014 80175C14 00000000 */   nop
    /* 84018 80175C18 02D0030C */  jal        func_800F4008
    /* 8401C 80175C1C 20000424 */   addiu     $a0, $zero, 0x20
    /* 84020 80175C20 62E0030C */  jal        func_800F8188
    /* 84024 80175C24 FE060424 */   addiu     $a0, $zero, 0x6FE
    /* 84028 80175C28 59D9030C */  jal        func_800F6564
    /* 8402C 80175C2C FF060424 */   addiu     $a0, $zero, 0x6FF
    /* 84030 80175C30 02D0030C */  jal        func_800F4008
    /* 84034 80175C34 21200000 */   addu      $a0, $zero, $zero
    /* 84038 80175C38 62E0030C */  jal        func_800F8188
    /* 8403C 80175C3C FF060424 */   addiu     $a0, $zero, 0x6FF
    /* 84040 80175C40 84DC030C */  jal        func_800F7210
    /* 84044 80175C44 FE060424 */   addiu     $a0, $zero, 0x6FE
    /* 84048 80175C48 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 8404C 80175C4C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 84050 80175C50 00000000 */  nop
    /* 84054 80175C54 00005094 */  lhu        $s0, 0x0($v0)
    /* 84058 80175C58 84DC030C */  jal        func_800F7210
    /* 8405C 80175C5C 04070424 */   addiu     $a0, $zero, 0x704
    /* 84060 80175C60 06070424 */  addiu      $a0, $zero, 0x706
    /* 84064 80175C64 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 84068 80175C68 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 8406C 80175C6C 40101000 */  sll        $v0, $s0, 1
    /* 84070 80175C70 21105100 */  addu       $v0, $v0, $s1
    /* 84074 80175C74 01001026 */  addiu      $s0, $s0, 0x1
    /* 84078 80175C78 00006594 */  lhu        $a1, 0x0($v1)
    /* 8407C 80175C7C FFFF1032 */  andi       $s0, $s0, 0xFFFF
    /* 84080 80175C80 84DC030C */  jal        func_800F7210
    /* 84084 80175C84 000045A4 */   sh        $a1, 0x0($v0)
    /* 84088 80175C88 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 8408C 80175C8C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 84090 80175C90 40801000 */  sll        $s0, $s0, 1
    /* 84094 80175C94 00004394 */  lhu        $v1, 0x0($v0)
    /* 84098 80175C98 21801102 */  addu       $s0, $s0, $s1
    /* 8409C 80175C9C 000003A6 */  sh         $v1, 0x0($s0)
  .L80175CA0:
    /* 840A0 80175CA0 1800BF8F */  lw         $ra, 0x18($sp)
    /* 840A4 80175CA4 1400B18F */  lw         $s1, 0x14($sp)
    /* 840A8 80175CA8 1000B08F */  lw         $s0, 0x10($sp)
    /* 840AC 80175CAC 0800E003 */  jr         $ra
    /* 840B0 80175CB0 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80175B60
