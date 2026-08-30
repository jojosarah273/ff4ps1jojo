nonmatching func_8012BB68, 0x2CC

glabel func_8012BB68
    /* 39F68 8012BB68 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 39F6C 8012BB6C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 39F70 8012BB70 5CDB030C */  jal        func_800F6D70
    /* 39F74 8012BB74 21200000 */   addu      $a0, $zero, $zero
    /* 39F78 8012BB78 92D0030C */  jal        func_800F4248
    /* 39F7C 8012BB7C 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 39F80 8012BB80 48D0030C */  jal        func_800F4120
    /* 39F84 8012BB84 02000424 */   addiu     $a0, $zero, 0x2
    /* 39F88 8012BB88 A6004014 */  bnez       $v0, .L8012BE24
    /* 39F8C 8012BB8C 00000000 */   nop
    /* 39F90 8012BB90 AFE3030C */  jal        func_800F8EBC
    /* 39F94 8012BB94 48000424 */   addiu     $a0, $zero, 0x48
    /* 39F98 8012BB98 5BE3030C */  jal        func_800F8D6C
    /* 39F9C 8012BB9C 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 39FA0 8012BBA0 E7E4030C */  jal        func_800F939C
    /* 39FA4 8012BBA4 00000000 */   nop
    /* 39FA8 8012BBA8 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 39FAC 8012BBAC 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 39FB0 8012BBB0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 39FB4 8012BBB4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 39FB8 8012BBB8 00006294 */  lhu        $v0, 0x0($v1)
    /* 39FBC 8012BBBC CCE4030C */  jal        func_800F9330
    /* 39FC0 8012BBC0 000082A4 */   sh        $v0, 0x0($a0)
    /* 39FC4 8012BBC4 8382040C */  jal        func_80120A0C
    /* 39FC8 8012BBC8 00000000 */   nop
    /* 39FCC 8012BBCC 68E5030C */  jal        func_800F95A0
    /* 39FD0 8012BBD0 00000000 */   nop
    /* 39FD4 8012BBD4 83E5030C */  jal        func_800F960C
    /* 39FD8 8012BBD8 00000000 */   nop
    /* 39FDC 8012BBDC 80E4030C */  jal        func_800F9200
    /* 39FE0 8012BBE0 00000000 */   nop
    /* 39FE4 8012BBE4 5CDB030C */  jal        func_800F6D70
    /* 39FE8 8012BBE8 03000424 */   addiu     $a0, $zero, 0x3
    /* 39FEC 8012BBEC 1BDF030C */  jal        func_800F7C6C
    /* 39FF0 8012BBF0 00000000 */   nop
    /* 39FF4 8012BBF4 9ADE030C */  jal        func_800F7A68
    /* 39FF8 8012BBF8 00000000 */   nop
    /* 39FFC 8012BBFC 1BDF030C */  jal        func_800F7C6C
    /* 3A000 8012BC00 00000000 */   nop
    /* 3A004 8012BC04 9ADE030C */  jal        func_800F7A68
    /* 3A008 8012BC08 00000000 */   nop
    /* 3A00C 8012BC0C 1BDF030C */  jal        func_800F7C6C
    /* 3A010 8012BC10 00000000 */   nop
    /* 3A014 8012BC14 9ADE030C */  jal        func_800F7A68
    /* 3A018 8012BC18 00000000 */   nop
    /* 3A01C 8012BC1C 1BDF030C */  jal        func_800F7C6C
    /* 3A020 8012BC20 00000000 */   nop
    /* 3A024 8012BC24 92D0030C */  jal        func_800F4248
    /* 3A028 8012BC28 04000424 */   addiu     $a0, $zero, 0x4
    /* 3A02C 8012BC2C 0FCF030C */  jal        func_800F3C3C
    /* 3A030 8012BC30 34000424 */   addiu     $a0, $zero, 0x34
    /* 3A034 8012BC34 31DE030C */  jal        func_800F78C4
    /* 3A038 8012BC38 21204000 */   addu      $a0, $v0, $zero
    /* 3A03C 8012BC3C 93E0030C */  jal        func_800F824C
    /* 3A040 8012BC40 45000424 */   addiu     $a0, $zero, 0x45
    /* 3A044 8012BC44 53D9030C */  jal        func_800F654C
    /* 3A048 8012BC48 0E000424 */   addiu     $a0, $zero, 0xE
    /* 3A04C 8012BC4C F68E040C */  jal        func_80123BD8
    /* 3A050 8012BC50 00000000 */   nop
    /* 3A054 8012BC54 F68E040C */  jal        func_80123BD8
    /* 3A058 8012BC58 00000000 */   nop
    /* 3A05C 8012BC5C F68E040C */  jal        func_80123BD8
    /* 3A060 8012BC60 00000000 */   nop
    /* 3A064 8012BC64 F68E040C */  jal        func_80123BD8
    /* 3A068 8012BC68 00000000 */   nop
    /* 3A06C 8012BC6C F7E4030C */  jal        func_800F93DC
    /* 3A070 8012BC70 00000000 */   nop
    /* 3A074 8012BC74 91E5030C */  jal        func_800F9644
    /* 3A078 8012BC78 20000424 */   addiu     $a0, $zero, 0x20
    /* 3A07C 8012BC7C 96D9030C */  jal        func_800F6658
    /* 3A080 8012BC80 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 3A084 8012BC84 04D5030C */  jal        func_800F5410
    /* 3A088 8012BC88 00000000 */   nop
    /* 3A08C 8012BC8C 0FCF030C */  jal        func_800F3C3C
    /* 3A090 8012BC90 29000424 */   addiu     $a0, $zero, 0x29
    /* 3A094 8012BC94 E5CF030C */  jal        func_800F3F94
    /* 3A098 8012BC98 21204000 */   addu      $a0, $v0, $zero
    /* 3A09C 8012BC9C 9DE0030C */  jal        func_800F8274
    /* 3A0A0 8012BCA0 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 3A0A4 8012BCA4 04D5030C */  jal        func_800F5410
    /* 3A0A8 8012BCA8 00000000 */   nop
    /* 3A0AC 8012BCAC 19D0030C */  jal        func_800F4064
    /* 3A0B0 8012BCB0 40000424 */   addiu     $a0, $zero, 0x40
    /* 3A0B4 8012BCB4 9DE0030C */  jal        func_800F8274
    /* 3A0B8 8012BCB8 51000424 */   addiu     $a0, $zero, 0x51
    /* 3A0BC 8012BCBC 98E5030C */  jal        func_800F9660
    /* 3A0C0 8012BCC0 20000424 */   addiu     $a0, $zero, 0x20
    /* 3A0C4 8012BCC4 9CDC030C */  jal        func_800F7270
    /* 3A0C8 8012BCC8 48000424 */   addiu     $a0, $zero, 0x48
    /* 3A0CC 8012BCCC 65DD030C */  jal        func_800F7594
    /* 3A0D0 8012BCD0 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 3A0D4 8012BCD4 CCE4030C */  jal        func_800F9330
    /* 3A0D8 8012BCD8 00000000 */   nop
    /* 3A0DC 8012BCDC E7E4030C */  jal        func_800F939C
    /* 3A0E0 8012BCE0 00000000 */   nop
    /* 3A0E4 8012BCE4 C88C040C */  jal        func_80123320
    /* 3A0E8 8012BCE8 00000000 */   nop
    /* 3A0EC 8012BCEC 83E5030C */  jal        func_800F960C
    /* 3A0F0 8012BCF0 00000000 */   nop
    /* 3A0F4 8012BCF4 68E5030C */  jal        func_800F95A0
    /* 3A0F8 8012BCF8 00000000 */   nop
    /* 3A0FC 8012BCFC 5BE3030C */  jal        func_800F8D6C
    /* 3A100 8012BD00 48000424 */   addiu     $a0, $zero, 0x48
    /* 3A104 8012BD04 AFE3030C */  jal        func_800F8EBC
    /* 3A108 8012BD08 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 3A10C 8012BD0C 91E5030C */  jal        func_800F9644
    /* 3A110 8012BD10 20000424 */   addiu     $a0, $zero, 0x20
    /* 3A114 8012BD14 96D9030C */  jal        func_800F6658
    /* 3A118 8012BD18 51000424 */   addiu     $a0, $zero, 0x51
    /* 3A11C 8012BD1C 04D5030C */  jal        func_800F5410
    /* 3A120 8012BD20 00000000 */   nop
    /* 3A124 8012BD24 19D0030C */  jal        func_800F4064
    /* 3A128 8012BD28 42000424 */   addiu     $a0, $zero, 0x42
    /* 3A12C 8012BD2C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3A130 8012BD30 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3A134 8012BD34 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3A138 8012BD38 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3A13C 8012BD3C 00004394 */  lhu        $v1, 0x0($v0)
    /* 3A140 8012BD40 20000424 */  addiu      $a0, $zero, 0x20
    /* 3A144 8012BD44 98E5030C */  jal        func_800F9660
    /* 3A148 8012BD48 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3A14C 8012BD4C 53D9030C */  jal        func_800F654C
    /* 3A150 8012BD50 49000424 */   addiu     $a0, $zero, 0x49
    /* 3A154 8012BD54 58E2030C */  jal        func_800F8960
    /* 3A158 8012BD58 21200000 */   addu      $a0, $zero, $zero
    /* 3A15C 8012BD5C 53D9030C */  jal        func_800F654C
    /* 3A160 8012BD60 51000424 */   addiu     $a0, $zero, 0x51
    /* 3A164 8012BD64 58E2030C */  jal        func_800F8960
    /* 3A168 8012BD68 02000424 */   addiu     $a0, $zero, 0x2
    /* 3A16C 8012BD6C 58E2030C */  jal        func_800F8960
    /* 3A170 8012BD70 42000424 */   addiu     $a0, $zero, 0x42
    /* 3A174 8012BD74 53D9030C */  jal        func_800F654C
    /* 3A178 8012BD78 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 3A17C 8012BD7C 58E2030C */  jal        func_800F8960
    /* 3A180 8012BD80 40000424 */   addiu     $a0, $zero, 0x40
    /* 3A184 8012BD84 53D9030C */  jal        func_800F654C
    /* 3A188 8012BD88 C7000424 */   addiu     $a0, $zero, 0xC7
    /* 3A18C 8012BD8C 58E2030C */  jal        func_800F8960
    /* 3A190 8012BD90 0E000424 */   addiu     $a0, $zero, 0xE
    /* 3A194 8012BD94 58E2030C */  jal        func_800F8960
    /* 3A198 8012BD98 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 3A19C 8012BD9C 91E5030C */  jal        func_800F9644
    /* 3A1A0 8012BDA0 20000424 */   addiu     $a0, $zero, 0x20
    /* 3A1A4 8012BDA4 9CDC030C */  jal        func_800F7270
    /* 3A1A8 8012BDA8 51000424 */   addiu     $a0, $zero, 0x51
    /* 3A1AC 8012BDAC D9D8030C */  jal        func_800F6364
    /* 3A1B0 8012BDB0 00000000 */   nop
    /* 3A1B4 8012BDB4 D9D8030C */  jal        func_800F6364
    /* 3A1B8 8012BDB8 00000000 */   nop
    /* 3A1BC 8012BDBC 56D9030C */  jal        func_800F6558
    /* 3A1C0 8012BDC0 46000424 */   addiu     $a0, $zero, 0x46
    /* 3A1C4 8012BDC4 40DD030C */  jal        func_800F7500
    /* 3A1C8 8012BDC8 07000424 */   addiu     $a0, $zero, 0x7
    /* 3A1CC 8012BDCC CB8B040C */  jal        func_80122F2C
    /* 3A1D0 8012BDD0 00000000 */   nop
    /* 3A1D4 8012BDD4 56D9030C */  jal        func_800F6558
    /* 3A1D8 8012BDD8 50000424 */   addiu     $a0, $zero, 0x50
    /* 3A1DC 8012BDDC 40DD030C */  jal        func_800F7500
    /* 3A1E0 8012BDE0 09000424 */   addiu     $a0, $zero, 0x9
    /* 3A1E4 8012BDE4 CB8B040C */  jal        func_80122F2C
    /* 3A1E8 8012BDE8 00000000 */   nop
    /* 3A1EC 8012BDEC 56D9030C */  jal        func_800F6558
    /* 3A1F0 8012BDF0 86000424 */   addiu     $a0, $zero, 0x86
    /* 3A1F4 8012BDF4 40DD030C */  jal        func_800F7500
    /* 3A1F8 8012BDF8 0B000424 */   addiu     $a0, $zero, 0xB
    /* 3A1FC 8012BDFC CB8B040C */  jal        func_80122F2C
    /* 3A200 8012BE00 00000000 */   nop
    /* 3A204 8012BE04 56D9030C */  jal        func_800F6558
    /* 3A208 8012BE08 90000424 */   addiu     $a0, $zero, 0x90
    /* 3A20C 8012BE0C 40DD030C */  jal        func_800F7500
    /* 3A210 8012BE10 0D000424 */   addiu     $a0, $zero, 0xD
    /* 3A214 8012BE14 CB8B040C */  jal        func_80122F2C
    /* 3A218 8012BE18 00000000 */   nop
    /* 3A21C 8012BE1C 98E5030C */  jal        func_800F9660
    /* 3A220 8012BE20 20000424 */   addiu     $a0, $zero, 0x20
  .L8012BE24:
    /* 3A224 8012BE24 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3A228 8012BE28 00000000 */  nop
    /* 3A22C 8012BE2C 0800E003 */  jr         $ra
    /* 3A230 8012BE30 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012BB68
