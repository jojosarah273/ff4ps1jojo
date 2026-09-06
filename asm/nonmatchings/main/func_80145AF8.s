nonmatching func_80145AF8, 0x98

glabel func_80145AF8
    /* 53EF8 80145AF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 53EFC 80145AFC 00240400 */  sll        $a0, $a0, 16
    /* 53F00 80145B00 03240400 */  sra        $a0, $a0, 16
    /* 53F04 80145B04 06008010 */  beqz       $a0, .L80145B20
    /* 53F08 80145B08 1000BFAF */   sw        $ra, 0x10($sp)
    /* 53F0C 80145B0C 01000224 */  addiu      $v0, $zero, 0x1
    /* 53F10 80145B10 0D008210 */  beq        $a0, $v0, .L80145B48
    /* 53F14 80145B14 00000000 */   nop
    /* 53F18 80145B18 DA160508 */  j          .L80145B68
    /* 53F1C 80145B1C 00000000 */   nop
  .L80145B20:
    /* 53F20 80145B20 53D9030C */  jal        func_800F654C
    /* 53F24 80145B24 40000424 */   addiu     $a0, $zero, 0x40
    /* 53F28 80145B28 93E0030C */  jal        func_800F824C
    /* 53F2C 80145B2C 45000424 */   addiu     $a0, $zero, 0x45
    /* 53F30 80145B30 53D9030C */  jal        func_800F654C
    /* 53F34 80145B34 50000424 */   addiu     $a0, $zero, 0x50
    /* 53F38 80145B38 93E0030C */  jal        func_800F824C
    /* 53F3C 80145B3C 46000424 */   addiu     $a0, $zero, 0x46
    /* 53F40 80145B40 DA160508 */  j          .L80145B68
    /* 53F44 80145B44 00000000 */   nop
  .L80145B48:
    /* 53F48 80145B48 53D9030C */  jal        func_800F654C
    /* 53F4C 80145B4C 80000424 */   addiu     $a0, $zero, 0x80
    /* 53F50 80145B50 93E0030C */  jal        func_800F824C
    /* 53F54 80145B54 45000424 */   addiu     $a0, $zero, 0x45
    /* 53F58 80145B58 53D9030C */  jal        func_800F654C
    /* 53F5C 80145B5C 50000424 */   addiu     $a0, $zero, 0x50
    /* 53F60 80145B60 93E0030C */  jal        func_800F824C
    /* 53F64 80145B64 46000424 */   addiu     $a0, $zero, 0x46
  .L80145B68:
    /* 53F68 80145B68 B57D040C */  jal        func_8011F6D4
    /* 53F6C 80145B6C 00000000 */   nop
    /* 53F70 80145B70 A17D040C */  jal        func_8011F684
    /* 53F74 80145B74 00000000 */   nop
    /* 53F78 80145B78 217E040C */  jal        func_8011F884
    /* 53F7C 80145B7C 00000000 */   nop
    /* 53F80 80145B80 1000BF8F */  lw         $ra, 0x10($sp)
    /* 53F84 80145B84 00000000 */  nop
    /* 53F88 80145B88 0800E003 */  jr         $ra
    /* 53F8C 80145B8C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80145AF8
