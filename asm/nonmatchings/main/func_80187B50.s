nonmatching func_80187B50, 0xD0

glabel func_80187B50
    /* 95F50 80187B50 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 95F54 80187B54 1400B1AF */  sw         $s1, 0x14($sp)
    /* 95F58 80187B58 21888000 */  addu       $s1, $a0, $zero
    /* 95F5C 80187B5C 1800BFAF */  sw         $ra, 0x18($sp)
    /* 95F60 80187B60 9020060C */  jal        func_80188240
    /* 95F64 80187B64 1000B0AF */   sw        $s0, 0x10($sp)
    /* 95F68 80187B68 1A80043C */  lui        $a0, %hi(D_8019ED20)
    /* 95F6C 80187B6C 20ED8424 */  addiu      $a0, $a0, %lo(D_8019ED20)
    /* 95F70 80187B70 21804000 */  addu       $s0, $v0, $zero
    /* 95F74 80187B74 104F060C */  jal        func_80193C40
    /* 95F78 80187B78 21280002 */   addu      $a1, $s0, $zero
    /* 95F7C 80187B7C 494E060C */  jal        func_80193924
    /* 95F80 80187B80 FFFF0424 */   addiu     $a0, $zero, -0x1
    /* 95F84 80187B84 02000324 */  addiu      $v1, $zero, 0x2
    /* 95F88 80187B88 0C000312 */  beq        $s0, $v1, .L80187BBC
    /* 95F8C 80187B8C 0300022A */   slti      $v0, $s0, 0x3
    /* 95F90 80187B90 05004010 */  beqz       $v0, .L80187BA8
    /* 95F94 80187B94 01000224 */   addiu     $v0, $zero, 0x1
    /* 95F98 80187B98 0D000212 */  beq        $s0, $v0, .L80187BD0
    /* 95F9C 80187B9C 00000000 */   nop
    /* 95FA0 80187BA0 FD1E0608 */  j          .L80187BF4
    /* 95FA4 80187BA4 00000000 */   nop
  .L80187BA8:
    /* 95FA8 80187BA8 03000224 */  addiu      $v0, $zero, 0x3
    /* 95FAC 80187BAC 0C000212 */  beq        $s0, $v0, .L80187BE0
    /* 95FB0 80187BB0 01000224 */   addiu     $v0, $zero, 0x1
    /* 95FB4 80187BB4 FD1E0608 */  j          .L80187BF4
    /* 95FB8 80187BB8 00000000 */   nop
  .L80187BBC:
    /* 95FBC 80187BBC 02001024 */  addiu      $s0, $zero, 0x2
  .L80187BC0:
    /* 95FC0 80187BC0 9020060C */  jal        func_80188240
    /* 95FC4 80187BC4 00000000 */   nop
    /* 95FC8 80187BC8 FDFF5010 */  beq        $v0, $s0, .L80187BC0
    /* 95FCC 80187BCC 00000000 */   nop
  .L80187BD0:
    /* 95FD0 80187BD0 6B20060C */  jal        func_801881AC
    /* 95FD4 80187BD4 00000000 */   nop
    /* 95FD8 80187BD8 FD1E0608 */  j          .L80187BF4
    /* 95FDC 80187BDC 01000224 */   addiu     $v0, $zero, 0x1
  .L80187BE0:
    /* 95FE0 80187BE0 03001024 */  addiu      $s0, $zero, 0x3
  .L80187BE4:
    /* 95FE4 80187BE4 9020060C */  jal        func_80188240
    /* 95FE8 80187BE8 00000000 */   nop
    /* 95FEC 80187BEC FDFF5010 */  beq        $v0, $s0, .L80187BE4
    /* 95FF0 80187BF0 01000224 */   addiu     $v0, $zero, 0x1
  .L80187BF4:
    /* 95FF4 80187BF4 05002216 */  bne        $s1, $v0, .L80187C0C
    /* 95FF8 80187BF8 00000000 */   nop
  .L80187BFC:
    /* 95FFC 80187BFC 9020060C */  jal        func_80188240
    /* 96000 80187C00 00000000 */   nop
    /* 96004 80187C04 FDFF4014 */  bnez       $v0, .L80187BFC
    /* 96008 80187C08 00000000 */   nop
  .L80187C0C:
    /* 9600C 80187C0C 1800BF8F */  lw         $ra, 0x18($sp)
    /* 96010 80187C10 1400B18F */  lw         $s1, 0x14($sp)
    /* 96014 80187C14 1000B08F */  lw         $s0, 0x10($sp)
    /* 96018 80187C18 0800E003 */  jr         $ra
    /* 9601C 80187C1C 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80187B50
