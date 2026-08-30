nonmatching func_80100894, 0xE4

glabel func_80100894
    /* EC94 80100894 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* EC98 80100898 20000424 */  addiu      $a0, $zero, 0x20
    /* EC9C 8010089C 1400BFAF */  sw         $ra, 0x14($sp)
    /* ECA0 801008A0 91E5030C */  jal        func_800F9644
    /* ECA4 801008A4 1000B0AF */   sw        $s0, 0x10($sp)
    /* ECA8 801008A8 7F00043C */  lui        $a0, (0x7F48EE >> 16)
    /* ECAC 801008AC 7CD9030C */  jal        func_800F65F0
    /* ECB0 801008B0 EE488434 */   ori       $a0, $a0, (0x7F48EE & 0xFFFF)
    /* ECB4 801008B4 4800828F */  lw         $v0, %gp_rel(D_8019ED44)($gp)
    /* ECB8 801008B8 7F00043C */  lui        $a0, (0x7F49EE >> 16)
    /* ECBC 801008BC 00005094 */  lhu        $s0, 0x0($v0)
    /* ECC0 801008C0 EE498434 */  ori        $a0, $a0, (0x7F49EE & 0xFFFF)
    /* ECC4 801008C4 00201032 */  andi       $s0, $s0, 0x2000
    /* ECC8 801008C8 77001036 */  ori        $s0, $s0, 0x77
    /* ECCC 801008CC 7CD9030C */  jal        func_800F65F0
    /* ECD0 801008D0 FFFF1032 */   andi      $s0, $s0, 0xFFFF
    /* ECD4 801008D4 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* ECD8 801008D8 7F00043C */  lui        $a0, (0x7F4AEE >> 16)
    /* ECDC 801008DC 00006294 */  lhu        $v0, 0x0($v1)
    /* ECE0 801008E0 EE4A8434 */  ori        $a0, $a0, (0x7F4AEE & 0xFFFF)
    /* ECE4 801008E4 00204230 */  andi       $v0, $v0, 0x2000
    /* ECE8 801008E8 42100200 */  srl        $v0, $v0, 1
    /* ECEC 801008EC 25800202 */  or         $s0, $s0, $v0
    /* ECF0 801008F0 7CD9030C */  jal        func_800F65F0
    /* ECF4 801008F4 FFFF1032 */   andi      $s0, $s0, 0xFFFF
    /* ECF8 801008F8 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* ECFC 801008FC 7F00043C */  lui        $a0, (0x7F4BEE >> 16)
    /* ED00 80100900 00006294 */  lhu        $v0, 0x0($v1)
    /* ED04 80100904 EE4B8434 */  ori        $a0, $a0, (0x7F4BEE & 0xFFFF)
    /* ED08 80100908 00204230 */  andi       $v0, $v0, 0x2000
    /* ED0C 8010090C 82100200 */  srl        $v0, $v0, 2
    /* ED10 80100910 25800202 */  or         $s0, $s0, $v0
    /* ED14 80100914 7CD9030C */  jal        func_800F65F0
    /* ED18 80100918 FFFF1032 */   andi      $s0, $s0, 0xFFFF
    /* ED1C 8010091C 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* ED20 80100920 00000000 */  nop
    /* ED24 80100924 00006294 */  lhu        $v0, 0x0($v1)
    /* ED28 80100928 00070424 */  addiu      $a0, $zero, 0x700
    /* ED2C 8010092C 00204230 */  andi       $v0, $v0, 0x2000
    /* ED30 80100930 C2100200 */  srl        $v0, $v0, 3
    /* ED34 80100934 25800202 */  or         $s0, $s0, $v0
    /* ED38 80100938 6CE0030C */  jal        func_800F81B0
    /* ED3C 8010093C 000070A4 */   sh        $s0, 0x0($v1)
    /* ED40 80100940 6CE0030C */  jal        func_800F81B0
    /* ED44 80100944 02070424 */   addiu     $a0, $zero, 0x702
    /* ED48 80100948 6CE0030C */  jal        func_800F81B0
    /* ED4C 8010094C 04070424 */   addiu     $a0, $zero, 0x704
    /* ED50 80100950 6CE0030C */  jal        func_800F81B0
    /* ED54 80100954 06070424 */   addiu     $a0, $zero, 0x706
    /* ED58 80100958 56D9030C */  jal        func_800F6558
    /* ED5C 8010095C 21200000 */   addu      $a0, $zero, $zero
    /* ED60 80100960 98E5030C */  jal        func_800F9660
    /* ED64 80100964 20000424 */   addiu     $a0, $zero, 0x20
    /* ED68 80100968 1400BF8F */  lw         $ra, 0x14($sp)
    /* ED6C 8010096C 1000B08F */  lw         $s0, 0x10($sp)
    /* ED70 80100970 0800E003 */  jr         $ra
    /* ED74 80100974 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80100894
