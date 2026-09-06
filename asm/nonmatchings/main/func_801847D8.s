nonmatching func_801847D8, 0x320

glabel func_801847D8
    /* 92BD8 801847D8 B8FFBD27 */  addiu      $sp, $sp, -0x48
    /* 92BDC 801847DC 2000B0AF */  sw         $s0, 0x20($sp)
    /* 92BE0 801847E0 1E80103C */  lui        $s0, %hi(D_801E6060)
    /* 92BE4 801847E4 60601026 */  addiu      $s0, $s0, %lo(D_801E6060)
    /* 92BE8 801847E8 21200002 */  addu       $a0, $s0, $zero
    /* 92BEC 801847EC 21280000 */  addu       $a1, $zero, $zero
    /* 92BF0 801847F0 21300000 */  addu       $a2, $zero, $zero
    /* 92BF4 801847F4 00010724 */  addiu      $a3, $zero, 0x100
    /* 92BF8 801847F8 2400B1AF */  sw         $s1, 0x24($sp)
    /* 92BFC 801847FC F0001124 */  addiu      $s1, $zero, 0xF0
    /* 92C00 80184800 4000BFAF */  sw         $ra, 0x40($sp)
    /* 92C04 80184804 3C00B7AF */  sw         $s7, 0x3C($sp)
    /* 92C08 80184808 3800B6AF */  sw         $s6, 0x38($sp)
    /* 92C0C 8018480C 3400B5AF */  sw         $s5, 0x34($sp)
    /* 92C10 80184810 3000B4AF */  sw         $s4, 0x30($sp)
    /* 92C14 80184814 2C00B3AF */  sw         $s3, 0x2C($sp)
    /* 92C18 80184818 2800B2AF */  sw         $s2, 0x28($sp)
    /* 92C1C 8018481C 2A5C060C */  jal        func_801970A8
    /* 92C20 80184820 1000B1AF */   sw        $s1, 0x10($sp)
    /* 92C24 80184824 5C000426 */  addiu      $a0, $s0, 0x5C
    /* 92C28 80184828 21280000 */  addu       $a1, $zero, $zero
    /* 92C2C 8018482C F0000624 */  addiu      $a2, $zero, 0xF0
    /* 92C30 80184830 00010724 */  addiu      $a3, $zero, 0x100
    /* 92C34 80184834 2A5C060C */  jal        func_801970A8
    /* 92C38 80184838 1000B1AF */   sw        $s1, 0x10($sp)
    /* 92C3C 8018483C B8000426 */  addiu      $a0, $s0, 0xB8
    /* 92C40 80184840 00010524 */  addiu      $a1, $zero, 0x100
    /* 92C44 80184844 21300000 */  addu       $a2, $zero, $zero
    /* 92C48 80184848 00010724 */  addiu      $a3, $zero, 0x100
    /* 92C4C 8018484C 2A5C060C */  jal        func_801970A8
    /* 92C50 80184850 1000B1AF */   sw        $s1, 0x10($sp)
    /* 92C54 80184854 14010426 */  addiu      $a0, $s0, 0x114
    /* 92C58 80184858 21280000 */  addu       $a1, $zero, $zero
    /* 92C5C 8018485C 21300000 */  addu       $a2, $zero, $zero
    /* 92C60 80184860 00010724 */  addiu      $a3, $zero, 0x100
    /* 92C64 80184864 8F001124 */  addiu      $s1, $zero, 0x8F
    /* 92C68 80184868 2A5C060C */  jal        func_801970A8
    /* 92C6C 8018486C 1000B1AF */   sw        $s1, 0x10($sp)
    /* 92C70 80184870 70010426 */  addiu      $a0, $s0, 0x170
    /* 92C74 80184874 21280000 */  addu       $a1, $zero, $zero
    /* 92C78 80184878 F0000624 */  addiu      $a2, $zero, 0xF0
    /* 92C7C 8018487C 00010724 */  addiu      $a3, $zero, 0x100
    /* 92C80 80184880 2A5C060C */  jal        func_801970A8
    /* 92C84 80184884 1000B1AF */   sw        $s1, 0x10($sp)
    /* 92C88 80184888 1E80103C */  lui        $s0, %hi(D_801E2534)
    /* 92C8C 8018488C 34251026 */  addiu      $s0, $s0, %lo(D_801E2534)
    /* 92C90 80184890 21200002 */  addu       $a0, $s0, $zero
    /* 92C94 80184894 0C001126 */  addiu      $s1, $s0, 0xC
    /* 92C98 80184898 A25C060C */  jal        func_80197288
    /* 92C9C 8018489C 21282002 */   addu      $a1, $s1, $zero
    /* 92CA0 801848A0 21980000 */  addu       $s3, $zero, $zero
    /* 92CA4 801848A4 8CFE1226 */  addiu      $s2, $s0, -0x174
    /* 92CA8 801848A8 F8FF1426 */  addiu      $s4, $s0, -0x8
    /* 92CAC 801848AC 21808002 */  addu       $s0, $s4, $zero
  .L801848B0:
    /* 92CB0 801848B0 21202002 */  addu       $a0, $s1, $zero
    /* 92CB4 801848B4 00010524 */  addiu      $a1, $zero, 0x100
    /* 92CB8 801848B8 01000624 */  addiu      $a2, $zero, 0x1
    /* 92CBC 801848BC 21380000 */  addu       $a3, $zero, $zero
    /* 92CC0 801848C0 1000B3AF */  sw         $s3, 0x10($sp)
    /* 92CC4 801848C4 1400A0AF */  sw         $zero, 0x14($sp)
    /* 92CC8 801848C8 2815060C */  jal        func_801854A0
    /* 92CCC 801848CC 1800B3AF */   sw        $s3, 0x18($sp)
    /* 92CD0 801848D0 0E00601A */  blez       $s3, .L8018490C
    /* 92CD4 801848D4 F0FF6226 */   addiu     $v0, $s3, -0x10
    /* 92CD8 801848D8 0F00422C */  sltiu      $v0, $v0, 0xF
    /* 92CDC 801848DC 06004014 */  bnez       $v0, .L801848F8
    /* 92CE0 801848E0 21208002 */   addu      $a0, $s4, $zero
    /* 92CE4 801848E4 21200002 */  addu       $a0, $s0, $zero
    /* 92CE8 801848E8 A25C060C */  jal        func_80197288
    /* 92CEC 801848EC 21282002 */   addu      $a1, $s1, $zero
    /* 92CF0 801848F0 44120608 */  j          .L80184910
    /* 92CF4 801848F4 0C005226 */   addiu     $s2, $s2, 0xC
  .L801848F8:
    /* 92CF8 801848F8 A25C060C */  jal        func_80197288
    /* 92CFC 801848FC 21284002 */   addu      $a1, $s2, $zero
    /* 92D00 80184900 21204002 */  addu       $a0, $s2, $zero
    /* 92D04 80184904 A25C060C */  jal        func_80197288
    /* 92D08 80184908 21282002 */   addu      $a1, $s1, $zero
  .L8018490C:
    /* 92D0C 8018490C 0C005226 */  addiu      $s2, $s2, 0xC
  .L80184910:
    /* 92D10 80184910 14009426 */  addiu      $s4, $s4, 0x14
    /* 92D14 80184914 14001026 */  addiu      $s0, $s0, 0x14
    /* 92D18 80184918 01007326 */  addiu      $s3, $s3, 0x1
    /* 92D1C 8018491C F000622A */  slti       $v0, $s3, 0xF0
    /* 92D20 80184920 E3FF4014 */  bnez       $v0, .L801848B0
    /* 92D24 80184924 14003126 */   addiu     $s1, $s1, 0x14
    /* 92D28 80184928 1E80043C */  lui        $a0, %hi(D_801E37EC)
    /* 92D2C 8018492C AE5C060C */  jal        func_801972B8
    /* 92D30 80184930 EC378424 */   addiu     $a0, $a0, %lo(D_801E37EC)
    /* 92D34 80184934 21800000 */  addu       $s0, $zero, $zero
    /* 92D38 80184938 10001724 */  addiu      $s7, $zero, 0x10
    /* 92D3C 8018493C 1E80023C */  lui        $v0, %hi(D_801E3860)
    /* 92D40 80184940 60385624 */  addiu      $s6, $v0, %lo(D_801E3860)
    /* 92D44 80184944 D813D526 */  addiu      $s5, $s6, 0x13D8
    /* 92D48 80184948 2198C002 */  addu       $s3, $s6, $zero
    /* 92D4C 8018494C 21900000 */  addu       $s2, $zero, $zero
  .L80184950:
    /* 92D50 80184950 21206002 */  addu       $a0, $s3, $zero
    /* 92D54 80184954 01000524 */  addiu      $a1, $zero, 0x1
    /* 92D58 80184958 0F000624 */  addiu      $a2, $zero, 0xF
    /* 92D5C 8018495C 21380002 */  addu       $a3, $s0, $zero
    /* 92D60 80184960 1000A0AF */  sw         $zero, 0x10($sp)
    /* 92D64 80184964 1400B0AF */  sw         $s0, 0x14($sp)
    /* 92D68 80184968 5015060C */  jal        func_80185540
    /* 92D6C 8018496C 1800A0AF */   sw        $zero, 0x18($sp)
    /* 92D70 80184970 0014D426 */  addiu      $s4, $s6, 0x1400
    /* 92D74 80184974 21885402 */  addu       $s1, $s2, $s4
    /* 92D78 80184978 21202002 */  addu       $a0, $s1, $zero
    /* 92D7C 8018497C 01000524 */  addiu      $a1, $zero, 0x1
    /* 92D80 80184980 E0000624 */  addiu      $a2, $zero, 0xE0
    /* 92D84 80184984 21380002 */  addu       $a3, $s0, $zero
    /* 92D88 80184988 1000B7AF */  sw         $s7, 0x10($sp)
    /* 92D8C 8018498C 1400B0AF */  sw         $s0, 0x14($sp)
    /* 92D90 80184990 5015060C */  jal        func_80185540
    /* 92D94 80184994 1800B7AF */   sw        $s7, 0x18($sp)
    /* 92D98 80184998 0700001A */  blez       $s0, .L801849B8
    /* 92D9C 8018499C D8FFC426 */   addiu     $a0, $s6, -0x28
    /* 92DA0 801849A0 21204402 */  addu       $a0, $s2, $a0
    /* 92DA4 801849A4 A25C060C */  jal        func_80197288
    /* 92DA8 801849A8 21286002 */   addu      $a1, $s3, $zero
    /* 92DAC 801849AC 2120A002 */  addu       $a0, $s5, $zero
    /* 92DB0 801849B0 A25C060C */  jal        func_80197288
    /* 92DB4 801849B4 21282002 */   addu      $a1, $s1, $zero
  .L801849B8:
    /* 92DB8 801849B8 2800B526 */  addiu      $s5, $s5, 0x28
    /* 92DBC 801849BC 28007326 */  addiu      $s3, $s3, 0x28
    /* 92DC0 801849C0 01001026 */  addiu      $s0, $s0, 0x1
    /* 92DC4 801849C4 8000022A */  slti       $v0, $s0, 0x80
    /* 92DC8 801849C8 E1FF4014 */  bnez       $v0, .L80184950
    /* 92DCC 801849CC 28005226 */   addiu     $s2, $s2, 0x28
    /* 92DD0 801849D0 D8FF8426 */  addiu      $a0, $s4, -0x28
    /* 92DD4 801849D4 A25C060C */  jal        func_80197288
    /* 92DD8 801849D8 21288002 */   addu      $a1, $s4, $zero
    /* 92DDC 801849DC AE5C060C */  jal        func_801972B8
    /* 92DE0 801849E0 D8138426 */   addiu     $a0, $s4, 0x13D8
    /* 92DE4 801849E4 1E80103C */  lui        $s0, %hi(D_801E3800)
    /* 92DE8 801849E8 00381026 */  addiu      $s0, $s0, %lo(D_801E3800)
    /* 92DEC 801849EC 21200002 */  addu       $a0, $s0, $zero
    /* 92DF0 801849F0 24001126 */  addiu      $s1, $s0, 0x24
    /* 92DF4 801849F4 A25C060C */  jal        func_80197288
    /* 92DF8 801849F8 21282002 */   addu      $a1, $s1, $zero
    /* 92DFC 801849FC 21202002 */  addu       $a0, $s1, $zero
    /* 92E00 80184A00 00010524 */  addiu      $a1, $zero, 0x100
    /* 92E04 80184A04 01000624 */  addiu      $a2, $zero, 0x1
    /* 92E08 80184A08 21380000 */  addu       $a3, $zero, $zero
    /* 92E0C 80184A0C 0F000224 */  addiu      $v0, $zero, 0xF
    /* 92E10 80184A10 1000A2AF */  sw         $v0, 0x10($sp)
    /* 92E14 80184A14 0E000224 */  addiu      $v0, $zero, 0xE
    /* 92E18 80184A18 1400A0AF */  sw         $zero, 0x14($sp)
    /* 92E1C 80184A1C 2815060C */  jal        func_801854A0
    /* 92E20 80184A20 1800A2AF */   sw        $v0, 0x18($sp)
    /* 92E24 80184A24 21202002 */  addu       $a0, $s1, $zero
    /* 92E28 80184A28 0C001426 */  addiu      $s4, $s0, 0xC
    /* 92E2C 80184A2C A25C060C */  jal        func_80197288
    /* 92E30 80184A30 21288002 */   addu      $a1, $s4, $zero
    /* 92E34 80184A34 38001226 */  addiu      $s2, $s0, 0x38
    /* 92E38 80184A38 21204002 */  addu       $a0, $s2, $zero
    /* 92E3C 80184A3C 01000524 */  addiu      $a1, $zero, 0x1
    /* 92E40 80184A40 10000624 */  addiu      $a2, $zero, 0x10
    /* 92E44 80184A44 FF000724 */  addiu      $a3, $zero, 0xFF
    /* 92E48 80184A48 FE001324 */  addiu      $s3, $zero, 0xFE
    /* 92E4C 80184A4C 1000A0AF */  sw         $zero, 0x10($sp)
    /* 92E50 80184A50 1400B3AF */  sw         $s3, 0x14($sp)
    /* 92E54 80184A54 2815060C */  jal        func_801854A0
    /* 92E58 80184A58 1800A0AF */   sw        $zero, 0x18($sp)
    /* 92E5C 80184A5C 4C001126 */  addiu      $s1, $s0, 0x4C
    /* 92E60 80184A60 21202002 */  addu       $a0, $s1, $zero
    /* 92E64 80184A64 01000524 */  addiu      $a1, $zero, 0x1
    /* 92E68 80184A68 E0000624 */  addiu      $a2, $zero, 0xE0
    /* 92E6C 80184A6C FF000724 */  addiu      $a3, $zero, 0xFF
    /* 92E70 80184A70 10000224 */  addiu      $v0, $zero, 0x10
    /* 92E74 80184A74 1000A2AF */  sw         $v0, 0x10($sp)
    /* 92E78 80184A78 1400B3AF */  sw         $s3, 0x14($sp)
    /* 92E7C 80184A7C 2815060C */  jal        func_801854A0
    /* 92E80 80184A80 1800A2AF */   sw        $v0, 0x18($sp)
    /* 92E84 80184A84 21208002 */  addu       $a0, $s4, $zero
    /* 92E88 80184A88 A25C060C */  jal        func_80197288
    /* 92E8C 80184A8C 21284002 */   addu      $a1, $s2, $zero
    /* 92E90 80184A90 21204002 */  addu       $a0, $s2, $zero
    /* 92E94 80184A94 18001026 */  addiu      $s0, $s0, 0x18
    /* 92E98 80184A98 A25C060C */  jal        func_80197288
    /* 92E9C 80184A9C 21280002 */   addu      $a1, $s0, $zero
    /* 92EA0 80184AA0 21200002 */  addu       $a0, $s0, $zero
    /* 92EA4 80184AA4 A25C060C */  jal        func_80197288
    /* 92EA8 80184AA8 21282002 */   addu      $a1, $s1, $zero
    /* 92EAC 80184AAC AE5C060C */  jal        func_801972B8
    /* 92EB0 80184AB0 21202002 */   addu      $a0, $s1, $zero
    /* 92EB4 80184AB4 1E80103C */  lui        $s0, %hi(D_801E2400)
    /* 92EB8 80184AB8 00241026 */  addiu      $s0, $s0, %lo(D_801E2400)
    /* 92EBC 80184ABC AE5C060C */  jal        func_801972B8
    /* 92EC0 80184AC0 21200002 */   addu      $a0, $s0, $zero
    /* 92EC4 80184AC4 AE5C060C */  jal        func_801972B8
    /* 92EC8 80184AC8 40000426 */   addiu     $a0, $s0, 0x40
    /* 92ECC 80184ACC 4000BF8F */  lw         $ra, 0x40($sp)
    /* 92ED0 80184AD0 3C00B78F */  lw         $s7, 0x3C($sp)
    /* 92ED4 80184AD4 3800B68F */  lw         $s6, 0x38($sp)
    /* 92ED8 80184AD8 3400B58F */  lw         $s5, 0x34($sp)
    /* 92EDC 80184ADC 3000B48F */  lw         $s4, 0x30($sp)
    /* 92EE0 80184AE0 2C00B38F */  lw         $s3, 0x2C($sp)
    /* 92EE4 80184AE4 2800B28F */  lw         $s2, 0x28($sp)
    /* 92EE8 80184AE8 2400B18F */  lw         $s1, 0x24($sp)
    /* 92EEC 80184AEC 2000B08F */  lw         $s0, 0x20($sp)
    /* 92EF0 80184AF0 0800E003 */  jr         $ra
    /* 92EF4 80184AF4 4800BD27 */   addiu     $sp, $sp, 0x48
endlabel func_801847D8
