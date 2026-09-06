nonmatching func_800FEF7C, 0xA8

glabel func_800FEF7C
    /* D37C 800FEF7C 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* D380 800FEF80 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* D384 800FEF84 1000BFAF */  sw         $ra, 0x10($sp)
    /* D388 800FEF88 00006290 */  lbu        $v0, 0x0($v1)
    /* D38C 800FEF8C 00000000 */  nop
    /* D390 800FEF90 04004230 */  andi       $v0, $v0, 0x4
    /* D394 800FEF94 1F004014 */  bnez       $v0, .L800FF014
    /* D398 800FEF98 01000224 */   addiu     $v0, $zero, 0x1
    /* D39C 800FEF9C 0D80033C */  lui        $v1, %hi(D_800D0207)
    /* D3A0 800FEFA0 07026390 */  lbu        $v1, %lo(D_800D0207)($v1)
    /* D3A4 800FEFA4 00000000 */  nop
    /* D3A8 800FEFA8 12006210 */  beq        $v1, $v0, .L800FEFF4
    /* D3AC 800FEFAC 02006228 */   slti      $v0, $v1, 0x2
    /* D3B0 800FEFB0 05004010 */  beqz       $v0, .L800FEFC8
    /* D3B4 800FEFB4 00000000 */   nop
    /* D3B8 800FEFB8 08006010 */  beqz       $v1, .L800FEFDC
    /* D3BC 800FEFBC 00000000 */   nop
    /* D3C0 800FEFC0 05FC0308 */  j          .L800FF014
    /* D3C4 800FEFC4 00000000 */   nop
  .L800FEFC8:
    /* D3C8 800FEFC8 02000224 */  addiu      $v0, $zero, 0x2
    /* D3CC 800FEFCC 0F006210 */  beq        $v1, $v0, .L800FF00C
    /* D3D0 800FEFD0 00000000 */   nop
    /* D3D4 800FEFD4 05FC0308 */  j          .L800FF014
    /* D3D8 800FEFD8 00000000 */   nop
  .L800FEFDC:
    /* D3DC 800FEFDC 8DFB030C */  jal        func_800FEE34
    /* D3E0 800FEFE0 00000000 */   nop
    /* D3E4 800FEFE4 8DFB030C */  jal        func_800FEE34
    /* D3E8 800FEFE8 00000000 */   nop
    /* D3EC 800FEFEC 05FC0308 */  j          .L800FF014
    /* D3F0 800FEFF0 00000000 */   nop
  .L800FEFF4:
    /* D3F4 800FEFF4 DAE3040C */  jal        func_80138F68
    /* D3F8 800FEFF8 00000000 */   nop
    /* D3FC 800FEFFC DAE3040C */  jal        func_80138F68
    /* D400 800FF000 00000000 */   nop
    /* D404 800FF004 05FC0308 */  j          .L800FF014
    /* D408 800FF008 00000000 */   nop
  .L800FF00C:
    /* D40C 800FF00C 56CF010C */  jal        func_80073D58
    /* D410 800FF010 00000000 */   nop
  .L800FF014:
    /* D414 800FF014 1000BF8F */  lw         $ra, 0x10($sp)
    /* D418 800FF018 00000000 */  nop
    /* D41C 800FF01C 0800E003 */  jr         $ra
    /* D420 800FF020 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FEF7C
