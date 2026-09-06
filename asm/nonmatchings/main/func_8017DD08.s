nonmatching func_8017DD08, 0x218

glabel func_8017DD08
    /* 8C108 8017DD08 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 8C10C 8017DD0C 2000BEAF */  sw         $fp, 0x20($sp)
    /* 8C110 8017DD10 21F08000 */  addu       $fp, $a0, $zero
    /* 8C114 8017DD14 1C00B7AF */  sw         $s7, 0x1C($sp)
    /* 8C118 8017DD18 1800B6AF */  sw         $s6, 0x18($sp)
    /* 8C11C 8017DD1C 1400B5AF */  sw         $s5, 0x14($sp)
    /* 8C120 8017DD20 1000B4AF */  sw         $s4, 0x10($sp)
    /* 8C124 8017DD24 0C00B3AF */  sw         $s3, 0xC($sp)
    /* 8C128 8017DD28 0800B2AF */  sw         $s2, 0x8($sp)
    /* 8C12C 8017DD2C 0400B1AF */  sw         $s1, 0x4($sp)
    /* 8C130 8017DD30 0000B0AF */  sw         $s0, 0x0($sp)
    /* 8C134 8017DD34 0400C78C */  lw         $a3, 0x4($a2)
    /* 8C138 8017DD38 00000000 */  nop
    /* 8C13C 8017DD3C 0600E294 */  lhu        $v0, 0x6($a3)
    /* 8C140 8017DD40 0A00E384 */  lh         $v1, 0xA($a3)
    /* 8C144 8017DD44 00140200 */  sll        $v0, $v0, 16
    /* 8C148 8017DD48 C3C40200 */  sra        $t8, $v0, 19
    /* 8C14C 8017DD4C 03140200 */  sra        $v0, $v0, 16
    /* 8C150 8017DD50 21104300 */  addu       $v0, $v0, $v1
    /* 8C154 8017DD54 10005024 */  addiu      $s0, $v0, 0x10
    /* 8C158 8017DD58 F900022A */  slti       $v0, $s0, 0xF9
    /* 8C15C 8017DD5C 02004014 */  bnez       $v0, .L8017DD68
    /* 8C160 8017DD60 21B8A000 */   addu      $s7, $a1, $zero
    /* 8C164 8017DD64 F8001024 */  addiu      $s0, $zero, 0xF8
  .L8017DD68:
    /* 8C168 8017DD68 C3801000 */  sra        $s0, $s0, 3
    /* 8C16C 8017DD6C 0200E284 */  lh         $v0, 0x2($a3)
    /* 8C170 8017DD70 40191800 */  sll        $v1, $t8, 5
    /* 8C174 8017DD74 80100200 */  sll        $v0, $v0, 2
    /* 8C178 8017DD78 E0034630 */  andi       $a2, $v0, 0x3E0
    /* 8C17C 8017DD7C 0000E294 */  lhu        $v0, 0x0($a3)
    /* 8C180 8017DD80 2130C300 */  addu       $a2, $a2, $v1
    /* 8C184 8017DD84 00140200 */  sll        $v0, $v0, 16
    /* 8C188 8017DD88 C31C0200 */  sra        $v1, $v0, 19
    /* 8C18C 8017DD8C 1F007430 */  andi       $s4, $v1, 0x1F
    /* 8C190 8017DD90 03160200 */  sra        $v0, $v0, 24
    /* 8C194 8017DD94 2A181003 */  slt        $v1, $t8, $s0
    /* 8C198 8017DD98 56006010 */  beqz       $v1, .L8017DEF4
    /* 8C19C 8017DD9C 01005330 */   andi      $s3, $v0, 0x1
  .L8017DDA0:
    /* 8C1A0 8017DDA0 21588002 */  addu       $t3, $s4, $zero
    /* 8C1A4 8017DDA4 21700000 */  addu       $t6, $zero, $zero
    /* 8C1A8 8017DDA8 01001527 */  addiu      $s5, $t8, 0x1
    /* 8C1AC 8017DDAC 2000D624 */  addiu      $s6, $a2, 0x20
    /* 8C1B0 8017DDB0 E003C530 */  andi       $a1, $a2, 0x3E0
    /* 8C1B4 8017DDB4 2190A000 */  addu       $s2, $a1, $zero
    /* 8C1B8 8017DDB8 40C91800 */  sll        $t9, $t8, 5
    /* 8C1BC 8017DDBC 21103803 */  addu       $v0, $t9, $t8
    /* 8C1C0 8017DDC0 40880200 */  sll        $s1, $v0, 1
  .L8017DDC4:
    /* 8C1C4 8017DDC4 43110B00 */  sra        $v0, $t3, 5
    /* 8C1C8 8017DDC8 01004230 */  andi       $v0, $v0, 0x1
    /* 8C1CC 8017DDCC 21206202 */  addu       $a0, $s3, $v0
    /* 8C1D0 8017DDD0 01008430 */  andi       $a0, $a0, 0x1
    /* 8C1D4 8017DDD4 C0220400 */  sll        $a0, $a0, 11
    /* 8C1D8 8017DDD8 2120E402 */  addu       $a0, $s7, $a0
    /* 8C1DC 8017DDDC 1F006231 */  andi       $v0, $t3, 0x1F
    /* 8C1E0 8017DDE0 25105200 */  or         $v0, $v0, $s2
    /* 8C1E4 8017DDE4 40100200 */  sll        $v0, $v0, 1
    /* 8C1E8 8017DDE8 21208200 */  addu       $a0, $a0, $v0
    /* 8C1EC 8017DDEC 1D80023C */  lui        $v0, %hi(D_801D5570)
    /* 8C1F0 8017DDF0 70554224 */  addiu      $v0, $v0, %lo(D_801D5570)
    /* 8C1F4 8017DDF4 23188200 */  subu       $v1, $a0, $v0
    /* 8C1F8 8017DDF8 1F006330 */  andi       $v1, $v1, 0x1F
    /* 8C1FC 8017DDFC 1E006014 */  bnez       $v1, .L8017DE78
    /* 8C200 8017DE00 00000000 */   nop
    /* 8C204 8017DE04 21680000 */  addu       $t5, $zero, $zero
    /* 8C208 8017DE08 2148D103 */  addu       $t1, $fp, $s1
    /* 8C20C 8017DE0C 40400E00 */  sll        $t0, $t6, 1
    /* 8C210 8017DE10 08000C24 */  addiu      $t4, $zero, 0x8
    /* 8C214 8017DE14 1A80063C */  lui        $a2, %hi(D_8019F4A8)
    /* 8C218 8017DE18 A8F4C624 */  addiu      $a2, $a2, %lo(D_8019F4A8)
    /* 8C21C 8017DE1C 21500000 */  addu       $t2, $zero, $zero
    /* 8C220 8017DE20 1A800F3C */  lui        $t7, %hi(D_8019F628)
  .L8017DE24:
    /* 8C224 8017DE24 0000C28C */  lw         $v0, 0x0($a2)
    /* 8C228 8017DE28 00000000 */  nop
    /* 8C22C 8017DE2C 04004414 */  bne        $v0, $a0, .L8017DE40
    /* 8C230 8017DE30 28F6E725 */   addiu     $a3, $t7, %lo(D_8019F628)
    /* 8C234 8017DE34 21182801 */  addu       $v1, $t1, $t0
    /* 8C238 8017DE38 9EF70508 */  j          .L8017DE78
    /* 8C23C 8017DE3C 0800C3AC */   sw        $v1, 0x8($a2)
  .L8017DE40:
    /* 8C240 8017DE40 21104701 */  addu       $v0, $t2, $a3
    /* 8C244 8017DE44 0000438C */  lw         $v1, 0x0($v0)
    /* 8C248 8017DE48 00000000 */  nop
    /* 8C24C 8017DE4C 04006414 */  bne        $v1, $a0, .L8017DE60
    /* 8C250 8017DE50 21182801 */   addu      $v1, $t1, $t0
    /* 8C254 8017DE54 21108701 */  addu       $v0, $t4, $a3
    /* 8C258 8017DE58 9EF70508 */  j          .L8017DE78
    /* 8C25C 8017DE5C 000043AC */   sw        $v1, 0x0($v0)
  .L8017DE60:
    /* 8C260 8017DE60 0C008C25 */  addiu      $t4, $t4, 0xC
    /* 8C264 8017DE64 0C00C624 */  addiu      $a2, $a2, 0xC
    /* 8C268 8017DE68 0100AD25 */  addiu      $t5, $t5, 0x1
    /* 8C26C 8017DE6C 2000A229 */  slti       $v0, $t5, 0x20
    /* 8C270 8017DE70 ECFF4014 */  bnez       $v0, .L8017DE24
    /* 8C274 8017DE74 0C004A25 */   addiu     $t2, $t2, 0xC
  .L8017DE78:
    /* 8C278 8017DE78 0100CE25 */  addiu      $t6, $t6, 0x1
    /* 8C27C 8017DE7C 2100C229 */  slti       $v0, $t6, 0x21
    /* 8C280 8017DE80 D0FF4014 */  bnez       $v0, .L8017DDC4
    /* 8C284 8017DE84 01006B25 */   addiu     $t3, $t3, 0x1
    /* 8C288 8017DE88 21588002 */  addu       $t3, $s4, $zero
    /* 8C28C 8017DE8C 21700000 */  addu       $t6, $zero, $zero
    /* 8C290 8017DE90 2138A000 */  addu       $a3, $a1, $zero
    /* 8C294 8017DE94 21103803 */  addu       $v0, $t9, $t8
    /* 8C298 8017DE98 40100200 */  sll        $v0, $v0, 1
    /* 8C29C 8017DE9C 2130C203 */  addu       $a2, $fp, $v0
  .L8017DEA0:
    /* 8C2A0 8017DEA0 43110B00 */  sra        $v0, $t3, 5
    /* 8C2A4 8017DEA4 01004230 */  andi       $v0, $v0, 0x1
    /* 8C2A8 8017DEA8 21186202 */  addu       $v1, $s3, $v0
    /* 8C2AC 8017DEAC 01006330 */  andi       $v1, $v1, 0x1
    /* 8C2B0 8017DEB0 C01A0300 */  sll        $v1, $v1, 11
    /* 8C2B4 8017DEB4 2118E302 */  addu       $v1, $s7, $v1
    /* 8C2B8 8017DEB8 1F006231 */  andi       $v0, $t3, 0x1F
    /* 8C2BC 8017DEBC 25104700 */  or         $v0, $v0, $a3
    /* 8C2C0 8017DEC0 40100200 */  sll        $v0, $v0, 1
    /* 8C2C4 8017DEC4 21206200 */  addu       $a0, $v1, $v0
    /* 8C2C8 8017DEC8 0100CE25 */  addiu      $t6, $t6, 0x1
    /* 8C2CC 8017DECC 00008294 */  lhu        $v0, 0x0($a0)
    /* 8C2D0 8017DED0 01006B25 */  addiu      $t3, $t3, 0x1
    /* 8C2D4 8017DED4 0000C2A4 */  sh         $v0, 0x0($a2)
    /* 8C2D8 8017DED8 2100C229 */  slti       $v0, $t6, 0x21
    /* 8C2DC 8017DEDC F0FF4014 */  bnez       $v0, .L8017DEA0
    /* 8C2E0 8017DEE0 0200C624 */   addiu     $a2, $a2, 0x2
    /* 8C2E4 8017DEE4 21C0A002 */  addu       $t8, $s5, $zero
    /* 8C2E8 8017DEE8 2A101003 */  slt        $v0, $t8, $s0
    /* 8C2EC 8017DEEC ACFF4014 */  bnez       $v0, .L8017DDA0
    /* 8C2F0 8017DEF0 2130C002 */   addu      $a2, $s6, $zero
  .L8017DEF4:
    /* 8C2F4 8017DEF4 2000BE8F */  lw         $fp, 0x20($sp)
    /* 8C2F8 8017DEF8 1C00B78F */  lw         $s7, 0x1C($sp)
    /* 8C2FC 8017DEFC 1800B68F */  lw         $s6, 0x18($sp)
    /* 8C300 8017DF00 1400B58F */  lw         $s5, 0x14($sp)
    /* 8C304 8017DF04 1000B48F */  lw         $s4, 0x10($sp)
    /* 8C308 8017DF08 0C00B38F */  lw         $s3, 0xC($sp)
    /* 8C30C 8017DF0C 0800B28F */  lw         $s2, 0x8($sp)
    /* 8C310 8017DF10 0400B18F */  lw         $s1, 0x4($sp)
    /* 8C314 8017DF14 0000B08F */  lw         $s0, 0x0($sp)
    /* 8C318 8017DF18 0800E003 */  jr         $ra
    /* 8C31C 8017DF1C 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8017DD08
