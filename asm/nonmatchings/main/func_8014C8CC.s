nonmatching func_8014C8CC, 0xA0

glabel func_8014C8CC
    /* 5ACCC 8014C8CC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5ACD0 8014C8D0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5ACD4 8014C8D4 77DC030C */  jal        func_800F71DC
    /* 5ACD8 8014C8D8 21200000 */   addu      $a0, $zero, $zero
  .L8014C8DC:
    /* 5ACDC 8014C8DC DADA030C */  jal        func_800F6B68
    /* 5ACE0 8014C8E0 B0ED0434 */   ori       $a0, $zero, 0xEDB0
    /* 5ACE4 8014C8E4 93E0030C */  jal        func_800F824C
    /* 5ACE8 8014C8E8 21200000 */   addu      $a0, $zero, $zero
    /* 5ACEC 8014C8EC DADA030C */  jal        func_800F6B68
    /* 5ACF0 8014C8F0 B1ED0434 */   ori       $a0, $zero, 0xEDB1
    /* 5ACF4 8014C8F4 93E0030C */  jal        func_800F824C
    /* 5ACF8 8014C8F8 01000424 */   addiu     $a0, $zero, 0x1
    /* 5ACFC 8014C8FC 53D9030C */  jal        func_800F654C
    /* 5AD00 8014C900 01000424 */   addiu     $a0, $zero, 0x1
    /* 5AD04 8014C904 4553020C */  jal        func_80094D14
    /* 5AD08 8014C908 00000000 */   nop
    /* 5AD0C 8014C90C 8CD9030C */  jal        func_800F6630
    /* 5AD10 8014C910 21200000 */   addu      $a0, $zero, $zero
    /* 5AD14 8014C914 DAE1030C */  jal        func_800F8768
    /* 5AD18 8014C918 B0ED0434 */   ori       $a0, $zero, 0xEDB0
    /* 5AD1C 8014C91C 8CD9030C */  jal        func_800F6630
    /* 5AD20 8014C920 01000424 */   addiu     $a0, $zero, 0x1
    /* 5AD24 8014C924 DAE1030C */  jal        func_800F8768
    /* 5AD28 8014C928 B1ED0434 */   ori       $a0, $zero, 0xEDB1
    /* 5AD2C 8014C92C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5AD30 8014C930 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5AD34 8014C934 00000000 */  nop
    /* 5AD38 8014C938 00006294 */  lhu        $v0, 0x0($v1)
    /* 5AD3C 8014C93C 80000424 */  addiu      $a0, $zero, 0x80
    /* 5AD40 8014C940 02004224 */  addiu      $v0, $v0, 0x2
    /* 5AD44 8014C944 56D6030C */  jal        func_800F5958
    /* 5AD48 8014C948 000062A4 */   sh        $v0, 0x0($v1)
    /* 5AD4C 8014C94C F5D4030C */  jal        func_800F53D4
    /* 5AD50 8014C950 00000000 */   nop
    /* 5AD54 8014C954 E1FF4010 */  beqz       $v0, .L8014C8DC
    /* 5AD58 8014C958 00000000 */   nop
    /* 5AD5C 8014C95C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5AD60 8014C960 00000000 */  nop
    /* 5AD64 8014C964 0800E003 */  jr         $ra
    /* 5AD68 8014C968 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014C8CC
