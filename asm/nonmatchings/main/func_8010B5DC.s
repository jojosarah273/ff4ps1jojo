nonmatching func_8010B5DC, 0x110

glabel func_8010B5DC
    /* 199DC 8010B5DC E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 199E0 8010B5E0 21200000 */  addu       $a0, $zero, $zero
    /* 199E4 8010B5E4 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 199E8 8010B5E8 0FCF030C */  jal        func_800F3C3C
    /* 199EC 8010B5EC 1800B0AF */   sw        $s0, 0x18($sp)
    /* 199F0 8010B5F0 21200000 */  addu       $a0, $zero, $zero
    /* 199F4 8010B5F4 C1CE030C */  jal        func_800F3B04
    /* 199F8 8010B5F8 21804000 */   addu      $s0, $v0, $zero
    /* 199FC 8010B5FC 0C000692 */  lbu        $a2, 0xC($s0)
    /* 19A00 8010B600 B0000392 */  lbu        $v1, 0xB0($s0)
    /* 19A04 8010B604 AF000492 */  lbu        $a0, 0xAF($s0)
    /* 19A08 8010B608 0D000592 */  lbu        $a1, 0xD($s0)
    /* 19A0C 8010B60C D70000A2 */  sb         $zero, 0xD7($s0)
    /* 19A10 8010B610 001A0300 */  sll        $v1, $v1, 8
    /* 19A14 8010B614 25208300 */  or         $a0, $a0, $v1
    /* 19A18 8010B618 21208200 */  addu       $a0, $a0, $v0
    /* 19A1C 8010B61C 002A0500 */  sll        $a1, $a1, 8
    /* 19A20 8010B620 2530C500 */  or         $a2, $a2, $a1
    /* 19A24 8010B624 04098290 */  lbu        $v0, 0x904($a0)
    /* 19A28 8010B628 5B000392 */  lbu        $v1, 0x5B($s0)
    /* 19A2C 8010B62C 00110200 */  sll        $v0, $v0, 4
    /* 19A30 8010B630 21104600 */  addu       $v0, $v0, $a2
    /* 19A34 8010B634 001A0300 */  sll        $v1, $v1, 8
    /* 19A38 8010B638 5A000692 */  lbu        $a2, 0x5A($s0)
    /* 19A3C 8010B63C FFFF4230 */  andi       $v0, $v0, 0xFFFF
    /* 19A40 8010B640 2530C300 */  or         $a2, $a2, $v1
    /* 19A44 8010B644 23104600 */  subu       $v0, $v0, $a2
    /* 19A48 8010B648 FF034230 */  andi       $v0, $v0, 0x3FF
    /* 19A4C 8010B64C 021A0200 */  srl        $v1, $v0, 8
    /* 19A50 8010B650 180002A2 */  sb         $v0, 0x18($s0)
    /* 19A54 8010B654 0001422C */  sltiu      $v0, $v0, 0x100
    /* 19A58 8010B658 14004010 */  beqz       $v0, .L8010B6AC
    /* 19A5C 8010B65C 190003A2 */   sb        $v1, 0x19($s0)
    /* 19A60 8010B660 0F000392 */  lbu        $v1, 0xF($s0)
    /* 19A64 8010B664 0E000692 */  lbu        $a2, 0xE($s0)
    /* 19A68 8010B668 06098290 */  lbu        $v0, 0x906($a0)
    /* 19A6C 8010B66C 001A0300 */  sll        $v1, $v1, 8
    /* 19A70 8010B670 2530C300 */  or         $a2, $a2, $v1
    /* 19A74 8010B674 00110200 */  sll        $v0, $v0, 4
    /* 19A78 8010B678 21104600 */  addu       $v0, $v0, $a2
    /* 19A7C 8010B67C FFFF4230 */  andi       $v0, $v0, 0xFFFF
    /* 19A80 8010B680 5D000392 */  lbu        $v1, 0x5D($s0)
    /* 19A84 8010B684 5C000692 */  lbu        $a2, 0x5C($s0)
    /* 19A88 8010B688 001A0300 */  sll        $v1, $v1, 8
    /* 19A8C 8010B68C 2530C300 */  or         $a2, $a2, $v1
    /* 19A90 8010B690 23104600 */  subu       $v0, $v0, $a2
    /* 19A94 8010B694 FF034230 */  andi       $v0, $v0, 0x3FF
    /* 19A98 8010B698 021A0200 */  srl        $v1, $v0, 8
    /* 19A9C 8010B69C 1A0002A2 */  sb         $v0, 0x1A($s0)
    /* 19AA0 8010B6A0 F000422C */  sltiu      $v0, $v0, 0xF0
    /* 19AA4 8010B6A4 0A004014 */  bnez       $v0, .L8010B6D0
    /* 19AA8 8010B6A8 1B0003A2 */   sb        $v1, 0x1B($s0)
  .L8010B6AC:
    /* 19AAC 8010B6AC D8000292 */  lbu        $v0, 0xD8($s0)
    /* 19AB0 8010B6B0 D7000692 */  lbu        $a2, 0xD7($s0)
    /* 19AB4 8010B6B4 00120200 */  sll        $v0, $v0, 8
    /* 19AB8 8010B6B8 2530C200 */  or         $a2, $a2, $v0
    /* 19ABC 8010B6BC 0100C324 */  addiu      $v1, $a2, 0x1
    /* 19AC0 8010B6C0 FFFF6630 */  andi       $a2, $v1, 0xFFFF
    /* 19AC4 8010B6C4 02120600 */  srl        $v0, $a2, 8
    /* 19AC8 8010B6C8 D70006A2 */  sb         $a2, 0xD7($s0)
    /* 19ACC 8010B6CC D80002A2 */  sb         $v0, 0xD8($s0)
  .L8010B6D0:
    /* 19AD0 8010B6D0 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 19AD4 8010B6D4 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 19AD8 8010B6D8 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 19ADC 8010B6DC 1800B08F */  lw         $s0, 0x18($sp)
    /* 19AE0 8010B6E0 000040A0 */  sb         $zero, 0x0($v0)
    /* 19AE4 8010B6E4 0800E003 */  jr         $ra
    /* 19AE8 8010B6E8 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8010B5DC
