nonmatching func_8015F7E8, 0xD0

glabel func_8015F7E8
    /* 6DBE8 8015F7E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6DBEC 8015F7EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6DBF0 8015F7F0 59D9030C */  jal        func_800F6564
    /* 6DBF4 8015F7F4 06270424 */   addiu     $a0, $zero, 0x2706
    /* 6DBF8 8015F7F8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6DBFC 8015F7FC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6DC00 8015F800 00000000 */  nop
    /* 6DC04 8015F804 00006290 */  lbu        $v0, 0x0($v1)
    /* 6DC08 8015F808 06270424 */  addiu      $a0, $zero, 0x2706
    /* 6DC0C 8015F80C 40004234 */  ori        $v0, $v0, 0x40
    /* 6DC10 8015F810 62E0030C */  jal        func_800F8188
    /* 6DC14 8015F814 000062A0 */   sb        $v0, 0x0($v1)
    /* 6DC18 8015F818 53D9030C */  jal        func_800F654C
    /* 6DC1C 8015F81C 09000424 */   addiu     $a0, $zero, 0x9
    /* 6DC20 8015F820 93E0030C */  jal        func_800F824C
    /* 6DC24 8015F824 D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6DC28 8015F828 8CD9030C */  jal        func_800F6630
    /* 6DC2C 8015F82C CF000424 */   addiu     $a0, $zero, 0xCF
    /* 6DC30 8015F830 DD68050C */  jal        func_8015A374
    /* 6DC34 8015F834 00000000 */   nop
    /* 6DC38 8015F838 53D9030C */  jal        func_800F654C
    /* 6DC3C 8015F83C 06000424 */   addiu     $a0, $zero, 0x6
    /* 6DC40 8015F840 DD4C050C */  jal        func_80153374
    /* 6DC44 8015F844 00000000 */   nop
    /* 6DC48 8015F848 53D9030C */  jal        func_800F654C
    /* 6DC4C 8015F84C 40000424 */   addiu     $a0, $zero, 0x40
    /* 6DC50 8015F850 DAE1030C */  jal        func_800F8768
    /* 6DC54 8015F854 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6DC58 8015F858 8CD9030C */  jal        func_800F6630
    /* 6DC5C 8015F85C CF000424 */   addiu     $a0, $zero, 0xCF
    /* 6DC60 8015F860 50D4030C */  jal        func_800F5140
    /* 6DC64 8015F864 00000000 */   nop
    /* 6DC68 8015F868 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6DC6C 8015F86C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6DC70 8015F870 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6DC74 8015F874 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6DC78 8015F878 00004394 */  lhu        $v1, 0x0($v0)
    /* 6DC7C 8015F87C EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6DC80 8015F880 DADA030C */  jal        func_800F6B68
    /* 6DC84 8015F884 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6DC88 8015F888 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6DC8C 8015F88C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6DC90 8015F890 00000000 */  nop
    /* 6DC94 8015F894 00006290 */  lbu        $v0, 0x0($v1)
    /* 6DC98 8015F898 EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6DC9C 8015F89C 20004234 */  ori        $v0, $v0, 0x20
    /* 6DCA0 8015F8A0 DAE1030C */  jal        func_800F8768
    /* 6DCA4 8015F8A4 000062A0 */   sb        $v0, 0x0($v1)
    /* 6DCA8 8015F8A8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6DCAC 8015F8AC 00000000 */  nop
    /* 6DCB0 8015F8B0 0800E003 */  jr         $ra
    /* 6DCB4 8015F8B4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015F7E8
