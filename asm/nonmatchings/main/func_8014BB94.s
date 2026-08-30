nonmatching func_8014BB94, 0x580

glabel func_8014BB94
    /* 59F94 8014BB94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59F98 8014BB98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59F9C 8014BB9C 62E0030C */  jal        func_800F8188
    /* 59FA0 8014BBA0 33F10434 */   ori       $a0, $zero, 0xF133
    /* 59FA4 8014BBA4 59D9030C */  jal        func_800F6564
    /* 59FA8 8014BBA8 C5340424 */   addiu     $a0, $zero, 0x34C5
    /* 59FAC 8014BBAC 0DD9030C */  jal        func_800F6434
    /* 59FB0 8014BBB0 02020424 */   addiu     $a0, $zero, 0x202
    /* 59FB4 8014BBB4 53014010 */  beqz       $v0, .L8014C104
    /* 59FB8 8014BBB8 00000000 */   nop
    /* 59FBC 8014BBBC 53D9030C */  jal        func_800F654C
    /* 59FC0 8014BBC0 04000424 */   addiu     $a0, $zero, 0x4
    /* 59FC4 8014BBC4 62E0030C */  jal        func_800F8188
    /* 59FC8 8014BBC8 D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 59FCC 8014BBCC 77DC030C */  jal        func_800F71DC
    /* 59FD0 8014BBD0 60800434 */   ori       $a0, $zero, 0x8060
    /* 59FD4 8014BBD4 40E3030C */  jal        func_800F8D00
    /* 59FD8 8014BBD8 89F20434 */   ori       $a0, $zero, 0xF289
    /* 59FDC 8014BBDC 632E050C */  jal        func_8014B98C
    /* 59FE0 8014BBE0 00000000 */   nop
    /* 59FE4 8014BBE4 53D9030C */  jal        func_800F654C
    /* 59FE8 8014BBE8 8D000424 */   addiu     $a0, $zero, 0x8D
    /* 59FEC 8014BBEC E035050C */  jal        func_8014D780
    /* 59FF0 8014BBF0 00000000 */   nop
    /* 59FF4 8014BBF4 5B02050C */  jal        func_8014096C
    /* 59FF8 8014BBF8 00000000 */   nop
    /* 59FFC 8014BBFC 53D9030C */  jal        func_800F654C
    /* 5A000 8014BC00 02000424 */   addiu     $a0, $zero, 0x2
    /* 5A004 8014BC04 62E0030C */  jal        func_800F8188
    /* 5A008 8014BC08 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 5A00C 8014BC0C DDE3030C */  jal        func_800F8F74
    /* 5A010 8014BC10 D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 5A014 8014BC14 C7E5030C */  jal        func_800F971C
    /* 5A018 8014BC18 00000000 */   nop
    /* 5A01C 8014BC1C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5A020 8014BC20 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5A024 8014BC24 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5A028 8014BC28 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5A02C 8014BC2C 00004394 */  lhu        $v1, 0x0($v0)
    /* 5A030 8014BC30 00000000 */  nop
    /* 5A034 8014BC34 000083A4 */  sh         $v1, 0x0($a0)
  .L8014BC38:
    /* 5A038 8014BC38 3BE4030C */  jal        func_800F90EC
    /* 5A03C 8014BC3C E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5A040 8014BC40 DAE1030C */  jal        func_800F8768
    /* 5A044 8014BC44 E7EB0434 */   ori       $a0, $zero, 0xEBE7
    /* 5A048 8014BC48 80E4030C */  jal        func_800F9200
    /* 5A04C 8014BC4C 00000000 */   nop
    /* 5A050 8014BC50 53D9030C */  jal        func_800F654C
    /* 5A054 8014BC54 80000424 */   addiu     $a0, $zero, 0x80
    /* 5A058 8014BC58 DAE1030C */  jal        func_800F8768
    /* 5A05C 8014BC5C 06EC0434 */   ori       $a0, $zero, 0xEC06
    /* 5A060 8014BC60 F7E4030C */  jal        func_800F93DC
    /* 5A064 8014BC64 00000000 */   nop
    /* 5A068 8014BC68 04D5030C */  jal        func_800F5410
    /* 5A06C 8014BC6C 00000000 */   nop
    /* 5A070 8014BC70 02D0030C */  jal        func_800F4008
    /* 5A074 8014BC74 10000424 */   addiu     $a0, $zero, 0x10
    /* 5A078 8014BC78 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5A07C 8014BC7C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5A080 8014BC80 00000000 */  nop
    /* 5A084 8014BC84 00006294 */  lhu        $v0, 0x0($v1)
    /* 5A088 8014BC88 20000424 */  addiu      $a0, $zero, 0x20
    /* 5A08C 8014BC8C 02004224 */  addiu      $v0, $v0, 0x2
    /* 5A090 8014BC90 56D6030C */  jal        func_800F5958
    /* 5A094 8014BC94 000062A4 */   sh        $v0, 0x0($v1)
    /* 5A098 8014BC98 F5D4030C */  jal        func_800F53D4
    /* 5A09C 8014BC9C 00000000 */   nop
    /* 5A0A0 8014BCA0 E5FF4010 */  beqz       $v0, .L8014BC38
    /* 5A0A4 8014BCA4 00000000 */   nop
    /* 5A0A8 8014BCA8 53D9030C */  jal        func_800F654C
    /* 5A0AC 8014BCAC A0000424 */   addiu     $a0, $zero, 0xA0
    /* 5A0B0 8014BCB0 62E0030C */  jal        func_800F8188
    /* 5A0B4 8014BCB4 9FF20434 */   ori       $a0, $zero, 0xF29F
  .L8014BCB8:
    /* 5A0B8 8014BCB8 67C9010C */  jal        func_8007259C
    /* 5A0BC 8014BCBC 00000000 */   nop
    /* 5A0C0 8014BCC0 6336050C */  jal        func_8014D98C
    /* 5A0C4 8014BCC4 00000000 */   nop
    /* 5A0C8 8014BCC8 77DC030C */  jal        func_800F71DC
    /* 5A0CC 8014BCCC 21200000 */   addu      $a0, $zero, $zero
  .L8014BCD0:
    /* 5A0D0 8014BCD0 DADA030C */  jal        func_800F6B68
    /* 5A0D4 8014BCD4 E7EB0434 */   ori       $a0, $zero, 0xEBE7
    /* 5A0D8 8014BCD8 0DD9030C */  jal        func_800F6434
    /* 5A0DC 8014BCDC 02020424 */   addiu     $a0, $zero, 0x202
    /* 5A0E0 8014BCE0 19004014 */  bnez       $v0, .L8014BD48
    /* 5A0E4 8014BCE4 00000000 */   nop
    /* 5A0E8 8014BCE8 59D9030C */  jal        func_800F6564
    /* 5A0EC 8014BCEC C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 5A0F0 8014BCF0 0DD9030C */  jal        func_800F6434
    /* 5A0F4 8014BCF4 80000424 */   addiu     $a0, $zero, 0x80
    /* 5A0F8 8014BCF8 0B004014 */  bnez       $v0, .L8014BD28
    /* 5A0FC 8014BCFC 00000000 */   nop
    /* 5A100 8014BD00 713A050C */  jal        func_8014E9C4
    /* 5A104 8014BD04 00000000 */   nop
    /* 5A108 8014BD08 92D0030C */  jal        func_800F4248
    /* 5A10C 8014BD0C 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 5A110 8014BD10 04D5030C */  jal        func_800F5410
    /* 5A114 8014BD14 00000000 */   nop
    /* 5A118 8014BD18 02D0030C */  jal        func_800F4008
    /* 5A11C 8014BD1C 60000424 */   addiu     $a0, $zero, 0x60
    /* 5A120 8014BD20 4C2F0508 */  j          .L8014BD30
    /* 5A124 8014BD24 00000000 */   nop
  .L8014BD28:
    /* 5A128 8014BD28 713A050C */  jal        func_8014E9C4
    /* 5A12C 8014BD2C 00000000 */   nop
  .L8014BD30:
    /* 5A130 8014BD30 DAE1030C */  jal        func_800F8768
    /* 5A134 8014BD34 E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5A138 8014BD38 53D9030C */  jal        func_800F654C
    /* 5A13C 8014BD3C 0F000424 */   addiu     $a0, $zero, 0xF
    /* 5A140 8014BD40 DAE1030C */  jal        func_800F8768
    /* 5A144 8014BD44 06EC0434 */   ori       $a0, $zero, 0xEC06
  .L8014BD48:
    /* 5A148 8014BD48 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 5A14C 8014BD4C 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 5A150 8014BD50 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 5A154 8014BD54 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 5A158 8014BD58 00004390 */  lbu        $v1, 0x0($v0)
    /* 5A15C 8014BD5C 07000424 */  addiu      $a0, $zero, 0x7
    /* 5A160 8014BD60 92D0030C */  jal        func_800F4248
    /* 5A164 8014BD64 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5A168 8014BD68 04D5030C */  jal        func_800F5410
    /* 5A16C 8014BD6C 00000000 */   nop
    /* 5A170 8014BD70 02D0030C */  jal        func_800F4008
    /* 5A174 8014BD74 03000424 */   addiu     $a0, $zero, 0x3
    /* 5A178 8014BD78 93E0030C */  jal        func_800F824C
    /* 5A17C 8014BD7C 02000424 */   addiu     $a0, $zero, 0x2
    /* 5A180 8014BD80 59D9030C */  jal        func_800F6564
    /* 5A184 8014BD84 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 5A188 8014BD88 0DD9030C */  jal        func_800F6434
    /* 5A18C 8014BD8C 80800434 */   ori       $a0, $zero, 0x8080
    /* 5A190 8014BD90 1F004014 */  bnez       $v0, .L8014BE10
    /* 5A194 8014BD94 00000000 */   nop
    /* 5A198 8014BD98 53D9030C */  jal        func_800F654C
    /* 5A19C 8014BD9C 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 5A1A0 8014BDA0 93E0030C */  jal        func_800F824C
    /* 5A1A4 8014BDA4 21200000 */   addu      $a0, $zero, $zero
    /* 5A1A8 8014BDA8 DADA030C */  jal        func_800F6B68
    /* 5A1AC 8014BDAC E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5A1B0 8014BDB0 20D5030C */  jal        func_800F5480
    /* 5A1B4 8014BDB4 00000000 */   nop
    /* 5A1B8 8014BDB8 0FCF030C */  jal        func_800F3C3C
    /* 5A1BC 8014BDBC 02000424 */   addiu     $a0, $zero, 0x2
    /* 5A1C0 8014BDC0 D2DF030C */  jal        func_800F7F48
    /* 5A1C4 8014BDC4 21204000 */   addu      $a0, $v0, $zero
    /* 5A1C8 8014BDC8 DAE1030C */  jal        func_800F8768
    /* 5A1CC 8014BDCC E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5A1D0 8014BDD0 F0D4030C */  jal        func_800F53C0
    /* 5A1D4 8014BDD4 00000000 */   nop
    /* 5A1D8 8014BDD8 39004014 */  bnez       $v0, .L8014BEC0
    /* 5A1DC 8014BDDC 00000000 */   nop
    /* 5A1E0 8014BDE0 DADA030C */  jal        func_800F6B68
    /* 5A1E4 8014BDE4 06EC0434 */   ori       $a0, $zero, 0xEC06
    /* 5A1E8 8014BDE8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5A1EC 8014BDEC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5A1F0 8014BDF0 00000000 */  nop
    /* 5A1F4 8014BDF4 00006290 */  lbu        $v0, 0x0($v1)
    /* 5A1F8 8014BDF8 06EC0434 */  ori        $a0, $zero, 0xEC06
    /* 5A1FC 8014BDFC 80004234 */  ori        $v0, $v0, 0x80
    /* 5A200 8014BE00 DAE1030C */  jal        func_800F8768
    /* 5A204 8014BE04 000062A0 */   sb        $v0, 0x0($v1)
    /* 5A208 8014BE08 B02F0508 */  j          .L8014BEC0
    /* 5A20C 8014BE0C 00000000 */   nop
  .L8014BE10:
    /* 5A210 8014BE10 53D9030C */  jal        func_800F654C
    /* 5A214 8014BE14 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 5A218 8014BE18 93E0030C */  jal        func_800F824C
    /* 5A21C 8014BE1C 21200000 */   addu      $a0, $zero, $zero
    /* 5A220 8014BE20 DADA030C */  jal        func_800F6B68
    /* 5A224 8014BE24 E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5A228 8014BE28 04D5030C */  jal        func_800F5410
    /* 5A22C 8014BE2C 00000000 */   nop
    /* 5A230 8014BE30 0FCF030C */  jal        func_800F3C3C
    /* 5A234 8014BE34 02000424 */   addiu     $a0, $zero, 0x2
    /* 5A238 8014BE38 CECF030C */  jal        func_800F3F38
    /* 5A23C 8014BE3C 21204000 */   addu      $a0, $v0, $zero
    /* 5A240 8014BE40 DAE1030C */  jal        func_800F8768
    /* 5A244 8014BE44 E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5A248 8014BE48 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 5A24C 8014BE4C 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 5A250 8014BE50 00000000 */  nop
    /* 5A254 8014BE54 00006290 */  lbu        $v0, 0x0($v1)
    /* 5A258 8014BE58 00000000 */  nop
    /* 5A25C 8014BE5C FD004230 */  andi       $v0, $v0, 0xFD
    /* 5A260 8014BE60 000062A0 */  sb         $v0, 0x0($v1)
    /* 5A264 8014BE64 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 5A268 8014BE68 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 5A26C 8014BE6C 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 5A270 8014BE70 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 5A274 8014BE74 00008290 */  lbu        $v0, 0x0($a0)
    /* 5A278 8014BE78 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5A27C 8014BE7C 02004014 */  bnez       $v0, .L8014BE88
    /* 5A280 8014BE80 00000000 */   nop
    /* 5A284 8014BE84 02006334 */  ori        $v1, $v1, 0x2
  .L8014BE88:
    /* 5A288 8014BE88 F0D4030C */  jal        func_800F53C0
    /* 5A28C 8014BE8C 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5A290 8014BE90 0B004010 */  beqz       $v0, .L8014BEC0
    /* 5A294 8014BE94 00000000 */   nop
    /* 5A298 8014BE98 DADA030C */  jal        func_800F6B68
    /* 5A29C 8014BE9C 06EC0434 */   ori       $a0, $zero, 0xEC06
    /* 5A2A0 8014BEA0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5A2A4 8014BEA4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5A2A8 8014BEA8 00000000 */  nop
    /* 5A2AC 8014BEAC 00006290 */  lbu        $v0, 0x0($v1)
    /* 5A2B0 8014BEB0 06EC0434 */  ori        $a0, $zero, 0xEC06
    /* 5A2B4 8014BEB4 80004234 */  ori        $v0, $v0, 0x80
    /* 5A2B8 8014BEB8 DAE1030C */  jal        func_800F8768
    /* 5A2BC 8014BEBC 000062A0 */   sb        $v0, 0x0($v1)
  .L8014BEC0:
    /* 5A2C0 8014BEC0 DADA030C */  jal        func_800F6B68
    /* 5A2C4 8014BEC4 E7EB0434 */   ori       $a0, $zero, 0xEBE7
    /* 5A2C8 8014BEC8 04D5030C */  jal        func_800F5410
    /* 5A2CC 8014BECC 00000000 */   nop
    /* 5A2D0 8014BED0 02D0030C */  jal        func_800F4008
    /* 5A2D4 8014BED4 08000424 */   addiu     $a0, $zero, 0x8
    /* 5A2D8 8014BED8 DAE1030C */  jal        func_800F8768
    /* 5A2DC 8014BEDC E7EB0434 */   ori       $a0, $zero, 0xEBE7
    /* 5A2E0 8014BEE0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5A2E4 8014BEE4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5A2E8 8014BEE8 00000000 */  nop
    /* 5A2EC 8014BEEC 00006294 */  lhu        $v0, 0x0($v1)
    /* 5A2F0 8014BEF0 20000424 */  addiu      $a0, $zero, 0x20
    /* 5A2F4 8014BEF4 02004224 */  addiu      $v0, $v0, 0x2
    /* 5A2F8 8014BEF8 56D6030C */  jal        func_800F5958
    /* 5A2FC 8014BEFC 000062A4 */   sh        $v0, 0x0($v1)
    /* 5A300 8014BF00 F5D4030C */  jal        func_800F53D4
    /* 5A304 8014BF04 00000000 */   nop
    /* 5A308 8014BF08 71FF4010 */  beqz       $v0, .L8014BCD0
    /* 5A30C 8014BF0C 00000000 */   nop
    /* 5A310 8014BF10 77DC030C */  jal        func_800F71DC
    /* 5A314 8014BF14 21200000 */   addu      $a0, $zero, $zero
    /* 5A318 8014BF18 40DD030C */  jal        func_800F7500
    /* 5A31C 8014BF1C 21200000 */   addu      $a0, $zero, $zero
  .L8014BF20:
    /* 5A320 8014BF20 DADA030C */  jal        func_800F6B68
    /* 5A324 8014BF24 06EC0434 */   ori       $a0, $zero, 0xEC06
    /* 5A328 8014BF28 0DD9030C */  jal        func_800F6434
    /* 5A32C 8014BF2C 80800434 */   ori       $a0, $zero, 0x8080
    /* 5A330 8014BF30 09004014 */  bnez       $v0, .L8014BF58
    /* 5A334 8014BF34 06EC0434 */   ori       $a0, $zero, 0xEC06
    /* 5A338 8014BF38 53D9030C */  jal        func_800F654C
    /* 5A33C 8014BF3C F0000424 */   addiu     $a0, $zero, 0xF0
    /* 5A340 8014BF40 58E2030C */  jal        func_800F8960
    /* 5A344 8014BF44 C0030424 */   addiu     $a0, $zero, 0x3C0
    /* 5A348 8014BF48 58E2030C */  jal        func_800F8960
    /* 5A34C 8014BF4C C1030424 */   addiu     $a0, $zero, 0x3C1
    /* 5A350 8014BF50 22300508 */  j          .L8014C088
    /* 5A354 8014BF54 00000000 */   nop
  .L8014BF58:
    /* 5A358 8014BF58 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5A35C 8014BF5C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5A360 8014BF60 00000000 */  nop
    /* 5A364 8014BF64 00004394 */  lhu        $v1, 0x0($v0)
    /* 5A368 8014BF68 C1CE030C */  jal        func_800F3B04
    /* 5A36C 8014BF6C 21206400 */   addu      $a0, $v1, $a0
    /* 5A370 8014BF70 CBD6030C */  jal        func_800F5B2C
    /* 5A374 8014BF74 21204000 */   addu      $a0, $v0, $zero
    /* 5A378 8014BF78 DADA030C */  jal        func_800F6B68
    /* 5A37C 8014BF7C E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5A380 8014BF80 58E2030C */  jal        func_800F8960
    /* 5A384 8014BF84 C0030424 */   addiu     $a0, $zero, 0x3C0
    /* 5A388 8014BF88 DADA030C */  jal        func_800F6B68
    /* 5A38C 8014BF8C E7EB0434 */   ori       $a0, $zero, 0xEBE7
    /* 5A390 8014BF90 20D5030C */  jal        func_800F5480
    /* 5A394 8014BF94 00000000 */   nop
    /* 5A398 8014BF98 16E0030C */  jal        func_800F8058
    /* 5A39C 8014BF9C 04000424 */   addiu     $a0, $zero, 0x4
    /* 5A3A0 8014BFA0 58E2030C */  jal        func_800F8960
    /* 5A3A4 8014BFA4 C1030424 */   addiu     $a0, $zero, 0x3C1
    /* 5A3A8 8014BFA8 59D9030C */  jal        func_800F6564
    /* 5A3AC 8014BFAC 33F10434 */   ori       $a0, $zero, 0xF133
    /* 5A3B0 8014BFB0 5DD5030C */  jal        func_800F5574
    /* 5A3B4 8014BFB4 E4000424 */   addiu     $a0, $zero, 0xE4
    /* 5A3B8 8014BFB8 F5D4030C */  jal        func_800F53D4
    /* 5A3BC 8014BFBC 00000000 */   nop
    /* 5A3C0 8014BFC0 0B004014 */  bnez       $v0, .L8014BFF0
    /* 5A3C4 8014BFC4 00000000 */   nop
    /* 5A3C8 8014BFC8 59D9030C */  jal        func_800F6564
    /* 5A3CC 8014BFCC 13180424 */   addiu     $a0, $zero, 0x1813
    /* 5A3D0 8014BFD0 92D0030C */  jal        func_800F4248
    /* 5A3D4 8014BFD4 02000424 */   addiu     $a0, $zero, 0x2
    /* 5A3D8 8014BFD8 04D5030C */  jal        func_800F5410
    /* 5A3DC 8014BFDC 00000000 */   nop
    /* 5A3E0 8014BFE0 C1CE030C */  jal        func_800F3B04
    /* 5A3E4 8014BFE4 33F10434 */   ori       $a0, $zero, 0xF133
    /* 5A3E8 8014BFE8 CECF030C */  jal        func_800F3F38
    /* 5A3EC 8014BFEC 21204000 */   addu      $a0, $v0, $zero
  .L8014BFF0:
    /* 5A3F0 8014BFF0 58E2030C */  jal        func_800F8960
    /* 5A3F4 8014BFF4 C2030424 */   addiu     $a0, $zero, 0x3C2
    /* 5A3F8 8014BFF8 59D9030C */  jal        func_800F6564
    /* 5A3FC 8014BFFC C06C0424 */   addiu     $a0, $zero, 0x6CC0
    /* 5A400 8014C000 0DD9030C */  jal        func_800F6434
    /* 5A404 8014C004 02000424 */   addiu     $a0, $zero, 0x2
    /* 5A408 8014C008 1B004014 */  bnez       $v0, .L8014C078
    /* 5A40C 8014C00C 00000000 */   nop
    /* 5A410 8014C010 8CD9030C */  jal        func_800F6630
    /* 5A414 8014C014 21200000 */   addu      $a0, $zero, $zero
    /* 5A418 8014C018 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5A41C 8014C01C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5A420 8014C020 00000000 */  nop
    /* 5A424 8014C024 00006290 */  lbu        $v0, 0x0($v1)
    /* 5A428 8014C028 C3030424 */  addiu      $a0, $zero, 0x3C3
    /* 5A42C 8014C02C 40004238 */  xori       $v0, $v0, 0x40
    /* 5A430 8014C030 58E2030C */  jal        func_800F8960
    /* 5A434 8014C034 000062A0 */   sb        $v0, 0x0($v1)
    /* 5A438 8014C038 DADA030C */  jal        func_800F6B68
    /* 5A43C 8014C03C E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5A440 8014C040 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5A444 8014C044 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5A448 8014C048 00000000 */  nop
    /* 5A44C 8014C04C 00006290 */  lbu        $v0, 0x0($v1)
    /* 5A450 8014C050 00000000 */  nop
    /* 5A454 8014C054 27100200 */  nor        $v0, $zero, $v0
    /* 5A458 8014C058 20D5030C */  jal        func_800F5480
    /* 5A45C 8014C05C 000062A0 */   sb        $v0, 0x0($v1)
    /* 5A460 8014C060 16E0030C */  jal        func_800F8058
    /* 5A464 8014C064 10000424 */   addiu     $a0, $zero, 0x10
    /* 5A468 8014C068 58E2030C */  jal        func_800F8960
    /* 5A46C 8014C06C C0030424 */   addiu     $a0, $zero, 0x3C0
    /* 5A470 8014C070 22300508 */  j          .L8014C088
    /* 5A474 8014C074 00000000 */   nop
  .L8014C078:
    /* 5A478 8014C078 8CD9030C */  jal        func_800F6630
    /* 5A47C 8014C07C 21200000 */   addu      $a0, $zero, $zero
    /* 5A480 8014C080 58E2030C */  jal        func_800F8960
    /* 5A484 8014C084 C3030424 */   addiu     $a0, $zero, 0x3C3
  .L8014C088:
    /* 5A488 8014C088 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5A48C 8014C08C 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5A490 8014C090 00000000 */  nop
    /* 5A494 8014C094 00006294 */  lhu        $v0, 0x0($v1)
    /* 5A498 8014C098 00000000 */  nop
    /* 5A49C 8014C09C 04004224 */  addiu      $v0, $v0, 0x4
    /* 5A4A0 8014C0A0 000062A4 */  sh         $v0, 0x0($v1)
    /* 5A4A4 8014C0A4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5A4A8 8014C0A8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5A4AC 8014C0AC 00000000 */  nop
    /* 5A4B0 8014C0B0 0000A294 */  lhu        $v0, 0x0($a1)
    /* 5A4B4 8014C0B4 20000424 */  addiu      $a0, $zero, 0x20
    /* 5A4B8 8014C0B8 02004224 */  addiu      $v0, $v0, 0x2
    /* 5A4BC 8014C0BC 56D6030C */  jal        func_800F5958
    /* 5A4C0 8014C0C0 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 5A4C4 8014C0C4 F5D4030C */  jal        func_800F53D4
    /* 5A4C8 8014C0C8 00000000 */   nop
    /* 5A4CC 8014C0CC 94FF4010 */  beqz       $v0, .L8014BF20
    /* 5A4D0 8014C0D0 00000000 */   nop
    /* 5A4D4 8014C0D4 49D7030C */  jal        func_800F5D24
    /* 5A4D8 8014C0D8 9FF20434 */   ori       $a0, $zero, 0xF29F
    /* 5A4DC 8014C0DC E3D6030C */  jal        func_800F5B8C
    /* 5A4E0 8014C0E0 02000424 */   addiu     $a0, $zero, 0x2
    /* 5A4E4 8014C0E4 F4FE4010 */  beqz       $v0, .L8014BCB8
    /* 5A4E8 8014C0E8 00000000 */   nop
    /* 5A4EC 8014C0EC DDE3030C */  jal        func_800F8F74
    /* 5A4F0 8014C0F0 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 5A4F4 8014C0F4 77DC030C */  jal        func_800F71DC
    /* 5A4F8 8014C0F8 21200000 */   addu      $a0, $zero, $zero
    /* 5A4FC 8014C0FC 40E3030C */  jal        func_800F8D00
    /* 5A500 8014C100 89F20434 */   ori       $a0, $zero, 0xF289
  .L8014C104:
    /* 5A504 8014C104 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5A508 8014C108 00000000 */  nop
    /* 5A50C 8014C10C 0800E003 */  jr         $ra
    /* 5A510 8014C110 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014BB94
