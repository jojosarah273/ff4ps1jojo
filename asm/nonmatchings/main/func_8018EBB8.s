nonmatching func_8018EBB8, 0x130

glabel func_8018EBB8
    /* 9CFB8 8018EBB8 FFFFC230 */  andi       $v0, $a2, 0xFFFF
    /* 9CFBC 8018EBBC 0040422C */  sltiu      $v0, $v0, 0x4000
    /* 9CFC0 8018EBC0 02004014 */  bnez       $v0, .L8018EBCC
    /* 9CFC4 8018EBC4 21580000 */   addu      $t3, $zero, $zero
    /* 9CFC8 8018EBC8 FF3F0624 */  addiu      $a2, $zero, 0x3FFF
  .L8018EBCC:
    /* 9CFCC 8018EBCC 21380000 */  addu       $a3, $zero, $zero
    /* 9CFD0 8018EBD0 FFFFC330 */  andi       $v1, $a2, 0xFFFF
    /* 9CFD4 8018EBD4 0710E300 */  srav       $v0, $v1, $a3
  .L8018EBD8:
    /* 9CFD8 8018EBD8 01004230 */  andi       $v0, $v0, 0x1
    /* 9CFDC 8018EBDC 02004010 */  beqz       $v0, .L8018EBE8
    /* 9CFE0 8018EBE0 00000000 */   nop
    /* 9CFE4 8018EBE4 2158E000 */  addu       $t3, $a3, $zero
  .L8018EBE8:
    /* 9CFE8 8018EBE8 0100E724 */  addiu      $a3, $a3, 0x1
    /* 9CFEC 8018EBEC 0E00E228 */  slti       $v0, $a3, 0xE
    /* 9CFF0 8018EBF0 F9FF4014 */  bnez       $v0, .L8018EBD8
    /* 9CFF4 8018EBF4 0710E300 */   srav      $v0, $v1, $a3
    /* 9CFF8 8018EBF8 FFFFC330 */  andi       $v1, $a2, 0xFFFF
    /* 9CFFC 8018EBFC 0F000224 */  addiu      $v0, $zero, 0xF
    /* 9D000 8018EC00 23104B00 */  subu       $v0, $v0, $t3
    /* 9D004 8018EC04 04304300 */  sllv       $a2, $v1, $v0
    /* 9D008 8018EC08 0B000724 */  addiu      $a3, $zero, 0xB
    /* 9D00C 8018EC0C FFFFC330 */  andi       $v1, $a2, 0xFFFF
    /* 9D010 8018EC10 1A80083C */  lui        $t0, %hi(D_8019B5CA)
    /* 9D014 8018EC14 CAB50825 */  addiu      $t0, $t0, %lo(D_8019B5CA)
  .L8018EC18:
    /* 9D018 8018EC18 00000295 */  lhu        $v0, 0x0($t0)
    /* 9D01C 8018EC1C 00000000 */  nop
    /* 9D020 8018EC20 2B106200 */  sltu       $v0, $v1, $v0
    /* 9D024 8018EC24 03004014 */  bnez       $v0, .L8018EC34
    /* 9D028 8018EC28 00000000 */   nop
    /* 9D02C 8018EC2C 103B0608 */  j          .L8018EC40
    /* 9D030 8018EC30 2150E000 */   addu      $t2, $a3, $zero
  .L8018EC34:
    /* 9D034 8018EC34 FFFFE724 */  addiu      $a3, $a3, -0x1
    /* 9D038 8018EC38 F7FFE104 */  bgez       $a3, .L8018EC18
    /* 9D03C 8018EC3C FEFF0825 */   addiu     $t0, $t0, -0x2
  .L8018EC40:
    /* 9D040 8018EC40 FFFFC330 */  andi       $v1, $a2, 0xFFFF
    /* 9D044 8018EC44 FFFF4231 */  andi       $v0, $t2, 0xFFFF
    /* 9D048 8018EC48 40100200 */  sll        $v0, $v0, 1
    /* 9D04C 8018EC4C 1A80013C */  lui        $at, %hi(D_8019B5B4)
    /* 9D050 8018EC50 21082200 */  addu       $at, $at, $v0
    /* 9D054 8018EC54 B4B52294 */  lhu        $v0, %lo(D_8019B5B4)($at)
    /* 9D058 8018EC58 C01B0300 */  sll        $v1, $v1, 15
    /* 9D05C 8018EC5C 1B006200 */  divu       $zero, $v1, $v0
    /* 9D060 8018EC60 02004014 */  bnez       $v0, .L8018EC6C
    /* 9D064 8018EC64 00000000 */   nop
    /* 9D068 8018EC68 0D000700 */  break      7
  .L8018EC6C:
    /* 9D06C 8018EC6C 12180000 */  mflo       $v1
    /* 9D070 8018EC70 7F000724 */  addiu      $a3, $zero, 0x7F
    /* 9D074 8018EC74 1A80063C */  lui        $a2, %hi(D_8019B6CA)
    /* 9D078 8018EC78 CAB6C624 */  addiu      $a2, $a2, %lo(D_8019B6CA)
    /* 9D07C 8018EC7C FFFF6330 */  andi       $v1, $v1, 0xFFFF
  .L8018EC80:
    /* 9D080 8018EC80 0000C294 */  lhu        $v0, 0x0($a2)
    /* 9D084 8018EC84 00000000 */  nop
    /* 9D088 8018EC88 2B106200 */  sltu       $v0, $v1, $v0
    /* 9D08C 8018EC8C 03004014 */  bnez       $v0, .L8018EC9C
    /* 9D090 8018EC90 00000000 */   nop
    /* 9D094 8018EC94 2A3B0608 */  j          .L8018ECA8
    /* 9D098 8018EC98 2148E000 */   addu      $t1, $a3, $zero
  .L8018EC9C:
    /* 9D09C 8018EC9C FFFFE724 */  addiu      $a3, $a3, -0x1
    /* 9D0A0 8018ECA0 F7FFE104 */  bgez       $a3, .L8018EC80
    /* 9D0A4 8018ECA4 FEFFC624 */   addiu     $a2, $a2, -0x2
  .L8018ECA8:
    /* 9D0A8 8018ECA8 01002225 */  addiu      $v0, $t1, 0x1
    /* 9D0AC 8018ECAC 2148A200 */  addu       $t1, $a1, $v0
    /* 9D0B0 8018ECB0 F4FF6325 */  addiu      $v1, $t3, -0xC
    /* 9D0B4 8018ECB4 40100300 */  sll        $v0, $v1, 1
    /* 9D0B8 8018ECB8 21104300 */  addu       $v0, $v0, $v1
    /* 9D0BC 8018ECBC 80100200 */  sll        $v0, $v0, 2
    /* 9D0C0 8018ECC0 21108200 */  addu       $v0, $a0, $v0
    /* 9D0C4 8018ECC4 21104201 */  addu       $v0, $t2, $v0
    /* 9D0C8 8018ECC8 FFFF2431 */  andi       $a0, $t1, 0xFFFF
    /* 9D0CC 8018ECCC C2190400 */  srl        $v1, $a0, 7
    /* 9D0D0 8018ECD0 21504300 */  addu       $t2, $v0, $v1
    /* 9D0D4 8018ECD4 FFFF4231 */  andi       $v0, $t2, 0xFFFF
    /* 9D0D8 8018ECD8 00120200 */  sll        $v0, $v0, 8
    /* 9D0DC 8018ECDC 7E008430 */  andi       $a0, $a0, 0x7E
    /* 9D0E0 8018ECE0 0800E003 */  jr         $ra
    /* 9D0E4 8018ECE4 25104400 */   or        $v0, $v0, $a0
endlabel func_8018EBB8
