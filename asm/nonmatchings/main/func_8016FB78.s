nonmatching func_8016FB78, 0x178

glabel func_8016FB78
    /* 7DF78 8016FB78 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7DF7C 8016FB7C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7DF80 8016FB80 EEE3030C */  jal        func_800F8FB8
    /* 7DF84 8016FB84 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 7DF88 8016FB88 F0D4030C */  jal        func_800F53C0
    /* 7DF8C 8016FB8C 00000000 */   nop
    /* 7DF90 8016FB90 03004014 */  bnez       $v0, .L8016FBA0
    /* 7DF94 8016FB94 00000000 */   nop
    /* 7DF98 8016FB98 68D7030C */  jal        func_800F5DA0
    /* 7DF9C 8016FB9C 1F000424 */   addiu     $a0, $zero, 0x1F
  .L8016FBA0:
    /* 7DFA0 8016FBA0 80E4030C */  jal        func_800F9200
    /* 7DFA4 8016FBA4 00000000 */   nop
    /* 7DFA8 8016FBA8 93E0030C */  jal        func_800F824C
    /* 7DFAC 8016FBAC 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 7DFB0 8016FBB0 93E0030C */  jal        func_800F824C
    /* 7DFB4 8016FBB4 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 7DFB8 8016FBB8 91E5030C */  jal        func_800F9644
    /* 7DFBC 8016FBBC 20000424 */   addiu     $a0, $zero, 0x20
    /* 7DFC0 8016FBC0 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 7DFC4 8016FBC4 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 7DFC8 8016FBC8 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 7DFCC 8016FBCC 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 7DFD0 8016FBD0 00006294 */  lhu        $v0, 0x0($v1)
    /* 7DFD4 8016FBD4 04D5030C */  jal        func_800F5410
    /* 7DFD8 8016FBD8 000082A4 */   sh        $v0, 0x0($a0)
    /* 7DFDC 8016FBDC 0FCF030C */  jal        func_800F3C3C
    /* 7DFE0 8016FBE0 29000424 */   addiu     $a0, $zero, 0x29
    /* 7DFE4 8016FBE4 E5CF030C */  jal        func_800F3F94
    /* 7DFE8 8016FBE8 21204000 */   addu      $a0, $v0, $zero
    /* 7DFEC 8016FBEC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7DFF0 8016FBF0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7DFF4 8016FBF4 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 7DFF8 8016FBF8 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 7DFFC 8016FBFC 00004394 */  lhu        $v1, 0x0($v0)
    /* 7E000 8016FC00 20000424 */  addiu      $a0, $zero, 0x20
    /* 7E004 8016FC04 98E5030C */  jal        func_800F9660
    /* 7E008 8016FC08 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7E00C 8016FC0C E7E4030C */  jal        func_800F939C
    /* 7E010 8016FC10 00000000 */   nop
    /* 7E014 8016FC14 8CD9030C */  jal        func_800F6630
    /* 7E018 8016FC18 1F000424 */   addiu     $a0, $zero, 0x1F
  .L8016FC1C:
    /* 7E01C 8016FC1C 58E2030C */  jal        func_800F8960
    /* 7E020 8016FC20 21200000 */   addu      $a0, $zero, $zero
    /* 7E024 8016FC24 EFD8030C */  jal        func_800F63BC
    /* 7E028 8016FC28 00000000 */   nop
    /* 7E02C 8016FC2C EFD8030C */  jal        func_800F63BC
    /* 7E030 8016FC30 00000000 */   nop
    /* 7E034 8016FC34 68D7030C */  jal        func_800F5DA0
    /* 7E038 8016FC38 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 7E03C 8016FC3C E3D6030C */  jal        func_800F5B8C
    /* 7E040 8016FC40 02020424 */   addiu     $a0, $zero, 0x202
    /* 7E044 8016FC44 F5FF4014 */  bnez       $v0, .L8016FC1C
    /* 7E048 8016FC48 00000000 */   nop
    /* 7E04C 8016FC4C 83E5030C */  jal        func_800F960C
    /* 7E050 8016FC50 00000000 */   nop
    /* 7E054 8016FC54 91E5030C */  jal        func_800F9644
    /* 7E058 8016FC58 20000424 */   addiu     $a0, $zero, 0x20
    /* 7E05C 8016FC5C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 7E060 8016FC60 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 7E064 8016FC64 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 7E068 8016FC68 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 7E06C 8016FC6C 00006294 */  lhu        $v0, 0x0($v1)
    /* 7E070 8016FC70 04D5030C */  jal        func_800F5410
    /* 7E074 8016FC74 000082A4 */   sh        $v0, 0x0($a0)
    /* 7E078 8016FC78 19D0030C */  jal        func_800F4064
    /* 7E07C 8016FC7C 40000424 */   addiu     $a0, $zero, 0x40
    /* 7E080 8016FC80 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7E084 8016FC84 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7E088 8016FC88 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 7E08C 8016FC8C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 7E090 8016FC90 00004394 */  lhu        $v1, 0x0($v0)
    /* 7E094 8016FC94 20000424 */  addiu      $a0, $zero, 0x20
    /* 7E098 8016FC98 98E5030C */  jal        func_800F9660
    /* 7E09C 8016FC9C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7E0A0 8016FCA0 8CD9030C */  jal        func_800F6630
    /* 7E0A4 8016FCA4 1F000424 */   addiu     $a0, $zero, 0x1F
  .L8016FCA8:
    /* 7E0A8 8016FCA8 58E2030C */  jal        func_800F8960
    /* 7E0AC 8016FCAC 21200000 */   addu      $a0, $zero, $zero
    /* 7E0B0 8016FCB0 EFD8030C */  jal        func_800F63BC
    /* 7E0B4 8016FCB4 00000000 */   nop
    /* 7E0B8 8016FCB8 EFD8030C */  jal        func_800F63BC
    /* 7E0BC 8016FCBC 00000000 */   nop
    /* 7E0C0 8016FCC0 68D7030C */  jal        func_800F5DA0
    /* 7E0C4 8016FCC4 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 7E0C8 8016FCC8 E3D6030C */  jal        func_800F5B8C
    /* 7E0CC 8016FCCC 02020424 */   addiu     $a0, $zero, 0x202
    /* 7E0D0 8016FCD0 F5FF4014 */  bnez       $v0, .L8016FCA8
    /* 7E0D4 8016FCD4 00000000 */   nop
    /* 7E0D8 8016FCD8 F7E4030C */  jal        func_800F93DC
    /* 7E0DC 8016FCDC 00000000 */   nop
    /* 7E0E0 8016FCE0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7E0E4 8016FCE4 00000000 */  nop
    /* 7E0E8 8016FCE8 0800E003 */  jr         $ra
    /* 7E0EC 8016FCEC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016FB78
