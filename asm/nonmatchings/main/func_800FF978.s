nonmatching func_800FF978, 0x164

glabel func_800FF978
    /* DD78 800FF978 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* DD7C 800FF97C 1000BFAF */  sw         $ra, 0x10($sp)
    /* DD80 800FF980 77DC030C */  jal        func_800F71DC
    /* DD84 800FF984 00420424 */   addiu     $a0, $zero, 0x4200
    /* DD88 800FF988 5BE3030C */  jal        func_800F8D6C
    /* DD8C 800FF98C 4C000424 */   addiu     $a0, $zero, 0x4C
    /* DD90 800FF990 77DC030C */  jal        func_800F71DC
    /* DD94 800FF994 00010424 */   addiu     $a0, $zero, 0x100
    /* DD98 800FF998 5BE3030C */  jal        func_800F8D6C
    /* DD9C 800FF99C 4E000424 */   addiu     $a0, $zero, 0x4E
    /* DDA0 800FF9A0 77DC030C */  jal        func_800F71DC
    /* DDA4 800FF9A4 80C60434 */   ori       $a0, $zero, 0xC680
    /* DDA8 800FF9A8 5BE3030C */  jal        func_800F8D6C
    /* DDAC 800FF9AC 4A000424 */   addiu     $a0, $zero, 0x4A
    /* DDB0 800FF9B0 53D9030C */  jal        func_800F654C
    /* DDB4 800FF9B4 1B000424 */   addiu     $a0, $zero, 0x1B
    /* DDB8 800FF9B8 93E0030C */  jal        func_800F824C
    /* DDBC 800FF9BC 49000424 */   addiu     $a0, $zero, 0x49
    /* DDC0 800FF9C0 16C1050C */  jal        func_80170458
    /* DDC4 800FF9C4 00000000 */   nop
    /* DDC8 800FF9C8 77DC030C */  jal        func_800F71DC
    /* DDCC 800FF9CC 00430424 */   addiu     $a0, $zero, 0x4300
    /* DDD0 800FF9D0 5BE3030C */  jal        func_800F8D6C
    /* DDD4 800FF9D4 4C000424 */   addiu     $a0, $zero, 0x4C
    /* DDD8 800FF9D8 77DC030C */  jal        func_800F71DC
    /* DDDC 800FF9DC 001D0424 */   addiu     $a0, $zero, 0x1D00
    /* DDE0 800FF9E0 5BE3030C */  jal        func_800F8D6C
    /* DDE4 800FF9E4 4E000424 */   addiu     $a0, $zero, 0x4E
    /* DDE8 800FF9E8 77DC030C */  jal        func_800F71DC
    /* DDEC 800FF9EC 00800434 */   ori       $a0, $zero, 0x8000
    /* DDF0 800FF9F0 5BE3030C */  jal        func_800F8D6C
    /* DDF4 800FF9F4 4A000424 */   addiu     $a0, $zero, 0x4A
    /* DDF8 800FF9F8 53D9030C */  jal        func_800F654C
    /* DDFC 800FF9FC 1C000424 */   addiu     $a0, $zero, 0x1C
    /* DE00 800FFA00 93E0030C */  jal        func_800F824C
    /* DE04 800FFA04 49000424 */   addiu     $a0, $zero, 0x49
    /* DE08 800FFA08 16C1050C */  jal        func_80170458
    /* DE0C 800FFA0C 00000000 */   nop
    /* DE10 800FFA10 40DD030C */  jal        func_800F7500
    /* DE14 800FFA14 21200000 */   addu      $a0, $zero, $zero
    /* DE18 800FFA18 77DC030C */  jal        func_800F71DC
    /* DE1C 800FFA1C 21200000 */   addu      $a0, $zero, $zero
  .L800FFA20:
    /* DE20 800FFA20 0D00043C */  lui        $a0, (0xD8040 >> 16)
  .L800FFA24:
    /* DE24 800FFA24 1ADB030C */  jal        func_800F6C68
    /* DE28 800FFA28 40808434 */   ori       $a0, $a0, (0xD8040 & 0xFFFF)
    /* DE2C 800FFA2C 58E2030C */  jal        func_800F8960
    /* DE30 800FFA30 5B0E0424 */   addiu     $a0, $zero, 0xE5B
    /* DE34 800FFA34 D9D8030C */  jal        func_800F6364
    /* DE38 800FFA38 00000000 */   nop
    /* DE3C 800FFA3C EFD8030C */  jal        func_800F63BC
    /* DE40 800FFA40 00000000 */   nop
    /* DE44 800FFA44 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* DE48 800FFA48 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* DE4C 800FFA4C 00004390 */  lbu        $v1, 0x0($v0)
    /* DE50 800FFA50 0F000424 */  addiu      $a0, $zero, 0xF
    /* DE54 800FFA54 92D0030C */  jal        func_800F4248
    /* DE58 800FFA58 0000A3A0 */   sb        $v1, 0x0($a1)
    /* DE5C 800FFA5C 48D0030C */  jal        func_800F4120
    /* DE60 800FFA60 02020424 */   addiu     $a0, $zero, 0x202
    /* DE64 800FFA64 EEFF4014 */  bnez       $v0, .L800FFA20
    /* DE68 800FFA68 00000000 */   nop
  .L800FFA6C:
    /* DE6C 800FFA6C 53D9030C */  jal        func_800F654C
    /* DE70 800FFA70 21200000 */   addu      $a0, $zero, $zero
    /* DE74 800FFA74 58E2030C */  jal        func_800F8960
    /* DE78 800FFA78 5B0E0424 */   addiu     $a0, $zero, 0xE5B
    /* DE7C 800FFA7C EFD8030C */  jal        func_800F63BC
    /* DE80 800FFA80 00000000 */   nop
    /* DE84 800FFA84 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* DE88 800FFA88 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* DE8C 800FFA8C 00004390 */  lbu        $v1, 0x0($v0)
    /* DE90 800FFA90 0F000424 */  addiu      $a0, $zero, 0xF
    /* DE94 800FFA94 92D0030C */  jal        func_800F4248
    /* DE98 800FFA98 0000A3A0 */   sb        $v1, 0x0($a1)
    /* DE9C 800FFA9C 48D0030C */  jal        func_800F4120
    /* DEA0 800FFAA0 02020424 */   addiu     $a0, $zero, 0x202
    /* DEA4 800FFAA4 F1FF4014 */  bnez       $v0, .L800FFA6C
    /* DEA8 800FFAA8 00000000 */   nop
    /* DEAC 800FFAAC A4D6030C */  jal        func_800F5A90
    /* DEB0 800FFAB0 80000424 */   addiu     $a0, $zero, 0x80
    /* DEB4 800FFAB4 F5D4030C */  jal        func_800F53D4
    /* DEB8 800FFAB8 00000000 */   nop
    /* DEBC 800FFABC D9FF4010 */  beqz       $v0, .L800FFA24
    /* DEC0 800FFAC0 0D00043C */   lui       $a0, (0xD8040 >> 16)
    /* DEC4 800FFAC4 D2D0050C */  jal        func_80174348
    /* DEC8 800FFAC8 00000000 */   nop
    /* DECC 800FFACC 1000BF8F */  lw         $ra, 0x10($sp)
    /* DED0 800FFAD0 00000000 */  nop
    /* DED4 800FFAD4 0800E003 */  jr         $ra
    /* DED8 800FFAD8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FF978
