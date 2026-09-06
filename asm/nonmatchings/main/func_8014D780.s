nonmatching func_8014D780, 0x1EC

glabel func_8014D780
    /* 5BB80 8014D780 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5BB84 8014D784 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5BB88 8014D788 CCE4030C */  jal        func_800F9330
    /* 5BB8C 8014D78C 00000000 */   nop
    /* 5BB90 8014D790 80E4030C */  jal        func_800F9200
    /* 5BB94 8014D794 00000000 */   nop
    /* 5BB98 8014D798 92D0030C */  jal        func_800F4248
    /* 5BB9C 8014D79C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5BBA0 8014D7A0 48D0030C */  jal        func_800F4120
    /* 5BBA4 8014D7A4 02000424 */   addiu     $a0, $zero, 0x2
    /* 5BBA8 8014D7A8 4C004014 */  bnez       $v0, .L8014D8DC
    /* 5BBAC 8014D7AC 00000000 */   nop
    /* 5BBB0 8014D7B0 F7E4030C */  jal        func_800F93DC
    /* 5BBB4 8014D7B4 00000000 */   nop
    /* 5BBB8 8014D7B8 80E4030C */  jal        func_800F9200
    /* 5BBBC 8014D7BC 00000000 */   nop
    /* 5BBC0 8014D7C0 92D0030C */  jal        func_800F4248
    /* 5BBC4 8014D7C4 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 5BBC8 8014D7C8 48D0030C */  jal        func_800F4120
    /* 5BBCC 8014D7CC 02020424 */   addiu     $a0, $zero, 0x202
    /* 5BBD0 8014D7D0 09004014 */  bnez       $v0, .L8014D7F8
    /* 5BBD4 8014D7D4 00000000 */   nop
    /* 5BBD8 8014D7D8 D235050C */  jal        func_8014D748
    /* 5BBDC 8014D7DC 00000000 */   nop
    /* 5BBE0 8014D7E0 F7E4030C */  jal        func_800F93DC
    /* 5BBE4 8014D7E4 00000000 */   nop
    /* 5BBE8 8014D7E8 68E5030C */  jal        func_800F95A0
    /* 5BBEC 8014D7EC 00000000 */   nop
    /* 5BBF0 8014D7F0 57360508 */  j          .L8014D95C
    /* 5BBF4 8014D7F4 00000000 */   nop
  .L8014D7F8:
    /* 5BBF8 8014D7F8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5BBFC 8014D7FC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5BC00 8014D800 00000000 */  nop
    /* 5BC04 8014D804 00006290 */  lbu        $v0, 0x0($v1)
    /* 5BC08 8014D808 00000000 */  nop
    /* 5BC0C 8014D80C C2100200 */  srl        $v0, $v0, 3
    /* 5BC10 8014D810 000062A0 */  sb         $v0, 0x0($v1)
    /* 5BC14 8014D814 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 5BC18 8014D818 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 5BC1C 8014D81C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5BC20 8014D820 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5BC24 8014D824 00008294 */  lhu        $v0, 0x0($a0)
    /* 5BC28 8014D828 20000424 */  addiu      $a0, $zero, 0x20
    /* 5BC2C 8014D82C 91E5030C */  jal        func_800F9644
    /* 5BC30 8014D830 000062A4 */   sh        $v0, 0x0($v1)
    /* 5BC34 8014D834 1600043C */  lui        $a0, (0x16FFC6 >> 16)
    /* 5BC38 8014D838 3DDB030C */  jal        func_800F6CF4
    /* 5BC3C 8014D83C C6FF8434 */   ori       $a0, $a0, (0x16FFC6 & 0xFFFF)
    /* 5BC40 8014D840 6CE0030C */  jal        func_800F81B0
    /* 5BC44 8014D844 55F40434 */   ori       $a0, $zero, 0xF455
    /* 5BC48 8014D848 C7E5030C */  jal        func_800F971C
    /* 5BC4C 8014D84C 00000000 */   nop
    /* 5BC50 8014D850 98E5030C */  jal        func_800F9660
    /* 5BC54 8014D854 20000424 */   addiu     $a0, $zero, 0x20
    /* 5BC58 8014D858 F7E4030C */  jal        func_800F93DC
    /* 5BC5C 8014D85C 00000000 */   nop
    /* 5BC60 8014D860 92D0030C */  jal        func_800F4248
    /* 5BC64 8014D864 07000424 */   addiu     $a0, $zero, 0x7
    /* 5BC68 8014D868 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5BC6C 8014D86C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5BC70 8014D870 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5BC74 8014D874 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5BC78 8014D878 00006294 */  lhu        $v0, 0x0($v1)
    /* 5BC7C 8014D87C 00000000 */  nop
    /* 5BC80 8014D880 000082A4 */  sh         $v0, 0x0($a0)
    /* 5BC84 8014D884 1A80023C */  lui        $v0, %hi(D_8019A0DC)
    /* 5BC88 8014D888 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5BC8C 8014D88C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5BC90 8014D890 DCA04224 */  addiu      $v0, $v0, %lo(D_8019A0DC)
    /* 5BC94 8014D894 0000A394 */  lhu        $v1, 0x0($a1)
    /* 5BC98 8014D898 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 5BC9C 8014D89C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 5BCA0 8014D8A0 21186200 */  addu       $v1, $v1, $v0
    /* 5BCA4 8014D8A4 00006290 */  lbu        $v0, 0x0($v1)
    /* 5BCA8 8014D8A8 52F40434 */  ori        $a0, $zero, 0xF452
    /* 5BCAC 8014D8AC 62E0030C */  jal        func_800F8188
    /* 5BCB0 8014D8B0 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 5BCB4 8014D8B4 90D8030C */  jal        func_800F6240
    /* 5BCB8 8014D8B8 51F40434 */   ori       $a0, $zero, 0xF451
    /* 5BCBC 8014D8BC DDE3030C */  jal        func_800F8F74
    /* 5BCC0 8014D8C0 53F40434 */   ori       $a0, $zero, 0xF453
    /* 5BCC4 8014D8C4 DDE3030C */  jal        func_800F8F74
    /* 5BCC8 8014D8C8 54F40434 */   ori       $a0, $zero, 0xF454
    /* 5BCCC 8014D8CC 68E5030C */  jal        func_800F95A0
    /* 5BCD0 8014D8D0 00000000 */   nop
    /* 5BCD4 8014D8D4 57360508 */  j          .L8014D95C
    /* 5BCD8 8014D8D8 00000000 */   nop
  .L8014D8DC:
    /* 5BCDC 8014D8DC F7E4030C */  jal        func_800F93DC
    /* 5BCE0 8014D8E0 00000000 */   nop
    /* 5BCE4 8014D8E4 80E4030C */  jal        func_800F9200
    /* 5BCE8 8014D8E8 00000000 */   nop
    /* 5BCEC 8014D8EC 92D0030C */  jal        func_800F4248
    /* 5BCF0 8014D8F0 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 5BCF4 8014D8F4 62E0030C */  jal        func_800F8188
    /* 5BCF8 8014D8F8 88EF0434 */   ori       $a0, $zero, 0xEF88
    /* 5BCFC 8014D8FC F7E4030C */  jal        func_800F93DC
    /* 5BD00 8014D900 00000000 */   nop
    /* 5BD04 8014D904 80E4030C */  jal        func_800F9200
    /* 5BD08 8014D908 00000000 */   nop
    /* 5BD0C 8014D90C 53D9030C */  jal        func_800F654C
    /* 5BD10 8014D910 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 5BD14 8014D914 62E0030C */  jal        func_800F8188
    /* 5BD18 8014D918 35F40434 */   ori       $a0, $zero, 0xF435
    /* 5BD1C 8014D91C 62E0030C */  jal        func_800F8188
    /* 5BD20 8014D920 34F40434 */   ori       $a0, $zero, 0xF434
    /* 5BD24 8014D924 62E0030C */  jal        func_800F8188
    /* 5BD28 8014D928 33F40434 */   ori       $a0, $zero, 0xF433
    /* 5BD2C 8014D92C DDE3030C */  jal        func_800F8F74
    /* 5BD30 8014D930 8AEF0434 */   ori       $a0, $zero, 0xEF8A
    /* 5BD34 8014D934 DDE3030C */  jal        func_800F8F74
    /* 5BD38 8014D938 89EF0434 */   ori       $a0, $zero, 0xEF89
    /* 5BD3C 8014D93C F7E4030C */  jal        func_800F93DC
    /* 5BD40 8014D940 00000000 */   nop
    /* 5BD44 8014D944 92D0030C */  jal        func_800F4248
    /* 5BD48 8014D948 07000424 */   addiu     $a0, $zero, 0x7
    /* 5BD4C 8014D94C 62E0030C */  jal        func_800F8188
    /* 5BD50 8014D950 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 5BD54 8014D954 68E5030C */  jal        func_800F95A0
    /* 5BD58 8014D958 00000000 */   nop
  .L8014D95C:
    /* 5BD5C 8014D95C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5BD60 8014D960 00000000 */  nop
    /* 5BD64 8014D964 0800E003 */  jr         $ra
    /* 5BD68 8014D968 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D780
