nonmatching func_800FE634, 0xB0

glabel func_800FE634
    /* CA34 800FE634 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* CA38 800FE638 21200000 */  addu       $a0, $zero, $zero
    /* CA3C 800FE63C 1800BFAF */  sw         $ra, 0x18($sp)
    /* CA40 800FE640 1400B1AF */  sw         $s1, 0x14($sp)
    /* CA44 800FE644 0FCF030C */  jal        func_800F3C3C
    /* CA48 800FE648 1000B0AF */   sw        $s0, 0x10($sp)
    /* CA4C 800FE64C FB060424 */  addiu      $a0, $zero, 0x6FB
    /* CA50 800FE650 C1CE030C */  jal        func_800F3B04
    /* CA54 800FE654 21884000 */   addu      $s1, $v0, $zero
    /* CA58 800FE658 1400043C */  lui        $a0, (0x14EF00 >> 16)
    /* CA5C 800FE65C 00EF8434 */  ori        $a0, $a0, (0x14EF00 & 0xFFFF)
    /* CA60 800FE660 21804000 */  addu       $s0, $v0, $zero
    /* CA64 800FE664 E7CE030C */  jal        func_800F3B9C
    /* CA68 800FE668 21280000 */   addu      $a1, $zero, $zero
    /* CA6C 800FE66C 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* CA70 800FE670 00000492 */  lbu        $a0, 0x0($s0)
    /* CA74 800FE674 00006590 */  lbu        $a1, 0x0($v1)
    /* CA78 800FE678 00000000 */  nop
    /* CA7C 800FE67C 2128A400 */  addu       $a1, $a1, $a0
    /* CA80 800FE680 FF00A530 */  andi       $a1, $a1, 0xFF
    /* CA84 800FE684 7F00A330 */  andi       $v1, $a1, 0x7F
    /* CA88 800FE688 40180300 */  sll        $v1, $v1, 1
    /* CA8C 800FE68C 21104300 */  addu       $v0, $v0, $v1
    /* CA90 800FE690 060025A2 */  sb         $a1, 0x6($s1)
    /* CA94 800FE694 01004490 */  lbu        $a0, 0x1($v0)
    /* CA98 800FE698 00004390 */  lbu        $v1, 0x0($v0)
    /* CA9C 800FE69C AD002292 */  lbu        $v0, 0xAD($s1)
    /* CAA0 800FE6A0 00220400 */  sll        $a0, $a0, 8
    /* CAA4 800FE6A4 25186400 */  or         $v1, $v1, $a0
    /* CAA8 800FE6A8 18004300 */  mult       $v0, $v1
    /* CAAC 800FE6AC 8000A530 */  andi       $a1, $a1, 0x80
    /* CAB0 800FE6B0 12100000 */  mflo       $v0
    /* CAB4 800FE6B4 0400A010 */  beqz       $a1, .L800FE6C8
    /* CAB8 800FE6B8 021A0200 */   srl       $v1, $v0, 8
    /* CABC 800FE6BC 27100300 */  nor        $v0, $zero, $v1
    /* CAC0 800FE6C0 01004224 */  addiu      $v0, $v0, 0x1
    /* CAC4 800FE6C4 FFFF4330 */  andi       $v1, $v0, 0xFFFF
  .L800FE6C8:
    /* CAC8 800FE6C8 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* CACC 800FE6CC 1800BF8F */  lw         $ra, 0x18($sp)
    /* CAD0 800FE6D0 1400B18F */  lw         $s1, 0x14($sp)
    /* CAD4 800FE6D4 1000B08F */  lw         $s0, 0x10($sp)
    /* CAD8 800FE6D8 000043A4 */  sh         $v1, 0x0($v0)
    /* CADC 800FE6DC 0800E003 */  jr         $ra
    /* CAE0 800FE6E0 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_800FE634
