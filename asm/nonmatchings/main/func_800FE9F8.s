nonmatching func_800FE9F8, 0x118

glabel func_800FE9F8
    /* CDF8 800FE9F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* CDFC 800FE9FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* CE00 800FEA00 8CD9030C */  jal        func_800F6630
    /* CE04 800FEA04 7F000424 */   addiu     $a0, $zero, 0x7F
    /* CE08 800FEA08 0DD9030C */  jal        func_800F6434
    /* CE0C 800FEA0C 02020424 */   addiu     $a0, $zero, 0x202
    /* CE10 800FEA10 37004014 */  bnez       $v0, .L800FEAF0
    /* CE14 800FEA14 00000000 */   nop
    /* CE18 800FEA18 8CD9030C */  jal        func_800F6630
    /* CE1C 800FEA1C 79000424 */   addiu     $a0, $zero, 0x79
    /* CE20 800FEA20 50D4030C */  jal        func_800F5140
    /* CE24 800FEA24 00000000 */   nop
    /* CE28 800FEA28 A4E5030C */  jal        func_800F9690
    /* CE2C 800FEA2C 00000000 */   nop
    /* CE30 800FEA30 53D9030C */  jal        func_800F654C
    /* CE34 800FEA34 6F000424 */   addiu     $a0, $zero, 0x6F
    /* CE38 800FEA38 04D5030C */  jal        func_800F5410
    /* CE3C 800FEA3C 00000000 */   nop
    /* CE40 800FEA40 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* CE44 800FEA44 1400043C */  lui        $a0, (0x14FB1F >> 16)
    /* CE48 800FEA48 00004594 */  lhu        $a1, 0x0($v0)
    /* CE4C 800FEA4C E7CE030C */  jal        func_800F3B9C
    /* CE50 800FEA50 1FFB8434 */   ori       $a0, $a0, (0x14FB1F & 0xFFFF)
    /* CE54 800FEA54 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* CE58 800FEA58 00000000 */  nop
    /* CE5C 800FEA5C 00006494 */  lhu        $a0, 0x0($v1)
    /* CE60 800FEA60 CECF030C */  jal        func_800F3F38
    /* CE64 800FEA64 21204400 */   addu      $a0, $v0, $a0
    /* CE68 800FEA68 B8E5030C */  jal        func_800F96E0
    /* CE6C 800FEA6C 00000000 */   nop
    /* CE70 800FEA70 94E3030C */  jal        func_800F8E50
    /* CE74 800FEA74 09420424 */   addiu     $a0, $zero, 0x4209
    /* CE78 800FEA78 1A80053C */  lui        $a1, %hi(D_8019FFE8)
    /* CE7C 800FEA7C E8FFA524 */  addiu      $a1, $a1, %lo(D_8019FFE8)
    /* CE80 800FEA80 3400A394 */  lhu        $v1, 0x34($a1)
    /* CE84 800FEA84 5C00848F */  lw         $a0, %gp_rel(D_8019ED58)($gp)
    /* CE88 800FEA88 3E00A3A4 */  sh         $v1, 0x3E($a1)
    /* CE8C 800FEA8C 00008294 */  lhu        $v0, 0x0($a0)
    /* CE90 800FEA90 00000000 */  nop
    /* CE94 800FEA94 23104300 */  subu       $v0, $v0, $v1
    /* CE98 800FEA98 4200A2A4 */  sh         $v0, 0x42($a1)
    /* CE9C 800FEA9C 00008394 */  lhu        $v1, 0x0($a0)
    /* CEA0 800FEAA0 0600A294 */  lhu        $v0, 0x6($a1)
    /* CEA4 800FEAA4 B1000424 */  addiu      $a0, $zero, 0xB1
    /* CEA8 800FEAA8 23186200 */  subu       $v1, $v1, $v0
    /* CEAC 800FEAAC 10006324 */  addiu      $v1, $v1, 0x10
    /* CEB0 800FEAB0 8CD9030C */  jal        func_800F6630
    /* CEB4 800FEAB4 0A00A3A4 */   sh        $v1, 0xA($a1)
    /* CEB8 800FEAB8 0DD9030C */  jal        func_800F6434
    /* CEBC 800FEABC 02020424 */   addiu     $a0, $zero, 0x202
    /* CEC0 800FEAC0 05004014 */  bnez       $v0, .L800FEAD8
    /* CEC4 800FEAC4 00000000 */   nop
    /* CEC8 800FEAC8 53D9030C */  jal        func_800F654C
    /* CECC 800FEACC 0F000424 */   addiu     $a0, $zero, 0xF
    /* CED0 800FEAD0 B8FA0308 */  j          .L800FEAE0
    /* CED4 800FEAD4 00000000 */   nop
  .L800FEAD8:
    /* CED8 800FEAD8 8CD9030C */  jal        func_800F6630
    /* CEDC 800FEADC 80000424 */   addiu     $a0, $zero, 0x80
  .L800FEAE0:
    /* CEE0 800FEAE0 62E0030C */  jal        func_800F8188
    /* CEE4 800FEAE4 00210424 */   addiu     $a0, $zero, 0x2100
    /* CEE8 800FEAE8 C0FA0308 */  j          .L800FEB00
    /* CEEC 800FEAEC 00000000 */   nop
  .L800FEAF0:
    /* CEF0 800FEAF0 53D9030C */  jal        func_800F654C
    /* CEF4 800FEAF4 81000424 */   addiu     $a0, $zero, 0x81
    /* CEF8 800FEAF8 62E0030C */  jal        func_800F8188
    /* CEFC 800FEAFC 00420424 */   addiu     $a0, $zero, 0x4200
  .L800FEB00:
    /* CF00 800FEB00 1000BF8F */  lw         $ra, 0x10($sp)
    /* CF04 800FEB04 00000000 */  nop
    /* CF08 800FEB08 0800E003 */  jr         $ra
    /* CF0C 800FEB0C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FE9F8
