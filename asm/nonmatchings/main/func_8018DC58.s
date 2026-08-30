nonmatching func_8018DC58, 0x80

glabel func_8018DC58
    /* 9C058 8018DC58 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9C05C 8018DC5C 21188000 */  addu       $v1, $a0, $zero
    /* 9C060 8018DC60 1A80023C */  lui        $v0, %hi(D_8019B584)
    /* 9C064 8018DC64 84B5428C */  lw         $v0, %lo(D_8019B584)($v0)
    /* 9C068 8018DC68 2120A000 */  addu       $a0, $a1, $zero
    /* 9C06C 8018DC6C 03004014 */  bnez       $v0, .L8018DC7C
    /* 9C070 8018DC70 1000BFAF */   sw        $ra, 0x10($sp)
    /* 9C074 8018DC74 32370608 */  j          .L8018DCC8
    /* 9C078 8018DC78 21100000 */   addu      $v0, $zero, $zero
  .L8018DC7C:
    /* 9C07C 8018DC7C FF00023C */  lui        $v0, (0xFFFFFF >> 16)
    /* 9C080 8018DC80 FFFF4234 */  ori        $v0, $v0, (0xFFFFFF & 0xFFFF)
    /* 9C084 8018DC84 24208200 */  and        $a0, $a0, $v0
    /* 9C088 8018DC88 0F008010 */  beqz       $a0, .L8018DCC8
    /* 9C08C 8018DC8C FEFF0224 */   addiu     $v0, $zero, -0x2
    /* 9C090 8018DC90 04000224 */  addiu      $v0, $zero, 0x4
    /* 9C094 8018DC94 05006214 */  bne        $v1, $v0, .L8018DCAC
    /* 9C098 8018DC98 04006228 */   slti      $v0, $v1, 0x4
    /* 9C09C 8018DC9C FE33060C */  jal        func_8018CFF8
    /* 9C0A0 8018DCA0 00000000 */   nop
    /* 9C0A4 8018DCA4 32370608 */  j          .L8018DCC8
    /* 9C0A8 8018DCA8 00000000 */   nop
  .L8018DCAC:
    /* 9C0AC 8018DCAC 06004014 */  bnez       $v0, .L8018DCC8
    /* 9C0B0 8018DCB0 FEFF0224 */   addiu     $v0, $zero, -0x2
    /* 9C0B4 8018DCB4 07006228 */  slti       $v0, $v1, 0x7
    /* 9C0B8 8018DCB8 03004010 */  beqz       $v0, .L8018DCC8
    /* 9C0BC 8018DCBC FEFF0224 */   addiu     $v0, $zero, -0x2
    /* 9C0C0 8018DCC0 AD36060C */  jal        func_8018DAB4
    /* 9C0C4 8018DCC4 00000000 */   nop
  .L8018DCC8:
    /* 9C0C8 8018DCC8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9C0CC 8018DCCC 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9C0D0 8018DCD0 0800E003 */  jr         $ra
    /* 9C0D4 8018DCD4 00000000 */   nop
endlabel func_8018DC58
