nonmatching func_80140224, 0xEC

glabel func_80140224
    /* 4E624 80140224 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4E628 80140228 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4E62C 8014022C 63D9030C */  jal        func_800F658C
    /* 4E630 80140230 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4E634 80140234 9DE0030C */  jal        func_800F8274
    /* 4E638 80140238 21200000 */   addu      $a0, $zero, $zero
    /* 4E63C 8014023C C7E5030C */  jal        func_800F971C
    /* 4E640 80140240 00000000 */   nop
    /* 4E644 80140244 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4E648 80140248 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4E64C 8014024C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4E650 80140250 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4E654 80140254 00004394 */  lhu        $v1, 0x0($v0)
    /* 4E658 80140258 00000000 */  nop
    /* 4E65C 8014025C 000083A4 */  sh         $v1, 0x0($a0)
  .L80140260:
    /* 4E660 80140260 96D9030C */  jal        func_800F6658
    /* 4E664 80140264 21200000 */   addu      $a0, $zero, $zero
    /* 4E668 80140268 F7E1030C */  jal        func_800F87DC
    /* 4E66C 8014026C 12760424 */   addiu     $a0, $zero, 0x7612
    /* 4E670 80140270 F7E1030C */  jal        func_800F87DC
    /* 4E674 80140274 9E760424 */   addiu     $a0, $zero, 0x769E
    /* 4E678 80140278 F7E1030C */  jal        func_800F87DC
    /* 4E67C 8014027C 2A770424 */   addiu     $a0, $zero, 0x772A
    /* 4E680 80140280 F7E1030C */  jal        func_800F87DC
    /* 4E684 80140284 B6770424 */   addiu     $a0, $zero, 0x77B6
    /* 4E688 80140288 96D9030C */  jal        func_800F6658
    /* 4E68C 8014028C 02000424 */   addiu     $a0, $zero, 0x2
    /* 4E690 80140290 F7E1030C */  jal        func_800F87DC
    /* 4E694 80140294 14760424 */   addiu     $a0, $zero, 0x7614
    /* 4E698 80140298 F7E1030C */  jal        func_800F87DC
    /* 4E69C 8014029C A0760424 */   addiu     $a0, $zero, 0x76A0
    /* 4E6A0 801402A0 F7E1030C */  jal        func_800F87DC
    /* 4E6A4 801402A4 2C770424 */   addiu     $a0, $zero, 0x772C
    /* 4E6A8 801402A8 F7E1030C */  jal        func_800F87DC
    /* 4E6AC 801402AC B8770424 */   addiu     $a0, $zero, 0x77B8
    /* 4E6B0 801402B0 D9D8030C */  jal        func_800F6364
    /* 4E6B4 801402B4 00000000 */   nop
    /* 4E6B8 801402B8 D9D8030C */  jal        func_800F6364
    /* 4E6BC 801402BC 00000000 */   nop
    /* 4E6C0 801402C0 D9D8030C */  jal        func_800F6364
    /* 4E6C4 801402C4 00000000 */   nop
    /* 4E6C8 801402C8 D9D8030C */  jal        func_800F6364
    /* 4E6CC 801402CC 00000000 */   nop
    /* 4E6D0 801402D0 56D6030C */  jal        func_800F5958
    /* 4E6D4 801402D4 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 4E6D8 801402D8 F5D4030C */  jal        func_800F53D4
    /* 4E6DC 801402DC 00000000 */   nop
    /* 4E6E0 801402E0 DFFF4010 */  beqz       $v0, .L80140260
    /* 4E6E4 801402E4 00000000 */   nop
    /* 4E6E8 801402E8 C7E5030C */  jal        func_800F971C
    /* 4E6EC 801402EC 00000000 */   nop
    /* 4E6F0 801402F0 98E5030C */  jal        func_800F9660
    /* 4E6F4 801402F4 20000424 */   addiu     $a0, $zero, 0x20
    /* 4E6F8 801402F8 68E5030C */  jal        func_800F95A0
    /* 4E6FC 801402FC 00000000 */   nop
    /* 4E700 80140300 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4E704 80140304 00000000 */  nop
    /* 4E708 80140308 0800E003 */  jr         $ra
    /* 4E70C 8014030C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140224
