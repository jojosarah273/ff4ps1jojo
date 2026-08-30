nonmatching func_8014B8AC, 0x68

glabel func_8014B8AC
    /* 59CAC 8014B8AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59CB0 8014B8B0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59CB4 8014B8B4 59D9030C */  jal        func_800F6564
    /* 59CB8 8014B8B8 C5340424 */   addiu     $a0, $zero, 0x34C5
    /* 59CBC 8014B8BC 0DD9030C */  jal        func_800F6434
    /* 59CC0 8014B8C0 02000424 */   addiu     $a0, $zero, 0x2
    /* 59CC4 8014B8C4 0F004014 */  bnez       $v0, .L8014B904
    /* 59CC8 8014B8C8 00000000 */   nop
    /* 59CCC 8014B8CC 77DC030C */  jal        func_800F71DC
    /* 59CD0 8014B8D0 B0800434 */   ori       $a0, $zero, 0x80B0
    /* 59CD4 8014B8D4 40E3030C */  jal        func_800F8D00
    /* 59CD8 8014B8D8 89F20434 */   ori       $a0, $zero, 0xF289
    /* 59CDC 8014B8DC 53D9030C */  jal        func_800F654C
    /* 59CE0 8014B8E0 01000424 */   addiu     $a0, $zero, 0x1
    /* 59CE4 8014B8E4 62E0030C */  jal        func_800F8188
    /* 59CE8 8014B8E8 D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 59CEC 8014B8EC 632E050C */  jal        func_8014B98C
    /* 59CF0 8014B8F0 00000000 */   nop
    /* 59CF4 8014B8F4 77DC030C */  jal        func_800F71DC
    /* 59CF8 8014B8F8 21200000 */   addu      $a0, $zero, $zero
    /* 59CFC 8014B8FC 40E3030C */  jal        func_800F8D00
    /* 59D00 8014B900 89F20434 */   ori       $a0, $zero, 0xF289
  .L8014B904:
    /* 59D04 8014B904 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59D08 8014B908 00000000 */  nop
    /* 59D0C 8014B90C 0800E003 */  jr         $ra
    /* 59D10 8014B910 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B8AC
