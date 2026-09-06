nonmatching func_8015BB9C, 0x198

glabel func_8015BB9C
    /* 69F9C 8015BB9C E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 69FA0 8015BBA0 21200000 */  addu       $a0, $zero, $zero
    /* 69FA4 8015BBA4 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 69FA8 8015BBA8 1800B2AF */  sw         $s2, 0x18($sp)
    /* 69FAC 8015BBAC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 69FB0 8015BBB0 0FCF030C */  jal        func_800F3C3C
    /* 69FB4 8015BBB4 1000B0AF */   sw        $s0, 0x10($sp)
    /* 69FB8 8015BBB8 21200000 */  addu       $a0, $zero, $zero
    /* 69FBC 8015BBBC C1CE030C */  jal        func_800F3B04
    /* 69FC0 8015BBC0 21884000 */   addu      $s1, $v0, $zero
    /* 69FC4 8015BBC4 00200424 */  addiu      $a0, $zero, 0x2000
    /* 69FC8 8015BBC8 C1CE030C */  jal        func_800F3B04
    /* 69FCC 8015BBCC 21904000 */   addu      $s2, $v0, $zero
    /* 69FD0 8015BBD0 21804000 */  addu       $s0, $v0, $zero
    /* 69FD4 8015BBD4 00184492 */  lbu        $a0, 0x1800($s2)
    /* 69FD8 8015BBD8 B7000224 */  addiu      $v0, $zero, 0xB7
    /* 69FDC 8015BBDC 09008214 */  bne        $a0, $v0, .L8015BC04
    /* 69FE0 8015BBE0 00000000 */   nop
    /* 69FE4 8015BBE4 01184492 */  lbu        $a0, 0x1801($s2)
    /* 69FE8 8015BBE8 00000000 */  nop
    /* 69FEC 8015BBEC 05008010 */  beqz       $a0, .L8015BC04
    /* 69FF0 8015BBF0 00000000 */   nop
    /* 69FF4 8015BBF4 F7180492 */  lbu        $a0, 0x18F7($s0)
    /* 69FF8 8015BBF8 00000000 */  nop
    /* 69FFC 8015BBFC 47008010 */  beqz       $a0, .L8015BD1C
    /* 6A000 8015BC00 00000000 */   nop
  .L8015BC04:
    /* 6A004 8015BC04 F3180492 */  lbu        $a0, 0x18F3($s0)
    /* 6A008 8015BC08 00000000 */  nop
    /* 6A00C 8015BC0C 09008014 */  bnez       $a0, .L8015BC34
    /* 6A010 8015BC10 63000224 */   addiu     $v0, $zero, 0x63
    /* 6A014 8015BC14 82020492 */  lbu        $a0, 0x282($s0)
    /* 6A018 8015BC18 00000000 */  nop
    /* 6A01C 8015BC1C 06008210 */  beq        $a0, $v0, .L8015BC38
    /* 6A020 8015BC20 62000224 */   addiu     $v0, $zero, 0x62
    /* 6A024 8015BC24 04008210 */  beq        $a0, $v0, .L8015BC38
    /* 6A028 8015BC28 61000224 */   addiu     $v0, $zero, 0x61
    /* 6A02C 8015BC2C 02008210 */  beq        $a0, $v0, .L8015BC38
    /* 6A030 8015BC30 00000000 */   nop
  .L8015BC34:
    /* 6A034 8015BC34 D61800A2 */  sb         $zero, 0x18D6($s0)
  .L8015BC38:
    /* 6A038 8015BC38 1A80073C */  lui        $a3, %hi(D_8019ED54)
    /* 6A03C 8015BC3C 54EDE78C */  lw         $a3, %lo(D_8019ED54)($a3)
    /* 6A040 8015BC40 1A80023C */  lui        $v0, %hi(D_8019ED48)
    /* 6A044 8015BC44 48ED428C */  lw         $v0, %lo(D_8019ED48)($v0)
    /* 6A048 8015BC48 D2002692 */  lbu        $a2, 0xD2($s1)
    /* 6A04C 8015BC4C 00004594 */  lhu        $a1, 0x0($v0)
  .L8015BC50:
    /* 6A050 8015BC50 0000E294 */  lhu        $v0, 0x0($a3)
    /* 6A054 8015BC54 00000000 */  nop
    /* 6A058 8015BC58 21105000 */  addu       $v0, $v0, $s0
    /* 6A05C 8015BC5C 29194490 */  lbu        $a0, 0x1929($v0)
    /* 6A060 8015BC60 00000000 */  nop
    /* 6A064 8015BC64 2D008610 */  beq        $a0, $a2, .L8015BD1C
    /* 6A068 8015BC68 0100A224 */   addiu     $v0, $a1, 0x1
    /* 6A06C 8015BC6C FFFF4530 */  andi       $a1, $v0, 0xFFFF
    /* 6A070 8015BC70 05000324 */  addiu      $v1, $zero, 0x5
    /* 6A074 8015BC74 F6FFA314 */  bne        $a1, $v1, .L8015BC50
    /* 6A078 8015BC78 00000000 */   nop
    /* 6A07C 8015BC7C D0002292 */  lbu        $v0, 0xD0($s1)
    /* 6A080 8015BC80 00000000 */  nop
    /* 6A084 8015BC84 8C0022A2 */  sb         $v0, 0x8C($s1)
    /* 6A088 8015BC88 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6A08C 8015BC8C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6A090 8015BC90 374B050C */  jal        func_80152CDC
    /* 6A094 8015BC94 000066A0 */   sb        $a2, 0x0($v1)
    /* 6A098 8015BC98 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6A09C 8015BC9C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6A0A0 8015BCA0 03000224 */  addiu      $v0, $zero, 0x3
    /* 6A0A4 8015BCA4 434C050C */  jal        func_8015310C
    /* 6A0A8 8015BCA8 000062A0 */   sb        $v0, 0x0($v1)
    /* 6A0AC 8015BCAC 99150292 */  lbu        $v0, 0x1599($s0)
    /* 6A0B0 8015BCB0 98150592 */  lbu        $a1, 0x1598($s0)
    /* 6A0B4 8015BCB4 00120200 */  sll        $v0, $v0, 8
    /* 6A0B8 8015BCB8 2528A200 */  or         $a1, $a1, $v0
    /* 6A0BC 8015BCBC 2120B000 */  addu       $a0, $a1, $s0
    /* 6A0C0 8015BCC0 060A8290 */  lbu        $v0, 0xA06($a0)
    /* 6A0C4 8015BCC4 00000000 */  nop
    /* 6A0C8 8015BCC8 FE004230 */  andi       $v0, $v0, 0xFE
    /* 6A0CC 8015BCCC 060A82A0 */  sb         $v0, 0xA06($a0)
    /* 6A0D0 8015BCD0 D2002392 */  lbu        $v1, 0xD2($s1)
    /* 6A0D4 8015BCD4 5371050C */  jal        func_8015C54C
    /* 6A0D8 8015BCD8 D00023A2 */   sb        $v1, 0xD0($s1)
    /* 6A0DC 8015BCDC D0002292 */  lbu        $v0, 0xD0($s1)
    /* 6A0E0 8015BCE0 00000000 */  nop
    /* 6A0E4 8015BCE4 AA0022A2 */  sb         $v0, 0xAA($s1)
    /* 6A0E8 8015BCE8 FF004430 */  andi       $a0, $v0, 0xFF
    /* 6A0EC 8015BCEC 8C002292 */  lbu        $v0, 0x8C($s1)
    /* 6A0F0 8015BCF0 FF000324 */  addiu      $v1, $zero, 0xFF
    /* 6A0F4 8015BCF4 09008310 */  beq        $a0, $v1, .L8015BD1C
    /* 6A0F8 8015BCF8 D00022A2 */   sb        $v0, 0xD0($s1)
    /* 6A0FC 8015BCFC 2F190592 */  lbu        $a1, 0x192F($s0)
    /* 6A100 8015BD00 D2002492 */  lbu        $a0, 0xD2($s1)
    /* 6A104 8015BD04 2118B000 */  addu       $v1, $a1, $s0
    /* 6A108 8015BD08 291964A0 */  sb         $a0, 0x1929($v1)
    /* 6A10C 8015BD0C 2F190292 */  lbu        $v0, 0x192F($s0)
    /* 6A110 8015BD10 00000000 */  nop
    /* 6A114 8015BD14 01004224 */  addiu      $v0, $v0, 0x1
    /* 6A118 8015BD18 2F1902A2 */  sb         $v0, 0x192F($s0)
  .L8015BD1C:
    /* 6A11C 8015BD1C 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 6A120 8015BD20 1800B28F */  lw         $s2, 0x18($sp)
    /* 6A124 8015BD24 1400B18F */  lw         $s1, 0x14($sp)
    /* 6A128 8015BD28 1000B08F */  lw         $s0, 0x10($sp)
    /* 6A12C 8015BD2C 0800E003 */  jr         $ra
    /* 6A130 8015BD30 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8015BB9C
