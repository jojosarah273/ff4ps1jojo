nonmatching func_800FFCAC, 0x160

glabel func_800FFCAC
    /* E0AC 800FFCAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* E0B0 800FFCB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* E0B4 800FFCB4 EEE3030C */  jal        func_800F8FB8
    /* E0B8 800FFCB8 C1000424 */   addiu     $a0, $zero, 0xC1
    /* E0BC 800FFCBC 8CD9030C */  jal        func_800F6630
    /* E0C0 800FFCC0 A2000424 */   addiu     $a0, $zero, 0xA2
    /* E0C4 800FFCC4 92D0030C */  jal        func_800F4248
    /* E0C8 800FFCC8 01000424 */   addiu     $a0, $zero, 0x1
    /* E0CC 800FFCCC 48D0030C */  jal        func_800F4120
    /* E0D0 800FFCD0 02000424 */   addiu     $a0, $zero, 0x2
    /* E0D4 800FFCD4 3F004014 */  bnez       $v0, .L800FFDD4
    /* E0D8 800FFCD8 00000000 */   nop
    /* E0DC 800FFCDC 77DC030C */  jal        func_800F71DC
    /* E0E0 800FFCE0 21200000 */   addu      $a0, $zero, $zero
  .L800FFCE4:
    /* E0E4 800FFCE4 DADA030C */  jal        func_800F6B68
    /* E0E8 800FFCE8 00100424 */   addiu     $a0, $zero, 0x1000
    /* E0EC 800FFCEC 0DD9030C */  jal        func_800F6434
    /* E0F0 800FFCF0 02000424 */   addiu     $a0, $zero, 0x2
    /* E0F4 800FFCF4 2F004014 */  bnez       $v0, .L800FFDB4
    /* E0F8 800FFCF8 00000000 */   nop
    /* E0FC 800FFCFC DADA030C */  jal        func_800F6B68
    /* E100 800FFD00 03100424 */   addiu     $a0, $zero, 0x1003
    /* E104 800FFD04 0DD9030C */  jal        func_800F6434
    /* E108 800FFD08 80000424 */   addiu     $a0, $zero, 0x80
    /* E10C 800FFD0C 29004014 */  bnez       $v0, .L800FFDB4
    /* E110 800FFD10 00000000 */   nop
    /* E114 800FFD14 DADA030C */  jal        func_800F6B68
    /* E118 800FFD18 04100424 */   addiu     $a0, $zero, 0x1004
    /* E11C 800FFD1C 92D0030C */  jal        func_800F4248
    /* E120 800FFD20 40000424 */   addiu     $a0, $zero, 0x40
    /* E124 800FFD24 48D0030C */  jal        func_800F4120
    /* E128 800FFD28 02020424 */   addiu     $a0, $zero, 0x202
    /* E12C 800FFD2C 21004014 */  bnez       $v0, .L800FFDB4
    /* E130 800FFD30 00000000 */   nop
    /* E134 800FFD34 AFD8030C */  jal        func_800F62BC
    /* E138 800FFD38 C1000424 */   addiu     $a0, $zero, 0xC1
    /* E13C 800FFD3C 91E5030C */  jal        func_800F9644
    /* E140 800FFD40 20000424 */   addiu     $a0, $zero, 0x20
    /* E144 800FFD44 F8DA030C */  jal        func_800F6BE0
    /* E148 800FFD48 07100424 */   addiu     $a0, $zero, 0x1007
    /* E14C 800FFD4C 3BD9030C */  jal        func_800F64EC
    /* E150 800FFD50 02000424 */   addiu     $a0, $zero, 0x2
    /* E154 800FFD54 13004014 */  bnez       $v0, .L800FFDA4
    /* E158 800FFD58 00000000 */   nop
    /* E15C 800FFD5C 20D5030C */  jal        func_800F5480
    /* E160 800FFD60 00000000 */   nop
    /* E164 800FFD64 34E0030C */  jal        func_800F80D0
    /* E168 800FFD68 32000424 */   addiu     $a0, $zero, 0x32
    /* E16C 800FFD6C F7E1030C */  jal        func_800F87DC
    /* E170 800FFD70 07100424 */   addiu     $a0, $zero, 0x1007
    /* E174 800FFD74 F5D4030C */  jal        func_800F53D4
    /* E178 800FFD78 00000000 */   nop
    /* E17C 800FFD7C 05004014 */  bnez       $v0, .L800FFD94
    /* E180 800FFD80 00000000 */   nop
    /* E184 800FFD84 F0D4030C */  jal        func_800F53C0
    /* E188 800FFD88 00000000 */   nop
    /* E18C 800FFD8C 05004014 */  bnez       $v0, .L800FFDA4
    /* E190 800FFD90 00000000 */   nop
  .L800FFD94:
    /* E194 800FFD94 56D9030C */  jal        func_800F6558
    /* E198 800FFD98 01000424 */   addiu     $a0, $zero, 0x1
    /* E19C 800FFD9C F7E1030C */  jal        func_800F87DC
    /* E1A0 800FFDA0 07100424 */   addiu     $a0, $zero, 0x1007
  .L800FFDA4:
    /* E1A4 800FFDA4 56D9030C */  jal        func_800F6558
    /* E1A8 800FFDA8 21200000 */   addu      $a0, $zero, $zero
    /* E1AC 800FFDAC 98E5030C */  jal        func_800F9660
    /* E1B0 800FFDB0 20000424 */   addiu     $a0, $zero, 0x20
  .L800FFDB4:
    /* E1B4 800FFDB4 7E5F040C */  jal        func_80117DF8
    /* E1B8 800FFDB8 00000000 */   nop
    /* E1BC 800FFDBC 56D6030C */  jal        func_800F5958
    /* E1C0 800FFDC0 40010424 */   addiu     $a0, $zero, 0x140
    /* E1C4 800FFDC4 F5D4030C */  jal        func_800F53D4
    /* E1C8 800FFDC8 00000000 */   nop
    /* E1CC 800FFDCC C5FF4010 */  beqz       $v0, .L800FFCE4
    /* E1D0 800FFDD0 00000000 */   nop
  .L800FFDD4:
    /* E1D4 800FFDD4 8CD9030C */  jal        func_800F6630
    /* E1D8 800FFDD8 C1000424 */   addiu     $a0, $zero, 0xC1
    /* E1DC 800FFDDC 0DD9030C */  jal        func_800F6434
    /* E1E0 800FFDE0 02000424 */   addiu     $a0, $zero, 0x2
    /* E1E4 800FFDE4 05004014 */  bnez       $v0, .L800FFDFC
    /* E1E8 800FFDE8 00000000 */   nop
    /* E1EC 800FFDEC 53D9030C */  jal        func_800F654C
    /* E1F0 800FFDF0 7B000424 */   addiu     $a0, $zero, 0x7B
    /* E1F4 800FFDF4 01F6030C */  jal        func_800FD804
    /* E1F8 800FFDF8 00000000 */   nop
  .L800FFDFC:
    /* E1FC 800FFDFC 1000BF8F */  lw         $ra, 0x10($sp)
    /* E200 800FFE00 00000000 */  nop
    /* E204 800FFE04 0800E003 */  jr         $ra
    /* E208 800FFE08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FFCAC
