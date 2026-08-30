nonmatching func_8013BD04, 0x2F8

glabel func_8013BD04
    /* 4A104 8013BD04 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4A108 8013BD08 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4A10C 8013BD0C 65DD030C */  jal        func_800F7594
    /* 4A110 8013BD10 41000424 */   addiu     $a0, $zero, 0x41
    /* 4A114 8013BD14 53D9030C */  jal        func_800F654C
    /* 4A118 8013BD18 08000424 */   addiu     $a0, $zero, 0x8
    /* 4A11C 8013BD1C 93E0030C */  jal        func_800F824C
    /* 4A120 8013BD20 48000424 */   addiu     $a0, $zero, 0x48
  .L8013BD24:
    /* 4A124 8013BD24 5CDB030C */  jal        func_800F6D70
    /* 4A128 8013BD28 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 4A12C 8013BD2C 0DD9030C */  jal        func_800F6434
    /* 4A130 8013BD30 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A134 8013BD34 3B004014 */  bnez       $v0, .L8013BE24
    /* 4A138 8013BD38 00000000 */   nop
    /* 4A13C 8013BD3C 53D9030C */  jal        func_800F654C
    /* 4A140 8013BD40 30000424 */   addiu     $a0, $zero, 0x30
    /* 4A144 8013BD44 93E0030C */  jal        func_800F824C
    /* 4A148 8013BD48 45000424 */   addiu     $a0, $zero, 0x45
    /* 4A14C 8013BD4C 9CDC030C */  jal        func_800F7270
    /* 4A150 8013BD50 41000424 */   addiu     $a0, $zero, 0x41
  .L8013BD54:
    /* 4A154 8013BD54 5CDB030C */  jal        func_800F6D70
    /* 4A158 8013BD58 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 4A15C 8013BD5C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4A160 8013BD60 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4A164 8013BD64 00000000 */  nop
    /* 4A168 8013BD68 00004494 */  lhu        $a0, 0x0($v0)
    /* 4A16C 8013BD6C C1CE030C */  jal        func_800F3B04
    /* 4A170 8013BD70 40148424 */   addiu     $a0, $a0, 0x1440
    /* 4A174 8013BD74 35D5030C */  jal        func_800F54D4
    /* 4A178 8013BD78 21204000 */   addu      $a0, $v0, $zero
    /* 4A17C 8013BD7C F5D4030C */  jal        func_800F53D4
    /* 4A180 8013BD80 00000000 */   nop
    /* 4A184 8013BD84 1D004010 */  beqz       $v0, .L8013BDFC
    /* 4A188 8013BD88 00000000 */   nop
    /* 4A18C 8013BD8C 5CDB030C */  jal        func_800F6D70
    /* 4A190 8013BD90 29FF0434 */   ori       $a0, $zero, 0xFF29
    /* 4A194 8013BD94 04D5030C */  jal        func_800F5410
    /* 4A198 8013BD98 00000000 */   nop
    /* 4A19C 8013BD9C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4A1A0 8013BDA0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4A1A4 8013BDA4 00000000 */  nop
    /* 4A1A8 8013BDA8 00004494 */  lhu        $a0, 0x0($v0)
    /* 4A1AC 8013BDAC C1CE030C */  jal        func_800F3B04
    /* 4A1B0 8013BDB0 41148424 */   addiu     $a0, $a0, 0x1441
    /* 4A1B4 8013BDB4 CECF030C */  jal        func_800F3F38
    /* 4A1B8 8013BDB8 21204000 */   addu      $a0, $v0, $zero
    /* 4A1BC 8013BDBC 5DD5030C */  jal        func_800F5574
    /* 4A1C0 8013BDC0 64000424 */   addiu     $a0, $zero, 0x64
    /* 4A1C4 8013BDC4 F0D4030C */  jal        func_800F53C0
    /* 4A1C8 8013BDC8 00000000 */   nop
    /* 4A1CC 8013BDCC 0B004014 */  bnez       $v0, .L8013BDFC
    /* 4A1D0 8013BDD0 00000000 */   nop
    /* 4A1D4 8013BDD4 DAE1030C */  jal        func_800F8768
    /* 4A1D8 8013BDD8 41140424 */   addiu     $a0, $zero, 0x1441
    /* 4A1DC 8013BDDC 53D9030C */  jal        func_800F654C
    /* 4A1E0 8013BDE0 21200000 */   addu      $a0, $zero, $zero
    /* 4A1E4 8013BDE4 58E2030C */  jal        func_800F8960
    /* 4A1E8 8013BDE8 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 4A1EC 8013BDEC 58E2030C */  jal        func_800F8960
    /* 4A1F0 8013BDF0 29FF0434 */   ori       $a0, $zero, 0xFF29
    /* 4A1F4 8013BDF4 89EF0408 */  j          .L8013BE24
    /* 4A1F8 8013BDF8 00000000 */   nop
  .L8013BDFC:
    /* 4A1FC 8013BDFC D9D8030C */  jal        func_800F6364
    /* 4A200 8013BE00 00000000 */   nop
    /* 4A204 8013BE04 D9D8030C */  jal        func_800F6364
    /* 4A208 8013BE08 00000000 */   nop
    /* 4A20C 8013BE0C 68D7030C */  jal        func_800F5DA0
    /* 4A210 8013BE10 45000424 */   addiu     $a0, $zero, 0x45
    /* 4A214 8013BE14 E3D6030C */  jal        func_800F5B8C
    /* 4A218 8013BE18 02020424 */   addiu     $a0, $zero, 0x202
    /* 4A21C 8013BE1C CDFF4014 */  bnez       $v0, .L8013BD54
    /* 4A220 8013BE20 00000000 */   nop
  .L8013BE24:
    /* 4A224 8013BE24 EFD8030C */  jal        func_800F63BC
    /* 4A228 8013BE28 00000000 */   nop
    /* 4A22C 8013BE2C EFD8030C */  jal        func_800F63BC
    /* 4A230 8013BE30 00000000 */   nop
    /* 4A234 8013BE34 68D7030C */  jal        func_800F5DA0
    /* 4A238 8013BE38 48000424 */   addiu     $a0, $zero, 0x48
    /* 4A23C 8013BE3C E3D6030C */  jal        func_800F5B8C
    /* 4A240 8013BE40 02020424 */   addiu     $a0, $zero, 0x202
    /* 4A244 8013BE44 B7FF4014 */  bnez       $v0, .L8013BD24
    /* 4A248 8013BE48 00000000 */   nop
    /* 4A24C 8013BE4C 53D9030C */  jal        func_800F654C
    /* 4A250 8013BE50 08000424 */   addiu     $a0, $zero, 0x8
    /* 4A254 8013BE54 93E0030C */  jal        func_800F824C
    /* 4A258 8013BE58 45000424 */   addiu     $a0, $zero, 0x45
    /* 4A25C 8013BE5C 65DD030C */  jal        func_800F7594
    /* 4A260 8013BE60 41000424 */   addiu     $a0, $zero, 0x41
  .L8013BE64:
    /* 4A264 8013BE64 5CDB030C */  jal        func_800F6D70
    /* 4A268 8013BE68 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 4A26C 8013BE6C 0DD9030C */  jal        func_800F6434
    /* 4A270 8013BE70 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A274 8013BE74 1B004014 */  bnez       $v0, .L8013BEE4
    /* 4A278 8013BE78 00000000 */   nop
    /* 4A27C 8013BE7C 53D9030C */  jal        func_800F654C
    /* 4A280 8013BE80 21200000 */   addu      $a0, $zero, $zero
    /* 4A284 8013BE84 E7E4030C */  jal        func_800F939C
    /* 4A288 8013BE88 00000000 */   nop
    /* 4A28C 8013BE8C 52D2040C */  jal        func_80134948
    /* 4A290 8013BE90 00000000 */   nop
    /* 4A294 8013BE94 83E5030C */  jal        func_800F960C
    /* 4A298 8013BE98 00000000 */   nop
    /* 4A29C 8013BE9C 5DD5030C */  jal        func_800F5574
    /* 4A2A0 8013BEA0 21200000 */   addu      $a0, $zero, $zero
    /* 4A2A4 8013BEA4 F5D4030C */  jal        func_800F53D4
    /* 4A2A8 8013BEA8 00000000 */   nop
    /* 4A2AC 8013BEAC 0D004010 */  beqz       $v0, .L8013BEE4
    /* 4A2B0 8013BEB0 00000000 */   nop
    /* 4A2B4 8013BEB4 91E5030C */  jal        func_800F9644
    /* 4A2B8 8013BEB8 20000424 */   addiu     $a0, $zero, 0x20
    /* 4A2BC 8013BEBC 7ADB030C */  jal        func_800F6DE8
    /* 4A2C0 8013BEC0 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 4A2C4 8013BEC4 F7E1030C */  jal        func_800F87DC
    /* 4A2C8 8013BEC8 40140424 */   addiu     $a0, $zero, 0x1440
    /* 4A2CC 8013BECC 96D9030C */  jal        func_800F6658
    /* 4A2D0 8013BED0 41000424 */   addiu     $a0, $zero, 0x41
    /* 4A2D4 8013BED4 75E2030C */  jal        func_800F89D4
    /* 4A2D8 8013BED8 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 4A2DC 8013BEDC 98E5030C */  jal        func_800F9660
    /* 4A2E0 8013BEE0 20000424 */   addiu     $a0, $zero, 0x20
  .L8013BEE4:
    /* 4A2E4 8013BEE4 EFD8030C */  jal        func_800F63BC
    /* 4A2E8 8013BEE8 00000000 */   nop
    /* 4A2EC 8013BEEC EFD8030C */  jal        func_800F63BC
    /* 4A2F0 8013BEF0 00000000 */   nop
    /* 4A2F4 8013BEF4 68D7030C */  jal        func_800F5DA0
    /* 4A2F8 8013BEF8 45000424 */   addiu     $a0, $zero, 0x45
    /* 4A2FC 8013BEFC E3D6030C */  jal        func_800F5B8C
    /* 4A300 8013BF00 02020424 */   addiu     $a0, $zero, 0x202
    /* 4A304 8013BF04 D7FF4014 */  bnez       $v0, .L8013BE64
    /* 4A308 8013BF08 00000000 */   nop
    /* 4A30C 8013BF0C 40DD030C */  jal        func_800F7500
    /* 4A310 8013BF10 08000424 */   addiu     $a0, $zero, 0x8
    /* 4A314 8013BF14 9CDC030C */  jal        func_800F7270
    /* 4A318 8013BF18 41000424 */   addiu     $a0, $zero, 0x41
    /* 4A31C 8013BF1C 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 4A320 8013BF20 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 4A324 8013BF24 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 4A328 8013BF28 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 4A32C 8013BF2C 00004390 */  lbu        $v1, 0x0($v0)
    /* 4A330 8013BF30 00000000 */  nop
    /* 4A334 8013BF34 000083A0 */  sb         $v1, 0x0($a0)
  .L8013BF38:
    /* 4A338 8013BF38 04D5030C */  jal        func_800F5410
    /* 4A33C 8013BF3C 00000000 */   nop
    /* 4A340 8013BF40 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4A344 8013BF44 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4A348 8013BF48 00000000 */  nop
    /* 4A34C 8013BF4C 00004394 */  lhu        $v1, 0x0($v0)
    /* 4A350 8013BF50 29FF0434 */  ori        $a0, $zero, 0xFF29
    /* 4A354 8013BF54 C1CE030C */  jal        func_800F3B04
    /* 4A358 8013BF58 21206400 */   addu      $a0, $v1, $a0
    /* 4A35C 8013BF5C CECF030C */  jal        func_800F3F38
    /* 4A360 8013BF60 21204000 */   addu      $a0, $v0, $zero
    /* 4A364 8013BF64 D9D8030C */  jal        func_800F6364
    /* 4A368 8013BF68 00000000 */   nop
    /* 4A36C 8013BF6C D9D8030C */  jal        func_800F6364
    /* 4A370 8013BF70 00000000 */   nop
    /* 4A374 8013BF74 A8D7030C */  jal        func_800F5EA0
    /* 4A378 8013BF78 00000000 */   nop
    /* 4A37C 8013BF7C 19D7030C */  jal        func_800F5C64
    /* 4A380 8013BF80 02020424 */   addiu     $a0, $zero, 0x202
    /* 4A384 8013BF84 ECFF4014 */  bnez       $v0, .L8013BF38
    /* 4A388 8013BF88 00000000 */   nop
    /* 4A38C 8013BF8C 2DF1040C */  jal        func_8013C4B4
    /* 4A390 8013BF90 00000000 */   nop
    /* 4A394 8013BF94 5DD5030C */  jal        func_800F5574
    /* 4A398 8013BF98 21200000 */   addu      $a0, $zero, $zero
    /* 4A39C 8013BF9C F5D4030C */  jal        func_800F53D4
    /* 4A3A0 8013BFA0 00000000 */   nop
    /* 4A3A4 8013BFA4 0F004010 */  beqz       $v0, .L8013BFE4
    /* 4A3A8 8013BFA8 00000000 */   nop
    /* 4A3AC 8013BFAC AFD8030C */  jal        func_800F62BC
    /* 4A3B0 8013BFB0 60000424 */   addiu     $a0, $zero, 0x60
    /* 4A3B4 8013BFB4 13F1040C */  jal        func_8013C44C
    /* 4A3B8 8013BFB8 00000000 */   nop
    /* 4A3BC 8013BFBC A17D040C */  jal        func_8011F684
    /* 4A3C0 8013BFC0 00000000 */   nop
    /* 4A3C4 8013BFC4 2B84040C */  jal        func_801210AC
    /* 4A3C8 8013BFC8 00000000 */   nop
    /* 4A3CC 8013BFCC FC98040C */  jal        func_801263F0
    /* 4A3D0 8013BFD0 00000000 */   nop
    /* 4A3D4 8013BFD4 D07F040C */  jal        func_8011FF40
    /* 4A3D8 8013BFD8 00000000 */   nop
    /* 4A3DC 8013BFDC FBEF0408 */  j          .L8013BFEC
    /* 4A3E0 8013BFE0 00000000 */   nop
  .L8013BFE4:
    /* 4A3E4 8013BFE4 FFEF040C */  jal        func_8013BFFC
    /* 4A3E8 8013BFE8 00000000 */   nop
  .L8013BFEC:
    /* 4A3EC 8013BFEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4A3F0 8013BFF0 00000000 */  nop
    /* 4A3F4 8013BFF4 0800E003 */  jr         $ra
    /* 4A3F8 8013BFF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013BD04
