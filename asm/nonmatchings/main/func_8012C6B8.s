nonmatching func_8012C6B8, 0x94

glabel func_8012C6B8
    /* 3AAB8 8012C6B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3AABC 8012C6BC 1000B0AF */  sw         $s0, 0x10($sp)
    /* 3AAC0 8012C6C0 21800000 */  addu       $s0, $zero, $zero
    /* 3AAC4 8012C6C4 1400BFAF */  sw         $ra, 0x14($sp)
    /* 3AAC8 8012C6C8 40DD030C */  jal        func_800F7500
    /* 3AACC 8012C6CC 03000424 */   addiu     $a0, $zero, 0x3
    /* 3AAD0 8012C6D0 B6D9030C */  jal        func_800F66D8
    /* 3AAD4 8012C6D4 60000424 */   addiu     $a0, $zero, 0x60
    /* 3AAD8 8012C6D8 0DD9030C */  jal        func_800F6434
    /* 3AADC 8012C6DC 80800434 */   ori       $a0, $zero, 0x8080
    /* 3AAE0 8012C6E0 06004014 */  bnez       $v0, .L8012C6FC
    /* 3AAE4 8012C6E4 1A80023C */   lui       $v0, %hi(D_801991B0)
    /* 3AAE8 8012C6E8 B0914494 */  lhu        $a0, %lo(D_801991B0)($v0)
    /* 3AAEC 8012C6EC 40DD030C */  jal        func_800F7500
    /* 3AAF0 8012C6F0 01001024 */   addiu     $s0, $zero, 0x1
    /* 3AAF4 8012C6F4 BEB0040C */  jal        func_8012C2F8
    /* 3AAF8 8012C6F8 00000000 */   nop
  .L8012C6FC:
    /* 3AAFC 8012C6FC 53D9030C */  jal        func_800F654C
    /* 3AB00 8012C700 21200000 */   addu      $a0, $zero, $zero
    /* 3AB04 8012C704 BBE0030C */  jal        func_800F82EC
    /* 3AB08 8012C708 60000424 */   addiu     $a0, $zero, 0x60
    /* 3AB0C 8012C70C EFD8030C */  jal        func_800F63BC
    /* 3AB10 8012C710 00000000 */   nop
    /* 3AB14 8012C714 B6D9030C */  jal        func_800F66D8
    /* 3AB18 8012C718 60000424 */   addiu     $a0, $zero, 0x60
    /* 3AB1C 8012C71C 92D0030C */  jal        func_800F4248
    /* 3AB20 8012C720 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 3AB24 8012C724 BBE0030C */  jal        func_800F82EC
    /* 3AB28 8012C728 60000424 */   addiu     $a0, $zero, 0x60
    /* 3AB2C 8012C72C 03000016 */  bnez       $s0, .L8012C73C
    /* 3AB30 8012C730 00000000 */   nop
    /* 3AB34 8012C734 7B88040C */  jal        func_801221EC
    /* 3AB38 8012C738 00000000 */   nop
  .L8012C73C:
    /* 3AB3C 8012C73C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 3AB40 8012C740 1000B08F */  lw         $s0, 0x10($sp)
    /* 3AB44 8012C744 0800E003 */  jr         $ra
    /* 3AB48 8012C748 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C6B8
