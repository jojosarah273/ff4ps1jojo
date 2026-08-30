nonmatching func_801919B4, 0x134

glabel func_801919B4
    /* 9FDB4 801919B4 C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 9FDB8 801919B8 1400B1AF */  sw         $s1, 0x14($sp)
    /* 9FDBC 801919BC 2188A000 */  addu       $s1, $a1, $zero
    /* 9FDC0 801919C0 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 9FDC4 801919C4 21988000 */  addu       $s3, $a0, $zero
    /* 9FDC8 801919C8 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9FDCC 801919CC 03001024 */  addiu      $s0, $zero, 0x3
    /* 9FDD0 801919D0 3000BEAF */  sw         $fp, 0x30($sp)
    /* 9FDD4 801919D4 01001E24 */  addiu      $fp, $zero, 0x1
    /* 9FDD8 801919D8 1800B2AF */  sw         $s2, 0x18($sp)
    /* 9FDDC 801919DC FF007232 */  andi       $s2, $s3, 0xFF
    /* 9FDE0 801919E0 1A80033C */  lui        $v1, %hi(D_8019BCF4)
    /* 9FDE4 801919E4 F4BC6324 */  addiu      $v1, $v1, %lo(D_8019BCF4)
    /* 9FDE8 801919E8 2000B4AF */  sw         $s4, 0x20($sp)
    /* 9FDEC 801919EC 1A80143C */  lui        $s4, %hi(D_8019B9EC)
    /* 9FDF0 801919F0 ECB9948E */  lw         $s4, %lo(D_8019B9EC)($s4)
    /* 9FDF4 801919F4 80101200 */  sll        $v0, $s2, 2
    /* 9FDF8 801919F8 2400B5AF */  sw         $s5, 0x24($sp)
    /* 9FDFC 801919FC 21A84300 */  addu       $s5, $v0, $v1
    /* 9FE00 80191A00 2800B6AF */  sw         $s6, 0x28($sp)
    /* 9FE04 80191A04 21B00000 */  addu       $s6, $zero, $zero
    /* 9FE08 80191A08 2C00B7AF */  sw         $s7, 0x2C($sp)
    /* 9FE0C 80191A0C FFFF1724 */  addiu      $s7, $zero, -0x1
    /* 9FE10 80191A10 3400BFAF */  sw         $ra, 0x34($sp)
  .L80191A14:
    /* 9FE14 80191A14 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9FE18 80191A18 0B005E12 */  beq        $s2, $fp, .L80191A48
    /* 9FE1C 80191A1C ECB920AC */   sw        $zero, %lo(D_8019B9EC)($at)
    /* 9FE20 80191A20 1A80023C */  lui        $v0, %hi(D_8019B9F8)
    /* 9FE24 80191A24 F8B94290 */  lbu        $v0, %lo(D_8019B9F8)($v0)
    /* 9FE28 80191A28 00000000 */  nop
    /* 9FE2C 80191A2C 10004230 */  andi       $v0, $v0, 0x10
    /* 9FE30 80191A30 05004010 */  beqz       $v0, .L80191A48
    /* 9FE34 80191A34 01000424 */   addiu     $a0, $zero, 0x1
    /* 9FE38 80191A38 21280000 */  addu       $a1, $zero, $zero
    /* 9FE3C 80191A3C 21300000 */  addu       $a2, $zero, $zero
    /* 9FE40 80191A40 D142060C */  jal        func_80190B44
    /* 9FE44 80191A44 21380000 */   addu      $a3, $zero, $zero
  .L80191A48:
    /* 9FE48 80191A48 0B002012 */  beqz       $s1, .L80191A78
    /* 9FE4C 80191A4C 00000000 */   nop
    /* 9FE50 80191A50 0000A28E */  lw         $v0, 0x0($s5)
    /* 9FE54 80191A54 00000000 */  nop
    /* 9FE58 80191A58 07004010 */  beqz       $v0, .L80191A78
    /* 9FE5C 80191A5C 02000424 */   addiu     $a0, $zero, 0x2
    /* 9FE60 80191A60 21282002 */  addu       $a1, $s1, $zero
    /* 9FE64 80191A64 21300000 */  addu       $a2, $zero, $zero
    /* 9FE68 80191A68 D142060C */  jal        func_80190B44
    /* 9FE6C 80191A6C 21380000 */   addu      $a3, $zero, $zero
    /* 9FE70 80191A70 0A004014 */  bnez       $v0, .L80191A9C
    /* 9FE74 80191A74 00000000 */   nop
  .L80191A78:
    /* 9FE78 80191A78 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9FE7C 80191A7C ECB934AC */  sw         $s4, %lo(D_8019B9EC)($at)
    /* 9FE80 80191A80 FF006432 */  andi       $a0, $s3, 0xFF
    /* 9FE84 80191A84 21282002 */  addu       $a1, $s1, $zero
    /* 9FE88 80191A88 21300000 */  addu       $a2, $zero, $zero
    /* 9FE8C 80191A8C D142060C */  jal        func_80190B44
    /* 9FE90 80191A90 01000724 */   addiu     $a3, $zero, 0x1
    /* 9FE94 80191A94 08004010 */  beqz       $v0, .L80191AB8
    /* 9FE98 80191A98 0100C226 */   addiu     $v0, $s6, 0x1
  .L80191A9C:
    /* 9FE9C 80191A9C FFFF1026 */  addiu      $s0, $s0, -0x1
    /* 9FEA0 80191AA0 DCFF1716 */  bne        $s0, $s7, .L80191A14
    /* 9FEA4 80191AA4 00000000 */   nop
    /* 9FEA8 80191AA8 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9FEAC 80191AAC ECB934AC */  sw         $s4, %lo(D_8019B9EC)($at)
    /* 9FEB0 80191AB0 FFFF1624 */  addiu      $s6, $zero, -0x1
    /* 9FEB4 80191AB4 0100C226 */  addiu      $v0, $s6, 0x1
  .L80191AB8:
    /* 9FEB8 80191AB8 3400BF8F */  lw         $ra, 0x34($sp)
    /* 9FEBC 80191ABC 3000BE8F */  lw         $fp, 0x30($sp)
    /* 9FEC0 80191AC0 2C00B78F */  lw         $s7, 0x2C($sp)
    /* 9FEC4 80191AC4 2800B68F */  lw         $s6, 0x28($sp)
    /* 9FEC8 80191AC8 2400B58F */  lw         $s5, 0x24($sp)
    /* 9FECC 80191ACC 2000B48F */  lw         $s4, 0x20($sp)
    /* 9FED0 80191AD0 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 9FED4 80191AD4 1800B28F */  lw         $s2, 0x18($sp)
    /* 9FED8 80191AD8 1400B18F */  lw         $s1, 0x14($sp)
    /* 9FEDC 80191ADC 1000B08F */  lw         $s0, 0x10($sp)
    /* 9FEE0 80191AE0 0800E003 */  jr         $ra
    /* 9FEE4 80191AE4 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_801919B4
