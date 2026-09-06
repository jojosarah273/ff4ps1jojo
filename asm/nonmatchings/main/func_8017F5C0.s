nonmatching func_8017F5C0, 0x84

glabel func_8017F5C0
    /* 8D9C0 8017F5C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8D9C4 8017F5C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8D9C8 8017F5C8 0D80023C */  lui        $v0, %hi(D_800D2105)
    /* 8D9CC 8017F5CC 05214290 */  lbu        $v0, %lo(D_800D2105)($v0)
    /* 8D9D0 8017F5D0 00000000 */  nop
    /* 8D9D4 8017F5D4 07004230 */  andi       $v0, $v0, 0x7
    /* 8D9D8 8017F5D8 0C004010 */  beqz       $v0, .L8017F60C
    /* 8D9DC 8017F5DC 801F023C */   lui       $v0, (0x1F80037C >> 16)
    /* 8D9E0 8017F5E0 7C034234 */  ori        $v0, $v0, (0x1F80037C & 0xFFFF)
    /* 8D9E4 8017F5E4 21404000 */  addu       $t0, $v0, $zero
    /* 8D9E8 8017F5E8 00001DAD */  sw         $sp, 0x0($t0)
    /* 8D9EC 8017F5EC FCFF0825 */  addiu      $t0, $t0, -0x4
    /* 8D9F0 8017F5F0 21E80001 */  addu       $sp, $t0, $zero
    /* 8D9F4 8017F5F4 B2FA050C */  jal        func_8017EAC8
    /* 8D9F8 8017F5F8 00000000 */   nop
    /* 8D9FC 8017F5FC 0400BD27 */  addiu      $sp, $sp, 0x4
    /* 8DA00 8017F600 0000BD8F */  lw         $sp, 0x0($sp)
    /* 8DA04 8017F604 8CFD0508 */  j          .L8017F630
    /* 8DA08 8017F608 00000000 */   nop
  .L8017F60C:
    /* 8DA0C 8017F60C 7C034234 */  ori        $v0, $v0, (0x1F80037C & 0xFFFF)
    /* 8DA10 8017F610 21404000 */  addu       $t0, $v0, $zero
    /* 8DA14 8017F614 00001DAD */  sw         $sp, 0x0($t0)
    /* 8DA18 8017F618 FCFF0825 */  addiu      $t0, $t0, -0x4
    /* 8DA1C 8017F61C 21E80001 */  addu       $sp, $t0, $zero
    /* 8DA20 8017F620 52FC050C */  jal        func_8017F148
    /* 8DA24 8017F624 00000000 */   nop
    /* 8DA28 8017F628 0400BD27 */  addiu      $sp, $sp, 0x4
    /* 8DA2C 8017F62C 0000BD8F */  lw         $sp, 0x0($sp)
  .L8017F630:
    /* 8DA30 8017F630 00000000 */  nop
    /* 8DA34 8017F634 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8DA38 8017F638 00000000 */  nop
    /* 8DA3C 8017F63C 0800E003 */  jr         $ra
    /* 8DA40 8017F640 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017F5C0
