nonmatching func_80191AE8, 0x14C

glabel func_80191AE8
    /* 9FEE8 80191AE8 C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 9FEEC 80191AEC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 9FEF0 80191AF0 2188A000 */  addu       $s1, $a1, $zero
    /* 9FEF4 80191AF4 1800B2AF */  sw         $s2, 0x18($sp)
    /* 9FEF8 80191AF8 2190C000 */  addu       $s2, $a2, $zero
    /* 9FEFC 80191AFC 2000B4AF */  sw         $s4, 0x20($sp)
    /* 9FF00 80191B00 21A08000 */  addu       $s4, $a0, $zero
    /* 9FF04 80191B04 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9FF08 80191B08 03001024 */  addiu      $s0, $zero, 0x3
    /* 9FF0C 80191B0C 3000BEAF */  sw         $fp, 0x30($sp)
    /* 9FF10 80191B10 01001E24 */  addiu      $fp, $zero, 0x1
    /* 9FF14 80191B14 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 9FF18 80191B18 FF009332 */  andi       $s3, $s4, 0xFF
    /* 9FF1C 80191B1C 1A80033C */  lui        $v1, %hi(D_8019BCF4)
    /* 9FF20 80191B20 F4BC6324 */  addiu      $v1, $v1, %lo(D_8019BCF4)
    /* 9FF24 80191B24 2400B5AF */  sw         $s5, 0x24($sp)
    /* 9FF28 80191B28 1A80153C */  lui        $s5, %hi(D_8019B9EC)
    /* 9FF2C 80191B2C ECB9B58E */  lw         $s5, %lo(D_8019B9EC)($s5)
    /* 9FF30 80191B30 80101300 */  sll        $v0, $s3, 2
    /* 9FF34 80191B34 2800B6AF */  sw         $s6, 0x28($sp)
    /* 9FF38 80191B38 21B04300 */  addu       $s6, $v0, $v1
    /* 9FF3C 80191B3C 2C00B7AF */  sw         $s7, 0x2C($sp)
    /* 9FF40 80191B40 FFFF1724 */  addiu      $s7, $zero, -0x1
    /* 9FF44 80191B44 3400BFAF */  sw         $ra, 0x34($sp)
  .L80191B48:
    /* 9FF48 80191B48 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9FF4C 80191B4C 0B007E12 */  beq        $s3, $fp, .L80191B7C
    /* 9FF50 80191B50 ECB920AC */   sw        $zero, %lo(D_8019B9EC)($at)
    /* 9FF54 80191B54 1A80023C */  lui        $v0, %hi(D_8019B9F8)
    /* 9FF58 80191B58 F8B94290 */  lbu        $v0, %lo(D_8019B9F8)($v0)
    /* 9FF5C 80191B5C 00000000 */  nop
    /* 9FF60 80191B60 10004230 */  andi       $v0, $v0, 0x10
    /* 9FF64 80191B64 05004010 */  beqz       $v0, .L80191B7C
    /* 9FF68 80191B68 01000424 */   addiu     $a0, $zero, 0x1
    /* 9FF6C 80191B6C 21280000 */  addu       $a1, $zero, $zero
    /* 9FF70 80191B70 21300000 */  addu       $a2, $zero, $zero
    /* 9FF74 80191B74 D142060C */  jal        func_80190B44
    /* 9FF78 80191B78 21380000 */   addu      $a3, $zero, $zero
  .L80191B7C:
    /* 9FF7C 80191B7C 0B002012 */  beqz       $s1, .L80191BAC
    /* 9FF80 80191B80 00000000 */   nop
    /* 9FF84 80191B84 0000C28E */  lw         $v0, 0x0($s6)
    /* 9FF88 80191B88 00000000 */  nop
    /* 9FF8C 80191B8C 07004010 */  beqz       $v0, .L80191BAC
    /* 9FF90 80191B90 02000424 */   addiu     $a0, $zero, 0x2
    /* 9FF94 80191B94 21282002 */  addu       $a1, $s1, $zero
    /* 9FF98 80191B98 21304002 */  addu       $a2, $s2, $zero
    /* 9FF9C 80191B9C D142060C */  jal        func_80190B44
    /* 9FFA0 80191BA0 21380000 */   addu      $a3, $zero, $zero
    /* 9FFA4 80191BA4 0A004014 */  bnez       $v0, .L80191BD0
    /* 9FFA8 80191BA8 00000000 */   nop
  .L80191BAC:
    /* 9FFAC 80191BAC 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9FFB0 80191BB0 ECB935AC */  sw         $s5, %lo(D_8019B9EC)($at)
    /* 9FFB4 80191BB4 FF008432 */  andi       $a0, $s4, 0xFF
    /* 9FFB8 80191BB8 21282002 */  addu       $a1, $s1, $zero
    /* 9FFBC 80191BBC 21304002 */  addu       $a2, $s2, $zero
    /* 9FFC0 80191BC0 D142060C */  jal        func_80190B44
    /* 9FFC4 80191BC4 21380000 */   addu      $a3, $zero, $zero
    /* 9FFC8 80191BC8 06004010 */  beqz       $v0, .L80191BE4
    /* 9FFCC 80191BCC 21100000 */   addu      $v0, $zero, $zero
  .L80191BD0:
    /* 9FFD0 80191BD0 FFFF1026 */  addiu      $s0, $s0, -0x1
    /* 9FFD4 80191BD4 DCFF1716 */  bne        $s0, $s7, .L80191B48
    /* 9FFD8 80191BD8 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* 9FFDC 80191BDC 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9FFE0 80191BE0 ECB935AC */  sw         $s5, %lo(D_8019B9EC)($at)
  .L80191BE4:
    /* 9FFE4 80191BE4 06004014 */  bnez       $v0, .L80191C00
    /* 9FFE8 80191BE8 21200000 */   addu      $a0, $zero, $zero
    /* 9FFEC 80191BEC 7F41060C */  jal        func_801905FC
    /* 9FFF0 80191BF0 21284002 */   addu      $a1, $s2, $zero
    /* 9FFF4 80191BF4 02004238 */  xori       $v0, $v0, 0x2
    /* 9FFF8 80191BF8 01470608 */  j          .L80191C04
    /* 9FFFC 80191BFC 0100422C */   sltiu     $v0, $v0, 0x1
  .L80191C00:
    /* A0000 80191C00 21100000 */  addu       $v0, $zero, $zero
  .L80191C04:
    /* A0004 80191C04 3400BF8F */  lw         $ra, 0x34($sp)
    /* A0008 80191C08 3000BE8F */  lw         $fp, 0x30($sp)
    /* A000C 80191C0C 2C00B78F */  lw         $s7, 0x2C($sp)
    /* A0010 80191C10 2800B68F */  lw         $s6, 0x28($sp)
    /* A0014 80191C14 2400B58F */  lw         $s5, 0x24($sp)
    /* A0018 80191C18 2000B48F */  lw         $s4, 0x20($sp)
    /* A001C 80191C1C 1C00B38F */  lw         $s3, 0x1C($sp)
    /* A0020 80191C20 1800B28F */  lw         $s2, 0x18($sp)
    /* A0024 80191C24 1400B18F */  lw         $s1, 0x14($sp)
    /* A0028 80191C28 1000B08F */  lw         $s0, 0x10($sp)
    /* A002C 80191C2C 0800E003 */  jr         $ra
    /* A0030 80191C30 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_80191AE8
    /* A0034 80191C34 00000000 */  nop
