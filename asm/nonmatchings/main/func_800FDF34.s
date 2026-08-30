nonmatching func_800FDF34, 0xF4

glabel func_800FDF34
    /* C334 800FDF34 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* C338 800FDF38 80000424 */  addiu      $a0, $zero, 0x80
    /* C33C 800FDF3C 1400BFAF */  sw         $ra, 0x14($sp)
    /* C340 800FDF40 53D9030C */  jal        func_800F654C
    /* C344 800FDF44 1000B0AF */   sw        $s0, 0x10($sp)
    /* C348 800FDF48 62E0030C */  jal        func_800F8188
    /* C34C 800FDF4C 15210424 */   addiu     $a0, $zero, 0x2115
    /* C350 800FDF50 8CD9030C */  jal        func_800F6630
    /* C354 800FDF54 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C358 800FDF58 19DE030C */  jal        func_800F7864
    /* C35C 800FDF5C 1A80103C */   lui       $s0, %hi(D_80198AA4)
    /* C360 800FDF60 92D0030C */  jal        func_800F4248
    /* C364 800FDF64 0F000424 */   addiu     $a0, $zero, 0xF
    /* C368 800FDF68 A4E5030C */  jal        func_800F9690
    /* C36C 800FDF6C A48A1026 */   addiu     $s0, $s0, %lo(D_80198AA4)
    /* C370 800FDF70 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* C374 800FDF74 00000000 */  nop
    /* C378 800FDF78 00006294 */  lhu        $v0, 0x0($v1)
    /* C37C 800FDF7C 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* C380 800FDF80 21105000 */  addu       $v0, $v0, $s0
    /* C384 800FDF84 00004390 */  lbu        $v1, 0x0($v0)
    /* C388 800FDF88 A4E5030C */  jal        func_800F9690
    /* C38C 800FDF8C 000083A0 */   sb        $v1, 0x0($a0)
    /* C390 800FDF90 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* C394 800FDF94 00000000 */  nop
    /* C398 800FDF98 00004490 */  lbu        $a0, 0x0($v0)
    /* C39C 800FDF9C A7F6030C */  jal        func_800FDA9C
    /* C3A0 800FDFA0 00388434 */   ori       $a0, $a0, 0x3800
    /* C3A4 800FDFA4 8CD9030C */  jal        func_800F6630
    /* C3A8 800FDFA8 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C3AC 800FDFAC 19DE030C */  jal        func_800F7864
    /* C3B0 800FDFB0 00000000 */   nop
    /* C3B4 800FDFB4 92D0030C */  jal        func_800F4248
    /* C3B8 800FDFB8 0F000424 */   addiu     $a0, $zero, 0xF
    /* C3BC 800FDFBC A4E5030C */  jal        func_800F9690
    /* C3C0 800FDFC0 00000000 */   nop
    /* C3C4 800FDFC4 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* C3C8 800FDFC8 00000000 */  nop
    /* C3CC 800FDFCC 00006294 */  lhu        $v0, 0x0($v1)
    /* C3D0 800FDFD0 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* C3D4 800FDFD4 21105000 */  addu       $v0, $v0, $s0
    /* C3D8 800FDFD8 00004390 */  lbu        $v1, 0x0($v0)
    /* C3DC 800FDFDC 04D5030C */  jal        func_800F5410
    /* C3E0 800FDFE0 000083A0 */   sb        $v1, 0x0($a0)
    /* C3E4 800FDFE4 02D0030C */  jal        func_800F4008
    /* C3E8 800FDFE8 40000424 */   addiu     $a0, $zero, 0x40
    /* C3EC 800FDFEC A4E5030C */  jal        func_800F9690
    /* C3F0 800FDFF0 00000000 */   nop
    /* C3F4 800FDFF4 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* C3F8 800FDFF8 00000000 */  nop
    /* C3FC 800FDFFC 00004490 */  lbu        $a0, 0x0($v0)
    /* C400 800FE000 A7F6030C */  jal        func_800FDA9C
    /* C404 800FE004 00388434 */   ori       $a0, $a0, 0x3800
    /* C408 800FE008 9B08060C */  jal        func_8018226C
    /* C40C 800FE00C 00380424 */   addiu     $a0, $zero, 0x3800
    /* C410 800FE010 AFD8030C */  jal        func_800F62BC
    /* C414 800FE014 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C418 800FE018 1400BF8F */  lw         $ra, 0x14($sp)
    /* C41C 800FE01C 1000B08F */  lw         $s0, 0x10($sp)
    /* C420 800FE020 0800E003 */  jr         $ra
    /* C424 800FE024 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FDF34
