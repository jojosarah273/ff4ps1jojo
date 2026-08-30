nonmatching func_8015E758, 0xF4

glabel func_8015E758
    /* 6CB58 8015E758 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CB5C 8015E75C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6CB60 8015E760 CCE4030C */  jal        func_800F9330
    /* 6CB64 8015E764 00000000 */   nop
    /* 6CB68 8015E768 E7E4030C */  jal        func_800F939C
    /* 6CB6C 8015E76C 00000000 */   nop
    /* 6CB70 8015E770 C7E5030C */  jal        func_800F971C
    /* 6CB74 8015E774 00000000 */   nop
    /* 6CB78 8015E778 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6CB7C 8015E77C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6CB80 8015E780 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6CB84 8015E784 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6CB88 8015E788 00006294 */  lhu        $v0, 0x0($v1)
    /* 6CB8C 8015E78C 00000000 */  nop
    /* 6CB90 8015E790 000082A4 */  sh         $v0, 0x0($a0)
    /* 6CB94 8015E794 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 6CB98 8015E798 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 6CB9C 8015E79C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 6CBA0 8015E7A0 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 6CBA4 8015E7A4 00006294 */  lhu        $v0, 0x0($v1)
    /* 6CBA8 8015E7A8 A9000424 */  addiu      $a0, $zero, 0xA9
    /* 6CBAC 8015E7AC 5BE3030C */  jal        func_800F8D6C
    /* 6CBB0 8015E7B0 0000A2A4 */   sh        $v0, 0x0($a1)
  .L8015E7B4:
    /* 6CBB4 8015E7B4 5CDB030C */  jal        func_800F6D70
    /* 6CBB8 8015E7B8 40350424 */   addiu     $a0, $zero, 0x3540
    /* 6CBBC 8015E7BC 0DD9030C */  jal        func_800F6434
    /* 6CBC0 8015E7C0 02020424 */   addiu     $a0, $zero, 0x202
    /* 6CBC4 8015E7C4 0B004014 */  bnez       $v0, .L8015E7F4
    /* 6CBC8 8015E7C8 00000000 */   nop
    /* 6CBCC 8015E7CC DADA030C */  jal        func_800F6B68
    /* 6CBD0 8015E7D0 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6CBD4 8015E7D4 92D0030C */  jal        func_800F4248
    /* 6CBD8 8015E7D8 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6CBDC 8015E7DC 48D0030C */  jal        func_800F4120
    /* 6CBE0 8015E7E0 02020424 */   addiu     $a0, $zero, 0x202
    /* 6CBE4 8015E7E4 03004014 */  bnez       $v0, .L8015E7F4
    /* 6CBE8 8015E7E8 00000000 */   nop
    /* 6CBEC 8015E7EC AFD8030C */  jal        func_800F62BC
    /* 6CBF0 8015E7F0 A9000424 */   addiu     $a0, $zero, 0xA9
  .L8015E7F4:
    /* 6CBF4 8015E7F4 C34C050C */  jal        func_8015330C
    /* 6CBF8 8015E7F8 00000000 */   nop
    /* 6CBFC 8015E7FC EFD8030C */  jal        func_800F63BC
    /* 6CC00 8015E800 00000000 */   nop
    /* 6CC04 8015E804 A4D6030C */  jal        func_800F5A90
    /* 6CC08 8015E808 05000424 */   addiu     $a0, $zero, 0x5
    /* 6CC0C 8015E80C F5D4030C */  jal        func_800F53D4
    /* 6CC10 8015E810 00000000 */   nop
    /* 6CC14 8015E814 E7FF4010 */  beqz       $v0, .L8015E7B4
    /* 6CC18 8015E818 00000000 */   nop
    /* 6CC1C 8015E81C 83E5030C */  jal        func_800F960C
    /* 6CC20 8015E820 00000000 */   nop
    /* 6CC24 8015E824 68E5030C */  jal        func_800F95A0
    /* 6CC28 8015E828 00000000 */   nop
    /* 6CC2C 8015E82C 8CD9030C */  jal        func_800F6630
    /* 6CC30 8015E830 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6CC34 8015E834 62E0030C */  jal        func_800F8188
    /* 6CC38 8015E838 DB380424 */   addiu     $a0, $zero, 0x38DB
    /* 6CC3C 8015E83C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6CC40 8015E840 00000000 */  nop
    /* 6CC44 8015E844 0800E003 */  jr         $ra
    /* 6CC48 8015E848 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015E758
