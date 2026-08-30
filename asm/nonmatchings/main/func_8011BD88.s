nonmatching func_8011BD88, 0x470

glabel func_8011BD88
    /* 2A188 8011BD88 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2A18C 8011BD8C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2A190 8011BD90 8CD9030C */  jal        func_800F6630
    /* 2A194 8011BD94 C9000424 */   addiu     $a0, $zero, 0xC9
    /* 2A198 8011BD98 0DD9030C */  jal        func_800F6434
    /* 2A19C 8011BD9C 02020424 */   addiu     $a0, $zero, 0x202
    /* 2A1A0 8011BDA0 11014014 */  bnez       $v0, .L8011C1E8
    /* 2A1A4 8011BDA4 00000000 */   nop
    /* 2A1A8 8011BDA8 59D9030C */  jal        func_800F6564
    /* 2A1AC 8011BDAC 00170424 */   addiu     $a0, $zero, 0x1700
    /* 2A1B0 8011BDB0 5DD5030C */  jal        func_800F5574
    /* 2A1B4 8011BDB4 03000424 */   addiu     $a0, $zero, 0x3
    /* 2A1B8 8011BDB8 F5D4030C */  jal        func_800F53D4
    /* 2A1BC 8011BDBC 00000000 */   nop
    /* 2A1C0 8011BDC0 09014010 */  beqz       $v0, .L8011C1E8
    /* 2A1C4 8011BDC4 00000000 */   nop
    /* 2A1C8 8011BDC8 59D9030C */  jal        func_800F6564
    /* 2A1CC 8011BDCC E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 2A1D0 8011BDD0 92D0030C */  jal        func_800F4248
    /* 2A1D4 8011BDD4 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 2A1D8 8011BDD8 48D0030C */  jal        func_800F4120
    /* 2A1DC 8011BDDC 02020424 */   addiu     $a0, $zero, 0x202
    /* 2A1E0 8011BDE0 01014010 */  beqz       $v0, .L8011C1E8
    /* 2A1E4 8011BDE4 00000000 */   nop
    /* 2A1E8 8011BDE8 59D9030C */  jal        func_800F6564
    /* 2A1EC 8011BDEC E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 2A1F0 8011BDF0 92D0030C */  jal        func_800F4248
    /* 2A1F4 8011BDF4 06000424 */   addiu     $a0, $zero, 0x6
    /* 2A1F8 8011BDF8 48D0030C */  jal        func_800F4120
    /* 2A1FC 8011BDFC 02020424 */   addiu     $a0, $zero, 0x202
    /* 2A200 8011BE00 77004014 */  bnez       $v0, .L8011BFE0
    /* 2A204 8011BE04 00000000 */   nop
    /* 2A208 8011BE08 59D9030C */  jal        func_800F6564
    /* 2A20C 8011BE0C E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 2A210 8011BE10 92D0030C */  jal        func_800F4248
    /* 2A214 8011BE14 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 2A218 8011BE18 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 2A21C 8011BE1C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 2A220 8011BE20 00000000 */  nop
    /* 2A224 8011BE24 00006290 */  lbu        $v0, 0x0($v1)
    /* 2A228 8011BE28 00000000 */  nop
    /* 2A22C 8011BE2C 82110200 */  srl        $v0, $v0, 6
    /* 2A230 8011BE30 000062A0 */  sb         $v0, 0x0($v1)
    /* 2A234 8011BE34 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 2A238 8011BE38 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 2A23C 8011BE3C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2A240 8011BE40 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2A244 8011BE44 00008294 */  lhu        $v0, 0x0($a0)
    /* 2A248 8011BE48 7A000424 */  addiu      $a0, $zero, 0x7A
    /* 2A24C 8011BE4C 8CD9030C */  jal        func_800F6630
    /* 2A250 8011BE50 000062A4 */   sh        $v0, 0x0($v1)
    /* 2A254 8011BE54 1A80043C */  lui        $a0, %hi(D_801992EC)
    /* 2A258 8011BE58 EC928424 */  addiu      $a0, $a0, %lo(D_801992EC)
    /* 2A25C 8011BE5C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2A260 8011BE60 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2A264 8011BE64 1A80063C */  lui        $a2, %hi(D_8019ED40)
    /* 2A268 8011BE68 40EDC68C */  lw         $a2, %lo(D_8019ED40)($a2)
    /* 2A26C 8011BE6C 00006294 */  lhu        $v0, 0x0($v1)
    /* 2A270 8011BE70 0000C390 */  lbu        $v1, 0x0($a2)
    /* 2A274 8011BE74 21104400 */  addu       $v0, $v0, $a0
    /* 2A278 8011BE78 00004590 */  lbu        $a1, 0x0($v0)
    /* 2A27C 8011BE7C 02020424 */  addiu      $a0, $zero, 0x202
    /* 2A280 8011BE80 24186500 */  and        $v1, $v1, $a1
    /* 2A284 8011BE84 48D0030C */  jal        func_800F4120
    /* 2A288 8011BE88 0000C3A0 */   sb        $v1, 0x0($a2)
    /* 2A28C 8011BE8C 38004014 */  bnez       $v0, .L8011BF70
    /* 2A290 8011BE90 00000000 */   nop
    /* 2A294 8011BE94 59D9030C */  jal        func_800F6564
    /* 2A298 8011BE98 E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 2A29C 8011BE9C 92D0030C */  jal        func_800F4248
    /* 2A2A0 8011BEA0 30000424 */   addiu     $a0, $zero, 0x30
    /* 2A2A4 8011BEA4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 2A2A8 8011BEA8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 2A2AC 8011BEAC 00000000 */  nop
    /* 2A2B0 8011BEB0 00006290 */  lbu        $v0, 0x0($v1)
    /* 2A2B4 8011BEB4 00000000 */  nop
    /* 2A2B8 8011BEB8 C2100200 */  srl        $v0, $v0, 3
    /* 2A2BC 8011BEBC 000062A0 */  sb         $v0, 0x0($v1)
    /* 2A2C0 8011BEC0 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 2A2C4 8011BEC4 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 2A2C8 8011BEC8 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2A2CC 8011BECC 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2A2D0 8011BED0 00008294 */  lhu        $v0, 0x0($a0)
    /* 2A2D4 8011BED4 20000424 */  addiu      $a0, $zero, 0x20
    /* 2A2D8 8011BED8 91E5030C */  jal        func_800F9644
    /* 2A2DC 8011BEDC 000062A4 */   sh        $v0, 0x0($v1)
    /* 2A2E0 8011BEE0 96D9030C */  jal        func_800F6658
    /* 2A2E4 8011BEE4 66000424 */   addiu     $a0, $zero, 0x66
    /* 2A2E8 8011BEE8 04D5030C */  jal        func_800F5410
    /* 2A2EC 8011BEEC 00000000 */   nop
    /* 2A2F0 8011BEF0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 2A2F4 8011BEF4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 2A2F8 8011BEF8 1A80023C */  lui        $v0, %hi(D_801992F0)
    /* 2A2FC 8011BEFC 00008394 */  lhu        $v1, 0x0($a0)
    /* 2A300 8011BF00 F0924224 */  addiu      $v0, $v0, %lo(D_801992F0)
    /* 2A304 8011BF04 21286200 */  addu       $a1, $v1, $v0
    /* 2A308 8011BF08 2118A000 */  addu       $v1, $a1, $zero
    /* 2A30C 8011BF0C 01006490 */  lbu        $a0, 0x1($v1)
    /* 2A310 8011BF10 0000A290 */  lbu        $v0, 0x0($a1)
    /* 2A314 8011BF14 00220400 */  sll        $a0, $a0, 8
    /* 2A318 8011BF18 19D0030C */  jal        func_800F4064
    /* 2A31C 8011BF1C 25204400 */   or        $a0, $v0, $a0
    /* 2A320 8011BF20 9DE0030C */  jal        func_800F8274
    /* 2A324 8011BF24 66000424 */   addiu     $a0, $zero, 0x66
    /* 2A328 8011BF28 96D9030C */  jal        func_800F6658
    /* 2A32C 8011BF2C 68000424 */   addiu     $a0, $zero, 0x68
    /* 2A330 8011BF30 04D5030C */  jal        func_800F5410
    /* 2A334 8011BF34 00000000 */   nop
    /* 2A338 8011BF38 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 2A33C 8011BF3C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 2A340 8011BF40 1A80023C */  lui        $v0, %hi(D_801992F8)
    /* 2A344 8011BF44 00008394 */  lhu        $v1, 0x0($a0)
    /* 2A348 8011BF48 F8924224 */  addiu      $v0, $v0, %lo(D_801992F8)
    /* 2A34C 8011BF4C 21286200 */  addu       $a1, $v1, $v0
    /* 2A350 8011BF50 2118A000 */  addu       $v1, $a1, $zero
    /* 2A354 8011BF54 01006490 */  lbu        $a0, 0x1($v1)
    /* 2A358 8011BF58 0000A290 */  lbu        $v0, 0x0($a1)
    /* 2A35C 8011BF5C 00220400 */  sll        $a0, $a0, 8
    /* 2A360 8011BF60 19D0030C */  jal        func_800F4064
    /* 2A364 8011BF64 25204400 */   or        $a0, $v0, $a0
    /* 2A368 8011BF68 9DE0030C */  jal        func_800F8274
    /* 2A36C 8011BF6C 68000424 */   addiu     $a0, $zero, 0x68
  .L8011BF70:
    /* 2A370 8011BF70 91E5030C */  jal        func_800F9644
    /* 2A374 8011BF74 20000424 */   addiu     $a0, $zero, 0x20
    /* 2A378 8011BF78 96D9030C */  jal        func_800F6658
    /* 2A37C 8011BF7C 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 2A380 8011BF80 04D5030C */  jal        func_800F5410
    /* 2A384 8011BF84 00000000 */   nop
    /* 2A388 8011BF88 0FCF030C */  jal        func_800F3C3C
    /* 2A38C 8011BF8C 66000424 */   addiu     $a0, $zero, 0x66
    /* 2A390 8011BF90 E5CF030C */  jal        func_800F3F94
    /* 2A394 8011BF94 21204000 */   addu      $a0, $v0, $zero
    /* 2A398 8011BF98 9DE0030C */  jal        func_800F8274
    /* 2A39C 8011BF9C 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 2A3A0 8011BFA0 96D9030C */  jal        func_800F6658
    /* 2A3A4 8011BFA4 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 2A3A8 8011BFA8 04D5030C */  jal        func_800F5410
    /* 2A3AC 8011BFAC 00000000 */   nop
    /* 2A3B0 8011BFB0 0FCF030C */  jal        func_800F3C3C
    /* 2A3B4 8011BFB4 68000424 */   addiu     $a0, $zero, 0x68
    /* 2A3B8 8011BFB8 E5CF030C */  jal        func_800F3F94
    /* 2A3BC 8011BFBC 21204000 */   addu      $a0, $v0, $zero
    /* 2A3C0 8011BFC0 9DE0030C */  jal        func_800F8274
    /* 2A3C4 8011BFC4 60000424 */   addiu     $a0, $zero, 0x60
    /* 2A3C8 8011BFC8 56D9030C */  jal        func_800F6558
    /* 2A3CC 8011BFCC 21200000 */   addu      $a0, $zero, $zero
    /* 2A3D0 8011BFD0 98E5030C */  jal        func_800F9660
    /* 2A3D4 8011BFD4 20000424 */   addiu     $a0, $zero, 0x20
    /* 2A3D8 8011BFD8 7A700408 */  j          .L8011C1E8
    /* 2A3DC 8011BFDC 00000000 */   nop
  .L8011BFE0:
    /* 2A3E0 8011BFE0 59D9030C */  jal        func_800F6564
    /* 2A3E4 8011BFE4 E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 2A3E8 8011BFE8 92D0030C */  jal        func_800F4248
    /* 2A3EC 8011BFEC 04000424 */   addiu     $a0, $zero, 0x4
    /* 2A3F0 8011BFF0 48D0030C */  jal        func_800F4120
    /* 2A3F4 8011BFF4 02000424 */   addiu     $a0, $zero, 0x2
    /* 2A3F8 8011BFF8 3B004014 */  bnez       $v0, .L8011C0E8
    /* 2A3FC 8011BFFC 00000000 */   nop
    /* 2A400 8011C000 9CDC030C */  jal        func_800F7270
    /* 2A404 8011C004 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 2A408 8011C008 5BE3030C */  jal        func_800F8D6C
    /* 2A40C 8011C00C 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 2A410 8011C010 59D9030C */  jal        func_800F6564
    /* 2A414 8011C014 E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 2A418 8011C018 92D0030C */  jal        func_800F4248
    /* 2A41C 8011C01C C0000424 */   addiu     $a0, $zero, 0xC0
    /* 2A420 8011C020 5DD5030C */  jal        func_800F5574
    /* 2A424 8011C024 80000424 */   addiu     $a0, $zero, 0x80
    /* 2A428 8011C028 F5D4030C */  jal        func_800F53D4
    /* 2A42C 8011C02C 00000000 */   nop
    /* 2A430 8011C030 1D004014 */  bnez       $v0, .L8011C0A8
    /* 2A434 8011C034 00000000 */   nop
    /* 2A438 8011C038 5DD5030C */  jal        func_800F5574
    /* 2A43C 8011C03C 40000424 */   addiu     $a0, $zero, 0x40
    /* 2A440 8011C040 F5D4030C */  jal        func_800F53D4
    /* 2A444 8011C044 00000000 */   nop
    /* 2A448 8011C048 0D004014 */  bnez       $v0, .L8011C080
    /* 2A44C 8011C04C 00000000 */   nop
    /* 2A450 8011C050 0FCF030C */  jal        func_800F3C3C
    /* 2A454 8011C054 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 2A458 8011C058 CAD3030C */  jal        func_800F4F28
    /* 2A45C 8011C05C 21204000 */   addu      $a0, $v0, $zero
    /* 2A460 8011C060 D3D3030C */  jal        func_800F4F4C
    /* 2A464 8011C064 00000000 */   nop
    /* 2A468 8011C068 0FCF030C */  jal        func_800F3C3C
    /* 2A46C 8011C06C 5F000424 */   addiu     $a0, $zero, 0x5F
    /* 2A470 8011C070 90DE030C */  jal        func_800F7A40
    /* 2A474 8011C074 21204000 */   addu      $a0, $v0, $zero
    /* 2A478 8011C078 2A700408 */  j          .L8011C0A8
    /* 2A47C 8011C07C 00000000 */   nop
  .L8011C080:
    /* 2A480 8011C080 0FCF030C */  jal        func_800F3C3C
    /* 2A484 8011C084 5F000424 */   addiu     $a0, $zero, 0x5F
    /* 2A488 8011C088 AFDD030C */  jal        func_800F76BC
    /* 2A48C 8011C08C 21204000 */   addu      $a0, $v0, $zero
    /* 2A490 8011C090 BADD030C */  jal        func_800F76E8
    /* 2A494 8011C094 00000000 */   nop
    /* 2A498 8011C098 0FCF030C */  jal        func_800F3C3C
    /* 2A49C 8011C09C 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 2A4A0 8011C0A0 32DF030C */  jal        func_800F7CC8
    /* 2A4A4 8011C0A4 21204000 */   addu      $a0, $v0, $zero
  .L8011C0A8:
    /* 2A4A8 8011C0A8 59D9030C */  jal        func_800F6564
    /* 2A4AC 8011C0AC E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 2A4B0 8011C0B0 92D0030C */  jal        func_800F4248
    /* 2A4B4 8011C0B4 06000424 */   addiu     $a0, $zero, 0x6
    /* 2A4B8 8011C0B8 5DD5030C */  jal        func_800F5574
    /* 2A4BC 8011C0BC 04000424 */   addiu     $a0, $zero, 0x4
    /* 2A4C0 8011C0C0 F5D4030C */  jal        func_800F53D4
    /* 2A4C4 8011C0C4 00000000 */   nop
    /* 2A4C8 8011C0C8 07004010 */  beqz       $v0, .L8011C0E8
    /* 2A4CC 8011C0CC 00000000 */   nop
    /* 2A4D0 8011C0D0 77DC030C */  jal        func_800F71DC
    /* 2A4D4 8011C0D4 21200000 */   addu      $a0, $zero, $zero
    /* 2A4D8 8011C0D8 5BE3030C */  jal        func_800F8D6C
    /* 2A4DC 8011C0DC 60000424 */   addiu     $a0, $zero, 0x60
    /* 2A4E0 8011C0E0 7A700408 */  j          .L8011C1E8
    /* 2A4E4 8011C0E4 00000000 */   nop
  .L8011C0E8:
    /* 2A4E8 8011C0E8 59D9030C */  jal        func_800F6564
    /* 2A4EC 8011C0EC E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 2A4F0 8011C0F0 92D0030C */  jal        func_800F4248
    /* 2A4F4 8011C0F4 02000424 */   addiu     $a0, $zero, 0x2
    /* 2A4F8 8011C0F8 48D0030C */  jal        func_800F4120
    /* 2A4FC 8011C0FC 02000424 */   addiu     $a0, $zero, 0x2
    /* 2A500 8011C100 39004014 */  bnez       $v0, .L8011C1E8
    /* 2A504 8011C104 00000000 */   nop
    /* 2A508 8011C108 9CDC030C */  jal        func_800F7270
    /* 2A50C 8011C10C 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 2A510 8011C110 5BE3030C */  jal        func_800F8D6C
    /* 2A514 8011C114 60000424 */   addiu     $a0, $zero, 0x60
    /* 2A518 8011C118 59D9030C */  jal        func_800F6564
    /* 2A51C 8011C11C E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 2A520 8011C120 92D0030C */  jal        func_800F4248
    /* 2A524 8011C124 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 2A528 8011C128 5DD5030C */  jal        func_800F5574
    /* 2A52C 8011C12C 80000424 */   addiu     $a0, $zero, 0x80
    /* 2A530 8011C130 F5D4030C */  jal        func_800F53D4
    /* 2A534 8011C134 00000000 */   nop
    /* 2A538 8011C138 1D004014 */  bnez       $v0, .L8011C1B0
    /* 2A53C 8011C13C 00000000 */   nop
    /* 2A540 8011C140 5DD5030C */  jal        func_800F5574
    /* 2A544 8011C144 40000424 */   addiu     $a0, $zero, 0x40
    /* 2A548 8011C148 F5D4030C */  jal        func_800F53D4
    /* 2A54C 8011C14C 00000000 */   nop
    /* 2A550 8011C150 0D004014 */  bnez       $v0, .L8011C188
    /* 2A554 8011C154 00000000 */   nop
    /* 2A558 8011C158 0FCF030C */  jal        func_800F3C3C
    /* 2A55C 8011C15C 60000424 */   addiu     $a0, $zero, 0x60
    /* 2A560 8011C160 CAD3030C */  jal        func_800F4F28
    /* 2A564 8011C164 21204000 */   addu      $a0, $v0, $zero
    /* 2A568 8011C168 D3D3030C */  jal        func_800F4F4C
    /* 2A56C 8011C16C 00000000 */   nop
    /* 2A570 8011C170 0FCF030C */  jal        func_800F3C3C
    /* 2A574 8011C174 61000424 */   addiu     $a0, $zero, 0x61
    /* 2A578 8011C178 90DE030C */  jal        func_800F7A40
    /* 2A57C 8011C17C 21204000 */   addu      $a0, $v0, $zero
    /* 2A580 8011C180 6C700408 */  j          .L8011C1B0
    /* 2A584 8011C184 00000000 */   nop
  .L8011C188:
    /* 2A588 8011C188 0FCF030C */  jal        func_800F3C3C
    /* 2A58C 8011C18C 61000424 */   addiu     $a0, $zero, 0x61
    /* 2A590 8011C190 AFDD030C */  jal        func_800F76BC
    /* 2A594 8011C194 21204000 */   addu      $a0, $v0, $zero
    /* 2A598 8011C198 BADD030C */  jal        func_800F76E8
    /* 2A59C 8011C19C 00000000 */   nop
    /* 2A5A0 8011C1A0 0FCF030C */  jal        func_800F3C3C
    /* 2A5A4 8011C1A4 60000424 */   addiu     $a0, $zero, 0x60
    /* 2A5A8 8011C1A8 32DF030C */  jal        func_800F7CC8
    /* 2A5AC 8011C1AC 21204000 */   addu      $a0, $v0, $zero
  .L8011C1B0:
    /* 2A5B0 8011C1B0 59D9030C */  jal        func_800F6564
    /* 2A5B4 8011C1B4 E40F0424 */   addiu     $a0, $zero, 0xFE4
    /* 2A5B8 8011C1B8 92D0030C */  jal        func_800F4248
    /* 2A5BC 8011C1BC 06000424 */   addiu     $a0, $zero, 0x6
    /* 2A5C0 8011C1C0 5DD5030C */  jal        func_800F5574
    /* 2A5C4 8011C1C4 02000424 */   addiu     $a0, $zero, 0x2
    /* 2A5C8 8011C1C8 F5D4030C */  jal        func_800F53D4
    /* 2A5CC 8011C1CC 00000000 */   nop
    /* 2A5D0 8011C1D0 05004010 */  beqz       $v0, .L8011C1E8
    /* 2A5D4 8011C1D4 00000000 */   nop
    /* 2A5D8 8011C1D8 77DC030C */  jal        func_800F71DC
    /* 2A5DC 8011C1DC 21200000 */   addu      $a0, $zero, $zero
    /* 2A5E0 8011C1E0 5BE3030C */  jal        func_800F8D6C
    /* 2A5E4 8011C1E4 5E000424 */   addiu     $a0, $zero, 0x5E
  .L8011C1E8:
    /* 2A5E8 8011C1E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2A5EC 8011C1EC 00000000 */  nop
    /* 2A5F0 8011C1F0 0800E003 */  jr         $ra
    /* 2A5F4 8011C1F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011BD88
