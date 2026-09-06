nonmatching func_801617D8, 0x128

glabel func_801617D8
    /* 6FBD8 801617D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6FBDC 801617DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6FBE0 801617E0 C7E5030C */  jal        func_800F971C
    /* 6FBE4 801617E4 00000000 */   nop
    /* 6FBE8 801617E8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6FBEC 801617EC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6FBF0 801617F0 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6FBF4 801617F4 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6FBF8 801617F8 00006294 */  lhu        $v0, 0x0($v1)
    /* 6FBFC 801617FC 00000000 */  nop
    /* 6FC00 80161800 000082A4 */  sh         $v0, 0x0($a0)
    /* 6FC04 80161804 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6FC08 80161808 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6FC0C 8016180C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 6FC10 80161810 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 6FC14 80161814 00006294 */  lhu        $v0, 0x0($v1)
    /* 6FC18 80161818 00000000 */  nop
    /* 6FC1C 8016181C 000082A4 */  sh         $v0, 0x0($a0)
  .L80161820:
    /* 6FC20 80161820 DADA030C */  jal        func_800F6B68
    /* 6FC24 80161824 01200424 */   addiu     $a0, $zero, 0x2001
    /* 6FC28 80161828 93E0030C */  jal        func_800F824C
    /* 6FC2C 8016182C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6FC30 80161830 92D0030C */  jal        func_800F4248
    /* 6FC34 80161834 80000424 */   addiu     $a0, $zero, 0x80
    /* 6FC38 80161838 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6FC3C 8016183C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6FC40 80161840 00000000 */  nop
    /* 6FC44 80161844 00006290 */  lbu        $v0, 0x0($v1)
    /* 6FC48 80161848 AA000424 */  addiu      $a0, $zero, 0xAA
    /* 6FC4C 8016184C 80004238 */  xori       $v0, $v0, 0x80
    /* 6FC50 80161850 93E0030C */  jal        func_800F824C
    /* 6FC54 80161854 000062A0 */   sb        $v0, 0x0($v1)
    /* 6FC58 80161858 8CD9030C */  jal        func_800F6630
    /* 6FC5C 8016185C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6FC60 80161860 92D0030C */  jal        func_800F4248
    /* 6FC64 80161864 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6FC68 80161868 0FCF030C */  jal        func_800F3C3C
    /* 6FC6C 8016186C AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6FC70 80161870 31DE030C */  jal        func_800F78C4
    /* 6FC74 80161874 21204000 */   addu      $a0, $v0, $zero
    /* 6FC78 80161878 DAE1030C */  jal        func_800F8768
    /* 6FC7C 8016187C 01200424 */   addiu     $a0, $zero, 0x2001
    /* 6FC80 80161880 91E5030C */  jal        func_800F9644
    /* 6FC84 80161884 20000424 */   addiu     $a0, $zero, 0x20
    /* 6FC88 80161888 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 6FC8C 8016188C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 6FC90 80161890 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 6FC94 80161894 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 6FC98 80161898 00006294 */  lhu        $v0, 0x0($v1)
    /* 6FC9C 8016189C 04D5030C */  jal        func_800F5410
    /* 6FCA0 801618A0 000082A4 */   sh        $v0, 0x0($a0)
    /* 6FCA4 801618A4 19D0030C */  jal        func_800F4064
    /* 6FCA8 801618A8 80000424 */   addiu     $a0, $zero, 0x80
    /* 6FCAC 801618AC 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6FCB0 801618B0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6FCB4 801618B4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6FCB8 801618B8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6FCBC 801618BC 00006294 */  lhu        $v0, 0x0($v1)
    /* 6FCC0 801618C0 C7E5030C */  jal        func_800F971C
    /* 6FCC4 801618C4 000082A4 */   sh        $v0, 0x0($a0)
    /* 6FCC8 801618C8 98E5030C */  jal        func_800F9660
    /* 6FCCC 801618CC 20000424 */   addiu     $a0, $zero, 0x20
    /* 6FCD0 801618D0 EFD8030C */  jal        func_800F63BC
    /* 6FCD4 801618D4 00000000 */   nop
    /* 6FCD8 801618D8 A4D6030C */  jal        func_800F5A90
    /* 6FCDC 801618DC 05000424 */   addiu     $a0, $zero, 0x5
    /* 6FCE0 801618E0 F5D4030C */  jal        func_800F53D4
    /* 6FCE4 801618E4 00000000 */   nop
    /* 6FCE8 801618E8 CDFF4010 */  beqz       $v0, .L80161820
    /* 6FCEC 801618EC 00000000 */   nop
    /* 6FCF0 801618F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6FCF4 801618F4 00000000 */  nop
    /* 6FCF8 801618F8 0800E003 */  jr         $ra
    /* 6FCFC 801618FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801617D8
