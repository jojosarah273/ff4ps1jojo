nonmatching func_80198630, 0xA4

glabel func_80198630
    /* A6A30 80198630 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A6A34 80198634 FF7F023C */  lui        $v0, (0x7FFFFFFF >> 16)
    /* A6A38 80198638 FFFF4234 */  ori        $v0, $v0, (0x7FFFFFFF & 0xFFFF)
    /* A6A3C 8019863C 24108200 */  and        $v0, $a0, $v0
    /* A6A40 80198640 03004014 */  bnez       $v0, .L80198650
    /* A6A44 80198644 1000BFAF */   sw        $ra, 0x10($sp)
  .L80198648:
    /* A6A48 80198648 B1610608 */  j          .L801986C4
    /* A6A4C 8019864C 21100000 */   addu      $v0, $zero, $zero
  .L80198650:
    /* A6A50 80198650 C3150400 */  sra        $v0, $a0, 23
    /* A6A54 80198654 FF004530 */  andi       $a1, $v0, 0xFF
    /* A6A58 80198658 63FFA624 */  addiu      $a2, $a1, -0x9D
    /* A6A5C 8019865C 0A00C018 */  blez       $a2, .L80198688
    /* A6A60 80198660 8000033C */   lui       $v1, (0x800000 >> 16)
    /* A6A64 80198664 06008004 */  bltz       $a0, .L80198680
    /* A6A68 80198668 22000424 */   addiu     $a0, $zero, 0x22
    /* A6A6C 8019866C 6462060C */  jal        func_80198990
    /* A6A70 80198670 12000524 */   addiu     $a1, $zero, 0x12
    /* A6A74 80198674 FF7F023C */  lui        $v0, (0x7FFFFFFF >> 16)
    /* A6A78 80198678 B1610608 */  j          .L801986C4
    /* A6A7C 8019867C FFFF4234 */   ori       $v0, $v0, (0x7FFFFFFF & 0xFFFF)
  .L80198680:
    /* A6A80 80198680 B1610608 */  j          .L801986C4
    /* A6A84 80198684 0080023C */   lui       $v0, (0x80000000 >> 16)
  .L80198688:
    /* A6A88 80198688 7F00023C */  lui        $v0, (0x7FFFFF >> 16)
    /* A6A8C 8019868C FFFF4234 */  ori        $v0, $v0, (0x7FFFFF & 0xFFFF)
    /* A6A90 80198690 24108200 */  and        $v0, $a0, $v0
    /* A6A94 80198694 25104300 */  or         $v0, $v0, $v1
    /* A6A98 80198698 C0190200 */  sll        $v1, $v0, 7
    /* A6A9C 8019869C 82FFA224 */  addiu      $v0, $a1, -0x7E
    /* A6AA0 801986A0 2000422C */  sltiu      $v0, $v0, 0x20
    /* A6AA4 801986A4 E8FF4010 */  beqz       $v0, .L80198648
    /* A6AA8 801986A8 00000000 */   nop
    /* A6AAC 801986AC E6FF6010 */  beqz       $v1, .L80198648
    /* A6AB0 801986B0 23100600 */   negu      $v0, $a2
    /* A6AB4 801986B4 07184300 */  srav       $v1, $v1, $v0
    /* A6AB8 801986B8 02008104 */  bgez       $a0, .L801986C4
    /* A6ABC 801986BC 21106000 */   addu      $v0, $v1, $zero
    /* A6AC0 801986C0 23100200 */  negu       $v0, $v0
  .L801986C4:
    /* A6AC4 801986C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* A6AC8 801986C8 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A6ACC 801986CC 0800E003 */  jr         $ra
    /* A6AD0 801986D0 00000000 */   nop
endlabel func_80198630
    /* A6AD4 801986D4 00000000 */  nop
    /* A6AD8 801986D8 00000000 */  nop
    /* A6ADC 801986DC 00000000 */  nop
