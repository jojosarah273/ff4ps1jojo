nonmatching func_801096F0, 0x84

glabel func_801096F0
    /* 17AF0 801096F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 17AF4 801096F4 13000424 */  addiu      $a0, $zero, 0x13
    /* 17AF8 801096F8 1400BFAF */  sw         $ra, 0x14($sp)
    /* 17AFC 801096FC 77DC030C */  jal        func_800F71DC
    /* 17B00 80109700 1000B0AF */   sw        $s0, 0x10($sp)
    /* 17B04 80109704 40E3030C */  jal        func_800F8D00
    /* 17B08 80109708 09420424 */   addiu     $a0, $zero, 0x4209
    /* 17B0C 8010970C A1000424 */  addiu      $a0, $zero, 0xA1
    /* 17B10 80109710 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 17B14 80109714 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 17B18 80109718 1A80103C */  lui        $s0, %hi(D_8019FFE8)
    /* 17B1C 8010971C 00006294 */  lhu        $v0, 0x0($v1)
    /* 17B20 80109720 E8FF1026 */  addiu      $s0, $s0, %lo(D_8019FFE8)
    /* 17B24 80109724 01004224 */  addiu      $v0, $v0, 0x1
    /* 17B28 80109728 53D9030C */  jal        func_800F654C
    /* 17B2C 8010972C 340002A6 */   sh        $v0, 0x34($s0)
    /* 17B30 80109730 62E0030C */  jal        func_800F8188
    /* 17B34 80109734 00420424 */   addiu     $a0, $zero, 0x4200
    /* 17B38 80109738 7F000424 */  addiu      $a0, $zero, 0x7F
    /* 17B3C 8010973C 03000224 */  addiu      $v0, $zero, 0x3
    /* 17B40 80109740 2A0000A6 */  sh         $zero, 0x2A($s0)
    /* 17B44 80109744 EEE3030C */  jal        func_800F8FB8
    /* 17B48 80109748 2C0002A6 */   sh        $v0, 0x2C($s0)
    /* 17B4C 8010974C 84DC030C */  jal        func_800F7210
    /* 17B50 80109750 F6080424 */   addiu     $a0, $zero, 0x8F6
    /* 17B54 80109754 D9D8030C */  jal        func_800F6364
    /* 17B58 80109758 00000000 */   nop
    /* 17B5C 8010975C 40E3030C */  jal        func_800F8D00
    /* 17B60 80109760 F6080424 */   addiu     $a0, $zero, 0x8F6
    /* 17B64 80109764 1400BF8F */  lw         $ra, 0x14($sp)
    /* 17B68 80109768 1000B08F */  lw         $s0, 0x10($sp)
    /* 17B6C 8010976C 0800E003 */  jr         $ra
    /* 17B70 80109770 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801096F0
