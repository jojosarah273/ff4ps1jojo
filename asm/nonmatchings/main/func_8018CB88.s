nonmatching func_8018CB88, 0x304

glabel func_8018CB88
    /* 9AF88 8018CB88 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 9AF8C 8018CB8C 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 9AF90 8018CB90 21280000 */  addu       $a1, $zero, $zero
    /* 9AF94 8018CB94 80014794 */  lhu        $a3, 0x180($v0)
    /* 9AF98 8018CB98 82014894 */  lhu        $t0, 0x182($v0)
    /* 9AF9C 8018CB9C 0080E230 */  andi       $v0, $a3, 0x8000
    /* 9AFA0 8018CBA0 03004014 */  bnez       $v0, .L8018CBB0
    /* 9AFA4 8018CBA4 21300000 */   addu      $a2, $zero, $zero
    /* 9AFA8 8018CBA8 1D330608 */  j          .L8018CC74
    /* 9AFAC 8018CBAC 2130A000 */   addu      $a2, $a1, $zero
  .L8018CBB0:
    /* 9AFB0 8018CBB0 00F0E330 */  andi       $v1, $a3, 0xF000
    /* 9AFB4 8018CBB4 00B00234 */  ori        $v0, $zero, 0xB000
    /* 9AFB8 8018CBB8 26006210 */  beq        $v1, $v0, .L8018CC54
    /* 9AFBC 8018CBBC 2A104300 */   slt       $v0, $v0, $v1
    /* 9AFC0 8018CBC0 0F004014 */  bnez       $v0, .L8018CC00
    /* 9AFC4 8018CBC4 00D00234 */   ori       $v0, $zero, 0xD000
    /* 9AFC8 8018CBC8 00900234 */  ori        $v0, $zero, 0x9000
    /* 9AFCC 8018CBCC 1D006210 */  beq        $v1, $v0, .L8018CC44
    /* 9AFD0 8018CBD0 2A104300 */   slt       $v0, $v0, $v1
    /* 9AFD4 8018CBD4 06004014 */  bnez       $v0, .L8018CBF0
    /* 9AFD8 8018CBD8 00A00234 */   ori       $v0, $zero, 0xA000
    /* 9AFDC 8018CBDC 00800234 */  ori        $v0, $zero, 0x8000
    /* 9AFE0 8018CBE0 16006210 */  beq        $v1, $v0, .L8018CC3C
    /* 9AFE4 8018CBE4 00000000 */   nop
    /* 9AFE8 8018CBE8 1D330608 */  j          .L8018CC74
    /* 9AFEC 8018CBEC FF0FE730 */   andi      $a3, $a3, 0xFFF
  .L8018CBF0:
    /* 9AFF0 8018CBF0 16006210 */  beq        $v1, $v0, .L8018CC4C
    /* 9AFF4 8018CBF4 00000000 */   nop
    /* 9AFF8 8018CBF8 1D330608 */  j          .L8018CC74
    /* 9AFFC 8018CBFC FF0FE730 */   andi      $a3, $a3, 0xFFF
  .L8018CC00:
    /* 9B000 8018CC00 18006210 */  beq        $v1, $v0, .L8018CC64
    /* 9B004 8018CC04 2A104300 */   slt       $v0, $v0, $v1
    /* 9B008 8018CC08 06004014 */  bnez       $v0, .L8018CC24
    /* 9B00C 8018CC0C 00E00234 */   ori       $v0, $zero, 0xE000
    /* 9B010 8018CC10 00C00234 */  ori        $v0, $zero, 0xC000
    /* 9B014 8018CC14 11006210 */  beq        $v1, $v0, .L8018CC5C
    /* 9B018 8018CC18 00000000 */   nop
    /* 9B01C 8018CC1C 1D330608 */  j          .L8018CC74
    /* 9B020 8018CC20 FF0FE730 */   andi      $a3, $a3, 0xFFF
  .L8018CC24:
    /* 9B024 8018CC24 11006210 */  beq        $v1, $v0, .L8018CC6C
    /* 9B028 8018CC28 00F00234 */   ori       $v0, $zero, 0xF000
    /* 9B02C 8018CC2C 0F006210 */  beq        $v1, $v0, .L8018CC6C
    /* 9B030 8018CC30 00000000 */   nop
    /* 9B034 8018CC34 1D330608 */  j          .L8018CC74
    /* 9B038 8018CC38 FF0FE730 */   andi      $a3, $a3, 0xFFF
  .L8018CC3C:
    /* 9B03C 8018CC3C 1C330608 */  j          .L8018CC70
    /* 9B040 8018CC40 01000624 */   addiu     $a2, $zero, 0x1
  .L8018CC44:
    /* 9B044 8018CC44 1C330608 */  j          .L8018CC70
    /* 9B048 8018CC48 02000624 */   addiu     $a2, $zero, 0x2
  .L8018CC4C:
    /* 9B04C 8018CC4C 1C330608 */  j          .L8018CC70
    /* 9B050 8018CC50 03000624 */   addiu     $a2, $zero, 0x3
  .L8018CC54:
    /* 9B054 8018CC54 1C330608 */  j          .L8018CC70
    /* 9B058 8018CC58 04000624 */   addiu     $a2, $zero, 0x4
  .L8018CC5C:
    /* 9B05C 8018CC5C 1C330608 */  j          .L8018CC70
    /* 9B060 8018CC60 05000624 */   addiu     $a2, $zero, 0x5
  .L8018CC64:
    /* 9B064 8018CC64 1C330608 */  j          .L8018CC70
    /* 9B068 8018CC68 06000624 */   addiu     $a2, $zero, 0x6
  .L8018CC6C:
    /* 9B06C 8018CC6C 07000624 */  addiu      $a2, $zero, 0x7
  .L8018CC70:
    /* 9B070 8018CC70 FF0FE730 */  andi       $a3, $a3, 0xFFF
  .L8018CC74:
    /* 9B074 8018CC74 00800231 */  andi       $v0, $t0, 0x8000
    /* 9B078 8018CC78 03004014 */  bnez       $v0, .L8018CC88
    /* 9B07C 8018CC7C 00F00331 */   andi      $v1, $t0, 0xF000
    /* 9B080 8018CC80 52330608 */  j          .L8018CD48
    /* 9B084 8018CC84 21280000 */   addu      $a1, $zero, $zero
  .L8018CC88:
    /* 9B088 8018CC88 00B00234 */  ori        $v0, $zero, 0xB000
    /* 9B08C 8018CC8C 26006210 */  beq        $v1, $v0, .L8018CD28
    /* 9B090 8018CC90 2A104300 */   slt       $v0, $v0, $v1
    /* 9B094 8018CC94 0F004014 */  bnez       $v0, .L8018CCD4
    /* 9B098 8018CC98 00D00234 */   ori       $v0, $zero, 0xD000
    /* 9B09C 8018CC9C 00900234 */  ori        $v0, $zero, 0x9000
    /* 9B0A0 8018CCA0 1D006210 */  beq        $v1, $v0, .L8018CD18
    /* 9B0A4 8018CCA4 2A104300 */   slt       $v0, $v0, $v1
    /* 9B0A8 8018CCA8 06004014 */  bnez       $v0, .L8018CCC4
    /* 9B0AC 8018CCAC 00A00234 */   ori       $v0, $zero, 0xA000
    /* 9B0B0 8018CCB0 00800234 */  ori        $v0, $zero, 0x8000
    /* 9B0B4 8018CCB4 16006210 */  beq        $v1, $v0, .L8018CD10
    /* 9B0B8 8018CCB8 00000000 */   nop
    /* 9B0BC 8018CCBC 52330608 */  j          .L8018CD48
    /* 9B0C0 8018CCC0 FF0F0831 */   andi      $t0, $t0, 0xFFF
  .L8018CCC4:
    /* 9B0C4 8018CCC4 16006210 */  beq        $v1, $v0, .L8018CD20
    /* 9B0C8 8018CCC8 00000000 */   nop
    /* 9B0CC 8018CCCC 52330608 */  j          .L8018CD48
    /* 9B0D0 8018CCD0 FF0F0831 */   andi      $t0, $t0, 0xFFF
  .L8018CCD4:
    /* 9B0D4 8018CCD4 18006210 */  beq        $v1, $v0, .L8018CD38
    /* 9B0D8 8018CCD8 2A104300 */   slt       $v0, $v0, $v1
    /* 9B0DC 8018CCDC 06004014 */  bnez       $v0, .L8018CCF8
    /* 9B0E0 8018CCE0 00E00234 */   ori       $v0, $zero, 0xE000
    /* 9B0E4 8018CCE4 00C00234 */  ori        $v0, $zero, 0xC000
    /* 9B0E8 8018CCE8 11006210 */  beq        $v1, $v0, .L8018CD30
    /* 9B0EC 8018CCEC 00000000 */   nop
    /* 9B0F0 8018CCF0 52330608 */  j          .L8018CD48
    /* 9B0F4 8018CCF4 FF0F0831 */   andi      $t0, $t0, 0xFFF
  .L8018CCF8:
    /* 9B0F8 8018CCF8 11006210 */  beq        $v1, $v0, .L8018CD40
    /* 9B0FC 8018CCFC 00F00234 */   ori       $v0, $zero, 0xF000
    /* 9B100 8018CD00 0F006210 */  beq        $v1, $v0, .L8018CD40
    /* 9B104 8018CD04 00000000 */   nop
    /* 9B108 8018CD08 52330608 */  j          .L8018CD48
    /* 9B10C 8018CD0C FF0F0831 */   andi      $t0, $t0, 0xFFF
  .L8018CD10:
    /* 9B110 8018CD10 51330608 */  j          .L8018CD44
    /* 9B114 8018CD14 01000524 */   addiu     $a1, $zero, 0x1
  .L8018CD18:
    /* 9B118 8018CD18 51330608 */  j          .L8018CD44
    /* 9B11C 8018CD1C 02000524 */   addiu     $a1, $zero, 0x2
  .L8018CD20:
    /* 9B120 8018CD20 51330608 */  j          .L8018CD44
    /* 9B124 8018CD24 03000524 */   addiu     $a1, $zero, 0x3
  .L8018CD28:
    /* 9B128 8018CD28 51330608 */  j          .L8018CD44
    /* 9B12C 8018CD2C 04000524 */   addiu     $a1, $zero, 0x4
  .L8018CD30:
    /* 9B130 8018CD30 51330608 */  j          .L8018CD44
    /* 9B134 8018CD34 05000524 */   addiu     $a1, $zero, 0x5
  .L8018CD38:
    /* 9B138 8018CD38 51330608 */  j          .L8018CD44
    /* 9B13C 8018CD3C 06000524 */   addiu     $a1, $zero, 0x6
  .L8018CD40:
    /* 9B140 8018CD40 07000524 */  addiu      $a1, $zero, 0x7
  .L8018CD44:
    /* 9B144 8018CD44 FF0F0831 */  andi       $t0, $t0, 0xFFF
  .L8018CD48:
    /* 9B148 8018CD48 FFFFE330 */  andi       $v1, $a3, 0xFFFF
    /* 9B14C 8018CD4C 0040622C */  sltiu      $v0, $v1, 0x4000
    /* 9B150 8018CD50 04004014 */  bnez       $v0, .L8018CD64
    /* 9B154 8018CD54 00800234 */   ori       $v0, $zero, 0x8000
    /* 9B158 8018CD58 23106200 */  subu       $v0, $v1, $v0
    /* 9B15C 8018CD5C 5A330608 */  j          .L8018CD68
    /* 9B160 8018CD60 040082A4 */   sh        $v0, 0x4($a0)
  .L8018CD64:
    /* 9B164 8018CD64 040087A4 */  sh         $a3, 0x4($a0)
  .L8018CD68:
    /* 9B168 8018CD68 FFFF0331 */  andi       $v1, $t0, 0xFFFF
    /* 9B16C 8018CD6C 0040622C */  sltiu      $v0, $v1, 0x4000
    /* 9B170 8018CD70 04004014 */  bnez       $v0, .L8018CD84
    /* 9B174 8018CD74 00800234 */   ori       $v0, $zero, 0x8000
    /* 9B178 8018CD78 23106200 */  subu       $v0, $v1, $v0
    /* 9B17C 8018CD7C 62330608 */  j          .L8018CD88
    /* 9B180 8018CD80 060082A4 */   sh        $v0, 0x6($a0)
  .L8018CD84:
    /* 9B184 8018CD84 060088A4 */  sh         $t0, 0x6($a0)
  .L8018CD88:
    /* 9B188 8018CD88 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9B18C 8018CD8C 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9B190 8018CD90 080086A4 */  sh         $a2, 0x8($a0)
    /* 9B194 8018CD94 0A0085A4 */  sh         $a1, 0xA($a0)
    /* 9B198 8018CD98 B8016294 */  lhu        $v0, 0x1B8($v1)
    /* 9B19C 8018CD9C 00000000 */  nop
    /* 9B1A0 8018CDA0 0C0082A4 */  sh         $v0, 0xC($a0)
    /* 9B1A4 8018CDA4 BA016294 */  lhu        $v0, 0x1BA($v1)
    /* 9B1A8 8018CDA8 00000000 */  nop
    /* 9B1AC 8018CDAC 0E0082A4 */  sh         $v0, 0xE($a0)
    /* 9B1B0 8018CDB0 B0016294 */  lhu        $v0, 0x1B0($v1)
    /* 9B1B4 8018CDB4 00000000 */  nop
    /* 9B1B8 8018CDB8 100082A4 */  sh         $v0, 0x10($a0)
    /* 9B1BC 8018CDBC B2016294 */  lhu        $v0, 0x1B2($v1)
    /* 9B1C0 8018CDC0 00000000 */  nop
    /* 9B1C4 8018CDC4 120082A4 */  sh         $v0, 0x12($a0)
    /* 9B1C8 8018CDC8 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9B1CC 8018CDCC 00000000 */  nop
    /* 9B1D0 8018CDD0 04004230 */  andi       $v0, $v0, 0x4
    /* 9B1D4 8018CDD4 03004010 */  beqz       $v0, .L8018CDE4
    /* 9B1D8 8018CDD8 01000224 */   addiu     $v0, $zero, 0x1
    /* 9B1DC 8018CDDC 7A330608 */  j          .L8018CDE8
    /* 9B1E0 8018CDE0 140082AC */   sw        $v0, 0x14($a0)
  .L8018CDE4:
    /* 9B1E4 8018CDE4 140080AC */  sw         $zero, 0x14($a0)
  .L8018CDE8:
    /* 9B1E8 8018CDE8 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 9B1EC 8018CDEC 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 9B1F0 8018CDF0 00000000 */  nop
    /* 9B1F4 8018CDF4 AA014294 */  lhu        $v0, 0x1AA($v0)
    /* 9B1F8 8018CDF8 00000000 */  nop
    /* 9B1FC 8018CDFC 01004230 */  andi       $v0, $v0, 0x1
    /* 9B200 8018CE00 03004010 */  beqz       $v0, .L8018CE10
    /* 9B204 8018CE04 01000224 */   addiu     $v0, $zero, 0x1
    /* 9B208 8018CE08 85330608 */  j          .L8018CE14
    /* 9B20C 8018CE0C 180082AC */   sw        $v0, 0x18($a0)
  .L8018CE10:
    /* 9B210 8018CE10 180080AC */  sw         $zero, 0x18($a0)
  .L8018CE14:
    /* 9B214 8018CE14 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 9B218 8018CE18 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 9B21C 8018CE1C 00000000 */  nop
    /* 9B220 8018CE20 B4016294 */  lhu        $v0, 0x1B4($v1)
    /* 9B224 8018CE24 00000000 */  nop
    /* 9B228 8018CE28 1C0082A4 */  sh         $v0, 0x1C($a0)
    /* 9B22C 8018CE2C B6016294 */  lhu        $v0, 0x1B6($v1)
    /* 9B230 8018CE30 00000000 */  nop
    /* 9B234 8018CE34 1E0082A4 */  sh         $v0, 0x1E($a0)
    /* 9B238 8018CE38 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 9B23C 8018CE3C 00000000 */  nop
    /* 9B240 8018CE40 08004230 */  andi       $v0, $v0, 0x8
    /* 9B244 8018CE44 03004010 */  beqz       $v0, .L8018CE54
    /* 9B248 8018CE48 01000224 */   addiu     $v0, $zero, 0x1
    /* 9B24C 8018CE4C 96330608 */  j          .L8018CE58
    /* 9B250 8018CE50 200082AC */   sw        $v0, 0x20($a0)
  .L8018CE54:
    /* 9B254 8018CE54 200080AC */  sw         $zero, 0x20($a0)
  .L8018CE58:
    /* 9B258 8018CE58 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 9B25C 8018CE5C 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 9B260 8018CE60 00000000 */  nop
    /* 9B264 8018CE64 AA014294 */  lhu        $v0, 0x1AA($v0)
    /* 9B268 8018CE68 00000000 */  nop
    /* 9B26C 8018CE6C 02004230 */  andi       $v0, $v0, 0x2
    /* 9B270 8018CE70 03004010 */  beqz       $v0, .L8018CE80
    /* 9B274 8018CE74 01000224 */   addiu     $v0, $zero, 0x1
    /* 9B278 8018CE78 A1330608 */  j          .L8018CE84
    /* 9B27C 8018CE7C 240082AC */   sw        $v0, 0x24($a0)
  .L8018CE80:
    /* 9B280 8018CE80 240080AC */  sw         $zero, 0x24($a0)
  .L8018CE84:
    /* 9B284 8018CE84 0800E003 */  jr         $ra
    /* 9B288 8018CE88 00000000 */   nop
endlabel func_8018CB88
    /* 9B28C 8018CE8C 00000000 */  nop
    /* 9B290 8018CE90 00000000 */  nop
    /* 9B294 8018CE94 00000000 */  nop
