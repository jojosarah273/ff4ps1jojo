nonmatching func_8011F724, 0xB0

glabel func_8011F724
    /* 2DB24 8011F724 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DB28 8011F728 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DB2C 8011F72C 53D9030C */  jal        func_800F654C
    /* 2DB30 8011F730 0A000424 */   addiu     $a0, $zero, 0xA
    /* 2DB34 8011F734 9BE4030C */  jal        func_800F926C
    /* 2DB38 8011F738 00000000 */   nop
    /* 2DB3C 8011F73C 80E4030C */  jal        func_800F9200
    /* 2DB40 8011F740 00000000 */   nop
    /* 2DB44 8011F744 53D9030C */  jal        func_800F654C
    /* 2DB48 8011F748 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 2DB4C 8011F74C 80E4030C */  jal        func_800F9200
    /* 2DB50 8011F750 00000000 */   nop
    /* 2DB54 8011F754 12E5030C */  jal        func_800F9448
    /* 2DB58 8011F758 00000000 */   nop
    /* 2DB5C 8011F75C F7E4030C */  jal        func_800F93DC
    /* 2DB60 8011F760 00000000 */   nop
    /* 2DB64 8011F764 58E2030C */  jal        func_800F8960
    /* 2DB68 8011F768 02000424 */   addiu     $a0, $zero, 0x2
    /* 2DB6C 8011F76C 91E5030C */  jal        func_800F9644
    /* 2DB70 8011F770 20000424 */   addiu     $a0, $zero, 0x20
    /* 2DB74 8011F774 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2DB78 8011F778 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2DB7C 8011F77C 1A80053C */  lui        $a1, %hi(D_8019ED44)
    /* 2DB80 8011F780 44EDA58C */  lw         $a1, %lo(D_8019ED44)($a1)
    /* 2DB84 8011F784 00006294 */  lhu        $v0, 0x0($v1)
    /* 2DB88 8011F788 20000424 */  addiu      $a0, $zero, 0x20
    /* 2DB8C 8011F78C 98E5030C */  jal        func_800F9660
    /* 2DB90 8011F790 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 2DB94 8011F794 58E2030C */  jal        func_800F8960
    /* 2DB98 8011F798 21200000 */   addu      $a0, $zero, $zero
    /* 2DB9C 8011F79C 52CF030C */  jal        func_800F3D48
    /* 2DBA0 8011F7A0 00000000 */   nop
    /* 2DBA4 8011F7A4 58E2030C */  jal        func_800F8960
    /* 2DBA8 8011F7A8 01000424 */   addiu     $a0, $zero, 0x1
    /* 2DBAC 8011F7AC 8CD9030C */  jal        func_800F6630
    /* 2DBB0 8011F7B0 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2DBB4 8011F7B4 58E2030C */  jal        func_800F8960
    /* 2DBB8 8011F7B8 03000424 */   addiu     $a0, $zero, 0x3
    /* 2DBBC 8011F7BC 12E5030C */  jal        func_800F9448
    /* 2DBC0 8011F7C0 00000000 */   nop
    /* 2DBC4 8011F7C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DBC8 8011F7C8 00000000 */  nop
    /* 2DBCC 8011F7CC 0800E003 */  jr         $ra
    /* 2DBD0 8011F7D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F724
