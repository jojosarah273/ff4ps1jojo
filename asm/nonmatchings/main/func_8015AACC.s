nonmatching func_8015AACC, 0x120

glabel func_8015AACC
    /* 68ECC 8015AACC E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 68ED0 8015AAD0 21200000 */  addu       $a0, $zero, $zero
    /* 68ED4 8015AAD4 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 68ED8 8015AAD8 1800B2AF */  sw         $s2, 0x18($sp)
    /* 68EDC 8015AADC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 68EE0 8015AAE0 0FCF030C */  jal        func_800F3C3C
    /* 68EE4 8015AAE4 1000B0AF */   sw        $s0, 0x10($sp)
    /* 68EE8 8015AAE8 00200424 */  addiu      $a0, $zero, 0x2000
    /* 68EEC 8015AAEC C1CE030C */  jal        func_800F3B04
    /* 68EF0 8015AAF0 21904000 */   addu      $s2, $v0, $zero
    /* 68EF4 8015AAF4 1300043C */  lui        $a0, (0x138000 >> 16)
    /* 68EF8 8015AAF8 00808434 */  ori        $a0, $a0, (0x138000 & 0xFFFF)
    /* 68EFC 8015AAFC 21884000 */  addu       $s1, $v0, $zero
    /* 68F00 8015AB00 E7CE030C */  jal        func_800F3B9C
    /* 68F04 8015AB04 21280000 */   addu      $a1, $zero, $zero
    /* 68F08 8015AB08 21204000 */  addu       $a0, $v0, $zero
    /* 68F0C 8015AB0C 7B193092 */  lbu        $s0, 0x197B($s1)
    /* 68F10 8015AB10 06000224 */  addiu      $v0, $zero, 0x6
    /* 68F14 8015AB14 28000212 */  beq        $s0, $v0, .L8015ABB8
    /* 68F18 8015AB18 04000324 */   addiu     $v1, $zero, 0x4
    /* 68F1C 8015AB1C 21100402 */  addu       $v0, $s0, $a0
    /* 68F20 8015AB20 897E5090 */  lbu        $s0, 0x7E89($v0)
    /* 68F24 8015AB24 00000000 */  nop
    /* 68F28 8015AB28 04000016 */  bnez       $s0, .L8015AB3C
    /* 68F2C 8015AB2C 80000232 */   andi      $v0, $s0, 0x80
    /* 68F30 8015AB30 6E69050C */  jal        func_8015A5B8
    /* 68F34 8015AB34 00000000 */   nop
    /* 68F38 8015AB38 80000232 */  andi       $v0, $s0, 0x80
  .L8015AB3C:
    /* 68F3C 8015AB3C 0F004010 */  beqz       $v0, .L8015AB7C
    /* 68F40 8015AB40 7F000232 */   andi      $v0, $s0, 0x7F
    /* 68F44 8015AB44 3F1922A2 */  sb         $v0, 0x193F($s1)
    /* 68F48 8015AB48 401920A2 */  sb         $zero, 0x1940($s1)
    /* 68F4C 8015AB4C A9004292 */  lbu        $v0, 0xA9($s2)
    /* 68F50 8015AB50 00000000 */  nop
    /* 68F54 8015AB54 3D1922A2 */  sb         $v0, 0x193D($s1)
    /* 68F58 8015AB58 AA004392 */  lbu        $v1, 0xAA($s2)
    /* 68F5C 8015AB5C DB48050C */  jal        func_8015236C
    /* 68F60 8015AB60 3E1923A2 */   sb        $v1, 0x193E($s1)
    /* 68F64 8015AB64 41192292 */  lbu        $v0, 0x1941($s1)
    /* 68F68 8015AB68 00000000 */  nop
    /* 68F6C 8015AB6C A90042A2 */  sb         $v0, 0xA9($s2)
    /* 68F70 8015AB70 42192392 */  lbu        $v1, 0x1942($s1)
    /* 68F74 8015AB74 F16A0508 */  j          .L8015ABC4
    /* 68F78 8015AB78 AA0043A2 */   sb        $v1, 0xAA($s2)
  .L8015AB7C:
    /* 68F7C 8015AB7C 471930A2 */  sb         $s0, 0x1947($s1)
    /* 68F80 8015AB80 481920A2 */  sb         $zero, 0x1948($s1)
    /* 68F84 8015AB84 A9004292 */  lbu        $v0, 0xA9($s2)
    /* 68F88 8015AB88 00000000 */  nop
    /* 68F8C 8015AB8C 451922A2 */  sb         $v0, 0x1945($s1)
    /* 68F90 8015AB90 AA004392 */  lbu        $v1, 0xAA($s2)
    /* 68F94 8015AB94 5349050C */  jal        func_8015254C
    /* 68F98 8015AB98 461923A2 */   sb        $v1, 0x1946($s1)
    /* 68F9C 8015AB9C 4A192292 */  lbu        $v0, 0x194A($s1)
    /* 68FA0 8015ABA0 49192392 */  lbu        $v1, 0x1949($s1)
    /* 68FA4 8015ABA4 00120200 */  sll        $v0, $v0, 8
    /* 68FA8 8015ABA8 25186200 */  or         $v1, $v1, $v0
    /* 68FAC 8015ABAC 03006014 */  bnez       $v1, .L8015ABBC
    /* 68FB0 8015ABB0 02120300 */   srl       $v0, $v1, 8
    /* 68FB4 8015ABB4 01000324 */  addiu      $v1, $zero, 0x1
  .L8015ABB8:
    /* 68FB8 8015ABB8 02120300 */  srl        $v0, $v1, 8
  .L8015ABBC:
    /* 68FBC 8015ABBC A90043A2 */  sb         $v1, 0xA9($s2)
    /* 68FC0 8015ABC0 AA0042A2 */  sb         $v0, 0xAA($s2)
  .L8015ABC4:
    /* 68FC4 8015ABC4 FB6A050C */  jal        func_8015ABEC
    /* 68FC8 8015ABC8 00000000 */   nop
    /* 68FCC 8015ABCC 5B69050C */  jal        func_8015A56C
    /* 68FD0 8015ABD0 00000000 */   nop
    /* 68FD4 8015ABD4 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 68FD8 8015ABD8 1800B28F */  lw         $s2, 0x18($sp)
    /* 68FDC 8015ABDC 1400B18F */  lw         $s1, 0x14($sp)
    /* 68FE0 8015ABE0 1000B08F */  lw         $s0, 0x10($sp)
    /* 68FE4 8015ABE4 0800E003 */  jr         $ra
    /* 68FE8 8015ABE8 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8015AACC
