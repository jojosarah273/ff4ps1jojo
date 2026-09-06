nonmatching func_8012CC74, 0xF8

glabel func_8012CC74
    /* 3B074 8012CC74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3B078 8012CC78 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3B07C 8012CC7C 59D9030C */  jal        func_800F6564
    /* 3B080 8012CC80 021A0424 */   addiu     $a0, $zero, 0x1A02
    /* 3B084 8012CC84 0DD9030C */  jal        func_800F6434
    /* 3B088 8012CC88 02020424 */   addiu     $a0, $zero, 0x202
    /* 3B08C 8012CC8C 05004014 */  bnez       $v0, .L8012CCA4
    /* 3B090 8012CC90 02000324 */   addiu     $v1, $zero, 0x2
    /* 3B094 8012CC94 94B0040C */  jal        func_8012C250
    /* 3B098 8012CC98 00000000 */   nop
    /* 3B09C 8012CC9C 57B30408 */  j          .L8012CD5C
    /* 3B0A0 8012CCA0 21100000 */   addu      $v0, $zero, $zero
  .L8012CCA4:
    /* 3B0A4 8012CCA4 0D80023C */  lui        $v0, %hi(D_800D06AB)
    /* 3B0A8 8012CCA8 AB064290 */  lbu        $v0, %lo(D_800D06AB)($v0)
    /* 3B0AC 8012CCAC 00000000 */  nop
    /* 3B0B0 8012CCB0 07004430 */  andi       $a0, $v0, 0x7
    /* 3B0B4 8012CCB4 10008310 */  beq        $a0, $v1, .L8012CCF8
    /* 3B0B8 8012CCB8 03008228 */   slti      $v0, $a0, 0x3
    /* 3B0BC 8012CCBC 05004010 */  beqz       $v0, .L8012CCD4
    /* 3B0C0 8012CCC0 01000224 */   addiu     $v0, $zero, 0x1
    /* 3B0C4 8012CCC4 0A008210 */  beq        $a0, $v0, .L8012CCF0
    /* 3B0C8 8012CCC8 0D80033C */   lui       $v1, (0x800D065C >> 16)
    /* 3B0CC 8012CCCC 54B30408 */  j          .L8012CD50
    /* 3B0D0 8012CCD0 00000000 */   nop
  .L8012CCD4:
    /* 3B0D4 8012CCD4 03000224 */  addiu      $v0, $zero, 0x3
    /* 3B0D8 8012CCD8 0C008210 */  beq        $a0, $v0, .L8012CD0C
    /* 3B0DC 8012CCDC 04000224 */   addiu     $v0, $zero, 0x4
    /* 3B0E0 8012CCE0 0F008210 */  beq        $a0, $v0, .L8012CD20
    /* 3B0E4 8012CCE4 0D80033C */   lui       $v1, (0x800D065A >> 16)
    /* 3B0E8 8012CCE8 54B30408 */  j          .L8012CD50
    /* 3B0EC 8012CCEC 00000000 */   nop
  .L8012CCF0:
    /* 3B0F0 8012CCF0 49B30408 */  j          .L8012CD24
    /* 3B0F4 8012CCF4 5C066334 */   ori       $v1, $v1, (0x800D065C & 0xFFFF)
  .L8012CCF8:
    /* 3B0F8 8012CCF8 0D80033C */  lui        $v1, (0x800D065A >> 16)
    /* 3B0FC 8012CCFC 5A066334 */  ori        $v1, $v1, (0x800D065A & 0xFFFF)
    /* 3B100 8012CD00 00006294 */  lhu        $v0, 0x0($v1)
    /* 3B104 8012CD04 4DB30408 */  j          .L8012CD34
    /* 3B108 8012CD08 F0FF4230 */   andi      $v0, $v0, 0xFFF0
  .L8012CD0C:
    /* 3B10C 8012CD0C 0D80033C */  lui        $v1, (0x800D065C >> 16)
    /* 3B110 8012CD10 5C066334 */  ori        $v1, $v1, (0x800D065C & 0xFFFF)
    /* 3B114 8012CD14 00006294 */  lhu        $v0, 0x0($v1)
    /* 3B118 8012CD18 4DB30408 */  j          .L8012CD34
    /* 3B11C 8012CD1C F0FF4230 */   andi      $v0, $v0, 0xFFF0
  .L8012CD20:
    /* 3B120 8012CD20 5A066334 */  ori        $v1, $v1, (0x800D065A & 0xFFFF)
  .L8012CD24:
    /* 3B124 8012CD24 00006294 */  lhu        $v0, 0x0($v1)
    /* 3B128 8012CD28 00000000 */  nop
    /* 3B12C 8012CD2C 04004224 */  addiu      $v0, $v0, 0x4
    /* 3B130 8012CD30 F0FF4230 */  andi       $v0, $v0, 0xFFF0
  .L8012CD34:
    /* 3B134 8012CD34 000062A4 */  sh         $v0, 0x0($v1)
    /* 3B138 8012CD38 0D80033C */  lui        $v1, %hi(D_800D06AB)
    /* 3B13C 8012CD3C AB066390 */  lbu        $v1, %lo(D_800D06AB)($v1)
    /* 3B140 8012CD40 00000000 */  nop
    /* 3B144 8012CD44 F8006330 */  andi       $v1, $v1, 0xF8
    /* 3B148 8012CD48 0D80013C */  lui        $at, %hi(D_800D06AB)
    /* 3B14C 8012CD4C AB0623A0 */  sb         $v1, %lo(D_800D06AB)($at)
  .L8012CD50:
    /* 3B150 8012CD50 AAB3040C */  jal        func_8012CEA8
    /* 3B154 8012CD54 00000000 */   nop
    /* 3B158 8012CD58 01000224 */  addiu      $v0, $zero, 0x1
  .L8012CD5C:
    /* 3B15C 8012CD5C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B160 8012CD60 00000000 */  nop
    /* 3B164 8012CD64 0800E003 */  jr         $ra
    /* 3B168 8012CD68 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012CC74
