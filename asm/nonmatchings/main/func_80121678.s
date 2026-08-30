nonmatching func_80121678, 0x174

glabel func_80121678
    /* 2FA78 80121678 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FA7C 8012167C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2FA80 80121680 9EDA030C */  jal        func_800F6A78
    /* 2FA84 80121684 A2000424 */   addiu     $a0, $zero, 0xA2
    /* 2FA88 80121688 0DD9030C */  jal        func_800F6434
    /* 2FA8C 8012168C 80800434 */   ori       $a0, $zero, 0x8080
    /* 2FA90 80121690 23004014 */  bnez       $v0, .L80121720
    /* 2FA94 80121694 00000000 */   nop
    /* 2FA98 80121698 91E5030C */  jal        func_800F9644
    /* 2FA9C 8012169C 20000424 */   addiu     $a0, $zero, 0x20
    /* 2FAA0 801216A0 BDDA030C */  jal        func_800F6AF4
    /* 2FAA4 801216A4 A1000424 */   addiu     $a0, $zero, 0xA1
    /* 2FAA8 801216A8 99D0030C */  jal        func_800F4264
    /* 2FAAC 801216AC FF7F0424 */   addiu     $a0, $zero, 0x7FFF
    /* 2FAB0 801216B0 9DE0030C */  jal        func_800F8274
    /* 2FAB4 801216B4 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 2FAB8 801216B8 BDDA030C */  jal        func_800F6AF4
    /* 2FABC 801216BC 89000424 */   addiu     $a0, $zero, 0x89
    /* 2FAC0 801216C0 20D5030C */  jal        func_800F5480
    /* 2FAC4 801216C4 00000000 */   nop
    /* 2FAC8 801216C8 0FCF030C */  jal        func_800F3C3C
    /* 2FACC 801216CC 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 2FAD0 801216D0 F3DF030C */  jal        func_800F7FCC
    /* 2FAD4 801216D4 21204000 */   addu      $a0, $v0, $zero
    /* 2FAD8 801216D8 BCE1030C */  jal        func_800F86F0
    /* 2FADC 801216DC 89000424 */   addiu     $a0, $zero, 0x89
    /* 2FAE0 801216E0 98E5030C */  jal        func_800F9660
    /* 2FAE4 801216E4 20000424 */   addiu     $a0, $zero, 0x20
    /* 2FAE8 801216E8 F0D4030C */  jal        func_800F53C0
    /* 2FAEC 801216EC 00000000 */   nop
    /* 2FAF0 801216F0 3A004014 */  bnez       $v0, .L801217DC
    /* 2FAF4 801216F4 00000000 */   nop
    /* 2FAF8 801216F8 0FCF030C */  jal        func_800F3C3C
    /* 2FAFC 801216FC 8B000424 */   addiu     $a0, $zero, 0x8B
    /* 2FB00 80121700 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2FB04 80121704 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2FB08 80121708 00000000 */  nop
    /* 2FB0C 8012170C 00006494 */  lhu        $a0, 0x0($v1)
    /* 2FB10 80121710 CBD6030C */  jal        func_800F5B2C
    /* 2FB14 80121714 21204400 */   addu      $a0, $v0, $a0
    /* 2FB18 80121718 F7850408 */  j          .L801217DC
    /* 2FB1C 8012171C 00000000 */   nop
  .L80121720:
    /* 2FB20 80121720 91E5030C */  jal        func_800F9644
    /* 2FB24 80121724 20000424 */   addiu     $a0, $zero, 0x20
    /* 2FB28 80121728 BDDA030C */  jal        func_800F6AF4
    /* 2FB2C 8012172C 89000424 */   addiu     $a0, $zero, 0x89
    /* 2FB30 80121730 04D5030C */  jal        func_800F5410
    /* 2FB34 80121734 00000000 */   nop
    /* 2FB38 80121738 0FCF030C */  jal        func_800F3C3C
    /* 2FB3C 8012173C A1000424 */   addiu     $a0, $zero, 0xA1
    /* 2FB40 80121740 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2FB44 80121744 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2FB48 80121748 00000000 */  nop
    /* 2FB4C 8012174C 00006494 */  lhu        $a0, 0x0($v1)
    /* 2FB50 80121750 E5CF030C */  jal        func_800F3F94
    /* 2FB54 80121754 21204400 */   addu      $a0, $v0, $a0
    /* 2FB58 80121758 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 2FB5C 8012175C 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 2FB60 80121760 00000000 */  nop
    /* 2FB64 80121764 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FB68 80121768 00000000 */  nop
    /* 2FB6C 8012176C FD004230 */  andi       $v0, $v0, 0xFD
    /* 2FB70 80121770 000062A0 */  sb         $v0, 0x0($v1)
    /* 2FB74 80121774 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 2FB78 80121778 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 2FB7C 8012177C 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 2FB80 80121780 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 2FB84 80121784 00008294 */  lhu        $v0, 0x0($a0)
    /* 2FB88 80121788 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2FB8C 8012178C 02004014 */  bnez       $v0, .L80121798
    /* 2FB90 80121790 00000000 */   nop
    /* 2FB94 80121794 02006334 */  ori        $v1, $v1, 0x2
  .L80121798:
    /* 2FB98 80121798 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2FB9C 8012179C BCE1030C */  jal        func_800F86F0
    /* 2FBA0 801217A0 89000424 */   addiu     $a0, $zero, 0x89
    /* 2FBA4 801217A4 98E5030C */  jal        func_800F9660
    /* 2FBA8 801217A8 20000424 */   addiu     $a0, $zero, 0x20
    /* 2FBAC 801217AC F0D4030C */  jal        func_800F53C0
    /* 2FBB0 801217B0 00000000 */   nop
    /* 2FBB4 801217B4 09004010 */  beqz       $v0, .L801217DC
    /* 2FBB8 801217B8 00000000 */   nop
    /* 2FBBC 801217BC 0FCF030C */  jal        func_800F3C3C
    /* 2FBC0 801217C0 8B000424 */   addiu     $a0, $zero, 0x8B
    /* 2FBC4 801217C4 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2FBC8 801217C8 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2FBCC 801217CC 00000000 */  nop
    /* 2FBD0 801217D0 00006494 */  lhu        $a0, 0x0($v1)
    /* 2FBD4 801217D4 12D8030C */  jal        func_800F6048
    /* 2FBD8 801217D8 21204400 */   addu      $a0, $v0, $a0
  .L801217DC:
    /* 2FBDC 801217DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2FBE0 801217E0 00000000 */  nop
    /* 2FBE4 801217E4 0800E003 */  jr         $ra
    /* 2FBE8 801217E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121678
