nonmatching func_80191878, 0x13C

glabel func_80191878
    /* 9FC78 80191878 C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 9FC7C 8019187C 1400B1AF */  sw         $s1, 0x14($sp)
    /* 9FC80 80191880 2188A000 */  addu       $s1, $a1, $zero
    /* 9FC84 80191884 1800B2AF */  sw         $s2, 0x18($sp)
    /* 9FC88 80191888 2190C000 */  addu       $s2, $a2, $zero
    /* 9FC8C 8019188C 2000B4AF */  sw         $s4, 0x20($sp)
    /* 9FC90 80191890 21A08000 */  addu       $s4, $a0, $zero
    /* 9FC94 80191894 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9FC98 80191898 03001024 */  addiu      $s0, $zero, 0x3
    /* 9FC9C 8019189C 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 9FCA0 801918A0 FF009332 */  andi       $s3, $s4, 0xFF
    /* 9FCA4 801918A4 1A80033C */  lui        $v1, %hi(D_8019BCF4)
    /* 9FCA8 801918A8 F4BC6324 */  addiu      $v1, $v1, %lo(D_8019BCF4)
    /* 9FCAC 801918AC 2400B5AF */  sw         $s5, 0x24($sp)
    /* 9FCB0 801918B0 1A80153C */  lui        $s5, %hi(D_8019B9EC)
    /* 9FCB4 801918B4 ECB9B58E */  lw         $s5, %lo(D_8019B9EC)($s5)
    /* 9FCB8 801918B8 80101300 */  sll        $v0, $s3, 2
    /* 9FCBC 801918BC 2800B6AF */  sw         $s6, 0x28($sp)
    /* 9FCC0 801918C0 21B04300 */  addu       $s6, $v0, $v1
    /* 9FCC4 801918C4 2C00B7AF */  sw         $s7, 0x2C($sp)
    /* 9FCC8 801918C8 21B80000 */  addu       $s7, $zero, $zero
    /* 9FCCC 801918CC 3000BEAF */  sw         $fp, 0x30($sp)
    /* 9FCD0 801918D0 FFFF1E24 */  addiu      $fp, $zero, -0x1
    /* 9FCD4 801918D4 3400BFAF */  sw         $ra, 0x34($sp)
  .L801918D8:
    /* 9FCD8 801918D8 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9FCDC 801918DC ECB920AC */  sw         $zero, %lo(D_8019B9EC)($at)
    /* 9FCE0 801918E0 01000824 */  addiu      $t0, $zero, 0x1
    /* 9FCE4 801918E4 0B006812 */  beq        $s3, $t0, .L80191914
    /* 9FCE8 801918E8 00000000 */   nop
    /* 9FCEC 801918EC 1A80023C */  lui        $v0, %hi(D_8019B9F8)
    /* 9FCF0 801918F0 F8B94290 */  lbu        $v0, %lo(D_8019B9F8)($v0)
    /* 9FCF4 801918F4 00000000 */  nop
    /* 9FCF8 801918F8 10004230 */  andi       $v0, $v0, 0x10
    /* 9FCFC 801918FC 05004010 */  beqz       $v0, .L80191914
    /* 9FD00 80191900 01000424 */   addiu     $a0, $zero, 0x1
    /* 9FD04 80191904 21280000 */  addu       $a1, $zero, $zero
    /* 9FD08 80191908 21300000 */  addu       $a2, $zero, $zero
    /* 9FD0C 8019190C D142060C */  jal        func_80190B44
    /* 9FD10 80191910 21380000 */   addu      $a3, $zero, $zero
  .L80191914:
    /* 9FD14 80191914 0B002012 */  beqz       $s1, .L80191944
    /* 9FD18 80191918 00000000 */   nop
    /* 9FD1C 8019191C 0000C28E */  lw         $v0, 0x0($s6)
    /* 9FD20 80191920 00000000 */  nop
    /* 9FD24 80191924 07004010 */  beqz       $v0, .L80191944
    /* 9FD28 80191928 02000424 */   addiu     $a0, $zero, 0x2
    /* 9FD2C 8019192C 21282002 */  addu       $a1, $s1, $zero
    /* 9FD30 80191930 21304002 */  addu       $a2, $s2, $zero
    /* 9FD34 80191934 D142060C */  jal        func_80190B44
    /* 9FD38 80191938 21380000 */   addu      $a3, $zero, $zero
    /* 9FD3C 8019193C 0A004014 */  bnez       $v0, .L80191968
    /* 9FD40 80191940 00000000 */   nop
  .L80191944:
    /* 9FD44 80191944 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9FD48 80191948 ECB935AC */  sw         $s5, %lo(D_8019B9EC)($at)
    /* 9FD4C 8019194C FF008432 */  andi       $a0, $s4, 0xFF
    /* 9FD50 80191950 21282002 */  addu       $a1, $s1, $zero
    /* 9FD54 80191954 21304002 */  addu       $a2, $s2, $zero
    /* 9FD58 80191958 D142060C */  jal        func_80190B44
    /* 9FD5C 8019195C 21380000 */   addu      $a3, $zero, $zero
    /* 9FD60 80191960 08004010 */  beqz       $v0, .L80191984
    /* 9FD64 80191964 0100E226 */   addiu     $v0, $s7, 0x1
  .L80191968:
    /* 9FD68 80191968 FFFF1026 */  addiu      $s0, $s0, -0x1
    /* 9FD6C 8019196C DAFF1E16 */  bne        $s0, $fp, .L801918D8
    /* 9FD70 80191970 00000000 */   nop
    /* 9FD74 80191974 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9FD78 80191978 ECB935AC */  sw         $s5, %lo(D_8019B9EC)($at)
    /* 9FD7C 8019197C FFFF1724 */  addiu      $s7, $zero, -0x1
    /* 9FD80 80191980 0100E226 */  addiu      $v0, $s7, 0x1
  .L80191984:
    /* 9FD84 80191984 3400BF8F */  lw         $ra, 0x34($sp)
    /* 9FD88 80191988 3000BE8F */  lw         $fp, 0x30($sp)
    /* 9FD8C 8019198C 2C00B78F */  lw         $s7, 0x2C($sp)
    /* 9FD90 80191990 2800B68F */  lw         $s6, 0x28($sp)
    /* 9FD94 80191994 2400B58F */  lw         $s5, 0x24($sp)
    /* 9FD98 80191998 2000B48F */  lw         $s4, 0x20($sp)
    /* 9FD9C 8019199C 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 9FDA0 801919A0 1800B28F */  lw         $s2, 0x18($sp)
    /* 9FDA4 801919A4 1400B18F */  lw         $s1, 0x14($sp)
    /* 9FDA8 801919A8 1000B08F */  lw         $s0, 0x10($sp)
    /* 9FDAC 801919AC 0800E003 */  jr         $ra
    /* 9FDB0 801919B0 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_80191878
