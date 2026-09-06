nonmatching func_8013A8CC, 0x84

glabel func_8013A8CC
    /* 48CCC 8013A8CC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 48CD0 8013A8D0 41000424 */  addiu      $a0, $zero, 0x41
    /* 48CD4 8013A8D4 1400BFAF */  sw         $ra, 0x14($sp)
    /* 48CD8 8013A8D8 9CDC030C */  jal        func_800F7270
    /* 48CDC 8013A8DC 1000B0AF */   sw        $s0, 0x10($sp)
    /* 48CE0 8013A8E0 1A80103C */  lui        $s0, %hi(D_8019A084)
  .L8013A8E4:
    /* 48CE4 8013A8E4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 48CE8 8013A8E8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 48CEC 8013A8EC 84A00426 */  addiu      $a0, $s0, %lo(D_8019A084)
    /* 48CF0 8013A8F0 00004394 */  lhu        $v1, 0x0($v0)
    /* 48CF4 8013A8F4 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 48CF8 8013A8F8 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 48CFC 8013A8FC 21186400 */  addu       $v1, $v1, $a0
    /* 48D00 8013A900 00006290 */  lbu        $v0, 0x0($v1)
    /* 48D04 8013A904 21200000 */  addu       $a0, $zero, $zero
    /* 48D08 8013A908 58E2030C */  jal        func_800F8960
    /* 48D0C 8013A90C 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 48D10 8013A910 EFD8030C */  jal        func_800F63BC
    /* 48D14 8013A914 00000000 */   nop
    /* 48D18 8013A918 EFD8030C */  jal        func_800F63BC
    /* 48D1C 8013A91C 00000000 */   nop
    /* 48D20 8013A920 D9D8030C */  jal        func_800F6364
    /* 48D24 8013A924 00000000 */   nop
    /* 48D28 8013A928 56D6030C */  jal        func_800F5958
    /* 48D2C 8013A92C 09000424 */   addiu     $a0, $zero, 0x9
    /* 48D30 8013A930 F5D4030C */  jal        func_800F53D4
    /* 48D34 8013A934 00000000 */   nop
    /* 48D38 8013A938 EAFF4010 */  beqz       $v0, .L8013A8E4
    /* 48D3C 8013A93C 00000000 */   nop
    /* 48D40 8013A940 1400BF8F */  lw         $ra, 0x14($sp)
    /* 48D44 8013A944 1000B08F */  lw         $s0, 0x10($sp)
    /* 48D48 8013A948 0800E003 */  jr         $ra
    /* 48D4C 8013A94C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013A8CC
