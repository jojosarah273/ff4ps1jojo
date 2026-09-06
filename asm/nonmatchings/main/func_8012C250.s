nonmatching func_8012C250, 0xA8

glabel func_8012C250
    /* 3A650 8012C250 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3A654 8012C254 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3A658 8012C258 84DC030C */  jal        func_800F7210
    /* 3A65C 8012C25C 3C1B0424 */   addiu     $a0, $zero, 0x1B3C
    /* 3A660 8012C260 59D9030C */  jal        func_800F6564
    /* 3A664 8012C264 3B1B0424 */   addiu     $a0, $zero, 0x1B3B
    /* 3A668 8012C268 DAE1030C */  jal        func_800F8768
    /* 3A66C 8012C26C 40140424 */   addiu     $a0, $zero, 0x1440
    /* 3A670 8012C270 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 3A674 8012C274 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 3A678 8012C278 00000000 */  nop
    /* 3A67C 8012C27C 00004494 */  lhu        $a0, 0x0($v0)
    /* 3A680 8012C280 C1CE030C */  jal        func_800F3B04
    /* 3A684 8012C284 41148424 */   addiu     $a0, $a0, 0x1441
    /* 3A688 8012C288 12D8030C */  jal        func_800F6048
    /* 3A68C 8012C28C 21204000 */   addu      $a0, $v0, $zero
    /* 3A690 8012C290 8CD9030C */  jal        func_800F6630
    /* 3A694 8012C294 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3A698 8012C298 5DD5030C */  jal        func_800F5574
    /* 3A69C 8012C29C 03000424 */   addiu     $a0, $zero, 0x3
    /* 3A6A0 8012C2A0 F5D4030C */  jal        func_800F53D4
    /* 3A6A4 8012C2A4 00000000 */   nop
    /* 3A6A8 8012C2A8 0B004010 */  beqz       $v0, .L8012C2D8
    /* 3A6AC 8012C2AC 00000000 */   nop
    /* 3A6B0 8012C2B0 59D9030C */  jal        func_800F6564
    /* 3A6B4 8012C2B4 221B0424 */   addiu     $a0, $zero, 0x1B22
    /* 3A6B8 8012C2B8 0DD9030C */  jal        func_800F6434
    /* 3A6BC 8012C2BC 02020424 */   addiu     $a0, $zero, 0x202
    /* 3A6C0 8012C2C0 05004014 */  bnez       $v0, .L8012C2D8
    /* 3A6C4 8012C2C4 00000000 */   nop
    /* 3A6C8 8012C2C8 5AAC040C */  jal        func_8012B168
    /* 3A6CC 8012C2CC 00000000 */   nop
    /* 3A6D0 8012C2D0 A17D040C */  jal        func_8011F684
    /* 3A6D4 8012C2D4 00000000 */   nop
  .L8012C2D8:
    /* 3A6D8 8012C2D8 6788040C */  jal        func_8012219C
    /* 3A6DC 8012C2DC 00000000 */   nop
    /* 3A6E0 8012C2E0 D07F040C */  jal        func_8011FF40
    /* 3A6E4 8012C2E4 00000000 */   nop
    /* 3A6E8 8012C2E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3A6EC 8012C2EC 00000000 */  nop
    /* 3A6F0 8012C2F0 0800E003 */  jr         $ra
    /* 3A6F4 8012C2F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C250
