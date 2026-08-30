nonmatching func_8015F6F0, 0xC0

glabel func_8015F6F0
    /* 6DAF0 8015F6F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6DAF4 8015F6F4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6DAF8 8015F6F8 77DC030C */  jal        func_800F71DC
    /* 6DAFC 8015F6FC 21200000 */   addu      $a0, $zero, $zero
    /* 6DB00 8015F700 53D9030C */  jal        func_800F654C
    /* 6DB04 8015F704 02000424 */   addiu     $a0, $zero, 0x2
    /* 6DB08 8015F708 8948050C */  jal        func_80152224
    /* 6DB0C 8015F70C 00000000 */   nop
    /* 6DB10 8015F710 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6DB14 8015F714 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6DB18 8015F718 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6DB1C 8015F71C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6DB20 8015F720 00004394 */  lhu        $v1, 0x0($v0)
    /* 6DB24 8015F724 02020424 */  addiu      $a0, $zero, 0x202
    /* 6DB28 8015F728 2FDC030C */  jal        func_800F70BC
    /* 6DB2C 8015F72C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6DB30 8015F730 09004014 */  bnez       $v0, .L8015F758
    /* 6DB34 8015F734 00000000 */   nop
    /* 6DB38 8015F738 53D9030C */  jal        func_800F654C
    /* 6DB3C 8015F73C 20000424 */   addiu     $a0, $zero, 0x20
    /* 6DB40 8015F740 62E0030C */  jal        func_800F8188
    /* 6DB44 8015F744 A4280424 */   addiu     $a0, $zero, 0x28A4
    /* 6DB48 8015F748 DD95010C */  jal        func_80065774
    /* 6DB4C 8015F74C 00000000 */   nop
    /* 6DB50 8015F750 E87D0508 */  j          .L8015F7A0
    /* 6DB54 8015F754 00000000 */   nop
  .L8015F758:
    /* 6DB58 8015F758 33D7030C */  jal        func_800F5CCC
    /* 6DB5C 8015F75C 00000000 */   nop
    /* 6DB60 8015F760 E3D6030C */  jal        func_800F5B8C
    /* 6DB64 8015F764 02020424 */   addiu     $a0, $zero, 0x202
    /* 6DB68 8015F768 07004014 */  bnez       $v0, .L8015F788
    /* 6DB6C 8015F76C 00000000 */   nop
    /* 6DB70 8015F770 53D9030C */  jal        func_800F654C
    /* 6DB74 8015F774 04000424 */   addiu     $a0, $zero, 0x4
    /* 6DB78 8015F778 62E0030C */  jal        func_800F8188
    /* 6DB7C 8015F77C A3280424 */   addiu     $a0, $zero, 0x28A3
    /* 6DB80 8015F780 E67D0508 */  j          .L8015F798
    /* 6DB84 8015F784 00000000 */   nop
  .L8015F788:
    /* 6DB88 8015F788 53D9030C */  jal        func_800F654C
    /* 6DB8C 8015F78C 80000424 */   addiu     $a0, $zero, 0x80
    /* 6DB90 8015F790 62E0030C */  jal        func_800F8188
    /* 6DB94 8015F794 A4280424 */   addiu     $a0, $zero, 0x28A4
  .L8015F798:
    /* 6DB98 8015F798 4D95010C */  jal        func_80065534
    /* 6DB9C 8015F79C 00000000 */   nop
  .L8015F7A0:
    /* 6DBA0 8015F7A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6DBA4 8015F7A4 00000000 */  nop
    /* 6DBA8 8015F7A8 0800E003 */  jr         $ra
    /* 6DBAC 8015F7AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015F6F0
