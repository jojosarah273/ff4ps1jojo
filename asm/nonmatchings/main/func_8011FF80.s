nonmatching func_8011FF80, 0xF0

glabel func_8011FF80
    /* 2E380 8011FF80 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2E384 8011FF84 94008387 */  lh         $v1, %gp_rel(D_8019ED90)($gp)
    /* 2E388 8011FF88 01000224 */  addiu      $v0, $zero, 0x1
    /* 2E38C 8011FF8C 03006214 */  bne        $v1, $v0, .L8011FF9C
    /* 2E390 8011FF90 1000BFAF */   sw        $ra, 0x10($sp)
    /* 2E394 8011FF94 2BD8040C */  jal        func_801360AC
    /* 2E398 8011FF98 00000000 */   nop
  .L8011FF9C:
    /* 2E39C 8011FF9C 94008387 */  lh         $v1, %gp_rel(D_8019ED90)($gp)
    /* 2E3A0 8011FFA0 01000224 */  addiu      $v0, $zero, 0x1
    /* 2E3A4 8011FFA4 12006214 */  bne        $v1, $v0, .L8011FFF0
    /* 2E3A8 8011FFA8 00000000 */   nop
    /* 2E3AC 8011FFAC 3BD8040C */  jal        func_801360EC
    /* 2E3B0 8011FFB0 00000000 */   nop
    /* 2E3B4 8011FFB4 0E004104 */  bgez       $v0, .L8011FFF0
    /* 2E3B8 8011FFB8 02000224 */   addiu     $v0, $zero, 0x2
    /* 2E3BC 8011FFBC 940082A7 */  sh         $v0, %gp_rel(D_8019ED90)($gp)
    /* 2E3C0 8011FFC0 52D8040C */  jal        func_80136148
    /* 2E3C4 8011FFC4 00000000 */   nop
    /* 2E3C8 8011FFC8 12E5030C */  jal        func_800F9448
    /* 2E3CC 8011FFCC 00000000 */   nop
    /* 2E3D0 8011FFD0 83E5030C */  jal        func_800F960C
    /* 2E3D4 8011FFD4 00000000 */   nop
    /* 2E3D8 8011FFD8 68E5030C */  jal        func_800F95A0
    /* 2E3DC 8011FFDC 00000000 */   nop
    /* 2E3E0 8011FFE0 F7E4030C */  jal        func_800F93DC
    /* 2E3E4 8011FFE4 00000000 */   nop
    /* 2E3E8 8011FFE8 18800408 */  j          .L80120060
    /* 2E3EC 8011FFEC 00000000 */   nop
  .L8011FFF0:
    /* 2E3F0 8011FFF0 C87C040C */  jal        func_8011F320
    /* 2E3F4 8011FFF4 00000000 */   nop
    /* 2E3F8 8011FFF8 217E040C */  jal        func_8011F884
    /* 2E3FC 8011FFFC 00000000 */   nop
    /* 2E400 80120000 8CD9030C */  jal        func_800F6630
    /* 2E404 80120004 21200000 */   addu      $a0, $zero, $zero
    /* 2E408 80120008 0FCF030C */  jal        func_800F3C3C
    /* 2E40C 8012000C 01000424 */   addiu     $a0, $zero, 0x1
    /* 2E410 80120010 31DE030C */  jal        func_800F78C4
    /* 2E414 80120014 21204000 */   addu      $a0, $v0, $zero
    /* 2E418 80120018 46DE030C */  jal        func_800F7918
    /* 2E41C 8012001C 02000424 */   addiu     $a0, $zero, 0x2
    /* 2E420 80120020 DEFF4014 */  bnez       $v0, .L8011FF9C
    /* 2E424 80120024 00000000 */   nop
    /* 2E428 80120028 12E5030C */  jal        func_800F9448
    /* 2E42C 8012002C 00000000 */   nop
    /* 2E430 80120030 83E5030C */  jal        func_800F960C
    /* 2E434 80120034 00000000 */   nop
    /* 2E438 80120038 68E5030C */  jal        func_800F95A0
    /* 2E43C 8012003C 00000000 */   nop
    /* 2E440 80120040 F7E4030C */  jal        func_800F93DC
    /* 2E444 80120044 00000000 */   nop
    /* 2E448 80120048 94008387 */  lh         $v1, %gp_rel(D_8019ED90)($gp)
    /* 2E44C 8012004C 01000224 */  addiu      $v0, $zero, 0x1
    /* 2E450 80120050 03006214 */  bne        $v1, $v0, .L80120060
    /* 2E454 80120054 00000000 */   nop
    /* 2E458 80120058 52D8040C */  jal        func_80136148
    /* 2E45C 8012005C 00000000 */   nop
  .L80120060:
    /* 2E460 80120060 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2E464 80120064 00000000 */  nop
    /* 2E468 80120068 0800E003 */  jr         $ra
    /* 2E46C 8012006C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011FF80
