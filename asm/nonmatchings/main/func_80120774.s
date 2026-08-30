nonmatching func_80120774, 0x154

glabel func_80120774
    /* 2EB74 80120774 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2EB78 80120778 1400BFAF */  sw         $ra, 0x14($sp)
    /* 2EB7C 8012077C 52CF030C */  jal        func_800F3D48
    /* 2EB80 80120780 1000B0AF */   sw        $s0, 0x10($sp)
    /* 2EB84 80120784 53D9030C */  jal        func_800F654C
    /* 2EB88 80120788 21200000 */   addu      $a0, $zero, $zero
    /* 2EB8C 8012078C 52CF030C */  jal        func_800F3D48
    /* 2EB90 80120790 0D80103C */   lui       $s0, %hi(D_800D0000)
    /* 2EB94 80120794 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 2EB98 80120798 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 2EB9C 8012079C 1A80043C */  lui        $a0, %hi(D_8019ED68)
    /* 2EBA0 801207A0 68ED848C */  lw         $a0, %lo(D_8019ED68)($a0)
    /* 2EBA4 801207A4 00006294 */  lhu        $v0, 0x0($v1)
    /* 2EBA8 801207A8 00008590 */  lbu        $a1, 0x0($a0)
    /* 2EBAC 801207AC 21105000 */  addu       $v0, $v0, $s0
    /* 2EBB0 801207B0 000045A0 */  sb         $a1, %lo(D_800D0000)($v0)
    /* 2EBB4 801207B4 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 2EBB8 801207B8 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 2EBBC 801207BC 00000000 */  nop
    /* 2EBC0 801207C0 00006294 */  lhu        $v0, 0x0($v1)
    /* 2EBC4 801207C4 00000000 */  nop
    /* 2EBC8 801207C8 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 2EBCC 801207CC CCE4030C */  jal        func_800F9330
    /* 2EBD0 801207D0 000062A4 */   sh        $v0, 0x0($v1)
    /* 2EBD4 801207D4 98E5030C */  jal        func_800F9660
    /* 2EBD8 801207D8 20000424 */   addiu     $a0, $zero, 0x20
    /* 2EBDC 801207DC E7E4030C */  jal        func_800F939C
    /* 2EBE0 801207E0 00000000 */   nop
    /* 2EBE4 801207E4 FE7C040C */  jal        func_8011F3F8
    /* 2EBE8 801207E8 00000000 */   nop
    /* 2EBEC 801207EC 91E5030C */  jal        func_800F9644
    /* 2EBF0 801207F0 20000424 */   addiu     $a0, $zero, 0x20
    /* 2EBF4 801207F4 04E5030C */  jal        func_800F9410
    /* 2EBF8 801207F8 00000000 */   nop
    /* 2EBFC 801207FC 04D5030C */  jal        func_800F5410
    /* 2EC00 80120800 00000000 */   nop
    /* 2EC04 80120804 0FCF030C */  jal        func_800F3C3C
    /* 2EC08 80120808 29000424 */   addiu     $a0, $zero, 0x29
    /* 2EC0C 8012080C E5CF030C */  jal        func_800F3F94
    /* 2EC10 80120810 21204000 */   addu      $a0, $v0, $zero
    /* 2EC14 80120814 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2EC18 80120818 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2EC1C 8012081C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 2EC20 80120820 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 2EC24 80120824 00004394 */  lhu        $v1, 0x0($v0)
    /* 2EC28 80120828 20000424 */  addiu      $a0, $zero, 0x20
    /* 2EC2C 8012082C 98E5030C */  jal        func_800F9660
    /* 2EC30 80120830 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2EC34 80120834 8CD9030C */  jal        func_800F6630
    /* 2EC38 80120838 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 2EC3C 8012083C 58E2030C */  jal        func_800F8960
    /* 2EC40 80120840 21200000 */   addu      $a0, $zero, $zero
    /* 2EC44 80120844 8CD9030C */  jal        func_800F6630
    /* 2EC48 80120848 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 2EC4C 8012084C 58E2030C */  jal        func_800F8960
    /* 2EC50 80120850 02000424 */   addiu     $a0, $zero, 0x2
    /* 2EC54 80120854 8CD9030C */  jal        func_800F6630
    /* 2EC58 80120858 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 2EC5C 8012085C 58E2030C */  jal        func_800F8960
    /* 2EC60 80120860 04000424 */   addiu     $a0, $zero, 0x4
    /* 2EC64 80120864 8CD9030C */  jal        func_800F6630
    /* 2EC68 80120868 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 2EC6C 8012086C 58E2030C */  jal        func_800F8960
    /* 2EC70 80120870 06000424 */   addiu     $a0, $zero, 0x6
    /* 2EC74 80120874 68E5030C */  jal        func_800F95A0
    /* 2EC78 80120878 00000000 */   nop
    /* 2EC7C 8012087C 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 2EC80 80120880 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 2EC84 80120884 00000000 */  nop
    /* 2EC88 80120888 00008294 */  lhu        $v0, 0x0($a0)
    /* 2EC8C 8012088C 00000000 */  nop
    /* 2EC90 80120890 01004224 */  addiu      $v0, $v0, 0x1
    /* 2EC94 80120894 000082A4 */  sh         $v0, 0x0($a0)
    /* 2EC98 80120898 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 2EC9C 8012089C 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 2ECA0 801208A0 1400BF8F */  lw         $ra, 0x14($sp)
    /* 2ECA4 801208A4 00006294 */  lhu        $v0, 0x0($v1)
    /* 2ECA8 801208A8 1A80043C */  lui        $a0, %hi(D_8019ED68)
    /* 2ECAC 801208AC 68ED848C */  lw         $a0, %lo(D_8019ED68)($a0)
    /* 2ECB0 801208B0 21105000 */  addu       $v0, $v0, $s0
    /* 2ECB4 801208B4 00004390 */  lbu        $v1, %lo(D_800D0000)($v0)
    /* 2ECB8 801208B8 1000B08F */  lw         $s0, 0x10($sp)
    /* 2ECBC 801208BC 000083A0 */  sb         $v1, 0x0($a0)
    /* 2ECC0 801208C0 0800E003 */  jr         $ra
    /* 2ECC4 801208C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80120774
