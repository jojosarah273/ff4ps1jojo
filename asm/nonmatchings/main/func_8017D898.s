nonmatching func_8017D898, 0xE8

glabel func_8017D898
    /* 8BC98 8017D898 0400C78C */  lw         $a3, 0x4($a2)
    /* 8BC9C 8017D89C 00000000 */  nop
    /* 8BCA0 8017D8A0 0600E294 */  lhu        $v0, 0x6($a3)
    /* 8BCA4 8017D8A4 0A00E384 */  lh         $v1, 0xA($a3)
    /* 8BCA8 8017D8A8 00140200 */  sll        $v0, $v0, 16
    /* 8BCAC 8017D8AC C3340200 */  sra        $a2, $v0, 19
    /* 8BCB0 8017D8B0 03140200 */  sra        $v0, $v0, 16
    /* 8BCB4 8017D8B4 21104300 */  addu       $v0, $v0, $v1
    /* 8BCB8 8017D8B8 10004924 */  addiu      $t1, $v0, 0x10
    /* 8BCBC 8017D8BC F9002229 */  slti       $v0, $t1, 0xF9
    /* 8BCC0 8017D8C0 02004014 */  bnez       $v0, .L8017D8CC
    /* 8BCC4 8017D8C4 21788000 */   addu      $t7, $a0, $zero
    /* 8BCC8 8017D8C8 F8000924 */  addiu      $t1, $zero, 0xF8
  .L8017D8CC:
    /* 8BCCC 8017D8CC C3480900 */  sra        $t1, $t1, 3
    /* 8BCD0 8017D8D0 0200E284 */  lh         $v0, 0x2($a3)
    /* 8BCD4 8017D8D4 40190600 */  sll        $v1, $a2, 5
    /* 8BCD8 8017D8D8 80100200 */  sll        $v0, $v0, 2
    /* 8BCDC 8017D8DC E0034430 */  andi       $a0, $v0, 0x3E0
    /* 8BCE0 8017D8E0 0000E294 */  lhu        $v0, 0x0($a3)
    /* 8BCE4 8017D8E4 21208300 */  addu       $a0, $a0, $v1
    /* 8BCE8 8017D8E8 00140200 */  sll        $v0, $v0, 16
    /* 8BCEC 8017D8EC C31C0200 */  sra        $v1, $v0, 19
    /* 8BCF0 8017D8F0 1F006E30 */  andi       $t6, $v1, 0x1F
    /* 8BCF4 8017D8F4 03160200 */  sra        $v0, $v0, 24
    /* 8BCF8 8017D8F8 2A18C900 */  slt        $v1, $a2, $t1
    /* 8BCFC 8017D8FC 1E006010 */  beqz       $v1, .L8017D978
    /* 8BD00 8017D900 01004D30 */   andi      $t5, $v0, 0x1
  .L8017D904:
    /* 8BD04 8017D904 2138C001 */  addu       $a3, $t6, $zero
    /* 8BD08 8017D908 0100CB24 */  addiu      $t3, $a2, 0x1
    /* 8BD0C 8017D90C 20008C24 */  addiu      $t4, $a0, 0x20
    /* 8BD10 8017D910 E0038A30 */  andi       $t2, $a0, 0x3E0
    /* 8BD14 8017D914 40110600 */  sll        $v0, $a2, 5
    /* 8BD18 8017D918 21104600 */  addu       $v0, $v0, $a2
    /* 8BD1C 8017D91C 40100200 */  sll        $v0, $v0, 1
    /* 8BD20 8017D920 21304F00 */  addu       $a2, $v0, $t7
    /* 8BD24 8017D924 20000824 */  addiu      $t0, $zero, 0x20
  .L8017D928:
    /* 8BD28 8017D928 FFFF0825 */  addiu      $t0, $t0, -0x1
    /* 8BD2C 8017D92C 43110700 */  sra        $v0, $a3, 5
    /* 8BD30 8017D930 01004230 */  andi       $v0, $v0, 0x1
    /* 8BD34 8017D934 2110A201 */  addu       $v0, $t5, $v0
    /* 8BD38 8017D938 01004230 */  andi       $v0, $v0, 0x1
    /* 8BD3C 8017D93C 1F00E330 */  andi       $v1, $a3, 0x1F
    /* 8BD40 8017D940 25186A00 */  or         $v1, $v1, $t2
    /* 8BD44 8017D944 40180300 */  sll        $v1, $v1, 1
    /* 8BD48 8017D948 C0120200 */  sll        $v0, $v0, 11
    /* 8BD4C 8017D94C 21104500 */  addu       $v0, $v0, $a1
    /* 8BD50 8017D950 21186200 */  addu       $v1, $v1, $v0
    /* 8BD54 8017D954 00006494 */  lhu        $a0, 0x0($v1)
    /* 8BD58 8017D958 0100E724 */  addiu      $a3, $a3, 0x1
    /* 8BD5C 8017D95C 0000C4A4 */  sh         $a0, 0x0($a2)
    /* 8BD60 8017D960 F1FF0105 */  bgez       $t0, .L8017D928
    /* 8BD64 8017D964 0200C624 */   addiu     $a2, $a2, 0x2
    /* 8BD68 8017D968 21306001 */  addu       $a2, $t3, $zero
    /* 8BD6C 8017D96C 2A10C900 */  slt        $v0, $a2, $t1
    /* 8BD70 8017D970 E4FF4014 */  bnez       $v0, .L8017D904
    /* 8BD74 8017D974 21208001 */   addu      $a0, $t4, $zero
  .L8017D978:
    /* 8BD78 8017D978 0800E003 */  jr         $ra
    /* 8BD7C 8017D97C 00000000 */   nop
endlabel func_8017D898
