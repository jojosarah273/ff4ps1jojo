nonmatching func_8017F644, 0x2B4

glabel func_8017F644
    /* 8DA44 8017F644 A8FFBD27 */  addiu      $sp, $sp, -0x58
    /* 8DA48 8017F648 C4028224 */  addiu      $v0, $a0, 0x2C4
    /* 8DA4C 8017F64C 88028324 */  addiu      $v1, $a0, 0x288
    /* 8DA50 8017F650 5000BEAF */  sw         $fp, 0x50($sp)
    /* 8DA54 8017F654 58029E24 */  addiu      $fp, $a0, 0x258
    /* 8DA58 8017F658 4C00B7AF */  sw         $s7, 0x4C($sp)
    /* 8DA5C 8017F65C 21B8C003 */  addu       $s7, $fp, $zero
    /* 8DA60 8017F660 4800B6AF */  sw         $s6, 0x48($sp)
    /* 8DA64 8017F664 1C029624 */  addiu      $s6, $a0, 0x21C
    /* 8DA68 8017F668 4400B5AF */  sw         $s5, 0x44($sp)
    /* 8DA6C 8017F66C EC019524 */  addiu      $s5, $a0, 0x1EC
    /* 8DA70 8017F670 4000B4AF */  sw         $s4, 0x40($sp)
    /* 8DA74 8017F674 B0019424 */  addiu      $s4, $a0, 0x1B0
    /* 8DA78 8017F678 3C00B3AF */  sw         $s3, 0x3C($sp)
    /* 8DA7C 8017F67C 80019324 */  addiu      $s3, $a0, 0x180
    /* 8DA80 8017F680 2400A2AF */  sw         $v0, 0x24($sp)
    /* 8DA84 8017F684 1A80023C */  lui        $v0, %hi(D_801A0A10)
    /* 8DA88 8017F688 100A4224 */  addiu      $v0, $v0, %lo(D_801A0A10)
    /* 8DA8C 8017F68C 3000B0AF */  sw         $s0, 0x30($sp)
    /* 8DA90 8017F690 10005024 */  addiu      $s0, $v0, 0x10
    /* 8DA94 8017F694 3800B2AF */  sw         $s2, 0x38($sp)
    /* 8DA98 8017F698 44019224 */  addiu      $s2, $a0, 0x144
    /* 8DA9C 8017F69C 14018424 */  addiu      $a0, $a0, 0x114
    /* 8DAA0 8017F6A0 3400B1AF */  sw         $s1, 0x34($sp)
    /* 8DAA4 8017F6A4 21888000 */  addu       $s1, $a0, $zero
    /* 8DAA8 8017F6A8 5400BFAF */  sw         $ra, 0x54($sp)
    /* 8DAAC 8017F6AC 2800A3AF */  sw         $v1, 0x28($sp)
    /* 8DAB0 8017F6B0 1800A4AF */  sw         $a0, 0x18($sp)
    /* 8DAB4 8017F6B4 0D80023C */  lui        $v0, %hi(D_800D2131)
    /* 8DAB8 8017F6B8 31214290 */  lbu        $v0, %lo(D_800D2131)($v0)
    /* 8DABC 8017F6BC 03000324 */  addiu      $v1, $zero, 0x3
    /* 8DAC0 8017F6C0 1C00A3AF */  sw         $v1, 0x1C($sp)
    /* 8DAC4 8017F6C4 0F004230 */  andi       $v0, $v0, 0xF
    /* 8DAC8 8017F6C8 2000A2AF */  sw         $v0, 0x20($sp)
  .L8017F6CC:
    /* 8DACC 8017F6CC 21202002 */  addu       $a0, $s1, $zero
    /* 8DAD0 8017F6D0 21280000 */  addu       $a1, $zero, $zero
    /* 8DAD4 8017F6D4 08000796 */  lhu        $a3, 0x8($s0)
    /* 8DAD8 8017F6D8 21300000 */  addu       $a2, $zero, $zero
    /* 8DADC 8017F6DC EE5C060C */  jal        func_801973B8
    /* 8DAE0 8017F6E0 1000A0AF */   sw        $zero, 0x10($sp)
    /* 8DAE4 8017F6E4 21204002 */  addu       $a0, $s2, $zero
    /* 8DAE8 8017F6E8 21280000 */  addu       $a1, $zero, $zero
    /* 8DAEC 8017F6EC 00000796 */  lhu        $a3, 0x0($s0)
    /* 8DAF0 8017F6F0 21300000 */  addu       $a2, $zero, $zero
    /* 8DAF4 8017F6F4 EE5C060C */  jal        func_801973B8
    /* 8DAF8 8017F6F8 1000A0AF */   sw        $zero, 0x10($sp)
    /* 8DAFC 8017F6FC 21206002 */  addu       $a0, $s3, $zero
    /* 8DB00 8017F700 21280000 */  addu       $a1, $zero, $zero
    /* 8DB04 8017F704 08000796 */  lhu        $a3, 0x8($s0)
    /* 8DB08 8017F708 21300000 */  addu       $a2, $zero, $zero
    /* 8DB0C 8017F70C EE5C060C */  jal        func_801973B8
    /* 8DB10 8017F710 1000A0AF */   sw        $zero, 0x10($sp)
    /* 8DB14 8017F714 21208002 */  addu       $a0, $s4, $zero
    /* 8DB18 8017F718 21280000 */  addu       $a1, $zero, $zero
    /* 8DB1C 8017F71C 00000796 */  lhu        $a3, 0x0($s0)
    /* 8DB20 8017F720 21300000 */  addu       $a2, $zero, $zero
    /* 8DB24 8017F724 EE5C060C */  jal        func_801973B8
    /* 8DB28 8017F728 1000A0AF */   sw        $zero, 0x10($sp)
    /* 8DB2C 8017F72C 2120A002 */  addu       $a0, $s5, $zero
    /* 8DB30 8017F730 21280000 */  addu       $a1, $zero, $zero
    /* 8DB34 8017F734 F8FF0796 */  lhu        $a3, -0x8($s0)
    /* 8DB38 8017F738 21300000 */  addu       $a2, $zero, $zero
    /* 8DB3C 8017F73C EE5C060C */  jal        func_801973B8
    /* 8DB40 8017F740 1000A0AF */   sw        $zero, 0x10($sp)
    /* 8DB44 8017F744 2120C002 */  addu       $a0, $s6, $zero
    /* 8DB48 8017F748 21280000 */  addu       $a1, $zero, $zero
    /* 8DB4C 8017F74C F0FF0796 */  lhu        $a3, -0x10($s0)
    /* 8DB50 8017F750 21300000 */  addu       $a2, $zero, $zero
    /* 8DB54 8017F754 EE5C060C */  jal        func_801973B8
    /* 8DB58 8017F758 1000A0AF */   sw        $zero, 0x10($sp)
    /* 8DB5C 8017F75C 2000A28F */  lw         $v0, 0x20($sp)
    /* 8DB60 8017F760 00000000 */  nop
    /* 8DB64 8017F764 09004010 */  beqz       $v0, .L8017F78C
    /* 8DB68 8017F768 2120E002 */   addu      $a0, $s7, $zero
    /* 8DB6C 8017F76C 21280000 */  addu       $a1, $zero, $zero
    /* 8DB70 8017F770 F8FF0796 */  lhu        $a3, -0x8($s0)
    /* 8DB74 8017F774 21300000 */  addu       $a2, $zero, $zero
    /* 8DB78 8017F778 1000A0AF */  sw         $zero, 0x10($sp)
    /* 8DB7C 8017F77C EE5C060C */  jal        func_801973B8
    /* 8DB80 8017F780 9FFFE730 */   andi      $a3, $a3, 0xFF9F
    /* 8DB84 8017F784 EAFD0508 */  j          .L8017F7A8
    /* 8DB88 8017F788 21280000 */   addu      $a1, $zero, $zero
  .L8017F78C:
    /* 8DB8C 8017F78C 2120C003 */  addu       $a0, $fp, $zero
    /* 8DB90 8017F790 21280000 */  addu       $a1, $zero, $zero
    /* 8DB94 8017F794 F8FF0796 */  lhu        $a3, -0x8($s0)
    /* 8DB98 8017F798 21300000 */  addu       $a2, $zero, $zero
    /* 8DB9C 8017F79C EE5C060C */  jal        func_801973B8
    /* 8DBA0 8017F7A0 1000A0AF */   sw        $zero, 0x10($sp)
    /* 8DBA4 8017F7A4 21280000 */  addu       $a1, $zero, $zero
  .L8017F7A8:
    /* 8DBA8 8017F7A8 21300000 */  addu       $a2, $zero, $zero
    /* 8DBAC 8017F7AC 0C00DE27 */  addiu      $fp, $fp, 0xC
    /* 8DBB0 8017F7B0 0C00F726 */  addiu      $s7, $s7, 0xC
    /* 8DBB4 8017F7B4 0C00D626 */  addiu      $s6, $s6, 0xC
    /* 8DBB8 8017F7B8 0C00B526 */  addiu      $s5, $s5, 0xC
    /* 8DBBC 8017F7BC 0C009426 */  addiu      $s4, $s4, 0xC
    /* 8DBC0 8017F7C0 0C007326 */  addiu      $s3, $s3, 0xC
    /* 8DBC4 8017F7C4 0C005226 */  addiu      $s2, $s2, 0xC
    /* 8DBC8 8017F7C8 0C003126 */  addiu      $s1, $s1, 0xC
    /* 8DBCC 8017F7CC 2800A48F */  lw         $a0, 0x28($sp)
    /* 8DBD0 8017F7D0 1C00A28F */  lw         $v0, 0x1C($sp)
    /* 8DBD4 8017F7D4 21188000 */  addu       $v1, $a0, $zero
    /* 8DBD8 8017F7D8 0C006324 */  addiu      $v1, $v1, 0xC
    /* 8DBDC 8017F7DC 2800A3AF */  sw         $v1, 0x28($sp)
    /* 8DBE0 8017F7E0 F0FF0796 */  lhu        $a3, -0x10($s0)
    /* 8DBE4 8017F7E4 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 8DBE8 8017F7E8 1C00A2AF */  sw         $v0, 0x1C($sp)
    /* 8DBEC 8017F7EC EE5C060C */  jal        func_801973B8
    /* 8DBF0 8017F7F0 1000A0AF */   sw        $zero, 0x10($sp)
    /* 8DBF4 8017F7F4 2400A48F */  lw         $a0, 0x24($sp)
    /* 8DBF8 8017F7F8 21280000 */  addu       $a1, $zero, $zero
    /* 8DBFC 8017F7FC 21188000 */  addu       $v1, $a0, $zero
    /* 8DC00 8017F800 0C006324 */  addiu      $v1, $v1, 0xC
    /* 8DC04 8017F804 2400A3AF */  sw         $v1, 0x24($sp)
    /* 8DC08 8017F808 00000796 */  lhu        $a3, 0x0($s0)
    /* 8DC0C 8017F80C 21300000 */  addu       $a2, $zero, $zero
    /* 8DC10 8017F810 EE5C060C */  jal        func_801973B8
    /* 8DC14 8017F814 1000A0AF */   sw        $zero, 0x10($sp)
    /* 8DC18 8017F818 1C00A28F */  lw         $v0, 0x1C($sp)
    /* 8DC1C 8017F81C 00000000 */  nop
    /* 8DC20 8017F820 AAFF4104 */  bgez       $v0, .L8017F6CC
    /* 8DC24 8017F824 02001026 */   addiu     $s0, $s0, 0x2
    /* 8DC28 8017F828 21280000 */  addu       $a1, $zero, $zero
    /* 8DC2C 8017F82C 1800A38F */  lw         $v1, 0x18($sp)
    /* 8DC30 8017F830 1A80073C */  lui        $a3, %hi(D_8019EE10)
    /* 8DC34 8017F834 10EEE794 */  lhu        $a3, %lo(D_8019EE10)($a3)
    /* 8DC38 8017F838 21300000 */  addu       $a2, $zero, $zero
    /* 8DC3C 8017F83C 1000A0AF */  sw         $zero, 0x10($sp)
    /* 8DC40 8017F840 EE5C060C */  jal        func_801973B8
    /* 8DC44 8017F844 60006424 */   addiu     $a0, $v1, 0x60
    /* 8DC48 8017F848 21280000 */  addu       $a1, $zero, $zero
    /* 8DC4C 8017F84C 1800A28F */  lw         $v0, 0x18($sp)
    /* 8DC50 8017F850 1A80073C */  lui        $a3, %hi(D_8019EE10)
    /* 8DC54 8017F854 10EEE794 */  lhu        $a3, %lo(D_8019EE10)($a3)
    /* 8DC58 8017F858 21300000 */  addu       $a2, $zero, $zero
    /* 8DC5C 8017F85C 1000A0AF */  sw         $zero, 0x10($sp)
    /* 8DC60 8017F860 EE5C060C */  jal        func_801973B8
    /* 8DC64 8017F864 CC004424 */   addiu     $a0, $v0, 0xCC
    /* 8DC68 8017F868 21280000 */  addu       $a1, $zero, $zero
    /* 8DC6C 8017F86C 1800A38F */  lw         $v1, 0x18($sp)
    /* 8DC70 8017F870 1A80073C */  lui        $a3, %hi(D_8019EE10)
    /* 8DC74 8017F874 10EEE794 */  lhu        $a3, %lo(D_8019EE10)($a3)
    /* 8DC78 8017F878 21300000 */  addu       $a2, $zero, $zero
    /* 8DC7C 8017F87C 1000A0AF */  sw         $zero, 0x10($sp)
    /* 8DC80 8017F880 EE5C060C */  jal        func_801973B8
    /* 8DC84 8017F884 38016424 */   addiu     $a0, $v1, 0x138
    /* 8DC88 8017F888 21280000 */  addu       $a1, $zero, $zero
    /* 8DC8C 8017F88C 1800A28F */  lw         $v0, 0x18($sp)
    /* 8DC90 8017F890 1A80073C */  lui        $a3, %hi(D_8019EE10)
    /* 8DC94 8017F894 10EEE794 */  lhu        $a3, %lo(D_8019EE10)($a3)
    /* 8DC98 8017F898 21300000 */  addu       $a2, $zero, $zero
    /* 8DC9C 8017F89C 1000A0AF */  sw         $zero, 0x10($sp)
    /* 8DCA0 8017F8A0 EE5C060C */  jal        func_801973B8
    /* 8DCA4 8017F8A4 A4014424 */   addiu     $a0, $v0, 0x1A4
    /* 8DCA8 8017F8A8 21280000 */  addu       $a1, $zero, $zero
    /* 8DCAC 8017F8AC 1800A38F */  lw         $v1, 0x18($sp)
    /* 8DCB0 8017F8B0 1A80073C */  lui        $a3, %hi(D_8019EE10)
    /* 8DCB4 8017F8B4 10EEE794 */  lhu        $a3, %lo(D_8019EE10)($a3)
    /* 8DCB8 8017F8B8 21300000 */  addu       $a2, $zero, $zero
    /* 8DCBC 8017F8BC 1000A0AF */  sw         $zero, 0x10($sp)
    /* 8DCC0 8017F8C0 EE5C060C */  jal        func_801973B8
    /* 8DCC4 8017F8C4 E0016424 */   addiu     $a0, $v1, 0x1E0
    /* 8DCC8 8017F8C8 5400BF8F */  lw         $ra, 0x54($sp)
    /* 8DCCC 8017F8CC 5000BE8F */  lw         $fp, 0x50($sp)
    /* 8DCD0 8017F8D0 4C00B78F */  lw         $s7, 0x4C($sp)
    /* 8DCD4 8017F8D4 4800B68F */  lw         $s6, 0x48($sp)
    /* 8DCD8 8017F8D8 4400B58F */  lw         $s5, 0x44($sp)
    /* 8DCDC 8017F8DC 4000B48F */  lw         $s4, 0x40($sp)
    /* 8DCE0 8017F8E0 3C00B38F */  lw         $s3, 0x3C($sp)
    /* 8DCE4 8017F8E4 3800B28F */  lw         $s2, 0x38($sp)
    /* 8DCE8 8017F8E8 3400B18F */  lw         $s1, 0x34($sp)
    /* 8DCEC 8017F8EC 3000B08F */  lw         $s0, 0x30($sp)
    /* 8DCF0 8017F8F0 0800E003 */  jr         $ra
    /* 8DCF4 8017F8F4 5800BD27 */   addiu     $sp, $sp, 0x58
endlabel func_8017F644
