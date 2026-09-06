nonmatching func_8017DA64, 0x118

glabel func_8017DA64
    /* 8BE64 8017DA64 0400C68C */  lw         $a2, 0x4($a2)
    /* 8BE68 8017DA68 00000000 */  nop
    /* 8BE6C 8017DA6C 0600C294 */  lhu        $v0, 0x6($a2)
    /* 8BE70 8017DA70 0A00C384 */  lh         $v1, 0xA($a2)
    /* 8BE74 8017DA74 00140200 */  sll        $v0, $v0, 16
    /* 8BE78 8017DA78 C33C0200 */  sra        $a3, $v0, 19
    /* 8BE7C 8017DA7C 03140200 */  sra        $v0, $v0, 16
    /* 8BE80 8017DA80 21104300 */  addu       $v0, $v0, $v1
    /* 8BE84 8017DA84 10004A24 */  addiu      $t2, $v0, 0x10
    /* 8BE88 8017DA88 F9004229 */  slti       $v0, $t2, 0xF9
    /* 8BE8C 8017DA8C 02004014 */  bnez       $v0, .L8017DA98
    /* 8BE90 8017DA90 21C88000 */   addu      $t9, $a0, $zero
    /* 8BE94 8017DA94 F8000A24 */  addiu      $t2, $zero, 0xF8
  .L8017DA98:
    /* 8BE98 8017DA98 C3500A00 */  sra        $t2, $t2, 3
    /* 8BE9C 8017DA9C 0000C494 */  lhu        $a0, 0x0($a2)
    /* 8BEA0 8017DAA0 0200C394 */  lhu        $v1, 0x2($a2)
    /* 8BEA4 8017DAA4 00240400 */  sll        $a0, $a0, 16
    /* 8BEA8 8017DAA8 03160400 */  sra        $v0, $a0, 24
    /* 8BEAC 8017DAAC 01004F30 */  andi       $t7, $v0, 0x1
    /* 8BEB0 8017DAB0 001C0300 */  sll        $v1, $v1, 16
    /* 8BEB4 8017DAB4 C3150300 */  sra        $v0, $v1, 23
    /* 8BEB8 8017DAB8 02004230 */  andi       $v0, $v0, 0x2
    /* 8BEBC 8017DABC 2178E201 */  addu       $t7, $t7, $v0
    /* 8BEC0 8017DAC0 831B0300 */  sra        $v1, $v1, 14
    /* 8BEC4 8017DAC4 E0036330 */  andi       $v1, $v1, 0x3E0
    /* 8BEC8 8017DAC8 40110700 */  sll        $v0, $a3, 5
    /* 8BECC 8017DACC 21186200 */  addu       $v1, $v1, $v0
    /* 8BED0 8017DAD0 C3240400 */  sra        $a0, $a0, 19
    /* 8BED4 8017DAD4 2A10EA00 */  slt        $v0, $a3, $t2
    /* 8BED8 8017DAD8 26004010 */  beqz       $v0, .L8017DB74
    /* 8BEDC 8017DADC 1F009830 */   andi      $t8, $a0, 0x1F
  .L8017DAE0:
    /* 8BEE0 8017DAE0 21300003 */  addu       $a2, $t8, $zero
    /* 8BEE4 8017DAE4 0100EE24 */  addiu      $t6, $a3, 0x1
    /* 8BEE8 8017DAE8 20006D24 */  addiu      $t5, $v1, 0x20
    /* 8BEEC 8017DAEC 43120300 */  sra        $v0, $v1, 9
    /* 8BEF0 8017DAF0 02004230 */  andi       $v0, $v0, 0x2
    /* 8BEF4 8017DAF4 21484F00 */  addu       $t1, $v0, $t7
    /* 8BEF8 8017DAF8 01002C31 */  andi       $t4, $t1, 0x1
    /* 8BEFC 8017DAFC E0036B30 */  andi       $t3, $v1, 0x3E0
    /* 8BF00 8017DB00 40110700 */  sll        $v0, $a3, 5
    /* 8BF04 8017DB04 21104700 */  addu       $v0, $v0, $a3
    /* 8BF08 8017DB08 40100200 */  sll        $v0, $v0, 1
    /* 8BF0C 8017DB0C 21385900 */  addu       $a3, $v0, $t9
    /* 8BF10 8017DB10 20000824 */  addiu      $t0, $zero, 0x20
  .L8017DB14:
    /* 8BF14 8017DB14 04008011 */  beqz       $t4, .L8017DB28
    /* 8BF18 8017DB18 43110600 */   sra       $v0, $a2, 5
    /* 8BF1C 8017DB1C 01004230 */  andi       $v0, $v0, 0x1
    /* 8BF20 8017DB20 CBF60508 */  j          .L8017DB2C
    /* 8BF24 8017DB24 23100200 */   negu      $v0, $v0
  .L8017DB28:
    /* 8BF28 8017DB28 01004230 */  andi       $v0, $v0, 0x1
  .L8017DB2C:
    /* 8BF2C 8017DB2C FFFF0825 */  addiu      $t0, $t0, -0x1
    /* 8BF30 8017DB30 21102201 */  addu       $v0, $t1, $v0
    /* 8BF34 8017DB34 03004230 */  andi       $v0, $v0, 0x3
    /* 8BF38 8017DB38 1F00C330 */  andi       $v1, $a2, 0x1F
    /* 8BF3C 8017DB3C 25186B00 */  or         $v1, $v1, $t3
    /* 8BF40 8017DB40 40180300 */  sll        $v1, $v1, 1
    /* 8BF44 8017DB44 C0120200 */  sll        $v0, $v0, 11
    /* 8BF48 8017DB48 21104500 */  addu       $v0, $v0, $a1
    /* 8BF4C 8017DB4C 21186200 */  addu       $v1, $v1, $v0
    /* 8BF50 8017DB50 00006494 */  lhu        $a0, 0x0($v1)
    /* 8BF54 8017DB54 0100C624 */  addiu      $a2, $a2, 0x1
    /* 8BF58 8017DB58 0000E4A4 */  sh         $a0, 0x0($a3)
    /* 8BF5C 8017DB5C EDFF0105 */  bgez       $t0, .L8017DB14
    /* 8BF60 8017DB60 0200E724 */   addiu     $a3, $a3, 0x2
    /* 8BF64 8017DB64 2138C001 */  addu       $a3, $t6, $zero
    /* 8BF68 8017DB68 2A10EA00 */  slt        $v0, $a3, $t2
    /* 8BF6C 8017DB6C DCFF4014 */  bnez       $v0, .L8017DAE0
    /* 8BF70 8017DB70 2118A001 */   addu      $v1, $t5, $zero
  .L8017DB74:
    /* 8BF74 8017DB74 0800E003 */  jr         $ra
    /* 8BF78 8017DB78 00000000 */   nop
endlabel func_8017DA64
