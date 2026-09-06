nonmatching func_8018EAE8, 0xD0

glabel func_8018EAE8
    /* 9CEE8 8018EAE8 2138E500 */  addu       $a3, $a3, $a1
    /* 9CEEC 8018EAEC AA2A053C */  lui        $a1, (0x2AAAAAAB >> 16)
    /* 9CEF0 8018EAF0 ABAAA534 */  ori        $a1, $a1, (0x2AAAAAAB & 0xFFFF)
    /* 9CEF4 8018EAF4 FFFFE330 */  andi       $v1, $a3, 0xFFFF
    /* 9CEF8 8018EAF8 C2110300 */  srl        $v0, $v1, 7
    /* 9CEFC 8018EAFC 2130C200 */  addu       $a2, $a2, $v0
    /* 9CF00 8018EB00 2330C400 */  subu       $a2, $a2, $a0
    /* 9CF04 8018EB04 00340600 */  sll        $a2, $a2, 16
    /* 9CF08 8018EB08 03240600 */  sra        $a0, $a2, 16
    /* 9CF0C 8018EB0C 18008500 */  mult       $a0, $a1
    /* 9CF10 8018EB10 7F006730 */  andi       $a3, $v1, 0x7F
    /* 9CF14 8018EB14 C3370600 */  sra        $a2, $a2, 31
    /* 9CF18 8018EB18 10400000 */  mfhi       $t0
    /* 9CF1C 8018EB1C 43100800 */  sra        $v0, $t0, 1
    /* 9CF20 8018EB20 23284600 */  subu       $a1, $v0, $a2
    /* 9CF24 8018EB24 FEFFA624 */  addiu      $a2, $a1, -0x2
    /* 9CF28 8018EB28 40100500 */  sll        $v0, $a1, 1
    /* 9CF2C 8018EB2C 21104500 */  addu       $v0, $v0, $a1
    /* 9CF30 8018EB30 80100200 */  sll        $v0, $v0, 2
    /* 9CF34 8018EB34 23208200 */  subu       $a0, $a0, $v0
    /* 9CF38 8018EB38 00140400 */  sll        $v0, $a0, 16
    /* 9CF3C 8018EB3C 03004104 */  bgez       $v0, .L8018EB4C
    /* 9CF40 8018EB40 21188000 */   addu      $v1, $a0, $zero
    /* 9CF44 8018EB44 0C008324 */  addiu      $v1, $a0, 0xC
    /* 9CF48 8018EB48 FDFFA624 */  addiu      $a2, $a1, -0x3
  .L8018EB4C:
    /* 9CF4C 8018EB4C 001C0300 */  sll        $v1, $v1, 16
    /* 9CF50 8018EB50 C31B0300 */  sra        $v1, $v1, 15
    /* 9CF54 8018EB54 FFFFE230 */  andi       $v0, $a3, 0xFFFF
    /* 9CF58 8018EB58 40100200 */  sll        $v0, $v0, 1
    /* 9CF5C 8018EB5C 1A80013C */  lui        $at, %hi(D_8019B5B4)
    /* 9CF60 8018EB60 21082300 */  addu       $at, $at, $v1
    /* 9CF64 8018EB64 B4B52394 */  lhu        $v1, %lo(D_8019B5B4)($at)
    /* 9CF68 8018EB68 1A80013C */  lui        $at, %hi(D_8019B5CC)
    /* 9CF6C 8018EB6C 21082200 */  addu       $at, $at, $v0
    /* 9CF70 8018EB70 CCB52294 */  lhu        $v0, %lo(D_8019B5CC)($at)
    /* 9CF74 8018EB74 00000000 */  nop
    /* 9CF78 8018EB78 18006200 */  mult       $v1, $v0
    /* 9CF7C 8018EB7C 00140600 */  sll        $v0, $a2, 16
    /* 9CF80 8018EB80 03140200 */  sra        $v0, $v0, 16
    /* 9CF84 8018EB84 12400000 */  mflo       $t0
    /* 9CF88 8018EB88 03004004 */  bltz       $v0, .L8018EB98
    /* 9CF8C 8018EB8C 032C0800 */   sra       $a1, $t0, 16
    /* 9CF90 8018EB90 EC3A0608 */  j          .L8018EBB0
    /* 9CF94 8018EB94 FF3F0524 */   addiu     $a1, $zero, 0x3FFF
  .L8018EB98:
    /* 9CF98 8018EB98 23200200 */  negu       $a0, $v0
    /* 9CF9C 8018EB9C FFFF8324 */  addiu      $v1, $a0, -0x1
    /* 9CFA0 8018EBA0 01000224 */  addiu      $v0, $zero, 0x1
    /* 9CFA4 8018EBA4 04106200 */  sllv       $v0, $v0, $v1
    /* 9CFA8 8018EBA8 2128A200 */  addu       $a1, $a1, $v0
    /* 9CFAC 8018EBAC 06288500 */  srlv       $a1, $a1, $a0
  .L8018EBB0:
    /* 9CFB0 8018EBB0 0800E003 */  jr         $ra
    /* 9CFB4 8018EBB4 FFFFA230 */   andi      $v0, $a1, 0xFFFF
endlabel func_8018EAE8
