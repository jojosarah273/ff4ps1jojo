nonmatching func_8014D98C, 0xA0

glabel func_8014D98C
    /* 5BD8C 8014D98C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5BD90 8014D990 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5BD94 8014D994 59D9030C */  jal        func_800F6564
    /* 5BD98 8014D998 51F40434 */   ori       $a0, $zero, 0xF451
    /* 5BD9C 8014D99C 0DD9030C */  jal        func_800F6434
    /* 5BDA0 8014D9A0 02000424 */   addiu     $a0, $zero, 0x2
    /* 5BDA4 8014D9A4 1D004014 */  bnez       $v0, .L8014DA1C
    /* 5BDA8 8014D9A8 00000000 */   nop
    /* 5BDAC 8014D9AC 59D9030C */  jal        func_800F6564
    /* 5BDB0 8014D9B0 53F40434 */   ori       $a0, $zero, 0xF453
    /* 5BDB4 8014D9B4 A0D0030C */  jal        func_800F4280
    /* 5BDB8 8014D9B8 52F40434 */   ori       $a0, $zero, 0xF452
    /* 5BDBC 8014D9BC 48D0030C */  jal        func_800F4120
    /* 5BDC0 8014D9C0 02020424 */   addiu     $a0, $zero, 0x202
    /* 5BDC4 8014D9C4 13004014 */  bnez       $v0, .L8014DA14
    /* 5BDC8 8014D9C8 00000000 */   nop
    /* 5BDCC 8014D9CC 90D8030C */  jal        func_800F6240
    /* 5BDD0 8014D9D0 54F40434 */   ori       $a0, $zero, 0xF454
    /* 5BDD4 8014D9D4 59D9030C */  jal        func_800F6564
    /* 5BDD8 8014D9D8 54F40434 */   ori       $a0, $zero, 0xF454
    /* 5BDDC 8014D9DC 92D0030C */  jal        func_800F4248
    /* 5BDE0 8014D9E0 01000424 */   addiu     $a0, $zero, 0x1
    /* 5BDE4 8014D9E4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5BDE8 8014D9E8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5BDEC 8014D9EC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5BDF0 8014D9F0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5BDF4 8014D9F4 00004394 */  lhu        $v1, 0x0($v0)
    /* 5BDF8 8014D9F8 55F40434 */  ori        $a0, $zero, 0xF455
    /* 5BDFC 8014D9FC DADA030C */  jal        func_800F6B68
    /* 5BE00 8014DA00 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5BE04 8014DA04 77DC030C */  jal        func_800F71DC
    /* 5BE08 8014DA08 0F000424 */   addiu     $a0, $zero, 0xF
    /* 5BE0C 8014DA0C 34D8010C */  jal        func_800760D0
    /* 5BE10 8014DA10 00000000 */   nop
  .L8014DA14:
    /* 5BE14 8014DA14 90D8030C */  jal        func_800F6240
    /* 5BE18 8014DA18 53F40434 */   ori       $a0, $zero, 0xF453
  .L8014DA1C:
    /* 5BE1C 8014DA1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5BE20 8014DA20 00000000 */  nop
    /* 5BE24 8014DA24 0800E003 */  jr         $ra
    /* 5BE28 8014DA28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D98C
