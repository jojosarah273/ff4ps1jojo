nonmatching func_800FEB10, 0x164

glabel func_800FEB10
    /* CF10 800FEB10 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* CF14 800FEB14 7800838F */  lw         $v1, %gp_rel(D_8019ED74)($gp)
    /* CF18 800FEB18 35008293 */  lbu        $v0, %gp_rel(D_8019ED31)($gp)
    /* CF1C 800FEB1C 79000424 */  addiu      $a0, $zero, 0x79
    /* CF20 800FEB20 1000BFAF */  sw         $ra, 0x10($sp)
    /* CF24 800FEB24 340080A3 */  sb         $zero, %gp_rel(D_8019ED30)($gp)
    /* CF28 800FEB28 8CD9030C */  jal        func_800F6630
    /* CF2C 800FEB2C 000062A0 */   sb        $v0, 0x0($v1)
    /* CF30 800FEB30 50D4030C */  jal        func_800F5140
    /* CF34 800FEB34 00000000 */   nop
    /* CF38 800FEB38 A4E5030C */  jal        func_800F9690
    /* CF3C 800FEB3C 00000000 */   nop
    /* CF40 800FEB40 53D9030C */  jal        func_800F654C
    /* CF44 800FEB44 6F000424 */   addiu     $a0, $zero, 0x6F
    /* CF48 800FEB48 20D5030C */  jal        func_800F5480
    /* CF4C 800FEB4C 00000000 */   nop
    /* CF50 800FEB50 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* CF54 800FEB54 1400043C */  lui        $a0, (0x14FB1F >> 16)
    /* CF58 800FEB58 00004594 */  lhu        $a1, 0x0($v0)
    /* CF5C 800FEB5C E7CE030C */  jal        func_800F3B9C
    /* CF60 800FEB60 1FFB8434 */   ori       $a0, $a0, (0x14FB1F & 0xFFFF)
    /* CF64 800FEB64 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* CF68 800FEB68 00000000 */  nop
    /* CF6C 800FEB6C 00006494 */  lhu        $a0, 0x0($v1)
    /* CF70 800FEB70 D2DF030C */  jal        func_800F7F48
    /* CF74 800FEB74 21204400 */   addu      $a0, $v0, $a0
    /* CF78 800FEB78 B8E5030C */  jal        func_800F96E0
    /* CF7C 800FEB7C 00000000 */   nop
    /* CF80 800FEB80 94E3030C */  jal        func_800F8E50
    /* CF84 800FEB84 09420424 */   addiu     $a0, $zero, 0x4209
    /* CF88 800FEB88 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* CF8C 800FEB8C 80000424 */  addiu      $a0, $zero, 0x80
    /* CF90 800FEB90 00006594 */  lhu        $a1, 0x0($v1)
    /* CF94 800FEB94 1A80023C */  lui        $v0, %hi(D_8019FFEE)
    /* CF98 800FEB98 53D9030C */  jal        func_800F654C
    /* CF9C 800FEB9C EEFF45A4 */   sh        $a1, %lo(D_8019FFEE)($v0)
    /* CFA0 800FEBA0 20D5030C */  jal        func_800F5480
    /* CFA4 800FEBA4 00000000 */   nop
    /* CFA8 800FEBA8 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* CFAC 800FEBAC 1400043C */  lui        $a0, (0x14FB1E >> 16)
    /* CFB0 800FEBB0 00004594 */  lhu        $a1, 0x0($v0)
    /* CFB4 800FEBB4 E7CE030C */  jal        func_800F3B9C
    /* CFB8 800FEBB8 1EFB8434 */   ori       $a0, $a0, (0x14FB1E & 0xFFFF)
    /* CFBC 800FEBBC 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* CFC0 800FEBC0 00000000 */  nop
    /* CFC4 800FEBC4 00006494 */  lhu        $a0, 0x0($v1)
    /* CFC8 800FEBC8 D2DF030C */  jal        func_800F7F48
    /* CFCC 800FEBCC 21204400 */   addu      $a0, $v0, $a0
    /* CFD0 800FEBD0 62E0030C */  jal        func_800F8188
    /* CFD4 800FEBD4 26210424 */   addiu     $a0, $zero, 0x2126
    /* CFD8 800FEBD8 53D9030C */  jal        func_800F654C
    /* CFDC 800FEBDC 7F000424 */   addiu     $a0, $zero, 0x7F
    /* CFE0 800FEBE0 04D5030C */  jal        func_800F5410
    /* CFE4 800FEBE4 00000000 */   nop
    /* CFE8 800FEBE8 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* CFEC 800FEBEC 1400043C */  lui        $a0, (0x14FB1E >> 16)
    /* CFF0 800FEBF0 00004594 */  lhu        $a1, 0x0($v0)
    /* CFF4 800FEBF4 E7CE030C */  jal        func_800F3B9C
    /* CFF8 800FEBF8 1EFB8434 */   ori       $a0, $a0, (0x14FB1E & 0xFFFF)
    /* CFFC 800FEBFC 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* D000 800FEC00 00000000 */  nop
    /* D004 800FEC04 00006494 */  lhu        $a0, 0x0($v1)
    /* D008 800FEC08 CECF030C */  jal        func_800F3F38
    /* D00C 800FEC0C 21204400 */   addu      $a0, $v0, $a0
    /* D010 800FEC10 62E0030C */  jal        func_800F8188
    /* D014 800FEC14 27210424 */   addiu     $a0, $zero, 0x2127
    /* D018 800FEC18 8CD9030C */  jal        func_800F6630
    /* D01C 800FEC1C 79000424 */   addiu     $a0, $zero, 0x79
    /* D020 800FEC20 19DE030C */  jal        func_800F7864
    /* D024 800FEC24 00000000 */   nop
    /* D028 800FEC28 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* D02C 800FEC2C 00000000 */  nop
    /* D030 800FEC30 00006290 */  lbu        $v0, 0x0($v1)
    /* D034 800FEC34 00000000 */  nop
    /* D038 800FEC38 00110200 */  sll        $v0, $v0, 4
    /* D03C 800FEC3C 04D5030C */  jal        func_800F5410
    /* D040 800FEC40 000062A0 */   sb        $v0, 0x0($v1)
    /* D044 800FEC44 02D0030C */  jal        func_800F4008
    /* D048 800FEC48 03000424 */   addiu     $a0, $zero, 0x3
    /* D04C 800FEC4C 62E0030C */  jal        func_800F8188
    /* D050 800FEC50 77060424 */   addiu     $a0, $zero, 0x677
    /* D054 800FEC54 53D9030C */  jal        func_800F654C
    /* D058 800FEC58 A1000424 */   addiu     $a0, $zero, 0xA1
    /* D05C 800FEC5C 62E0030C */  jal        func_800F8188
    /* D060 800FEC60 00420424 */   addiu     $a0, $zero, 0x4200
    /* D064 800FEC64 1000BF8F */  lw         $ra, 0x10($sp)
    /* D068 800FEC68 00000000 */  nop
    /* D06C 800FEC6C 0800E003 */  jr         $ra
    /* D070 800FEC70 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FEB10
