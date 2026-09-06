nonmatching func_8016EABC, 0x2A8

glabel func_8016EABC
    /* 7CEBC 8016EABC D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 7CEC0 8016EAC0 2000BFAF */  sw         $ra, 0x20($sp)
    /* 7CEC4 8016EAC4 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 7CEC8 8016EAC8 1800B2AF */  sw         $s2, 0x18($sp)
    /* 7CECC 8016EACC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 7CED0 8016EAD0 9BE4030C */  jal        func_800F926C
    /* 7CED4 8016EAD4 1000B0AF */   sw        $s0, 0x10($sp)
    /* 7CED8 8016EAD8 CCE4030C */  jal        func_800F9330
    /* 7CEDC 8016EADC 04001124 */   addiu     $s1, $zero, 0x4
    /* 7CEE0 8016EAE0 E7E4030C */  jal        func_800F939C
    /* 7CEE4 8016EAE4 00000000 */   nop
    /* 7CEE8 8016EAE8 A6E4030C */  jal        func_800F9298
    /* 7CEEC 8016EAEC 00000000 */   nop
    /* 7CEF0 8016EAF0 53D9030C */  jal        func_800F654C
    /* 7CEF4 8016EAF4 21200000 */   addu      $a0, $zero, $zero
    /* 7CEF8 8016EAF8 80E4030C */  jal        func_800F9200
    /* 7CEFC 8016EAFC 00000000 */   nop
    /* 7CF00 8016EB00 12E5030C */  jal        func_800F9448
    /* 7CF04 8016EB04 00000000 */   nop
    /* 7CF08 8016EB08 77DC030C */  jal        func_800F71DC
    /* 7CF0C 8016EB0C 00010424 */   addiu     $a0, $zero, 0x100
    /* 7CF10 8016EB10 CCE4030C */  jal        func_800F9330
    /* 7CF14 8016EB14 00000000 */   nop
    /* 7CF18 8016EB18 2EE5030C */  jal        func_800F94B8
    /* 7CF1C 8016EB1C 00000000 */   nop
    /* 7CF20 8016EB20 0FCF030C */  jal        func_800F3C3C
    /* 7CF24 8016EB24 21200000 */   addu      $a0, $zero, $zero
    /* 7CF28 8016EB28 21804000 */  addu       $s0, $v0, $zero
    /* 7CF2C 8016EB2C C1CE030C */  jal        func_800F3B04
    /* 7CF30 8016EB30 00100424 */   addiu     $a0, $zero, 0x1000
    /* 7CF34 8016EB34 21200000 */  addu       $a0, $zero, $zero
    /* 7CF38 8016EB38 21904000 */  addu       $s2, $v0, $zero
    /* 7CF3C 8016EB3C E7CE030C */  jal        func_800F3B9C
    /* 7CF40 8016EB40 21280000 */   addu      $a1, $zero, $zero
    /* 7CF44 8016EB44 18420424 */  addiu      $a0, $zero, 0x4218
    /* 7CF48 8016EB48 21984000 */  addu       $s3, $v0, $zero
    /* 7CF4C 8016EB4C 40DD030C */  jal        func_800F7500
    /* 7CF50 8016EB50 EC0000A2 */   sb        $zero, 0xEC($s0)
    /* 7CF54 8016EB54 77DC030C */  jal        func_800F71DC
    /* 7CF58 8016EB58 04000424 */   addiu     $a0, $zero, 0x4
  .L8016EB5C:
    /* 7CF5C 8016EB5C E7E4030C */  jal        func_800F939C
    /* 7CF60 8016EB60 00000000 */   nop
    /* 7CF64 8016EB64 66C0050C */  jal        func_80170198
    /* 7CF68 8016EB68 00000000 */   nop
    /* 7CF6C 8016EB6C 83E5030C */  jal        func_800F960C
    /* 7CF70 8016EB70 00000000 */   nop
    /* 7CF74 8016EB74 D9D8030C */  jal        func_800F6364
    /* 7CF78 8016EB78 00000000 */   nop
    /* 7CF7C 8016EB7C EFD8030C */  jal        func_800F63BC
    /* 7CF80 8016EB80 00000000 */   nop
    /* 7CF84 8016EB84 FFFF2226 */  addiu      $v0, $s1, -0x1
    /* 7CF88 8016EB88 FF005130 */  andi       $s1, $v0, 0xFF
    /* 7CF8C 8016EB8C F3FF2016 */  bnez       $s1, .L8016EB5C
    /* 7CF90 8016EB90 20000424 */   addiu     $a0, $zero, 0x20
    /* 7CF94 8016EB94 640A4292 */  lbu        $v0, 0xA64($s2)
    /* 7CF98 8016EB98 00000000 */  nop
    /* 7CF9C 8016EB9C 01004230 */  andi       $v0, $v0, 0x1
    /* 7CFA0 8016EBA0 80880200 */  sll        $s1, $v0, 2
    /* 7CFA4 8016EBA4 1D0011A2 */  sb         $s1, 0x1D($s0)
    /* 7CFA8 8016EBA8 40101100 */  sll        $v0, $s1, 1
    /* 7CFAC 8016EBAC FF005130 */  andi       $s1, $v0, 0xFF
    /* 7CFB0 8016EBB0 1D000292 */  lbu        $v0, 0x1D($s0)
    /* 7CFB4 8016EBB4 44000392 */  lbu        $v1, 0x44($s0)
    /* 7CFB8 8016EBB8 21102202 */  addu       $v0, $s1, $v0
    /* 7CFBC 8016EBBC 40100200 */  sll        $v0, $v0, 1
    /* 7CFC0 8016EBC0 430002A2 */  sb         $v0, 0x43($s0)
    /* 7CFC4 8016EBC4 FF005130 */  andi       $s1, $v0, 0xFF
    /* 7CFC8 8016EBC8 001A0300 */  sll        $v1, $v1, 8
    /* 7CFCC 8016EBCC 91E5030C */  jal        func_800F9644
    /* 7CFD0 8016EBD0 25882302 */   or        $s1, $s1, $v1
    /* 7CFD4 8016EBD4 04000392 */  lbu        $v1, 0x4($s0)
    /* 7CFD8 8016EBD8 05000292 */  lbu        $v0, 0x5($s0)
    /* 7CFDC 8016EBDC 1D0003A2 */  sb         $v1, 0x1D($s0)
    /* 7CFE0 8016EBE0 1E0002A2 */  sb         $v0, 0x1E($s0)
    /* 7CFE4 8016EBE4 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 7CFE8 8016EBE8 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 7CFEC 8016EBEC 21900000 */  addu       $s2, $zero, $zero
    /* 7CFF0 8016EBF0 CCE4030C */  jal        func_800F9330
    /* 7CFF4 8016EBF4 000071A4 */   sh        $s1, 0x0($v1)
    /* 7CFF8 8016EBF8 0C000524 */  addiu      $a1, $zero, 0xC
  .L8016EBFC:
    /* 7CFFC 8016EBFC 1E000292 */  lbu        $v0, 0x1E($s0)
    /* 7D000 8016EC00 1D000492 */  lbu        $a0, 0x1D($s0)
    /* 7D004 8016EC04 00120200 */  sll        $v0, $v0, 8
    /* 7D008 8016EC08 25208200 */  or         $a0, $a0, $v0
    /* 7D00C 8016EC0C 00808330 */  andi       $v1, $a0, 0x8000
    /* 7D010 8016EC10 09006010 */  beqz       $v1, .L8016EC38
    /* 7D014 8016EC14 40100400 */   sll       $v0, $a0, 1
    /* 7D018 8016EC18 FFFF4430 */  andi       $a0, $v0, 0xFFFF
    /* 7D01C 8016EC1C 21183302 */  addu       $v1, $s1, $s3
    /* 7D020 8016EC20 061A6290 */  lbu        $v0, 0x1A06($v1)
    /* 7D024 8016EC24 051A6390 */  lbu        $v1, 0x1A05($v1)
    /* 7D028 8016EC28 00120200 */  sll        $v0, $v0, 8
    /* 7D02C 8016EC2C 25186200 */  or         $v1, $v1, $v0
    /* 7D030 8016EC30 0FBB0508 */  j          .L8016EC3C
    /* 7D034 8016EC34 25904302 */   or        $s2, $s2, $v1
  .L8016EC38:
    /* 7D038 8016EC38 FFFF4430 */  andi       $a0, $v0, 0xFFFF
  .L8016EC3C:
    /* 7D03C 8016EC3C 02002226 */  addiu      $v0, $s1, 0x2
    /* 7D040 8016EC40 FFFF5130 */  andi       $s1, $v0, 0xFFFF
    /* 7D044 8016EC44 FFFFA324 */  addiu      $v1, $a1, -0x1
    /* 7D048 8016EC48 FFFF6530 */  andi       $a1, $v1, 0xFFFF
    /* 7D04C 8016EC4C 02120400 */  srl        $v0, $a0, 8
    /* 7D050 8016EC50 1D0004A2 */  sb         $a0, 0x1D($s0)
    /* 7D054 8016EC54 E9FFA014 */  bnez       $a1, .L8016EBFC
    /* 7D058 8016EC58 1E0002A2 */   sb        $v0, 0x1E($s0)
    /* 7D05C 8016EC5C 68E5030C */  jal        func_800F95A0
    /* 7D060 8016EC60 00000000 */   nop
    /* 7D064 8016EC64 0C000524 */  addiu      $a1, $zero, 0xC
    /* 7D068 8016EC68 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 7D06C 8016EC6C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 7D070 8016EC70 08000392 */  lbu        $v1, 0x8($s0)
    /* 7D074 8016EC74 09000492 */  lbu        $a0, 0x9($s0)
    /* 7D078 8016EC78 00005194 */  lhu        $s1, 0x0($v0)
    /* 7D07C 8016EC7C 02121200 */  srl        $v0, $s2, 8
    /* 7D080 8016EC80 1F0012A2 */  sb         $s2, 0x1F($s0)
    /* 7D084 8016EC84 21900000 */  addu       $s2, $zero, $zero
    /* 7D088 8016EC88 200002A2 */  sb         $v0, 0x20($s0)
    /* 7D08C 8016EC8C 1D0003A2 */  sb         $v1, 0x1D($s0)
    /* 7D090 8016EC90 1E0004A2 */  sb         $a0, 0x1E($s0)
  .L8016EC94:
    /* 7D094 8016EC94 1E000292 */  lbu        $v0, 0x1E($s0)
    /* 7D098 8016EC98 1D000492 */  lbu        $a0, 0x1D($s0)
    /* 7D09C 8016EC9C 00120200 */  sll        $v0, $v0, 8
    /* 7D0A0 8016ECA0 25208200 */  or         $a0, $a0, $v0
    /* 7D0A4 8016ECA4 00808330 */  andi       $v1, $a0, 0x8000
    /* 7D0A8 8016ECA8 09006010 */  beqz       $v1, .L8016ECD0
    /* 7D0AC 8016ECAC 40100400 */   sll       $v0, $a0, 1
    /* 7D0B0 8016ECB0 FFFF4430 */  andi       $a0, $v0, 0xFFFF
    /* 7D0B4 8016ECB4 21183302 */  addu       $v1, $s1, $s3
    /* 7D0B8 8016ECB8 061A6290 */  lbu        $v0, 0x1A06($v1)
    /* 7D0BC 8016ECBC 051A6390 */  lbu        $v1, 0x1A05($v1)
    /* 7D0C0 8016ECC0 00120200 */  sll        $v0, $v0, 8
    /* 7D0C4 8016ECC4 25186200 */  or         $v1, $v1, $v0
    /* 7D0C8 8016ECC8 35BB0508 */  j          .L8016ECD4
    /* 7D0CC 8016ECCC 25904302 */   or        $s2, $s2, $v1
  .L8016ECD0:
    /* 7D0D0 8016ECD0 FFFF4430 */  andi       $a0, $v0, 0xFFFF
  .L8016ECD4:
    /* 7D0D4 8016ECD4 02002226 */  addiu      $v0, $s1, 0x2
    /* 7D0D8 8016ECD8 FFFF5130 */  andi       $s1, $v0, 0xFFFF
    /* 7D0DC 8016ECDC FFFFA324 */  addiu      $v1, $a1, -0x1
    /* 7D0E0 8016ECE0 FFFF6530 */  andi       $a1, $v1, 0xFFFF
    /* 7D0E4 8016ECE4 02120400 */  srl        $v0, $a0, 8
    /* 7D0E8 8016ECE8 1D0004A2 */  sb         $a0, 0x1D($s0)
    /* 7D0EC 8016ECEC E9FFA014 */  bnez       $a1, .L8016EC94
    /* 7D0F0 8016ECF0 1E0002A2 */   sb        $v0, 0x1E($s0)
    /* 7D0F4 8016ECF4 2EE5030C */  jal        func_800F94B8
    /* 7D0F8 8016ECF8 00000000 */   nop
    /* 7D0FC 8016ECFC 0FCF030C */  jal        func_800F3C3C
    /* 7D100 8016ED00 21200000 */   addu      $a0, $zero, $zero
    /* 7D104 8016ED04 21804000 */  addu       $s0, $v0, $zero
    /* 7D108 8016ED08 02121200 */  srl        $v0, $s2, 8
    /* 7D10C 8016ED0C 020012A2 */  sb         $s2, 0x2($s0)
    /* 7D110 8016ED10 030002A2 */  sb         $v0, 0x3($s0)
    /* 7D114 8016ED14 1F016392 */  lbu        $v1, 0x11F($s3)
    /* 7D118 8016ED18 00000000 */  nop
    /* 7D11C 8016ED1C 000003A2 */  sb         $v1, 0x0($s0)
    /* 7D120 8016ED20 20016292 */  lbu        $v0, 0x120($s3)
    /* 7D124 8016ED24 20000424 */  addiu      $a0, $zero, 0x20
    /* 7D128 8016ED28 98E5030C */  jal        func_800F9660
    /* 7D12C 8016ED2C 010002A2 */   sb        $v0, 0x1($s0)
    /* 7D130 8016ED30 83E5030C */  jal        func_800F960C
    /* 7D134 8016ED34 00000000 */   nop
    /* 7D138 8016ED38 68E5030C */  jal        func_800F95A0
    /* 7D13C 8016ED3C 00000000 */   nop
    /* 7D140 8016ED40 12E5030C */  jal        func_800F9448
    /* 7D144 8016ED44 00000000 */   nop
    /* 7D148 8016ED48 2000BF8F */  lw         $ra, 0x20($sp)
    /* 7D14C 8016ED4C 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 7D150 8016ED50 1800B28F */  lw         $s2, 0x18($sp)
    /* 7D154 8016ED54 1400B18F */  lw         $s1, 0x14($sp)
    /* 7D158 8016ED58 1000B08F */  lw         $s0, 0x10($sp)
    /* 7D15C 8016ED5C 0800E003 */  jr         $ra
    /* 7D160 8016ED60 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8016EABC
