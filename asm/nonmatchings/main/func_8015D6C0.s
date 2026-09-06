nonmatching func_8015D6C0, 0x1B8

glabel func_8015D6C0
    /* 6BAC0 8015D6C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6BAC4 8015D6C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6BAC8 8015D6C8 9CDC030C */  jal        func_800F7270
    /* 6BACC 8015D6CC A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6BAD0 8015D6D0 DADA030C */  jal        func_800F6B68
    /* 6BAD4 8015D6D4 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6BAD8 8015D6D8 92D0030C */  jal        func_800F4248
    /* 6BADC 8015D6DC 02000424 */   addiu     $a0, $zero, 0x2
    /* 6BAE0 8015D6E0 48D0030C */  jal        func_800F4120
    /* 6BAE4 8015D6E4 02020424 */   addiu     $a0, $zero, 0x202
    /* 6BAE8 8015D6E8 5F004014 */  bnez       $v0, .L8015D868
    /* 6BAEC 8015D6EC 00000000 */   nop
    /* 6BAF0 8015D6F0 DADA030C */  jal        func_800F6B68
    /* 6BAF4 8015D6F4 06200424 */   addiu     $a0, $zero, 0x2006
    /* 6BAF8 8015D6F8 0DD9030C */  jal        func_800F6434
    /* 6BAFC 8015D6FC 80000424 */   addiu     $a0, $zero, 0x80
    /* 6BB00 8015D700 59004014 */  bnez       $v0, .L8015D868
    /* 6BB04 8015D704 00000000 */   nop
    /* 6BB08 8015D708 DADA030C */  jal        func_800F6B68
    /* 6BB0C 8015D70C 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6BB10 8015D710 92D0030C */  jal        func_800F4248
    /* 6BB14 8015D714 03000424 */   addiu     $a0, $zero, 0x3
    /* 6BB18 8015D718 7AD8030C */  jal        func_800F61E8
    /* 6BB1C 8015D71C 00000000 */   nop
    /* 6BB20 8015D720 93E0030C */  jal        func_800F824C
    /* 6BB24 8015D724 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6BB28 8015D728 5DD5030C */  jal        func_800F5574
    /* 6BB2C 8015D72C 04000424 */   addiu     $a0, $zero, 0x4
    /* 6BB30 8015D730 F5D4030C */  jal        func_800F53D4
    /* 6BB34 8015D734 00000000 */   nop
    /* 6BB38 8015D738 23004010 */  beqz       $v0, .L8015D7C8
    /* 6BB3C 8015D73C 00000000 */   nop
    /* 6BB40 8015D740 DADA030C */  jal        func_800F6B68
    /* 6BB44 8015D744 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6BB48 8015D748 92D0030C */  jal        func_800F4248
    /* 6BB4C 8015D74C FC000424 */   addiu     $a0, $zero, 0xFC
    /* 6BB50 8015D750 DAE1030C */  jal        func_800F8768
    /* 6BB54 8015D754 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6BB58 8015D758 DADA030C */  jal        func_800F6B68
    /* 6BB5C 8015D75C 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6BB60 8015D760 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6BB64 8015D764 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6BB68 8015D768 00000000 */  nop
    /* 6BB6C 8015D76C 00006290 */  lbu        $v0, 0x0($v1)
    /* 6BB70 8015D770 03200424 */  addiu      $a0, $zero, 0x2003
    /* 6BB74 8015D774 40004234 */  ori        $v0, $v0, 0x40
    /* 6BB78 8015D778 DAE1030C */  jal        func_800F8768
    /* 6BB7C 8015D77C 000062A0 */   sb        $v0, 0x0($v1)
    /* 6BB80 8015D780 8CD9030C */  jal        func_800F6630
    /* 6BB84 8015D784 D2000424 */   addiu     $a0, $zero, 0xD2
    /* 6BB88 8015D788 50D4030C */  jal        func_800F5140
    /* 6BB8C 8015D78C 00000000 */   nop
    /* 6BB90 8015D790 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6BB94 8015D794 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6BB98 8015D798 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6BB9C 8015D79C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6BBA0 8015D7A0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6BBA4 8015D7A4 EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6BBA8 8015D7A8 59D9030C */  jal        func_800F6564
    /* 6BBAC 8015D7AC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6BBB0 8015D7B0 92D0030C */  jal        func_800F4248
    /* 6BBB4 8015D7B4 F7000424 */   addiu     $a0, $zero, 0xF7
    /* 6BBB8 8015D7B8 62E0030C */  jal        func_800F8188
    /* 6BBBC 8015D7BC EB290424 */   addiu     $a0, $zero, 0x29EB
    /* 6BBC0 8015D7C0 1A760508 */  j          .L8015D868
    /* 6BBC4 8015D7C4 00000000 */   nop
  .L8015D7C8:
    /* 6BBC8 8015D7C8 DADA030C */  jal        func_800F6B68
    /* 6BBCC 8015D7CC 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6BBD0 8015D7D0 0FCF030C */  jal        func_800F3C3C
    /* 6BBD4 8015D7D4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6BBD8 8015D7D8 31DE030C */  jal        func_800F78C4
    /* 6BBDC 8015D7DC 21204000 */   addu      $a0, $v0, $zero
    /* 6BBE0 8015D7E0 DAE1030C */  jal        func_800F8768
    /* 6BBE4 8015D7E4 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6BBE8 8015D7E8 8CD9030C */  jal        func_800F6630
    /* 6BBEC 8015D7EC D2000424 */   addiu     $a0, $zero, 0xD2
    /* 6BBF0 8015D7F0 50D4030C */  jal        func_800F5140
    /* 6BBF4 8015D7F4 00000000 */   nop
    /* 6BBF8 8015D7F8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6BBFC 8015D7FC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6BC00 8015D800 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6BC04 8015D804 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6BC08 8015D808 00004394 */  lhu        $v1, 0x0($v0)
    /* 6BC0C 8015D80C 442B0424 */  addiu      $a0, $zero, 0x2B44
    /* 6BC10 8015D810 DADA030C */  jal        func_800F6B68
    /* 6BC14 8015D814 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6BC18 8015D818 93E0030C */  jal        func_800F824C
    /* 6BC1C 8015D81C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6BC20 8015D820 DADA030C */  jal        func_800F6B68
    /* 6BC24 8015D824 452B0424 */   addiu     $a0, $zero, 0x2B45
    /* 6BC28 8015D828 93E0030C */  jal        func_800F824C
    /* 6BC2C 8015D82C AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6BC30 8015D830 84DC030C */  jal        func_800F7210
    /* 6BC34 8015D834 55350424 */   addiu     $a0, $zero, 0x3555
    /* 6BC38 8015D838 8CD9030C */  jal        func_800F6630
    /* 6BC3C 8015D83C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6BC40 8015D840 DAE1030C */  jal        func_800F8768
    /* 6BC44 8015D844 042A0424 */   addiu     $a0, $zero, 0x2A04
    /* 6BC48 8015D848 8CD9030C */  jal        func_800F6630
    /* 6BC4C 8015D84C AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6BC50 8015D850 DAE1030C */  jal        func_800F8768
    /* 6BC54 8015D854 052A0424 */   addiu     $a0, $zero, 0x2A05
    /* 6BC58 8015D858 53D9030C */  jal        func_800F654C
    /* 6BC5C 8015D85C 40000424 */   addiu     $a0, $zero, 0x40
    /* 6BC60 8015D860 DAE1030C */  jal        func_800F8768
    /* 6BC64 8015D864 062A0424 */   addiu     $a0, $zero, 0x2A06
  .L8015D868:
    /* 6BC68 8015D868 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6BC6C 8015D86C 00000000 */  nop
    /* 6BC70 8015D870 0800E003 */  jr         $ra
    /* 6BC74 8015D874 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015D6C0
