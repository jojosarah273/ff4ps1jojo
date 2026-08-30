nonmatching func_8015C54C, 0xB8

glabel func_8015C54C
    /* 6A94C 8015C54C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6A950 8015C550 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6A954 8015C554 8CD9030C */  jal        func_800F6630
    /* 6A958 8015C558 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 6A95C 8015C55C 5DD5030C */  jal        func_800F5574
    /* 6A960 8015C560 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6A964 8015C564 F5D4030C */  jal        func_800F53D4
    /* 6A968 8015C568 00000000 */   nop
    /* 6A96C 8015C56C 1D004014 */  bnez       $v0, .L8015C5E4
    /* 6A970 8015C570 00000000 */   nop
    /* 6A974 8015C574 374B050C */  jal        func_80152CDC
    /* 6A978 8015C578 00000000 */   nop
    /* 6A97C 8015C57C 9CDC030C */  jal        func_800F7270
    /* 6A980 8015C580 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6A984 8015C584 DADA030C */  jal        func_800F6B68
    /* 6A988 8015C588 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6A98C 8015C58C 92D0030C */  jal        func_800F4248
    /* 6A990 8015C590 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6A994 8015C594 48D0030C */  jal        func_800F4120
    /* 6A998 8015C598 02020424 */   addiu     $a0, $zero, 0x202
    /* 6A99C 8015C59C 11004014 */  bnez       $v0, .L8015C5E4
    /* 6A9A0 8015C5A0 00000000 */   nop
    /* 6A9A4 8015C5A4 DADA030C */  jal        func_800F6B68
    /* 6A9A8 8015C5A8 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6A9AC 8015C5AC 92D0030C */  jal        func_800F4248
    /* 6A9B0 8015C5B0 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 6A9B4 8015C5B4 48D0030C */  jal        func_800F4120
    /* 6A9B8 8015C5B8 02020424 */   addiu     $a0, $zero, 0x202
    /* 6A9BC 8015C5BC 09004014 */  bnez       $v0, .L8015C5E4
    /* 6A9C0 8015C5C0 00000000 */   nop
    /* 6A9C4 8015C5C4 DADA030C */  jal        func_800F6B68
    /* 6A9C8 8015C5C8 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6A9CC 8015C5CC 92D0030C */  jal        func_800F4248
    /* 6A9D0 8015C5D0 C6000424 */   addiu     $a0, $zero, 0xC6
    /* 6A9D4 8015C5D4 48D0030C */  jal        func_800F4120
    /* 6A9D8 8015C5D8 02000424 */   addiu     $a0, $zero, 0x2
    /* 6A9DC 8015C5DC 05004014 */  bnez       $v0, .L8015C5F4
    /* 6A9E0 8015C5E0 00000000 */   nop
  .L8015C5E4:
    /* 6A9E4 8015C5E4 53D9030C */  jal        func_800F654C
    /* 6A9E8 8015C5E8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6A9EC 8015C5EC 93E0030C */  jal        func_800F824C
    /* 6A9F0 8015C5F0 D0000424 */   addiu     $a0, $zero, 0xD0
  .L8015C5F4:
    /* 6A9F4 8015C5F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6A9F8 8015C5F8 00000000 */  nop
    /* 6A9FC 8015C5FC 0800E003 */  jr         $ra
    /* 6AA00 8015C600 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015C54C
