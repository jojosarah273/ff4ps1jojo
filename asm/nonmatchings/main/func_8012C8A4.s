nonmatching func_8012C8A4, 0xDC

glabel func_8012C8A4
    /* 3ACA4 8012C8A4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3ACA8 8012C8A8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3ACAC 8012C8AC 59D9030C */  jal        func_800F6564
    /* 3ACB0 8012C8B0 3B1B0424 */   addiu     $a0, $zero, 0x1B3B
    /* 3ACB4 8012C8B4 20D5030C */  jal        func_800F5480
    /* 3ACB8 8012C8B8 00000000 */   nop
    /* 3ACBC 8012C8BC 16E0030C */  jal        func_800F8058
    /* 3ACC0 8012C8C0 D5000424 */   addiu     $a0, $zero, 0xD5
    /* 3ACC4 8012C8C4 50D4030C */  jal        func_800F5140
    /* 3ACC8 8012C8C8 00000000 */   nop
    /* 3ACCC 8012C8CC 93E0030C */  jal        func_800F824C
    /* 3ACD0 8012C8D0 43000424 */   addiu     $a0, $zero, 0x43
    /* 3ACD4 8012C8D4 9CDC030C */  jal        func_800F7270
    /* 3ACD8 8012C8D8 43000424 */   addiu     $a0, $zero, 0x43
    /* 3ACDC 8012C8DC 40DD030C */  jal        func_800F7500
    /* 3ACE0 8012C8E0 03000424 */   addiu     $a0, $zero, 0x3
    /* 3ACE4 8012C8E4 91E5030C */  jal        func_800F9644
    /* 3ACE8 8012C8E8 20000424 */   addiu     $a0, $zero, 0x20
    /* 3ACEC 8012C8EC D9D9030C */  jal        func_800F6764
    /* 3ACF0 8012C8F0 60000424 */   addiu     $a0, $zero, 0x60
    /* 3ACF4 8012C8F4 9DE0030C */  jal        func_800F8274
    /* 3ACF8 8012C8F8 45000424 */   addiu     $a0, $zero, 0x45
    /* 3ACFC 8012C8FC 1E00043C */  lui        $a0, (0x1EFEC3 >> 16)
    /* 3AD00 8012C900 C7D2030C */  jal        func_800F4B1C
    /* 3AD04 8012C904 C3FE8434 */   ori       $a0, $a0, (0x1EFEC3 & 0xFFFF)
    /* 3AD08 8012C908 DEE0030C */  jal        func_800F8378
    /* 3AD0C 8012C90C 60000424 */   addiu     $a0, $zero, 0x60
    /* 3AD10 8012C910 0FCF030C */  jal        func_800F3C3C
    /* 3AD14 8012C914 45000424 */   addiu     $a0, $zero, 0x45
    /* 3AD18 8012C918 48D5030C */  jal        func_800F5520
    /* 3AD1C 8012C91C 21204000 */   addu      $a0, $v0, $zero
    /* 3AD20 8012C920 F5D4030C */  jal        func_800F53D4
    /* 3AD24 8012C924 00000000 */   nop
    /* 3AD28 8012C928 07004014 */  bnez       $v0, .L8012C948
    /* 3AD2C 8012C92C 00000000 */   nop
    /* 3AD30 8012C930 98E5030C */  jal        func_800F9660
    /* 3AD34 8012C934 20000424 */   addiu     $a0, $zero, 0x20
    /* 3AD38 8012C938 7B88040C */  jal        func_801221EC
    /* 3AD3C 8012C93C 00000000 */   nop
    /* 3AD40 8012C940 5CB20408 */  j          .L8012C970
    /* 3AD44 8012C944 00000000 */   nop
  .L8012C948:
    /* 3AD48 8012C948 98E5030C */  jal        func_800F9660
    /* 3AD4C 8012C94C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3AD50 8012C950 1A80033C */  lui        $v1, %hi(D_801991AE)
    /* 3AD54 8012C954 AE916494 */  lhu        $a0, %lo(D_801991AE)($v1)
    /* 3AD58 8012C958 40DD030C */  jal        func_800F7500
    /* 3AD5C 8012C95C 00000000 */   nop
    /* 3AD60 8012C960 BEB0040C */  jal        func_8012C2F8
    /* 3AD64 8012C964 00000000 */   nop
    /* 3AD68 8012C968 60B2040C */  jal        func_8012C980
    /* 3AD6C 8012C96C 00000000 */   nop
  .L8012C970:
    /* 3AD70 8012C970 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3AD74 8012C974 00000000 */  nop
    /* 3AD78 8012C978 0800E003 */  jr         $ra
    /* 3AD7C 8012C97C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C8A4
