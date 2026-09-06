nonmatching func_8015A5B8, 0x5C

glabel func_8015A5B8
    /* 689B8 8015A5B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 689BC 8015A5BC 21200000 */  addu       $a0, $zero, $zero
    /* 689C0 8015A5C0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 689C4 8015A5C4 0FCF030C */  jal        func_800F3C3C
    /* 689C8 8015A5C8 1000B0AF */   sw        $s0, 0x10($sp)
    /* 689CC 8015A5CC 58350424 */  addiu      $a0, $zero, 0x3558
    /* 689D0 8015A5D0 21804000 */  addu       $s0, $v0, $zero
    /* 689D4 8015A5D4 A90000A2 */  sb         $zero, 0xA9($s0)
    /* 689D8 8015A5D8 C1CE030C */  jal        func_800F3B04
    /* 689DC 8015A5DC AA0000A2 */   sb        $zero, 0xAA($s0)
    /* 689E0 8015A5E0 00004390 */  lbu        $v1, 0x0($v0)
    /* 689E4 8015A5E4 00000000 */  nop
    /* 689E8 8015A5E8 02006010 */  beqz       $v1, .L8015A5F4
    /* 689EC 8015A5EC 01000224 */   addiu     $v0, $zero, 0x1
    /* 689F0 8015A5F0 A90002A2 */  sb         $v0, 0xA9($s0)
  .L8015A5F4:
    /* 689F4 8015A5F4 FB6A050C */  jal        func_8015ABEC
    /* 689F8 8015A5F8 00000000 */   nop
    /* 689FC 8015A5FC 5B69050C */  jal        func_8015A56C
    /* 68A00 8015A600 00000000 */   nop
    /* 68A04 8015A604 1400BF8F */  lw         $ra, 0x14($sp)
    /* 68A08 8015A608 1000B08F */  lw         $s0, 0x10($sp)
    /* 68A0C 8015A60C 0800E003 */  jr         $ra
    /* 68A10 8015A610 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015A5B8
