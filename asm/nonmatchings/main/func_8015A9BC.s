nonmatching func_8015A9BC, 0xB0

glabel func_8015A9BC
    /* 68DBC 8015A9BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 68DC0 8015A9C0 21200000 */  addu       $a0, $zero, $zero
    /* 68DC4 8015A9C4 1400BFAF */  sw         $ra, 0x14($sp)
    /* 68DC8 8015A9C8 0FCF030C */  jal        func_800F3C3C
    /* 68DCC 8015A9CC 1000B0AF */   sw        $s0, 0x10($sp)
    /* 68DD0 8015A9D0 00200424 */  addiu      $a0, $zero, 0x2000
    /* 68DD4 8015A9D4 C1CE030C */  jal        func_800F3B04
    /* 68DD8 8015A9D8 21804000 */   addu      $s0, $v0, $zero
    /* 68DDC 8015A9DC 21284000 */  addu       $a1, $v0, $zero
    /* 68DE0 8015A9E0 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 68DE4 8015A9E4 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 68DE8 8015A9E8 5815A390 */  lbu        $v1, 0x1558($a1)
    /* 68DEC 8015A9EC 00004494 */  lhu        $a0, 0x0($v0)
    /* 68DF0 8015A9F0 06006010 */  beqz       $v1, .L8015AA0C
    /* 68DF4 8015A9F4 21108500 */   addu      $v0, $a0, $a1
    /* 68DF8 8015A9F8 2F004490 */  lbu        $a0, 0x2F($v0)
    /* 68DFC 8015A9FC 04000324 */  addiu      $v1, $zero, 0x4
    /* 68E00 8015AA00 AE0003A2 */  sb         $v1, 0xAE($s0)
    /* 68E04 8015AA04 896A0508 */  j          .L8015AA24
    /* 68E08 8015AA08 E20003A2 */   sb        $v1, 0xE2($s0)
  .L8015AA0C:
    /* 68E0C 8015AA0C 17004490 */  lbu        $a0, 0x17($v0)
    /* 68E10 8015AA10 18004590 */  lbu        $a1, 0x18($v0)
    /* 68E14 8015AA14 02000324 */  addiu      $v1, $zero, 0x2
    /* 68E18 8015AA18 AE0003A2 */  sb         $v1, 0xAE($s0)
    /* 68E1C 8015AA1C E20003A2 */  sb         $v1, 0xE2($s0)
    /* 68E20 8015AA20 21208500 */  addu       $a0, $a0, $a1
  .L8015AA24:
    /* 68E24 8015AA24 AD0004A2 */  sb         $a0, 0xAD($s0)
    /* 68E28 8015AA28 0349050C */  jal        func_8015240C
    /* 68E2C 8015AA2C DF0004A2 */   sb        $a0, 0xDF($s0)
    /* 68E30 8015AA30 E3000292 */  lbu        $v0, 0xE3($s0)
    /* 68E34 8015AA34 00000000 */  nop
    /* 68E38 8015AA38 1E004424 */  addiu      $a0, $v0, 0x1E
    /* 68E3C 8015AA3C E4000292 */  lbu        $v0, 0xE4($s0)
    /* 68E40 8015AA40 A90004A2 */  sb         $a0, 0xA9($s0)
    /* 68E44 8015AA44 02220400 */  srl        $a0, $a0, 8
    /* 68E48 8015AA48 21104400 */  addu       $v0, $v0, $a0
    /* 68E4C 8015AA4C FB6A050C */  jal        func_8015ABEC
    /* 68E50 8015AA50 AA0002A2 */   sb        $v0, 0xAA($s0)
    /* 68E54 8015AA54 5B69050C */  jal        func_8015A56C
    /* 68E58 8015AA58 00000000 */   nop
    /* 68E5C 8015AA5C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 68E60 8015AA60 1000B08F */  lw         $s0, 0x10($sp)
    /* 68E64 8015AA64 0800E003 */  jr         $ra
    /* 68E68 8015AA68 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015A9BC
