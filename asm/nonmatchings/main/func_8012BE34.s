nonmatching func_8012BE34, 0x274

glabel func_8012BE34
    /* 3A234 8012BE34 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3A238 8012BE38 1000BFAF */  sw         $ra, 0x10($sp)
  .L8012BE3C:
    /* 3A23C 8012BE3C 65B4040C */  jal        func_8012D194
    /* 3A240 8012BE40 00000000 */   nop
    /* 3A244 8012BE44 F5D4030C */  jal        func_800F53D4
    /* 3A248 8012BE48 00000000 */   nop
    /* 3A24C 8012BE4C 11004010 */  beqz       $v0, .L8012BE94
    /* 3A250 8012BE50 00000000 */   nop
    /* 3A254 8012BE54 59D9030C */  jal        func_800F6564
    /* 3A258 8012BE58 3E1B0424 */   addiu     $a0, $zero, 0x1B3E
    /* 3A25C 8012BE5C 7AD8030C */  jal        func_800F61E8
    /* 3A260 8012BE60 00000000 */   nop
    /* 3A264 8012BE64 5DD5030C */  jal        func_800F5574
    /* 3A268 8012BE68 05000424 */   addiu     $a0, $zero, 0x5
    /* 3A26C 8012BE6C F5D4030C */  jal        func_800F53D4
    /* 3A270 8012BE70 00000000 */   nop
    /* 3A274 8012BE74 03004010 */  beqz       $v0, .L8012BE84
    /* 3A278 8012BE78 00000000 */   nop
    /* 3A27C 8012BE7C 53D9030C */  jal        func_800F654C
    /* 3A280 8012BE80 21200000 */   addu      $a0, $zero, $zero
  .L8012BE84:
    /* 3A284 8012BE84 62E0030C */  jal        func_800F8188
    /* 3A288 8012BE88 3E1B0424 */   addiu     $a0, $zero, 0x1B3E
    /* 3A28C 8012BE8C 8FAF0408 */  j          .L8012BE3C
    /* 3A290 8012BE90 00000000 */   nop
  .L8012BE94:
    /* 3A294 8012BE94 59D9030C */  jal        func_800F6564
    /* 3A298 8012BE98 221B0424 */   addiu     $a0, $zero, 0x1B22
    /* 3A29C 8012BE9C 0DD9030C */  jal        func_800F6434
    /* 3A2A0 8012BEA0 02020424 */   addiu     $a0, $zero, 0x202
    /* 3A2A4 8012BEA4 05004014 */  bnez       $v0, .L8012BEBC
    /* 3A2A8 8012BEA8 00000000 */   nop
    /* 3A2AC 8012BEAC 53D9030C */  jal        func_800F654C
    /* 3A2B0 8012BEB0 70000424 */   addiu     $a0, $zero, 0x70
    /* 3A2B4 8012BEB4 B1AF0408 */  j          .L8012BEC4
    /* 3A2B8 8012BEB8 00000000 */   nop
  .L8012BEBC:
    /* 3A2BC 8012BEBC 53D9030C */  jal        func_800F654C
    /* 3A2C0 8012BEC0 08000424 */   addiu     $a0, $zero, 0x8
  .L8012BEC4:
    /* 3A2C4 8012BEC4 93E0030C */  jal        func_800F824C
    /* 3A2C8 8012BEC8 5D000424 */   addiu     $a0, $zero, 0x5D
  .L8012BECC:
    /* 3A2CC 8012BECC A17D040C */  jal        func_8011F684
    /* 3A2D0 8012BED0 00000000 */   nop
    /* 3A2D4 8012BED4 217E040C */  jal        func_8011F884
    /* 3A2D8 8012BED8 00000000 */   nop
    /* 3A2DC 8012BEDC 8CD9030C */  jal        func_800F6630
    /* 3A2E0 8012BEE0 01000424 */   addiu     $a0, $zero, 0x1
    /* 3A2E4 8012BEE4 92D0030C */  jal        func_800F4248
    /* 3A2E8 8012BEE8 08000424 */   addiu     $a0, $zero, 0x8
    /* 3A2EC 8012BEEC 48D0030C */  jal        func_800F4120
    /* 3A2F0 8012BEF0 02000424 */   addiu     $a0, $zero, 0x2
    /* 3A2F4 8012BEF4 13004014 */  bnez       $v0, .L8012BF44
    /* 3A2F8 8012BEF8 00000000 */   nop
  .L8012BEFC:
    /* 3A2FC 8012BEFC 59D9030C */  jal        func_800F6564
    /* 3A300 8012BF00 3E1B0424 */   addiu     $a0, $zero, 0x1B3E
    /* 3A304 8012BF04 33D7030C */  jal        func_800F5CCC
    /* 3A308 8012BF08 00000000 */   nop
    /* 3A30C 8012BF0C E3D6030C */  jal        func_800F5B8C
    /* 3A310 8012BF10 80800434 */   ori       $a0, $zero, 0x8080
    /* 3A314 8012BF14 03004014 */  bnez       $v0, .L8012BF24
    /* 3A318 8012BF18 00000000 */   nop
    /* 3A31C 8012BF1C 53D9030C */  jal        func_800F654C
    /* 3A320 8012BF20 04000424 */   addiu     $a0, $zero, 0x4
  .L8012BF24:
    /* 3A324 8012BF24 62E0030C */  jal        func_800F8188
    /* 3A328 8012BF28 3E1B0424 */   addiu     $a0, $zero, 0x1B3E
    /* 3A32C 8012BF2C 65B4040C */  jal        func_8012D194
    /* 3A330 8012BF30 00000000 */   nop
    /* 3A334 8012BF34 F5D4030C */  jal        func_800F53D4
    /* 3A338 8012BF38 00000000 */   nop
    /* 3A33C 8012BF3C EFFF4014 */  bnez       $v0, .L8012BEFC
    /* 3A340 8012BF40 00000000 */   nop
  .L8012BF44:
    /* 3A344 8012BF44 8CD9030C */  jal        func_800F6630
    /* 3A348 8012BF48 01000424 */   addiu     $a0, $zero, 0x1
    /* 3A34C 8012BF4C 92D0030C */  jal        func_800F4248
    /* 3A350 8012BF50 04000424 */   addiu     $a0, $zero, 0x4
    /* 3A354 8012BF54 48D0030C */  jal        func_800F4120
    /* 3A358 8012BF58 02000424 */   addiu     $a0, $zero, 0x2
    /* 3A35C 8012BF5C 15004014 */  bnez       $v0, .L8012BFB4
    /* 3A360 8012BF60 00000000 */   nop
  .L8012BF64:
    /* 3A364 8012BF64 59D9030C */  jal        func_800F6564
    /* 3A368 8012BF68 3E1B0424 */   addiu     $a0, $zero, 0x1B3E
    /* 3A36C 8012BF6C 7AD8030C */  jal        func_800F61E8
    /* 3A370 8012BF70 00000000 */   nop
    /* 3A374 8012BF74 5DD5030C */  jal        func_800F5574
    /* 3A378 8012BF78 05000424 */   addiu     $a0, $zero, 0x5
    /* 3A37C 8012BF7C F0D4030C */  jal        func_800F53C0
    /* 3A380 8012BF80 00000000 */   nop
    /* 3A384 8012BF84 03004010 */  beqz       $v0, .L8012BF94
    /* 3A388 8012BF88 00000000 */   nop
    /* 3A38C 8012BF8C 53D9030C */  jal        func_800F654C
    /* 3A390 8012BF90 21200000 */   addu      $a0, $zero, $zero
  .L8012BF94:
    /* 3A394 8012BF94 62E0030C */  jal        func_800F8188
    /* 3A398 8012BF98 3E1B0424 */   addiu     $a0, $zero, 0x1B3E
    /* 3A39C 8012BF9C 65B4040C */  jal        func_8012D194
    /* 3A3A0 8012BFA0 00000000 */   nop
    /* 3A3A4 8012BFA4 F5D4030C */  jal        func_800F53D4
    /* 3A3A8 8012BFA8 00000000 */   nop
    /* 3A3AC 8012BFAC EDFF4014 */  bnez       $v0, .L8012BF64
    /* 3A3B0 8012BFB0 00000000 */   nop
  .L8012BFB4:
    /* 3A3B4 8012BFB4 8CD9030C */  jal        func_800F6630
    /* 3A3B8 8012BFB8 21200000 */   addu      $a0, $zero, $zero
    /* 3A3BC 8012BFBC 92D0030C */  jal        func_800F4248
    /* 3A3C0 8012BFC0 80000424 */   addiu     $a0, $zero, 0x80
    /* 3A3C4 8012BFC4 48D0030C */  jal        func_800F4120
    /* 3A3C8 8012BFC8 02000424 */   addiu     $a0, $zero, 0x2
    /* 3A3CC 8012BFCC 0C004014 */  bnez       $v0, .L8012C000
    /* 3A3D0 8012BFD0 00000000 */   nop
    /* 3A3D4 8012BFD4 59D9030C */  jal        func_800F6564
    /* 3A3D8 8012BFD8 3E1B0424 */   addiu     $a0, $zero, 0x1B3E
    /* 3A3DC 8012BFDC 3489040C */  jal        func_801224D0
    /* 3A3E0 8012BFE0 00000000 */   nop
    /* 3A3E4 8012BFE4 1400043C */  lui        $a0, (0x14FF9D >> 16)
    /* 3A3E8 8012BFE8 1ADB030C */  jal        func_800F6C68
    /* 3A3EC 8012BFEC 9DFF8434 */   ori       $a0, $a0, (0x14FF9D & 0xFFFF)
    /* 3A3F0 8012BFF0 93E0030C */  jal        func_800F824C
    /* 3A3F4 8012BFF4 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3A3F8 8012BFF8 26B00408 */  j          .L8012C098
    /* 3A3FC 8012BFFC 00000000 */   nop
  .L8012C000:
    /* 3A400 8012C000 8CD9030C */  jal        func_800F6630
    /* 3A404 8012C004 01000424 */   addiu     $a0, $zero, 0x1
    /* 3A408 8012C008 92D0030C */  jal        func_800F4248
    /* 3A40C 8012C00C 80000424 */   addiu     $a0, $zero, 0x80
    /* 3A410 8012C010 48D0030C */  jal        func_800F4120
    /* 3A414 8012C014 02000424 */   addiu     $a0, $zero, 0x2
    /* 3A418 8012C018 1B004010 */  beqz       $v0, .L8012C088
    /* 3A41C 8012C01C 00000000 */   nop
    /* 3A420 8012C020 59D9030C */  jal        func_800F6564
    /* 3A424 8012C024 3E1B0424 */   addiu     $a0, $zero, 0x1B3E
    /* 3A428 8012C028 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3A42C 8012C02C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3A430 8012C030 00000000 */  nop
    /* 3A434 8012C034 00006290 */  lbu        $v0, 0x0($v1)
    /* 3A438 8012C038 00000000 */  nop
    /* 3A43C 8012C03C 00110200 */  sll        $v0, $v0, 4
    /* 3A440 8012C040 50D4030C */  jal        func_800F5140
    /* 3A444 8012C044 000062A0 */   sb        $v0, 0x0($v1)
    /* 3A448 8012C048 D3D3030C */  jal        func_800F4F4C
    /* 3A44C 8012C04C 00000000 */   nop
    /* 3A450 8012C050 02D0030C */  jal        func_800F4008
    /* 3A454 8012C054 40000424 */   addiu     $a0, $zero, 0x40
    /* 3A458 8012C058 93E0030C */  jal        func_800F824C
    /* 3A45C 8012C05C 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 3A460 8012C060 53D9030C */  jal        func_800F654C
    /* 3A464 8012C064 21200000 */   addu      $a0, $zero, $zero
    /* 3A468 8012C068 9CDC030C */  jal        func_800F7270
    /* 3A46C 8012C06C 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 3A470 8012C070 40DD030C */  jal        func_800F7500
    /* 3A474 8012C074 00030424 */   addiu     $a0, $zero, 0x300
    /* 3A478 8012C078 C97D040C */  jal        func_8011F724
    /* 3A47C 8012C07C 00000000 */   nop
    /* 3A480 8012C080 B3AF0408 */  j          .L8012BECC
    /* 3A484 8012C084 00000000 */   nop
  .L8012C088:
    /* 3A488 8012C088 53D9030C */  jal        func_800F654C
    /* 3A48C 8012C08C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 3A490 8012C090 93E0030C */  jal        func_800F824C
    /* 3A494 8012C094 E8000424 */   addiu     $a0, $zero, 0xE8
  .L8012C098:
    /* 3A498 8012C098 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3A49C 8012C09C 00000000 */  nop
    /* 3A4A0 8012C0A0 0800E003 */  jr         $ra
    /* 3A4A4 8012C0A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012BE34
