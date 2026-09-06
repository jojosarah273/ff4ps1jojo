nonmatching func_8010D894, 0x140

glabel func_8010D894
    /* 1BC94 8010D894 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1BC98 8010D898 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1BC9C 8010D89C E7E4030C */  jal        func_800F939C
    /* 1BCA0 8010D8A0 00000000 */   nop
    /* 1BCA4 8010D8A4 80E4030C */  jal        func_800F9200
    /* 1BCA8 8010D8A8 00000000 */   nop
    /* 1BCAC 8010D8AC 92D0030C */  jal        func_800F4248
    /* 1BCB0 8010D8B0 07000424 */   addiu     $a0, $zero, 0x7
    /* 1BCB4 8010D8B4 93E0030C */  jal        func_800F824C
    /* 1BCB8 8010D8B8 07000424 */   addiu     $a0, $zero, 0x7
    /* 1BCBC 8010D8BC F7E4030C */  jal        func_800F93DC
    /* 1BCC0 8010D8C0 00000000 */   nop
    /* 1BCC4 8010D8C4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1BCC8 8010D8C8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1BCCC 8010D8CC 00000000 */  nop
    /* 1BCD0 8010D8D0 00006290 */  lbu        $v0, 0x0($v1)
    /* 1BCD4 8010D8D4 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 1BCD8 8010D8D8 C2100200 */  srl        $v0, $v0, 3
    /* 1BCDC 8010D8DC 93E0030C */  jal        func_800F824C
    /* 1BCE0 8010D8E0 000062A0 */   sb        $v0, 0x0($v1)
    /* 1BCE4 8010D8E4 59D9030C */  jal        func_800F6564
    /* 1BCE8 8010D8E8 E50F0424 */   addiu     $a0, $zero, 0xFE5
    /* 1BCEC 8010D8EC 0DD9030C */  jal        func_800F6434
    /* 1BCF0 8010D8F0 80000424 */   addiu     $a0, $zero, 0x80
    /* 1BCF4 8010D8F4 07004014 */  bnez       $v0, .L8010D914
    /* 1BCF8 8010D8F8 00000000 */   nop
    /* 1BCFC 8010D8FC 59D9030C */  jal        func_800F6564
    /* 1BD00 8010D900 01170424 */   addiu     $a0, $zero, 0x1701
    /* 1BD04 8010D904 0DD9030C */  jal        func_800F6434
    /* 1BD08 8010D908 02000424 */   addiu     $a0, $zero, 0x2
    /* 1BD0C 8010D90C 09004014 */  bnez       $v0, .L8010D934
    /* 1BD10 8010D910 00000000 */   nop
  .L8010D914:
    /* 1BD14 8010D914 8CD9030C */  jal        func_800F6630
    /* 1BD18 8010D918 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1BD1C 8010D91C 04D5030C */  jal        func_800F5410
    /* 1BD20 8010D920 00000000 */   nop
    /* 1BD24 8010D924 02D0030C */  jal        func_800F4008
    /* 1BD28 8010D928 20000424 */   addiu     $a0, $zero, 0x20
    /* 1BD2C 8010D92C 93E0030C */  jal        func_800F824C
    /* 1BD30 8010D930 3D000424 */   addiu     $a0, $zero, 0x3D
  .L8010D934:
    /* 1BD34 8010D934 EEE3030C */  jal        func_800F8FB8
    /* 1BD38 8010D938 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1BD3C 8010D93C 8CD9030C */  jal        func_800F6630
    /* 1BD40 8010D940 07000424 */   addiu     $a0, $zero, 0x7
    /* 1BD44 8010D944 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 1BD48 8010D948 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 1BD4C 8010D94C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 1BD50 8010D950 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 1BD54 8010D954 00004394 */  lhu        $v1, 0x0($v0)
    /* 1BD58 8010D958 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 1BD5C 8010D95C 9CDC030C */  jal        func_800F7270
    /* 1BD60 8010D960 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 1BD64 8010D964 1ADB030C */  jal        func_800F6C68
    /* 1BD68 8010D968 E0120424 */   addiu     $a0, $zero, 0x12E0
  .L8010D96C:
    /* 1BD6C 8010D96C A4D6030C */  jal        func_800F5A90
    /* 1BD70 8010D970 21200000 */   addu      $a0, $zero, $zero
    /* 1BD74 8010D974 F5D4030C */  jal        func_800F53D4
    /* 1BD78 8010D978 00000000 */   nop
    /* 1BD7C 8010D97C 07004014 */  bnez       $v0, .L8010D99C
    /* 1BD80 8010D980 00000000 */   nop
    /* 1BD84 8010D984 19DE030C */  jal        func_800F7864
    /* 1BD88 8010D988 00000000 */   nop
    /* 1BD8C 8010D98C A8D7030C */  jal        func_800F5EA0
    /* 1BD90 8010D990 00000000 */   nop
    /* 1BD94 8010D994 5B360408 */  j          .L8010D96C
    /* 1BD98 8010D998 00000000 */   nop
  .L8010D99C:
    /* 1BD9C 8010D99C 19DE030C */  jal        func_800F7864
    /* 1BDA0 8010D9A0 00000000 */   nop
    /* 1BDA4 8010D9A4 BADD030C */  jal        func_800F76E8
    /* 1BDA8 8010D9A8 00000000 */   nop
    /* 1BDAC 8010D9AC 53D9030C */  jal        func_800F654C
    /* 1BDB0 8010D9B0 21200000 */   addu      $a0, $zero, $zero
    /* 1BDB4 8010D9B4 02D0030C */  jal        func_800F4008
    /* 1BDB8 8010D9B8 21200000 */   addu      $a0, $zero, $zero
    /* 1BDBC 8010D9BC 83E5030C */  jal        func_800F960C
    /* 1BDC0 8010D9C0 00000000 */   nop
    /* 1BDC4 8010D9C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1BDC8 8010D9C8 00000000 */  nop
    /* 1BDCC 8010D9CC 0800E003 */  jr         $ra
    /* 1BDD0 8010D9D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010D894
