nonmatching func_8017D7D8, 0xC0

glabel func_8017D7D8
    /* 8BBD8 8017D7D8 0400C78C */  lw         $a3, 0x4($a2)
    /* 8BBDC 8017D7DC 00000000 */  nop
    /* 8BBE0 8017D7E0 0600E294 */  lhu        $v0, 0x6($a3)
    /* 8BBE4 8017D7E4 0A00E384 */  lh         $v1, 0xA($a3)
    /* 8BBE8 8017D7E8 00140200 */  sll        $v0, $v0, 16
    /* 8BBEC 8017D7EC C3440200 */  sra        $t0, $v0, 19
    /* 8BBF0 8017D7F0 03140200 */  sra        $v0, $v0, 16
    /* 8BBF4 8017D7F4 21104300 */  addu       $v0, $v0, $v1
    /* 8BBF8 8017D7F8 10004A24 */  addiu      $t2, $v0, 0x10
    /* 8BBFC 8017D7FC F9004229 */  slti       $v0, $t2, 0xF9
    /* 8BC00 8017D800 02004014 */  bnez       $v0, .L8017D80C
    /* 8BC04 8017D804 21688000 */   addu      $t5, $a0, $zero
    /* 8BC08 8017D808 F8000A24 */  addiu      $t2, $zero, 0xF8
  .L8017D80C:
    /* 8BC0C 8017D80C C3500A00 */  sra        $t2, $t2, 3
    /* 8BC10 8017D810 40190800 */  sll        $v1, $t0, 5
    /* 8BC14 8017D814 0200E284 */  lh         $v0, 0x2($a3)
    /* 8BC18 8017D818 0000E490 */  lbu        $a0, 0x0($a3)
    /* 8BC1C 8017D81C 80100200 */  sll        $v0, $v0, 2
    /* 8BC20 8017D820 E0034630 */  andi       $a2, $v0, 0x3E0
    /* 8BC24 8017D824 2130C300 */  addu       $a2, $a2, $v1
    /* 8BC28 8017D828 2A100A01 */  slt        $v0, $t0, $t2
    /* 8BC2C 8017D82C 18004010 */  beqz       $v0, .L8017D890
    /* 8BC30 8017D830 C2200400 */   srl       $a0, $a0, 3
  .L8017D834:
    /* 8BC34 8017D834 21388000 */  addu       $a3, $a0, $zero
    /* 8BC38 8017D838 01000B25 */  addiu      $t3, $t0, 0x1
    /* 8BC3C 8017D83C 2000CC24 */  addiu      $t4, $a2, 0x20
    /* 8BC40 8017D840 E003C930 */  andi       $t1, $a2, 0x3E0
    /* 8BC44 8017D844 40110800 */  sll        $v0, $t0, 5
    /* 8BC48 8017D848 21104800 */  addu       $v0, $v0, $t0
    /* 8BC4C 8017D84C 40100200 */  sll        $v0, $v0, 1
    /* 8BC50 8017D850 21304D00 */  addu       $a2, $v0, $t5
    /* 8BC54 8017D854 20000824 */  addiu      $t0, $zero, 0x20
  .L8017D858:
    /* 8BC58 8017D858 FFFF0825 */  addiu      $t0, $t0, -0x1
    /* 8BC5C 8017D85C 1F00E230 */  andi       $v0, $a3, 0x1F
    /* 8BC60 8017D860 25104900 */  or         $v0, $v0, $t1
    /* 8BC64 8017D864 40100200 */  sll        $v0, $v0, 1
    /* 8BC68 8017D868 21104500 */  addu       $v0, $v0, $a1
    /* 8BC6C 8017D86C 00004394 */  lhu        $v1, 0x0($v0)
    /* 8BC70 8017D870 0100E724 */  addiu      $a3, $a3, 0x1
    /* 8BC74 8017D874 0000C3A4 */  sh         $v1, 0x0($a2)
    /* 8BC78 8017D878 F7FF0105 */  bgez       $t0, .L8017D858
    /* 8BC7C 8017D87C 0200C624 */   addiu     $a2, $a2, 0x2
    /* 8BC80 8017D880 21406001 */  addu       $t0, $t3, $zero
    /* 8BC84 8017D884 2A100A01 */  slt        $v0, $t0, $t2
    /* 8BC88 8017D888 EAFF4014 */  bnez       $v0, .L8017D834
    /* 8BC8C 8017D88C 21308001 */   addu      $a2, $t4, $zero
  .L8017D890:
    /* 8BC90 8017D890 0800E003 */  jr         $ra
    /* 8BC94 8017D894 00000000 */   nop
endlabel func_8017D7D8
