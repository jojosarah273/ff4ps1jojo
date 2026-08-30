nonmatching func_8018DF10, 0x80

glabel func_8018DF10
    /* 9C310 8018DF10 1A80023C */  lui        $v0, %hi(D_8019B584)
    /* 9C314 8018DF14 84B5428C */  lw         $v0, %lo(D_8019B584)($v0)
    /* 9C318 8018DF18 00000000 */  nop
    /* 9C31C 8018DF1C F0004330 */  andi       $v1, $v0, 0xF0
    /* 9C320 8018DF20 20000224 */  addiu      $v0, $zero, 0x20
    /* 9C324 8018DF24 13006210 */  beq        $v1, $v0, .L8018DF74
    /* 9C328 8018DF28 21006228 */   slti      $v0, $v1, 0x21
    /* 9C32C 8018DF2C 07004010 */  beqz       $v0, .L8018DF4C
    /* 9C330 8018DF30 30000224 */   addiu     $v0, $zero, 0x30
    /* 9C334 8018DF34 0B006010 */  beqz       $v1, .L8018DF64
    /* 9C338 8018DF38 10000224 */   addiu     $v0, $zero, 0x10
    /* 9C33C 8018DF3C 0B006210 */  beq        $v1, $v0, .L8018DF6C
    /* 9C340 8018DF40 FDFF0224 */   addiu     $v0, $zero, -0x3
    /* 9C344 8018DF44 E2370608 */  j          .L8018DF88
    /* 9C348 8018DF48 00000000 */   nop
  .L8018DF4C:
    /* 9C34C 8018DF4C 0B006210 */  beq        $v1, $v0, .L8018DF7C
    /* 9C350 8018DF50 40000224 */   addiu     $v0, $zero, 0x40
    /* 9C354 8018DF54 0B006210 */  beq        $v1, $v0, .L8018DF84
    /* 9C358 8018DF58 FDFF0224 */   addiu     $v0, $zero, -0x3
    /* 9C35C 8018DF5C E2370608 */  j          .L8018DF88
    /* 9C360 8018DF60 00000000 */   nop
  .L8018DF64:
    /* 9C364 8018DF64 E2370608 */  j          .L8018DF88
    /* 9C368 8018DF68 21100000 */   addu      $v0, $zero, $zero
  .L8018DF6C:
    /* 9C36C 8018DF6C E2370608 */  j          .L8018DF88
    /* 9C370 8018DF70 03000224 */   addiu     $v0, $zero, 0x3
  .L8018DF74:
    /* 9C374 8018DF74 E2370608 */  j          .L8018DF88
    /* 9C378 8018DF78 04000224 */   addiu     $v0, $zero, 0x4
  .L8018DF7C:
    /* 9C37C 8018DF7C E2370608 */  j          .L8018DF88
    /* 9C380 8018DF80 07000224 */   addiu     $v0, $zero, 0x7
  .L8018DF84:
    /* 9C384 8018DF84 08000224 */  addiu      $v0, $zero, 0x8
  .L8018DF88:
    /* 9C388 8018DF88 0800E003 */  jr         $ra
    /* 9C38C 8018DF8C 00000000 */   nop
endlabel func_8018DF10
