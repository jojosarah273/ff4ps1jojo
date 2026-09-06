nonmatching func_80180D64, 0xC4

glabel func_80180D64
    /* 8F164 80180D64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8F168 80180D68 0180053C */  lui        $a1, (0x80012800 >> 16)
    /* 8F16C 80180D6C 0028A534 */  ori        $a1, $a1, (0x80012800 & 0xFFFF)
    /* 8F170 80180D70 21400000 */  addu       $t0, $zero, $zero
    /* 8F174 80180D74 00240400 */  sll        $a0, $a0, 16
    /* 8F178 80180D78 03240400 */  sra        $a0, $a0, 16
    /* 8F17C 80180D7C 40700400 */  sll        $t6, $a0, 1
    /* 8F180 80180D80 07000F24 */  addiu      $t7, $zero, 0x7
    /* 8F184 80180D84 01000C3C */  lui        $t4, (0x10000 >> 16)
    /* 8F188 80180D88 AC01828F */  lw         $v0, %gp_rel(D_8019EEA8)($gp)
    /* 8F18C 80180D8C 40590400 */  sll        $t3, $a0, 5
    /* 8F190 80180D90 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8F194 80180D94 21686201 */  addu       $t5, $t3, $v0
    /* 8F198 80180D98 21480000 */  addu       $t1, $zero, $zero
  .L80180D9C:
    /* 8F19C 80180D9C 01000A25 */  addiu      $t2, $t0, 0x1
    /* 8F1A0 80180DA0 0100073C */  lui        $a3, (0x10000 >> 16)
    /* 8F1A4 80180DA4 2310E801 */  subu       $v0, $t7, $t0
    /* 8F1A8 80180DA8 80100200 */  sll        $v0, $v0, 2
    /* 8F1AC 80180DAC 21104B00 */  addu       $v0, $v0, $t3
    /* 8F1B0 80180DB0 21304500 */  addu       $a2, $v0, $a1
    /* 8F1B4 80180DB4 80180800 */  sll        $v1, $t0, 2
    /* 8F1B8 80180DB8 21406D00 */  addu       $t0, $v1, $t5
  .L80180DBC:
    /* 8F1BC 80180DBC 2120E000 */  addu       $a0, $a3, $zero
    /* 8F1C0 80180DC0 2138EC00 */  addu       $a3, $a3, $t4
    /* 8F1C4 80180DC4 21100901 */  addu       $v0, $t0, $t1
    /* 8F1C8 80180DC8 034C0400 */  sra        $t1, $a0, 16
    /* 8F1CC 80180DCC 00004390 */  lbu        $v1, 0x0($v0)
    /* 8F1D0 80180DD0 04002229 */  slti       $v0, $t1, 0x4
    /* 8F1D4 80180DD4 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 8F1D8 80180DD8 F8FF4014 */  bnez       $v0, .L80180DBC
    /* 8F1DC 80180DDC 0100C624 */   addiu     $a2, $a2, 0x1
    /* 8F1E0 80180DE0 00140A00 */  sll        $v0, $t2, 16
    /* 8F1E4 80180DE4 03440200 */  sra        $t0, $v0, 16
    /* 8F1E8 80180DE8 08000329 */  slti       $v1, $t0, 0x8
    /* 8F1EC 80180DEC EBFF6014 */  bnez       $v1, .L80180D9C
    /* 8F1F0 80180DF0 21480000 */   addu      $t1, $zero, $zero
    /* 8F1F4 80180DF4 94018427 */  addiu      $a0, $gp, %gp_rel(D_8019EE90)
    /* 8F1F8 80180DF8 A2018297 */  lhu        $v0, %gp_rel(D_8019EE9E)($gp)
    /* 8F1FC 80180DFC A4018397 */  lhu        $v1, %gp_rel(D_8019EEA0)($gp)
    /* 8F200 80180E00 80004224 */  addiu      $v0, $v0, 0x80
    /* 8F204 80180E04 21104E00 */  addu       $v0, $v0, $t6
    /* 8F208 80180E08 940182A7 */  sh         $v0, %gp_rel(D_8019EE90)($gp)
    /* 8F20C 80180E0C 960183A7 */  sh         $v1, %gp_rel(D_8019EE92)($gp)
    /* 8F210 80180E10 9051060C */  jal        func_80194640
    /* 8F214 80180E14 2128AB00 */   addu      $a1, $a1, $t3
    /* 8F218 80180E18 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8F21C 80180E1C 00000000 */  nop
    /* 8F220 80180E20 0800E003 */  jr         $ra
    /* 8F224 80180E24 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80180D64
