nonmatching func_8018CAD8, 0xA4

glabel func_8018CAD8
    /* 9AED8 8018CAD8 1A80023C */  lui        $v0, %hi(D_8019B0A4)
    /* 9AEDC 8018CADC A4B0428C */  lw         $v0, %lo(D_8019B0A4)($v0)
    /* 9AEE0 8018CAE0 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 9AEE4 8018CAE4 1400B1AF */  sw         $s1, 0x14($sp)
    /* 9AEE8 8018CAE8 21888000 */  addu       $s1, $a0, $zero
    /* 9AEEC 8018CAEC 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9AEF0 8018CAF0 01001024 */  addiu      $s0, $zero, 0x1
    /* 9AEF4 8018CAF4 06005010 */  beq        $v0, $s0, .L8018CB10
    /* 9AEF8 8018CAF8 1800BFAF */   sw        $ra, 0x18($sp)
    /* 9AEFC 8018CAFC 1A80023C */  lui        $v0, %hi(D_8019B148)
    /* 9AF00 8018CB00 48B1428C */  lw         $v0, %lo(D_8019B148)($v0)
    /* 9AF04 8018CB04 00000000 */  nop
    /* 9AF08 8018CB08 03005014 */  bne        $v0, $s0, .L8018CB18
    /* 9AF0C 8018CB0C 00000000 */   nop
  .L8018CB10:
    /* 9AF10 8018CB10 DA320608 */  j          .L8018CB68
    /* 9AF14 8018CB14 01000224 */   addiu     $v0, $zero, 0x1
  .L8018CB18:
    /* 9AF18 8018CB18 1A80043C */  lui        $a0, %hi(D_8019B09C)
    /* 9AF1C 8018CB1C 9CB0848C */  lw         $a0, %lo(D_8019B09C)($a0)
    /* 9AF20 8018CB20 A25D060C */  jal        func_80197688
    /* 9AF24 8018CB24 00000000 */   nop
    /* 9AF28 8018CB28 0B003016 */  bne        $s1, $s0, .L8018CB58
    /* 9AF2C 8018CB2C 00000000 */   nop
    /* 9AF30 8018CB30 0B004014 */  bnez       $v0, .L8018CB60
    /* 9AF34 8018CB34 01000224 */   addiu     $v0, $zero, 0x1
  .L8018CB38:
    /* 9AF38 8018CB38 1A80043C */  lui        $a0, %hi(D_8019B09C)
    /* 9AF3C 8018CB3C 9CB0848C */  lw         $a0, %lo(D_8019B09C)($a0)
    /* 9AF40 8018CB40 A25D060C */  jal        func_80197688
    /* 9AF44 8018CB44 00000000 */   nop
    /* 9AF48 8018CB48 FBFF4010 */  beqz       $v0, .L8018CB38
    /* 9AF4C 8018CB4C 01000224 */   addiu     $v0, $zero, 0x1
    /* 9AF50 8018CB50 D8320608 */  j          .L8018CB60
    /* 9AF54 8018CB54 00000000 */   nop
  .L8018CB58:
    /* 9AF58 8018CB58 03005014 */  bne        $v0, $s0, .L8018CB68
    /* 9AF5C 8018CB5C 00000000 */   nop
  .L8018CB60:
    /* 9AF60 8018CB60 1A80013C */  lui        $at, %hi(D_8019B148)
    /* 9AF64 8018CB64 48B122AC */  sw         $v0, %lo(D_8019B148)($at)
  .L8018CB68:
    /* 9AF68 8018CB68 1800BF8F */  lw         $ra, 0x18($sp)
    /* 9AF6C 8018CB6C 1400B18F */  lw         $s1, 0x14($sp)
    /* 9AF70 8018CB70 1000B08F */  lw         $s0, 0x10($sp)
    /* 9AF74 8018CB74 0800E003 */  jr         $ra
    /* 9AF78 8018CB78 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8018CAD8
    /* 9AF7C 8018CB7C 00000000 */  nop
    /* 9AF80 8018CB80 00000000 */  nop
    /* 9AF84 8018CB84 00000000 */  nop
