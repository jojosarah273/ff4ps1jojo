nonmatching func_800FC8E8, 0x120

glabel func_800FC8E8
    /* ACE8 800FC8E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* ACEC 800FC8EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* ACF0 800FC8F0 53D9030C */  jal        func_800F654C
    /* ACF4 800FC8F4 7F000424 */   addiu     $a0, $zero, 0x7F
    /* ACF8 800FC8F8 80E4030C */  jal        func_800F9200
    /* ACFC 800FC8FC 00000000 */   nop
    /* AD00 800FC900 12E5030C */  jal        func_800F9448
    /* AD04 800FC904 00000000 */   nop
    /* AD08 800FC908 77DC030C */  jal        func_800F71DC
    /* AD0C 800FC90C 21200000 */   addu      $a0, $zero, $zero
    /* AD10 800FC910 40DD030C */  jal        func_800F7500
    /* AD14 800FC914 21200000 */   addu      $a0, $zero, $zero
  .L800FC918:
    /* AD18 800FC918 1F00043C */  lui        $a0, (0x1FEED0 >> 16)
  .L800FC91C:
    /* AD1C 800FC91C 1ADB030C */  jal        func_800F6C68
    /* AD20 800FC920 D0EE8434 */   ori       $a0, $a0, (0x1FEED0 & 0xFFFF)
    /* AD24 800FC924 58E2030C */  jal        func_800F8960
    /* AD28 800FC928 00580424 */   addiu     $a0, $zero, 0x5800
    /* AD2C 800FC92C D9D8030C */  jal        func_800F6364
    /* AD30 800FC930 00000000 */   nop
    /* AD34 800FC934 EFD8030C */  jal        func_800F63BC
    /* AD38 800FC938 00000000 */   nop
    /* AD3C 800FC93C 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* AD40 800FC940 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* AD44 800FC944 00004390 */  lbu        $v1, 0x0($v0)
    /* AD48 800FC948 0F000424 */  addiu      $a0, $zero, 0xF
    /* AD4C 800FC94C 92D0030C */  jal        func_800F4248
    /* AD50 800FC950 0000A3A0 */   sb        $v1, 0x0($a1)
    /* AD54 800FC954 48D0030C */  jal        func_800F4120
    /* AD58 800FC958 02020424 */   addiu     $a0, $zero, 0x202
    /* AD5C 800FC95C EEFF4014 */  bnez       $v0, .L800FC918
    /* AD60 800FC960 00000000 */   nop
    /* AD64 800FC964 1F00043C */  lui        $a0, (0x1FEED0 >> 16)
  .L800FC968:
    /* AD68 800FC968 1ADB030C */  jal        func_800F6C68
    /* AD6C 800FC96C D0EE8434 */   ori       $a0, $a0, (0x1FEED0 & 0xFFFF)
    /* AD70 800FC970 58E2030C */  jal        func_800F8960
    /* AD74 800FC974 00580424 */   addiu     $a0, $zero, 0x5800
    /* AD78 800FC978 D9D8030C */  jal        func_800F6364
    /* AD7C 800FC97C 00000000 */   nop
    /* AD80 800FC980 EFD8030C */  jal        func_800F63BC
    /* AD84 800FC984 00000000 */   nop
    /* AD88 800FC988 53D9030C */  jal        func_800F654C
    /* AD8C 800FC98C 21200000 */   addu      $a0, $zero, $zero
    /* AD90 800FC990 58E2030C */  jal        func_800F8960
    /* AD94 800FC994 00580424 */   addiu     $a0, $zero, 0x5800
    /* AD98 800FC998 EFD8030C */  jal        func_800F63BC
    /* AD9C 800FC99C 00000000 */   nop
    /* ADA0 800FC9A0 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* ADA4 800FC9A4 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* ADA8 800FC9A8 00004390 */  lbu        $v1, 0x0($v0)
    /* ADAC 800FC9AC 0F000424 */  addiu      $a0, $zero, 0xF
    /* ADB0 800FC9B0 92D0030C */  jal        func_800F4248
    /* ADB4 800FC9B4 0000A3A0 */   sb        $v1, 0x0($a1)
    /* ADB8 800FC9B8 48D0030C */  jal        func_800F4120
    /* ADBC 800FC9BC 02020424 */   addiu     $a0, $zero, 0x202
    /* ADC0 800FC9C0 E9FF4014 */  bnez       $v0, .L800FC968
    /* ADC4 800FC9C4 1F00043C */   lui       $a0, (0x1FEED0 >> 16)
    /* ADC8 800FC9C8 A4D6030C */  jal        func_800F5A90
    /* ADCC 800FC9CC 00010424 */   addiu     $a0, $zero, 0x100
    /* ADD0 800FC9D0 F5D4030C */  jal        func_800F53D4
    /* ADD4 800FC9D4 00000000 */   nop
    /* ADD8 800FC9D8 D0FF4010 */  beqz       $v0, .L800FC91C
    /* ADDC 800FC9DC 1F00043C */   lui       $a0, (0x1FEED0 >> 16)
    /* ADE0 800FC9E0 53D9030C */  jal        func_800F654C
    /* ADE4 800FC9E4 21200000 */   addu      $a0, $zero, $zero
    /* ADE8 800FC9E8 80E4030C */  jal        func_800F9200
    /* ADEC 800FC9EC 00000000 */   nop
    /* ADF0 800FC9F0 12E5030C */  jal        func_800F9448
    /* ADF4 800FC9F4 00000000 */   nop
    /* ADF8 800FC9F8 1000BF8F */  lw         $ra, 0x10($sp)
    /* ADFC 800FC9FC 00000000 */  nop
    /* AE00 800FCA00 0800E003 */  jr         $ra
    /* AE04 800FCA04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FC8E8
