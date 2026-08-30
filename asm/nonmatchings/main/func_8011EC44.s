nonmatching func_8011EC44, 0x160

glabel func_8011EC44
    /* 2D044 8011EC44 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 2D048 8011EC48 2400BFAF */  sw         $ra, 0x24($sp)
    /* 2D04C 8011EC4C 2000B2AF */  sw         $s2, 0x20($sp)
    /* 2D050 8011EC50 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 2D054 8011EC54 1800B0AF */  sw         $s0, 0x18($sp)
  .L8011EC58:
    /* 2D058 8011EC58 A7BA050C */  jal        func_8016EA9C
    /* 2D05C 8011EC5C 1D80103C */   lui       $s0, %hi(D_801D3D68)
    /* 2D060 8011EC60 4F8F040C */  jal        func_80123D3C
    /* 2D064 8011EC64 683D1026 */   addiu     $s0, $s0, %lo(D_801D3D68)
    /* 2D068 8011EC68 21200002 */  addu       $a0, $s0, $zero
    /* 2D06C 8011EC6C 00020524 */  addiu      $a1, $zero, 0x200
    /* 2D070 8011EC70 21300000 */  addu       $a2, $zero, $zero
    /* 2D074 8011EC74 3EFE050C */  jal        func_8017F8F8
    /* 2D078 8011EC78 21380000 */   addu      $a3, $zero, $zero
    /* 2D07C 8011EC7C 21200002 */  addu       $a0, $s0, $zero
    /* 2D080 8011EC80 00020524 */  addiu      $a1, $zero, 0x200
    /* 2D084 8011EC84 21300000 */  addu       $a2, $zero, $zero
    /* 2D088 8011EC88 3EFE050C */  jal        func_8017F8F8
    /* 2D08C 8011EC8C 11000724 */   addiu     $a3, $zero, 0x11
    /* 2D090 8011EC90 21200002 */  addu       $a0, $s0, $zero
    /* 2D094 8011EC94 00020524 */  addiu      $a1, $zero, 0x200
    /* 2D098 8011EC98 21300000 */  addu       $a2, $zero, $zero
    /* 2D09C 8011EC9C 3EFE050C */  jal        func_8017F8F8
    /* 2D0A0 8011ECA0 12000724 */   addiu     $a3, $zero, 0x12
    /* 2D0A4 8011ECA4 0100123C */  lui        $s2, (0x10000 >> 16)
    /* 2D0A8 8011ECA8 1A80023C */  lui        $v0, %hi(D_8019A7FC)
    /* 2D0AC 8011ECAC FCA75124 */  addiu      $s1, $v0, %lo(D_8019A7FC)
    /* 2D0B0 8011ECB0 1A80033C */  lui        $v1, %hi(D_8019A774)
    /* 2D0B4 8011ECB4 74A77024 */  addiu      $s0, $v1, %lo(D_8019A774)
    /* 2D0B8 8011ECB8 1A80013C */  lui        $at, %hi(D_8019EE30)
    /* 2D0BC 8011ECBC 30EE20A4 */  sh         $zero, %lo(D_8019EE30)($at)
    /* 2D0C0 8011ECC0 1A80013C */  lui        $at, %hi(D_8019EE2E)
    /* 2D0C4 8011ECC4 2EEE20A4 */  sh         $zero, %lo(D_8019EE2E)($at)
    /* 2D0C8 8011ECC8 1A80013C */  lui        $at, %hi(D_8019EE2C)
    /* 2D0CC 8011ECCC 2CEE20A4 */  sh         $zero, %lo(D_8019EE2C)($at)
  .L8011ECD0:
    /* 2D0D0 8011ECD0 1000A427 */  addiu      $a0, $sp, 0x10
    /* 2D0D4 8011ECD4 00002586 */  lh         $a1, 0x0($s1)
    /* 2D0D8 8011ECD8 02002696 */  lhu        $a2, 0x2($s1)
    /* 2D0DC 8011ECDC 04003126 */  addiu      $s1, $s1, 0x4
    /* 2D0E0 8011ECE0 00000296 */  lhu        $v0, 0x0($s0)
    /* 2D0E4 8011ECE4 02000396 */  lhu        $v1, 0x2($s0)
    /* 2D0E8 8011ECE8 04000796 */  lhu        $a3, 0x4($s0)
    /* 2D0EC 8011ECEC 06000896 */  lhu        $t0, 0x6($s0)
    /* 2D0F0 8011ECF0 08001026 */  addiu      $s0, $s0, 0x8
    /* 2D0F4 8011ECF4 00FFC624 */  addiu      $a2, $a2, -0x100
    /* 2D0F8 8011ECF8 00340600 */  sll        $a2, $a2, 16
    /* 2D0FC 8011ECFC 03340600 */  sra        $a2, $a2, 16
    /* 2D100 8011ED00 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 2D104 8011ED04 1200A3A7 */  sh         $v1, 0x12($sp)
    /* 2D108 8011ED08 1400A7A7 */  sh         $a3, 0x14($sp)
    /* 2D10C 8011ED0C C051060C */  jal        func_80194700
    /* 2D110 8011ED10 1600A8A7 */   sh        $t0, 0x16($sp)
    /* 2D114 8011ED14 E550060C */  jal        func_80194394
    /* 2D118 8011ED18 21200000 */   addu      $a0, $zero, $zero
    /* 2D11C 8011ED1C 21184002 */  addu       $v1, $s2, $zero
    /* 2D120 8011ED20 0100023C */  lui        $v0, (0x10000 >> 16)
    /* 2D124 8011ED24 031C0300 */  sra        $v1, $v1, 16
    /* 2D128 8011ED28 11006328 */  slti       $v1, $v1, 0x11
    /* 2D12C 8011ED2C E8FF6014 */  bnez       $v1, .L8011ECD0
    /* 2D130 8011ED30 21904202 */   addu      $s2, $s2, $v0
    /* 2D134 8011ED34 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 2D138 8011ED38 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 2D13C 8011ED3C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 2D140 8011ED40 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 2D144 8011ED44 00006294 */  lhu        $v0, 0x0($v1)
    /* 2D148 8011ED48 92D7030C */  jal        func_800F5E48
    /* 2D14C 8011ED4C 000082A4 */   sh        $v0, 0x0($a0)
    /* 2D150 8011ED50 92D7030C */  jal        func_800F5E48
    /* 2D154 8011ED54 00000000 */   nop
    /* 2D158 8011ED58 40E3030C */  jal        func_800F8D00
    /* 2D15C 8011ED5C 651A0424 */   addiu     $a0, $zero, 0x1A65
    /* 2D160 8011ED60 CC0080A7 */  sh         $zero, %gp_rel(D_8019EDC8)($gp)
    /* 2D164 8011ED64 7089040C */  jal        func_801225C0
    /* 2D168 8011ED68 00000000 */   nop
    /* 2D16C 8011ED6C 8499040C */  jal        func_80126610
    /* 2D170 8011ED70 00000000 */   nop
    /* 2D174 8011ED74 4588040C */  jal        func_80122114
    /* 2D178 8011ED78 00000000 */   nop
    /* 2D17C 8011ED7C CC008387 */  lh         $v1, %gp_rel(D_8019EDC8)($gp)
    /* 2D180 8011ED80 01000224 */  addiu      $v0, $zero, 0x1
    /* 2D184 8011ED84 B4FF6210 */  beq        $v1, $v0, .L8011EC58
    /* 2D188 8011ED88 00000000 */   nop
    /* 2D18C 8011ED8C 2400BF8F */  lw         $ra, 0x24($sp)
    /* 2D190 8011ED90 2000B28F */  lw         $s2, 0x20($sp)
    /* 2D194 8011ED94 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 2D198 8011ED98 1800B08F */  lw         $s0, 0x18($sp)
    /* 2D19C 8011ED9C 0800E003 */  jr         $ra
    /* 2D1A0 8011EDA0 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8011EC44
