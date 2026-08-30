nonmatching func_80180C90, 0xD4

glabel func_80180C90
    /* 8F090 80180C90 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8F094 80180C94 0180053C */  lui        $a1, (0x80012000 >> 16)
    /* 8F098 80180C98 0020A534 */  ori        $a1, $a1, (0x80012000 & 0xFFFF)
    /* 8F09C 80180C9C 21400000 */  addu       $t0, $zero, $zero
    /* 8F0A0 80180CA0 00240400 */  sll        $a0, $a0, 16
    /* 8F0A4 80180CA4 03240400 */  sra        $a0, $a0, 16
    /* 8F0A8 80180CA8 40700400 */  sll        $t6, $a0, 1
    /* 8F0AC 80180CAC 07000F24 */  addiu      $t7, $zero, 0x7
    /* 8F0B0 80180CB0 01000C3C */  lui        $t4, (0x10000 >> 16)
    /* 8F0B4 80180CB4 AC01828F */  lw         $v0, %gp_rel(D_8019EEA8)($gp)
    /* 8F0B8 80180CB8 40590400 */  sll        $t3, $a0, 5
    /* 8F0BC 80180CBC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8F0C0 80180CC0 21684B00 */  addu       $t5, $v0, $t3
    /* 8F0C4 80180CC4 21480000 */  addu       $t1, $zero, $zero
  .L80180CC8:
    /* 8F0C8 80180CC8 01000A25 */  addiu      $t2, $t0, 0x1
    /* 8F0CC 80180CCC 0100073C */  lui        $a3, (0x10000 >> 16)
    /* 8F0D0 80180CD0 2310E801 */  subu       $v0, $t7, $t0
    /* 8F0D4 80180CD4 80100200 */  sll        $v0, $v0, 2
    /* 8F0D8 80180CD8 21104B00 */  addu       $v0, $v0, $t3
    /* 8F0DC 80180CDC 21304500 */  addu       $a2, $v0, $a1
    /* 8F0E0 80180CE0 80180800 */  sll        $v1, $t0, 2
    /* 8F0E4 80180CE4 2140A301 */  addu       $t0, $t5, $v1
  .L80180CE8:
    /* 8F0E8 80180CE8 2120E000 */  addu       $a0, $a3, $zero
    /* 8F0EC 80180CEC 2138EC00 */  addu       $a3, $a3, $t4
    /* 8F0F0 80180CF0 23100901 */  subu       $v0, $t0, $t1
    /* 8F0F4 80180CF4 03004390 */  lbu        $v1, 0x3($v0)
    /* 8F0F8 80180CF8 034C0400 */  sra        $t1, $a0, 16
    /* 8F0FC 80180CFC 0F006230 */  andi       $v0, $v1, 0xF
    /* 8F100 80180D00 00110200 */  sll        $v0, $v0, 4
    /* 8F104 80180D04 02190300 */  srl        $v1, $v1, 4
    /* 8F108 80180D08 25104300 */  or         $v0, $v0, $v1
    /* 8F10C 80180D0C 0000C2A0 */  sb         $v0, 0x0($a2)
    /* 8F110 80180D10 04002229 */  slti       $v0, $t1, 0x4
    /* 8F114 80180D14 F4FF4014 */  bnez       $v0, .L80180CE8
    /* 8F118 80180D18 0100C624 */   addiu     $a2, $a2, 0x1
    /* 8F11C 80180D1C 00140A00 */  sll        $v0, $t2, 16
    /* 8F120 80180D20 03440200 */  sra        $t0, $v0, 16
    /* 8F124 80180D24 08000329 */  slti       $v1, $t0, 0x8
    /* 8F128 80180D28 E7FF6014 */  bnez       $v1, .L80180CC8
    /* 8F12C 80180D2C 21480000 */   addu      $t1, $zero, $zero
    /* 8F130 80180D30 94018427 */  addiu      $a0, $gp, %gp_rel(D_8019EE90)
    /* 8F134 80180D34 A2018297 */  lhu        $v0, %gp_rel(D_8019EE9E)($gp)
    /* 8F138 80180D38 A4018397 */  lhu        $v1, %gp_rel(D_8019EEA0)($gp)
    /* 8F13C 80180D3C C0004224 */  addiu      $v0, $v0, 0xC0
    /* 8F140 80180D40 21104E00 */  addu       $v0, $v0, $t6
    /* 8F144 80180D44 940182A7 */  sh         $v0, %gp_rel(D_8019EE90)($gp)
    /* 8F148 80180D48 960183A7 */  sh         $v1, %gp_rel(D_8019EE92)($gp)
    /* 8F14C 80180D4C 9051060C */  jal        func_80194640
    /* 8F150 80180D50 2128AB00 */   addu      $a1, $a1, $t3
    /* 8F154 80180D54 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8F158 80180D58 00000000 */  nop
    /* 8F15C 80180D5C 0800E003 */  jr         $ra
    /* 8F160 80180D60 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80180C90
