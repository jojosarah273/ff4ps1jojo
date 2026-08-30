nonmatching func_80198600, 0x30

glabel func_80198600
    /* A6A00 80198600 08008510 */  beq        $a0, $a1, .L80198624
    /* A6A04 80198604 FF7F033C */   lui       $v1, (0x7FFFFFFF >> 16)
    /* A6A08 80198608 FFFF6334 */  ori        $v1, $v1, (0x7FFFFFFF & 0xFFFF)
    /* A6A0C 8019860C 24108300 */  and        $v0, $a0, $v1
    /* A6A10 80198610 05004014 */  bnez       $v0, .L80198628
    /* A6A14 80198614 01000224 */   addiu     $v0, $zero, 0x1
    /* A6A18 80198618 2410A300 */  and        $v0, $a1, $v1
    /* A6A1C 8019861C 02004014 */  bnez       $v0, .L80198628
    /* A6A20 80198620 01000224 */   addiu     $v0, $zero, 0x1
  .L80198624:
    /* A6A24 80198624 21100000 */  addu       $v0, $zero, $zero
  .L80198628:
    /* A6A28 80198628 0800E003 */  jr         $ra
    /* A6A2C 8019862C 00000000 */   nop
endlabel func_80198600
