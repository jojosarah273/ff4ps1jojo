nonmatching func_80167774, 0xD0

glabel func_80167774
    /* 75B74 80167774 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 75B78 80167778 1400BFAF */  sw         $ra, 0x14($sp)
    /* 75B7C 8016777C 1000B0AF */  sw         $s0, 0x10($sp)
  .L80167780:
    /* 75B80 80167780 5DC0010C */  jal        func_80070174
    /* 75B84 80167784 1A80103C */   lui       $s0, %hi(D_8019A144)
    /* 75B88 80167788 EEE3030C */  jal        func_800F8FB8
    /* 75B8C 8016778C 21200000 */   addu      $a0, $zero, $zero
    /* 75B90 80167790 77DC030C */  jal        func_800F71DC
    /* 75B94 80167794 21200000 */   addu      $a0, $zero, $zero
  .L80167798:
    /* 75B98 80167798 DADA030C */  jal        func_800F6B68
    /* 75B9C 8016779C 88F40434 */   ori       $a0, $zero, 0xF488
    /* 75BA0 801677A0 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 75BA4 801677A4 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 75BA8 801677A8 00000000 */  nop
    /* 75BAC 801677AC 00004394 */  lhu        $v1, 0x0($v0)
    /* 75BB0 801677B0 44A10426 */  addiu      $a0, $s0, %lo(D_8019A144)
    /* 75BB4 801677B4 21186400 */  addu       $v1, $v1, $a0
    /* 75BB8 801677B8 00006490 */  lbu        $a0, 0x0($v1)
    /* 75BBC 801677BC 5DD5030C */  jal        func_800F5574
    /* 75BC0 801677C0 00000000 */   nop
    /* 75BC4 801677C4 F5D4030C */  jal        func_800F53D4
    /* 75BC8 801677C8 00000000 */   nop
    /* 75BCC 801677CC 0B004014 */  bnez       $v0, .L801677FC
    /* 75BD0 801677D0 88F40434 */   ori       $a0, $zero, 0xF488
    /* 75BD4 801677D4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 75BD8 801677D8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 75BDC 801677DC 00000000 */  nop
    /* 75BE0 801677E0 00004394 */  lhu        $v1, 0x0($v0)
    /* 75BE4 801677E4 C1CE030C */  jal        func_800F3B04
    /* 75BE8 801677E8 21206400 */   addu      $a0, $v1, $a0
    /* 75BEC 801677EC CBD6030C */  jal        func_800F5B2C
    /* 75BF0 801677F0 21204000 */   addu      $a0, $v0, $zero
    /* 75BF4 801677F4 AFD8030C */  jal        func_800F62BC
    /* 75BF8 801677F8 21200000 */   addu      $a0, $zero, $zero
  .L801677FC:
    /* 75BFC 801677FC D9D8030C */  jal        func_800F6364
    /* 75C00 80167800 00000000 */   nop
    /* 75C04 80167804 56D6030C */  jal        func_800F5958
    /* 75C08 80167808 12000424 */   addiu     $a0, $zero, 0x12
    /* 75C0C 8016780C F5D4030C */  jal        func_800F53D4
    /* 75C10 80167810 00000000 */   nop
    /* 75C14 80167814 E0FF4010 */  beqz       $v0, .L80167798
    /* 75C18 80167818 00000000 */   nop
    /* 75C1C 8016781C 8CD9030C */  jal        func_800F6630
    /* 75C20 80167820 21200000 */   addu      $a0, $zero, $zero
    /* 75C24 80167824 0DD9030C */  jal        func_800F6434
    /* 75C28 80167828 02020424 */   addiu     $a0, $zero, 0x202
    /* 75C2C 8016782C D4FF4014 */  bnez       $v0, .L80167780
    /* 75C30 80167830 00000000 */   nop
    /* 75C34 80167834 1400BF8F */  lw         $ra, 0x14($sp)
    /* 75C38 80167838 1000B08F */  lw         $s0, 0x10($sp)
    /* 75C3C 8016783C 0800E003 */  jr         $ra
    /* 75C40 80167840 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80167774
