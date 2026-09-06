nonmatching func_80135E6C, 0x78

glabel func_80135E6C
    /* 4426C 80135E6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 44270 80135E70 1000BFAF */  sw         $ra, 0x10($sp)
  .L80135E74:
    /* 44274 80135E74 1A80043C */  lui        $a0, %hi(D_8019EE0C)
    /* 44278 80135E78 0CEE848C */  lw         $a0, %lo(D_8019EE0C)($a0)
    /* 4427C 80135E7C A25D060C */  jal        func_80197688
    /* 44280 80135E80 00000000 */   nop
    /* 44284 80135E84 13004014 */  bnez       $v0, .L80135ED4
    /* 44288 80135E88 21100000 */   addu      $v0, $zero, $zero
    /* 4428C 80135E8C 1A80043C */  lui        $a0, %hi(D_8019EE1C)
    /* 44290 80135E90 1CEE848C */  lw         $a0, %lo(D_8019EE1C)($a0)
    /* 44294 80135E94 A25D060C */  jal        func_80197688
    /* 44298 80135E98 00000000 */   nop
    /* 4429C 80135E9C 0D004014 */  bnez       $v0, .L80135ED4
    /* 442A0 80135EA0 01000224 */   addiu     $v0, $zero, 0x1
    /* 442A4 80135EA4 1A80043C */  lui        $a0, %hi(D_8019EE38)
    /* 442A8 80135EA8 38EE848C */  lw         $a0, %lo(D_8019EE38)($a0)
    /* 442AC 80135EAC A25D060C */  jal        func_80197688
    /* 442B0 80135EB0 00000000 */   nop
    /* 442B4 80135EB4 07004014 */  bnez       $v0, .L80135ED4
    /* 442B8 80135EB8 02000224 */   addiu     $v0, $zero, 0x2
    /* 442BC 80135EBC 1A80043C */  lui        $a0, %hi(D_8019EDF8)
    /* 442C0 80135EC0 F8ED848C */  lw         $a0, %lo(D_8019EDF8)($a0)
    /* 442C4 80135EC4 A25D060C */  jal        func_80197688
    /* 442C8 80135EC8 00000000 */   nop
    /* 442CC 80135ECC E9FF4010 */  beqz       $v0, .L80135E74
    /* 442D0 80135ED0 03000224 */   addiu     $v0, $zero, 0x3
  .L80135ED4:
    /* 442D4 80135ED4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 442D8 80135ED8 00000000 */  nop
    /* 442DC 80135EDC 0800E003 */  jr         $ra
    /* 442E0 80135EE0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80135E6C
