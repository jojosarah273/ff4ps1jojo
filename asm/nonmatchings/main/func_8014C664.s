nonmatching func_8014C664, 0xB0

glabel func_8014C664
    /* 5AA64 8014C664 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5AA68 8014C668 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5AA6C 8014C66C CCE4030C */  jal        func_800F9330
    /* 5AA70 8014C670 00000000 */   nop
    /* 5AA74 8014C674 77DC030C */  jal        func_800F71DC
    /* 5AA78 8014C678 21200000 */   addu      $a0, $zero, $zero
  .L8014C67C:
    /* 5AA7C 8014C67C DADA030C */  jal        func_800F6B68
    /* 5AA80 8014C680 70ED0434 */   ori       $a0, $zero, 0xED70
    /* 5AA84 8014C684 93E0030C */  jal        func_800F824C
    /* 5AA88 8014C688 21200000 */   addu      $a0, $zero, $zero
    /* 5AA8C 8014C68C DADA030C */  jal        func_800F6B68
    /* 5AA90 8014C690 71ED0434 */   ori       $a0, $zero, 0xED71
    /* 5AA94 8014C694 93E0030C */  jal        func_800F824C
    /* 5AA98 8014C698 01000424 */   addiu     $a0, $zero, 0x1
    /* 5AA9C 8014C69C 53D9030C */  jal        func_800F654C
    /* 5AAA0 8014C6A0 01000424 */   addiu     $a0, $zero, 0x1
    /* 5AAA4 8014C6A4 4553020C */  jal        func_80094D14
    /* 5AAA8 8014C6A8 00000000 */   nop
    /* 5AAAC 8014C6AC 8CD9030C */  jal        func_800F6630
    /* 5AAB0 8014C6B0 21200000 */   addu      $a0, $zero, $zero
    /* 5AAB4 8014C6B4 DAE1030C */  jal        func_800F8768
    /* 5AAB8 8014C6B8 70ED0434 */   ori       $a0, $zero, 0xED70
    /* 5AABC 8014C6BC 8CD9030C */  jal        func_800F6630
    /* 5AAC0 8014C6C0 01000424 */   addiu     $a0, $zero, 0x1
    /* 5AAC4 8014C6C4 DAE1030C */  jal        func_800F8768
    /* 5AAC8 8014C6C8 71ED0434 */   ori       $a0, $zero, 0xED71
    /* 5AACC 8014C6CC 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5AAD0 8014C6D0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5AAD4 8014C6D4 00000000 */  nop
    /* 5AAD8 8014C6D8 00006294 */  lhu        $v0, 0x0($v1)
    /* 5AADC 8014C6DC 40000424 */  addiu      $a0, $zero, 0x40
    /* 5AAE0 8014C6E0 02004224 */  addiu      $v0, $v0, 0x2
    /* 5AAE4 8014C6E4 56D6030C */  jal        func_800F5958
    /* 5AAE8 8014C6E8 000062A4 */   sh        $v0, 0x0($v1)
    /* 5AAEC 8014C6EC F5D4030C */  jal        func_800F53D4
    /* 5AAF0 8014C6F0 00000000 */   nop
    /* 5AAF4 8014C6F4 E1FF4010 */  beqz       $v0, .L8014C67C
    /* 5AAF8 8014C6F8 00000000 */   nop
    /* 5AAFC 8014C6FC 68E5030C */  jal        func_800F95A0
    /* 5AB00 8014C700 00000000 */   nop
    /* 5AB04 8014C704 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5AB08 8014C708 00000000 */  nop
    /* 5AB0C 8014C70C 0800E003 */  jr         $ra
    /* 5AB10 8014C710 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014C664
