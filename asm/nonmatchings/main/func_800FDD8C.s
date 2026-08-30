nonmatching func_800FDD8C, 0x1A8

glabel func_800FDD8C
    /* C18C 800FDD8C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* C190 800FDD90 1000BFAF */  sw         $ra, 0x10($sp)
    /* C194 800FDD94 8CD9030C */  jal        func_800F6630
    /* C198 800FDD98 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C19C 800FDD9C 92D0030C */  jal        func_800F4248
    /* C1A0 800FDDA0 01000424 */   addiu     $a0, $zero, 0x1
    /* C1A4 800FDDA4 48D0030C */  jal        func_800F4120
    /* C1A8 800FDDA8 02000424 */   addiu     $a0, $zero, 0x2
    /* C1AC 800FDDAC 5D004010 */  beqz       $v0, .L800FDF24
    /* C1B0 800FDDB0 00000000 */   nop
    /* C1B4 800FDDB4 8CD9030C */  jal        func_800F6630
    /* C1B8 800FDDB8 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C1BC 800FDDBC 19DE030C */  jal        func_800F7864
    /* C1C0 800FDDC0 00000000 */   nop
    /* C1C4 800FDDC4 92D0030C */  jal        func_800F4248
    /* C1C8 800FDDC8 0F000424 */   addiu     $a0, $zero, 0xF
    /* C1CC 800FDDCC A4E5030C */  jal        func_800F9690
    /* C1D0 800FDDD0 00000000 */   nop
    /* C1D4 800FDDD4 1A80023C */  lui        $v0, %hi(D_80198AA4)
    /* C1D8 800FDDD8 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* C1DC 800FDDDC A48A4224 */  addiu      $v0, $v0, %lo(D_80198AA4)
    /* C1E0 800FDDE0 00008394 */  lhu        $v1, 0x0($a0)
    /* C1E4 800FDDE4 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* C1E8 800FDDE8 21186200 */  addu       $v1, $v1, $v0
    /* C1EC 800FDDEC 00006290 */  lbu        $v0, 0x0($v1)
    /* C1F0 800FDDF0 00000000 */  nop
    /* C1F4 800FDDF4 000082A0 */  sb         $v0, 0x0($a0)
    /* C1F8 800FDDF8 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* C1FC 800FDDFC 00000000 */  nop
    /* C200 800FDE00 00006290 */  lbu        $v0, 0x0($v1)
    /* C204 800FDE04 00000000 */  nop
    /* C208 800FDE08 07004234 */  ori        $v0, $v0, 0x7
    /* C20C 800FDE0C A4E5030C */  jal        func_800F9690
    /* C210 800FDE10 000062A0 */   sb        $v0, 0x0($v1)
    /* C214 800FDE14 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* C218 800FDE18 1ADB030C */  jal        func_800F6C68
    /* C21C 800FDE1C 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
    /* C220 800FDE20 93E0030C */  jal        func_800F824C
    /* C224 800FDE24 06000424 */   addiu     $a0, $zero, 0x6
    /* C228 800FDE28 40DD030C */  jal        func_800F7500
    /* C22C 800FDE2C 07000424 */   addiu     $a0, $zero, 0x7
  .L800FDE30:
    /* C230 800FDE30 7F00043C */  lui        $a0, (0x7F57FF >> 16)
    /* C234 800FDE34 1ADB030C */  jal        func_800F6C68
    /* C238 800FDE38 FF578434 */   ori       $a0, $a0, (0x7F57FF & 0xFFFF)
    /* C23C 800FDE3C 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* C240 800FDE40 17E2030C */  jal        func_800F885C
    /* C244 800FDE44 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
    /* C248 800FDE48 92D7030C */  jal        func_800F5E48
    /* C24C 800FDE4C 00000000 */   nop
    /* C250 800FDE50 A8D7030C */  jal        func_800F5EA0
    /* C254 800FDE54 00000000 */   nop
    /* C258 800FDE58 19D7030C */  jal        func_800F5C64
    /* C25C 800FDE5C 02020424 */   addiu     $a0, $zero, 0x202
    /* C260 800FDE60 F3FF4014 */  bnez       $v0, .L800FDE30
    /* C264 800FDE64 00000000 */   nop
    /* C268 800FDE68 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* C26C 800FDE6C 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* C270 800FDE70 00004390 */  lbu        $v1, 0x0($v0)
    /* C274 800FDE74 F8000424 */  addiu      $a0, $zero, 0xF8
    /* C278 800FDE78 92D0030C */  jal        func_800F4248
    /* C27C 800FDE7C 0000A3A0 */   sb        $v1, 0x0($a1)
    /* C280 800FDE80 04D5030C */  jal        func_800F5410
    /* C284 800FDE84 00000000 */   nop
    /* C288 800FDE88 02D0030C */  jal        func_800F4008
    /* C28C 800FDE8C 47000424 */   addiu     $a0, $zero, 0x47
    /* C290 800FDE90 A4E5030C */  jal        func_800F9690
    /* C294 800FDE94 00000000 */   nop
    /* C298 800FDE98 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* C29C 800FDE9C 1ADB030C */  jal        func_800F6C68
    /* C2A0 800FDEA0 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
    /* C2A4 800FDEA4 7F00043C */  lui        $a0, (0x7F57B9 >> 16)
    /* C2A8 800FDEA8 17E2030C */  jal        func_800F885C
    /* C2AC 800FDEAC B9578434 */   ori       $a0, $a0, (0x7F57B9 & 0xFFFF)
    /* C2B0 800FDEB0 40DD030C */  jal        func_800F7500
    /* C2B4 800FDEB4 07000424 */   addiu     $a0, $zero, 0x7
  .L800FDEB8:
    /* C2B8 800FDEB8 7F00043C */  lui        $a0, (0x7F57FF >> 16)
    /* C2BC 800FDEBC 1ADB030C */  jal        func_800F6C68
    /* C2C0 800FDEC0 FF578434 */   ori       $a0, $a0, (0x7F57FF & 0xFFFF)
    /* C2C4 800FDEC4 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* C2C8 800FDEC8 17E2030C */  jal        func_800F885C
    /* C2CC 800FDECC 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
    /* C2D0 800FDED0 92D7030C */  jal        func_800F5E48
    /* C2D4 800FDED4 00000000 */   nop
    /* C2D8 800FDED8 A8D7030C */  jal        func_800F5EA0
    /* C2DC 800FDEDC 00000000 */   nop
    /* C2E0 800FDEE0 19D7030C */  jal        func_800F5C64
    /* C2E4 800FDEE4 02020424 */   addiu     $a0, $zero, 0x202
    /* C2E8 800FDEE8 F3FF4014 */  bnez       $v0, .L800FDEB8
    /* C2EC 800FDEEC 00000000 */   nop
    /* C2F0 800FDEF0 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* C2F4 800FDEF4 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* C2F8 800FDEF8 00004390 */  lbu        $v1, 0x0($v0)
    /* C2FC 800FDEFC F8000424 */  addiu      $a0, $zero, 0xF8
    /* C300 800FDF00 92D0030C */  jal        func_800F4248
    /* C304 800FDF04 0000A3A0 */   sb        $v1, 0x0($a1)
    /* C308 800FDF08 A4E5030C */  jal        func_800F9690
    /* C30C 800FDF0C 00000000 */   nop
    /* C310 800FDF10 8CD9030C */  jal        func_800F6630
    /* C314 800FDF14 06000424 */   addiu     $a0, $zero, 0x6
    /* C318 800FDF18 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* C31C 800FDF1C 17E2030C */  jal        func_800F885C
    /* C320 800FDF20 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
  .L800FDF24:
    /* C324 800FDF24 1000BF8F */  lw         $ra, 0x10($sp)
    /* C328 800FDF28 00000000 */  nop
    /* C32C 800FDF2C 0800E003 */  jr         $ra
    /* C330 800FDF30 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FDD8C
