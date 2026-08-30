nonmatching func_8014DA2C, 0x960

glabel func_8014DA2C
    /* 5BE2C 8014DA2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5BE30 8014DA30 1000B0AF */  sw         $s0, 0x10($sp)
    /* 5BE34 8014DA34 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* 5BE38 8014DA38 68FD4224 */  addiu      $v0, $v0, %lo(D_801CFD68)
    /* 5BE3C 8014DA3C 00800334 */  ori        $v1, $zero, 0x8000
    /* 5BE40 8014DA40 21184300 */  addu       $v1, $v0, $v1
    /* 5BE44 8014DA44 1400BFAF */  sw         $ra, 0x14($sp)
    /* 5BE48 8014DA48 6A726494 */  lhu        $a0, 0x726A($v1)
    /* 5BE4C 8014DA4C 40200224 */  addiu      $v0, $zero, 0x2040
    /* 5BE50 8014DA50 05008214 */  bne        $a0, $v0, .L8014DA68
    /* 5BE54 8014DA54 01001024 */   addiu     $s0, $zero, 0x1
    /* 5BE58 8014DA58 6C726294 */  lhu        $v0, 0x726C($v1)
    /* 5BE5C 8014DA5C 00000000 */  nop
    /* 5BE60 8014DA60 F0204238 */  xori       $v0, $v0, 0x20F0
    /* 5BE64 8014DA64 2B800200 */  sltu       $s0, $zero, $v0
  .L8014DA68:
    /* 5BE68 8014DA68 50D4030C */  jal        func_800F5140
    /* 5BE6C 8014DA6C 00000000 */   nop
    /* 5BE70 8014DA70 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5BE74 8014DA74 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5BE78 8014DA78 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5BE7C 8014DA7C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5BE80 8014DA80 00004394 */  lhu        $v1, 0x0($v0)
    /* 5BE84 8014DA84 4EF40434 */  ori        $a0, $zero, 0xF44E
    /* 5BE88 8014DA88 DDE3030C */  jal        func_800F8F74
    /* 5BE8C 8014DA8C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5BE90 8014DA90 53D9030C */  jal        func_800F654C
    /* 5BE94 8014DA94 01000424 */   addiu     $a0, $zero, 0x1
    /* 5BE98 8014DA98 62E0030C */  jal        func_800F8188
    /* 5BE9C 8014DA9C 61F20434 */   ori       $a0, $zero, 0xF261
    /* 5BEA0 8014DAA0 8CD9030C */  jal        func_800F6630
    /* 5BEA4 8014DAA4 02000424 */   addiu     $a0, $zero, 0x2
    /* 5BEA8 8014DAA8 62E0030C */  jal        func_800F8188
    /* 5BEAC 8014DAAC 4CF20434 */   ori       $a0, $zero, 0xF24C
    /* 5BEB0 8014DAB0 93E0030C */  jal        func_800F824C
    /* 5BEB4 8014DAB4 06000424 */   addiu     $a0, $zero, 0x6
    /* 5BEB8 8014DAB8 0F00043C */  lui        $a0, (0xFD5E0 >> 16)
    /* 5BEBC 8014DABC 1ADB030C */  jal        func_800F6C68
    /* 5BEC0 8014DAC0 E0D58434 */   ori       $a0, $a0, (0xFD5E0 & 0xFFFF)
    /* 5BEC4 8014DAC4 93E0030C */  jal        func_800F824C
    /* 5BEC8 8014DAC8 02000424 */   addiu     $a0, $zero, 0x2
    /* 5BECC 8014DACC 0F00043C */  lui        $a0, (0xFD5E1 >> 16)
    /* 5BED0 8014DAD0 1ADB030C */  jal        func_800F6C68
    /* 5BED4 8014DAD4 E1D58434 */   ori       $a0, $a0, (0xFD5E1 & 0xFFFF)
    /* 5BED8 8014DAD8 93E0030C */  jal        func_800F824C
    /* 5BEDC 8014DADC 03000424 */   addiu     $a0, $zero, 0x3
    /* 5BEE0 8014DAE0 53D9030C */  jal        func_800F654C
    /* 5BEE4 8014DAE4 0F000424 */   addiu     $a0, $zero, 0xF
    /* 5BEE8 8014DAE8 93E0030C */  jal        func_800F824C
    /* 5BEEC 8014DAEC 04000424 */   addiu     $a0, $zero, 0x4
    /* 5BEF0 8014DAF0 62E0030C */  jal        func_800F8188
    /* 5BEF4 8014DAF4 80F20434 */   ori       $a0, $zero, 0xF280
    /* 5BEF8 8014DAF8 8CD9030C */  jal        func_800F6630
    /* 5BEFC 8014DAFC 01000424 */   addiu     $a0, $zero, 0x1
    /* 5BF00 8014DB00 C1CE030C */  jal        func_800F3B04
    /* 5BF04 8014DB04 4CF20434 */   ori       $a0, $zero, 0xF24C
    /* 5BF08 8014DB08 31DE030C */  jal        func_800F78C4
    /* 5BF0C 8014DB0C 21204000 */   addu      $a0, $v0, $zero
    /* 5BF10 8014DB10 46DE030C */  jal        func_800F7918
    /* 5BF14 8014DB14 02020424 */   addiu     $a0, $zero, 0x202
    /* 5BF18 8014DB18 05004014 */  bnez       $v0, .L8014DB30
    /* 5BF1C 8014DB1C 00000000 */   nop
    /* 5BF20 8014DB20 E338050C */  jal        func_8014E38C
    /* 5BF24 8014DB24 00000000 */   nop
    /* 5BF28 8014DB28 DF380508 */  j          .L8014E37C
    /* 5BF2C 8014DB2C 00000000 */   nop
  .L8014DB30:
    /* 5BF30 8014DB30 8CD9030C */  jal        func_800F6630
    /* 5BF34 8014DB34 21200000 */   addu      $a0, $zero, $zero
    /* 5BF38 8014DB38 62E0030C */  jal        func_800F8188
    /* 5BF3C 8014DB3C 85F40434 */   ori       $a0, $zero, 0xF485
    /* 5BF40 8014DB40 A035050C */  jal        func_8014D680
    /* 5BF44 8014DB44 00000000 */   nop
    /* 5BF48 8014DB48 9CDC030C */  jal        func_800F7270
    /* 5BF4C 8014DB4C 21200000 */   addu      $a0, $zero, $zero
    /* 5BF50 8014DB50 40E3030C */  jal        func_800F8D00
    /* 5BF54 8014DB54 79F20434 */   ori       $a0, $zero, 0xF279
    /* 5BF58 8014DB58 8CD9030C */  jal        func_800F6630
    /* 5BF5C 8014DB5C 01000424 */   addiu     $a0, $zero, 0x1
    /* 5BF60 8014DB60 62E0030C */  jal        func_800F8188
    /* 5BF64 8014DB64 81F20434 */   ori       $a0, $zero, 0xF281
    /* 5BF68 8014DB68 62E0030C */  jal        func_800F8188
    /* 5BF6C 8014DB6C 84F20434 */   ori       $a0, $zero, 0xF284
    /* 5BF70 8014DB70 59D9030C */  jal        func_800F6564
    /* 5BF74 8014DB74 D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 5BF78 8014DB78 5DD5030C */  jal        func_800F5574
    /* 5BF7C 8014DB7C 02000424 */   addiu     $a0, $zero, 0x2
    /* 5BF80 8014DB80 F5D4030C */  jal        func_800F53D4
    /* 5BF84 8014DB84 00000000 */   nop
    /* 5BF88 8014DB88 07004014 */  bnez       $v0, .L8014DBA8
    /* 5BF8C 8014DB8C 00000000 */   nop
    /* 5BF90 8014DB90 5DD5030C */  jal        func_800F5574
    /* 5BF94 8014DB94 03000424 */   addiu     $a0, $zero, 0x3
    /* 5BF98 8014DB98 F5D4030C */  jal        func_800F53D4
    /* 5BF9C 8014DB9C 00000000 */   nop
    /* 5BFA0 8014DBA0 05004010 */  beqz       $v0, .L8014DBB8
    /* 5BFA4 8014DBA4 00000000 */   nop
  .L8014DBA8:
    /* 5BFA8 8014DBA8 53D9030C */  jal        func_800F654C
    /* 5BFAC 8014DBAC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5BFB0 8014DBB0 62E0030C */  jal        func_800F8188
    /* 5BFB4 8014DBB4 7AF20434 */   ori       $a0, $zero, 0xF27A
  .L8014DBB8:
    /* 5BFB8 8014DBB8 9CDC030C */  jal        func_800F7270
    /* 5BFBC 8014DBBC 02000424 */   addiu     $a0, $zero, 0x2
    /* 5BFC0 8014DBC0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5BFC4 8014DBC4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5BFC8 8014DBC8 00000000 */  nop
    /* 5BFCC 8014DBCC 00006294 */  lhu        $v0, 0x0($v1)
    /* 5BFD0 8014DBD0 7CF20434 */  ori        $a0, $zero, 0xF27C
    /* 5BFD4 8014DBD4 02004224 */  addiu      $v0, $v0, 0x2
    /* 5BFD8 8014DBD8 40E3030C */  jal        func_800F8D00
    /* 5BFDC 8014DBDC 000062A4 */   sh        $v0, 0x0($v1)
    /* 5BFE0 8014DBE0 AADB030C */  jal        func_800F6EA8
    /* 5BFE4 8014DBE4 02000424 */   addiu     $a0, $zero, 0x2
    /* 5BFE8 8014DBE8 92D0030C */  jal        func_800F4248
    /* 5BFEC 8014DBEC F0000424 */   addiu     $a0, $zero, 0xF0
    /* 5BFF0 8014DBF0 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 5BFF4 8014DBF4 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 5BFF8 8014DBF8 00000000 */  nop
    /* 5BFFC 8014DBFC 0000A290 */  lbu        $v0, 0x0($a1)
    /* 5C000 8014DC00 0D00043C */  lui        $a0, (0xDFF3E >> 16)
    /* 5C004 8014DC04 C2100200 */  srl        $v0, $v0, 3
    /* 5C008 8014DC08 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 5C00C 8014DC0C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5C010 8014DC10 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5C014 8014DC14 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5C018 8014DC18 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5C01C 8014DC1C 00006294 */  lhu        $v0, 0x0($v1)
    /* 5C020 8014DC20 3EFF8434 */  ori        $a0, $a0, (0xDFF3E & 0xFFFF)
    /* 5C024 8014DC24 1ADB030C */  jal        func_800F6C68
    /* 5C028 8014DC28 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 5C02C 8014DC2C 62E0030C */  jal        func_800F8188
    /* 5C030 8014DC30 4DF20434 */   ori       $a0, $zero, 0xF24D
    /* 5C034 8014DC34 0D00043C */  lui        $a0, (0xDFF3F >> 16)
    /* 5C038 8014DC38 1ADB030C */  jal        func_800F6C68
    /* 5C03C 8014DC3C 3FFF8434 */   ori       $a0, $a0, (0xDFF3F & 0xFFFF)
    /* 5C040 8014DC40 62E0030C */  jal        func_800F8188
    /* 5C044 8014DC44 4EF20434 */   ori       $a0, $zero, 0xF24E
    /* 5C048 8014DC48 AADB030C */  jal        func_800F6EA8
    /* 5C04C 8014DC4C 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C050 8014DC50 92D0030C */  jal        func_800F4248
    /* 5C054 8014DC54 0F000424 */   addiu     $a0, $zero, 0xF
    /* 5C058 8014DC58 7AD8030C */  jal        func_800F61E8
    /* 5C05C 8014DC5C 00000000 */   nop
    /* 5C060 8014DC60 62E0030C */  jal        func_800F8188
    /* 5C064 8014DC64 7BF20434 */   ori       $a0, $zero, 0xF27B
    /* 5C068 8014DC68 8932050C */  jal        func_8014CA24
    /* 5C06C 8014DC6C 00000000 */   nop
    /* 5C070 8014DC70 40DD030C */  jal        func_800F7500
    /* 5C074 8014DC74 21200000 */   addu      $a0, $zero, $zero
  .L8014DC78:
    /* 5C078 8014DC78 B6D9030C */  jal        func_800F66D8
    /* 5C07C 8014DC7C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5C080 8014DC80 04D5030C */  jal        func_800F5410
    /* 5C084 8014DC84 00000000 */   nop
    /* 5C088 8014DC88 0FCF030C */  jal        func_800F3C3C
    /* 5C08C 8014DC8C 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 5C090 8014DC90 CECF030C */  jal        func_800F3F38
    /* 5C094 8014DC94 21204000 */   addu      $a0, $v0, $zero
    /* 5C098 8014DC98 58E2030C */  jal        func_800F8960
    /* 5C09C 8014DC9C 51F20434 */   ori       $a0, $zero, 0xF251
    /* 5C0A0 8014DCA0 EFD8030C */  jal        func_800F63BC
    /* 5C0A4 8014DCA4 00000000 */   nop
    /* 5C0A8 8014DCA8 B6D9030C */  jal        func_800F66D8
    /* 5C0AC 8014DCAC 08000424 */   addiu     $a0, $zero, 0x8
    /* 5C0B0 8014DCB0 04D5030C */  jal        func_800F5410
    /* 5C0B4 8014DCB4 00000000 */   nop
    /* 5C0B8 8014DCB8 0FCF030C */  jal        func_800F3C3C
    /* 5C0BC 8014DCBC 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 5C0C0 8014DCC0 CECF030C */  jal        func_800F3F38
    /* 5C0C4 8014DCC4 21204000 */   addu      $a0, $v0, $zero
    /* 5C0C8 8014DCC8 58E2030C */  jal        func_800F8960
    /* 5C0CC 8014DCCC 51F20434 */   ori       $a0, $zero, 0xF251
    /* 5C0D0 8014DCD0 EFD8030C */  jal        func_800F63BC
    /* 5C0D4 8014DCD4 00000000 */   nop
    /* 5C0D8 8014DCD8 A4D6030C */  jal        func_800F5A90
    /* 5C0DC 8014DCDC 10000424 */   addiu     $a0, $zero, 0x10
    /* 5C0E0 8014DCE0 F5D4030C */  jal        func_800F53D4
    /* 5C0E4 8014DCE4 00000000 */   nop
    /* 5C0E8 8014DCE8 E3FF4010 */  beqz       $v0, .L8014DC78
    /* 5C0EC 8014DCEC 00000000 */   nop
    /* 5C0F0 8014DCF0 77DC030C */  jal        func_800F71DC
    /* 5C0F4 8014DCF4 21200000 */   addu      $a0, $zero, $zero
  .L8014DCF8:
    /* 5C0F8 8014DCF8 3BE4030C */  jal        func_800F90EC
    /* 5C0FC 8014DCFC 68F20434 */   ori       $a0, $zero, 0xF268
    /* 5C100 8014DD00 D9D8030C */  jal        func_800F6364
    /* 5C104 8014DD04 00000000 */   nop
    /* 5C108 8014DD08 56D6030C */  jal        func_800F5958
    /* 5C10C 8014DD0C 10000424 */   addiu     $a0, $zero, 0x10
    /* 5C110 8014DD10 F5D4030C */  jal        func_800F53D4
    /* 5C114 8014DD14 00000000 */   nop
    /* 5C118 8014DD18 F7FF4010 */  beqz       $v0, .L8014DCF8
    /* 5C11C 8014DD1C 00000000 */   nop
    /* 5C120 8014DD20 F133050C */  jal        func_8014CFC4
    /* 5C124 8014DD24 00000000 */   nop
    /* 5C128 8014DD28 40DD030C */  jal        func_800F7500
    /* 5C12C 8014DD2C 01000424 */   addiu     $a0, $zero, 0x1
    /* 5C130 8014DD30 FFD9030C */  jal        func_800F67FC
    /* 5C134 8014DD34 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C138 8014DD38 92D0030C */  jal        func_800F4248
    /* 5C13C 8014DD3C 18000424 */   addiu     $a0, $zero, 0x18
    /* 5C140 8014DD40 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 5C144 8014DD44 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 5C148 8014DD48 00000000 */  nop
    /* 5C14C 8014DD4C 0000A290 */  lbu        $v0, 0x0($a1)
    /* 5C150 8014DD50 0D00043C */  lui        $a0, (0xDFFD9 >> 16)
    /* 5C154 8014DD54 C2100200 */  srl        $v0, $v0, 3
    /* 5C158 8014DD58 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 5C15C 8014DD5C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5C160 8014DD60 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5C164 8014DD64 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5C168 8014DD68 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5C16C 8014DD6C 00006294 */  lhu        $v0, 0x0($v1)
    /* 5C170 8014DD70 D9FF8434 */  ori        $a0, $a0, (0xDFFD9 & 0xFFFF)
    /* 5C174 8014DD74 1ADB030C */  jal        func_800F6C68
    /* 5C178 8014DD78 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 5C17C 8014DD7C 62E0030C */  jal        func_800F8188
    /* 5C180 8014DD80 9FF20434 */   ori       $a0, $zero, 0xF29F
    /* 5C184 8014DD84 40DD030C */  jal        func_800F7500
    /* 5C188 8014DD88 01000424 */   addiu     $a0, $zero, 0x1
    /* 5C18C 8014DD8C FFD9030C */  jal        func_800F67FC
    /* 5C190 8014DD90 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C194 8014DD94 0DD9030C */  jal        func_800F6434
    /* 5C198 8014DD98 80800434 */   ori       $a0, $zero, 0x8080
    /* 5C19C 8014DD9C 03004014 */  bnez       $v0, .L8014DDAC
    /* 5C1A0 8014DDA0 00000000 */   nop
    /* 5C1A4 8014DDA4 DDE3030C */  jal        func_800F8F74
    /* 5C1A8 8014DDA8 61F20434 */   ori       $a0, $zero, 0xF261
  .L8014DDAC:
    /* 5C1AC 8014DDAC FFD9030C */  jal        func_800F67FC
    /* 5C1B0 8014DDB0 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C1B4 8014DDB4 92D0030C */  jal        func_800F4248
    /* 5C1B8 8014DDB8 07000424 */   addiu     $a0, $zero, 0x7
    /* 5C1BC 8014DDBC 62E0030C */  jal        func_800F8188
    /* 5C1C0 8014DDC0 49F20434 */   ori       $a0, $zero, 0xF249
    /* 5C1C4 8014DDC4 53D9030C */  jal        func_800F654C
    /* 5C1C8 8014DDC8 10000424 */   addiu     $a0, $zero, 0x10
    /* 5C1CC 8014DDCC 62E0030C */  jal        func_800F8188
    /* 5C1D0 8014DDD0 4FF20434 */   ori       $a0, $zero, 0xF24F
    /* 5C1D4 8014DDD4 62E0030C */  jal        func_800F8188
    /* 5C1D8 8014DDD8 50F20434 */   ori       $a0, $zero, 0xF250
    /* 5C1DC 8014DDDC 2B23050C */  jal        func_80148CAC
    /* 5C1E0 8014DDE0 00000000 */   nop
    /* 5C1E4 8014DDE4 DDE3030C */  jal        func_800F8F74
    /* 5C1E8 8014DDE8 7EF20434 */   ori       $a0, $zero, 0xF27E
    /* 5C1EC 8014DDEC DDE3030C */  jal        func_800F8F74
    /* 5C1F0 8014DDF0 7FF20434 */   ori       $a0, $zero, 0xF27F
    /* 5C1F4 8014DDF4 DDE3030C */  jal        func_800F8F74
    /* 5C1F8 8014DDF8 4AF20434 */   ori       $a0, $zero, 0xF24A
    /* 5C1FC 8014DDFC DDE3030C */  jal        func_800F8F74
    /* 5C200 8014DE00 4BF20434 */   ori       $a0, $zero, 0xF24B
    /* 5C204 8014DE04 2034050C */  jal        func_8014D080
    /* 5C208 8014DE08 00000000 */   nop
    /* 5C20C 8014DE0C 77DC030C */  jal        func_800F71DC
    /* 5C210 8014DE10 21200000 */   addu      $a0, $zero, $zero
    /* 5C214 8014DE14 40E3030C */  jal        func_800F8D00
    /* 5C218 8014DE18 81F20434 */   ori       $a0, $zero, 0xF281
    /* 5C21C 8014DE1C 01000224 */  addiu      $v0, $zero, 0x1
  .L8014DE20:
    /* 5C220 8014DE20 0C000212 */  beq        $s0, $v0, .L8014DE54
    /* 5C224 8014DE24 0200022A */   slti      $v0, $s0, 0x2
    /* 5C228 8014DE28 05004010 */  beqz       $v0, .L8014DE40
    /* 5C22C 8014DE2C 02000224 */   addiu     $v0, $zero, 0x2
    /* 5C230 8014DE30 07000012 */  beqz       $s0, .L8014DE50
    /* 5C234 8014DE34 00000000 */   nop
    /* 5C238 8014DE38 9A370508 */  j          .L8014DE68
    /* 5C23C 8014DE3C 00000000 */   nop
  .L8014DE40:
    /* 5C240 8014DE40 08000212 */  beq        $s0, $v0, .L8014DE64
    /* 5C244 8014DE44 00000000 */   nop
    /* 5C248 8014DE48 9A370508 */  j          .L8014DE68
    /* 5C24C 8014DE4C 00000000 */   nop
  .L8014DE50:
    /* 5C250 8014DE50 02001024 */  addiu      $s0, $zero, 0x2
  .L8014DE54:
    /* 5C254 8014DE54 67C9010C */  jal        func_8007259C
    /* 5C258 8014DE58 00000000 */   nop
    /* 5C25C 8014DE5C 9A370508 */  j          .L8014DE68
    /* 5C260 8014DE60 00000000 */   nop
  .L8014DE64:
    /* 5C264 8014DE64 21800000 */  addu       $s0, $zero, $zero
  .L8014DE68:
    /* 5C268 8014DE68 6336050C */  jal        func_8014D98C
    /* 5C26C 8014DE6C 00000000 */   nop
    /* 5C270 8014DE70 59D9030C */  jal        func_800F6564
    /* 5C274 8014DE74 7EF20434 */   ori       $a0, $zero, 0xF27E
    /* 5C278 8014DE78 A0D0030C */  jal        func_800F4280
    /* 5C27C 8014DE7C 9FF20434 */   ori       $a0, $zero, 0xF29F
    /* 5C280 8014DE80 48D0030C */  jal        func_800F4120
    /* 5C284 8014DE84 02020424 */   addiu     $a0, $zero, 0x202
    /* 5C288 8014DE88 0B004014 */  bnez       $v0, .L8014DEB8
    /* 5C28C 8014DE8C 00000000 */   nop
    /* 5C290 8014DE90 59D9030C */  jal        func_800F6564
    /* 5C294 8014DE94 A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 5C298 8014DE98 5DD5030C */  jal        func_800F5574
    /* 5C29C 8014DE9C 03000424 */   addiu     $a0, $zero, 0x3
    /* 5C2A0 8014DEA0 F5D4030C */  jal        func_800F53D4
    /* 5C2A4 8014DEA4 00000000 */   nop
    /* 5C2A8 8014DEA8 03004010 */  beqz       $v0, .L8014DEB8
    /* 5C2AC 8014DEAC 00000000 */   nop
    /* 5C2B0 8014DEB0 CFF9040C */  jal        func_8013E73C
    /* 5C2B4 8014DEB4 00000000 */   nop
  .L8014DEB8:
    /* 5C2B8 8014DEB8 59D9030C */  jal        func_800F6564
    /* 5C2BC 8014DEBC A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 5C2C0 8014DEC0 5DD5030C */  jal        func_800F5574
    /* 5C2C4 8014DEC4 04000424 */   addiu     $a0, $zero, 0x4
    /* 5C2C8 8014DEC8 F5D4030C */  jal        func_800F53D4
    /* 5C2CC 8014DECC 00000000 */   nop
    /* 5C2D0 8014DED0 03004010 */  beqz       $v0, .L8014DEE0
    /* 5C2D4 8014DED4 00000000 */   nop
    /* 5C2D8 8014DED8 2316050C */  jal        func_8014588C
    /* 5C2DC 8014DEDC 00000000 */   nop
  .L8014DEE0:
    /* 5C2E0 8014DEE0 59D9030C */  jal        func_800F6564
    /* 5C2E4 8014DEE4 81F20434 */   ori       $a0, $zero, 0xF281
    /* 5C2E8 8014DEE8 0DD9030C */  jal        func_800F6434
    /* 5C2EC 8014DEEC 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C2F0 8014DEF0 23004014 */  bnez       $v0, .L8014DF80
    /* 5C2F4 8014DEF4 00000000 */   nop
    /* 5C2F8 8014DEF8 5DD5030C */  jal        func_800F5574
    /* 5C2FC 8014DEFC 03000424 */   addiu     $a0, $zero, 0x3
    /* 5C300 8014DF00 F5D4030C */  jal        func_800F53D4
    /* 5C304 8014DF04 00000000 */   nop
    /* 5C308 8014DF08 1D004014 */  bnez       $v0, .L8014DF80
    /* 5C30C 8014DF0C 00000000 */   nop
    /* 5C310 8014DF10 5DD5030C */  jal        func_800F5574
    /* 5C314 8014DF14 01000424 */   addiu     $a0, $zero, 0x1
    /* 5C318 8014DF18 F5D4030C */  jal        func_800F53D4
    /* 5C31C 8014DF1C 00000000 */   nop
    /* 5C320 8014DF20 05004014 */  bnez       $v0, .L8014DF38
    /* 5C324 8014DF24 00000000 */   nop
    /* 5C328 8014DF28 53D9030C */  jal        func_800F654C
    /* 5C32C 8014DF2C 04000424 */   addiu     $a0, $zero, 0x4
    /* 5C330 8014DF30 D0370508 */  j          .L8014DF40
    /* 5C334 8014DF34 00000000 */   nop
  .L8014DF38:
    /* 5C338 8014DF38 53D9030C */  jal        func_800F654C
    /* 5C33C 8014DF3C 02000424 */   addiu     $a0, $zero, 0x2
  .L8014DF40:
    /* 5C340 8014DF40 93E0030C */  jal        func_800F824C
    /* 5C344 8014DF44 21200000 */   addu      $a0, $zero, $zero
    /* 5C348 8014DF48 59D9030C */  jal        func_800F6564
    /* 5C34C 8014DF4C 13180424 */   addiu     $a0, $zero, 0x1813
    /* 5C350 8014DF50 DCD0030C */  jal        func_800F4370
    /* 5C354 8014DF54 21200000 */   addu      $a0, $zero, $zero
    /* 5C358 8014DF58 48D0030C */  jal        func_800F4120
    /* 5C35C 8014DF5C 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C360 8014DF60 05004014 */  bnez       $v0, .L8014DF78
    /* 5C364 8014DF64 00000000 */   nop
    /* 5C368 8014DF68 E534050C */  jal        func_8014D394
    /* 5C36C 8014DF6C 00000000 */   nop
    /* 5C370 8014DF70 E0370508 */  j          .L8014DF80
    /* 5C374 8014DF74 00000000 */   nop
  .L8014DF78:
    /* 5C378 8014DF78 C734050C */  jal        func_8014D31C
    /* 5C37C 8014DF7C 00000000 */   nop
  .L8014DF80:
    /* 5C380 8014DF80 59D9030C */  jal        func_800F6564
    /* 5C384 8014DF84 D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 5C388 8014DF88 0DD9030C */  jal        func_800F6434
    /* 5C38C 8014DF8C 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C390 8014DF90 2E004014 */  bnez       $v0, .L8014E04C
    /* 5C394 8014DF94 00000000 */   nop
    /* 5C398 8014DF98 5DD5030C */  jal        func_800F5574
    /* 5C39C 8014DF9C 01000424 */   addiu     $a0, $zero, 0x1
    /* 5C3A0 8014DFA0 F5D4030C */  jal        func_800F53D4
    /* 5C3A4 8014DFA4 00000000 */   nop
    /* 5C3A8 8014DFA8 20004010 */  beqz       $v0, .L8014E02C
    /* 5C3AC 8014DFAC 00000000 */   nop
    /* 5C3B0 8014DFB0 59D9030C */  jal        func_800F6564
    /* 5C3B4 8014DFB4 7EF20434 */   ori       $a0, $zero, 0xF27E
    /* 5C3B8 8014DFB8 92D0030C */  jal        func_800F4248
    /* 5C3BC 8014DFBC 07000424 */   addiu     $a0, $zero, 0x7
    /* 5C3C0 8014DFC0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5C3C4 8014DFC4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5C3C8 8014DFC8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5C3CC 8014DFCC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5C3D0 8014DFD0 00004394 */  lhu        $v1, 0x0($v0)
    /* 5C3D4 8014DFD4 79F20434 */  ori        $a0, $zero, 0xF279
    /* 5C3D8 8014DFD8 59D9030C */  jal        func_800F6564
    /* 5C3DC 8014DFDC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5C3E0 8014DFE0 0DD9030C */  jal        func_800F6434
    /* 5C3E4 8014DFE4 02020424 */   addiu     $a0, $zero, 0x202
    /* 5C3E8 8014DFE8 0C004014 */  bnez       $v0, .L8014E01C
    /* 5C3EC 8014DFEC 00000000 */   nop
    /* 5C3F0 8014DFF0 0D00043C */  lui        $a0, (0xDFFDD >> 16)
    /* 5C3F4 8014DFF4 1ADB030C */  jal        func_800F6C68
    /* 5C3F8 8014DFF8 DDFF8434 */   ori       $a0, $a0, (0xDFFDD & 0xFFFF)
    /* 5C3FC 8014DFFC 62E0030C */  jal        func_800F8188
    /* 5C400 8014E000 68F20434 */   ori       $a0, $zero, 0xF268
    /* 5C404 8014E004 C533050C */  jal        func_8014CF14
    /* 5C408 8014E008 00000000 */   nop
    /* 5C40C 8014E00C 833A050C */  jal        func_8014EA0C
    /* 5C410 8014E010 00000000 */   nop
    /* 5C414 8014E014 13380508 */  j          .L8014E04C
    /* 5C418 8014E018 00000000 */   nop
  .L8014E01C:
    /* 5C41C 8014E01C 3535050C */  jal        func_8014D4D4
    /* 5C420 8014E020 00000000 */   nop
    /* 5C424 8014E024 13380508 */  j          .L8014E04C
    /* 5C428 8014E028 00000000 */   nop
  .L8014E02C:
    /* 5C42C 8014E02C 5DD5030C */  jal        func_800F5574
    /* 5C430 8014E030 05000424 */   addiu     $a0, $zero, 0x5
    /* 5C434 8014E034 F5D4030C */  jal        func_800F53D4
    /* 5C438 8014E038 00000000 */   nop
    /* 5C43C 8014E03C 03004010 */  beqz       $v0, .L8014E04C
    /* 5C440 8014E040 00000000 */   nop
    /* 5C444 8014E044 6807050C */  jal        func_80141DA0
    /* 5C448 8014E048 00000000 */   nop
  .L8014E04C:
    /* 5C44C 8014E04C 90D8030C */  jal        func_800F6240
    /* 5C450 8014E050 7EF20434 */   ori       $a0, $zero, 0xF27E
  .L8014E054:
    /* 5C454 8014E054 4DDD030C */  jal        func_800F7534
    /* 5C458 8014E058 7CF20434 */   ori       $a0, $zero, 0xF27C
    /* 5C45C 8014E05C AFE3030C */  jal        func_800F8EBC
    /* 5C460 8014E060 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C464 8014E064 59D9030C */  jal        func_800F6564
    /* 5C468 8014E068 80F20434 */   ori       $a0, $zero, 0xF280
    /* 5C46C 8014E06C 93E0030C */  jal        func_800F824C
    /* 5C470 8014E070 04000424 */   addiu     $a0, $zero, 0x4
    /* 5C474 8014E074 59D9030C */  jal        func_800F6564
    /* 5C478 8014E078 7FF20434 */   ori       $a0, $zero, 0xF27F
    /* 5C47C 8014E07C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5C480 8014E080 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5C484 8014E084 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 5C488 8014E088 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 5C48C 8014E08C 00004394 */  lhu        $v1, 0x0($v0)
    /* 5C490 8014E090 02000424 */  addiu      $a0, $zero, 0x2
    /* 5C494 8014E094 FFD9030C */  jal        func_800F67FC
    /* 5C498 8014E098 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5C49C 8014E09C 5DD5030C */  jal        func_800F5574
    /* 5C4A0 8014E0A0 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5C4A4 8014E0A4 F5D4030C */  jal        func_800F53D4
    /* 5C4A8 8014E0A8 00000000 */   nop
    /* 5C4AC 8014E0AC 8F004014 */  bnez       $v0, .L8014E2EC
    /* 5C4B0 8014E0B0 00000000 */   nop
    /* 5C4B4 8014E0B4 FFD9030C */  jal        func_800F67FC
    /* 5C4B8 8014E0B8 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C4BC 8014E0BC 0DD9030C */  jal        func_800F6434
    /* 5C4C0 8014E0C0 80000424 */   addiu     $a0, $zero, 0x80
    /* 5C4C4 8014E0C4 71004010 */  beqz       $v0, .L8014E28C
    /* 5C4C8 8014E0C8 00000000 */   nop
    /* 5C4CC 8014E0CC 93E0030C */  jal        func_800F824C
    /* 5C4D0 8014E0D0 06000424 */   addiu     $a0, $zero, 0x6
    /* 5C4D4 8014E0D4 5DD5030C */  jal        func_800F5574
    /* 5C4D8 8014E0D8 88000424 */   addiu     $a0, $zero, 0x88
    /* 5C4DC 8014E0DC F5D4030C */  jal        func_800F53D4
    /* 5C4E0 8014E0E0 00000000 */   nop
    /* 5C4E4 8014E0E4 0D004010 */  beqz       $v0, .L8014E11C
    /* 5C4E8 8014E0E8 00000000 */   nop
    /* 5C4EC 8014E0EC 90D8030C */  jal        func_800F6240
    /* 5C4F0 8014E0F0 7FF20434 */   ori       $a0, $zero, 0xF27F
    /* 5C4F4 8014E0F4 EFD8030C */  jal        func_800F63BC
    /* 5C4F8 8014E0F8 00000000 */   nop
    /* 5C4FC 8014E0FC FFD9030C */  jal        func_800F67FC
    /* 5C500 8014E100 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C504 8014E104 90D8030C */  jal        func_800F6240
    /* 5C508 8014E108 4EF40434 */   ori       $a0, $zero, 0xF44E
    /* 5C50C 8014E10C E035050C */  jal        func_8014D780
    /* 5C510 8014E110 00000000 */   nop
    /* 5C514 8014E114 9F380508 */  j          .L8014E27C
    /* 5C518 8014E118 00000000 */   nop
  .L8014E11C:
    /* 5C51C 8014E11C 92D0030C */  jal        func_800F4248
    /* 5C520 8014E120 08000424 */   addiu     $a0, $zero, 0x8
    /* 5C524 8014E124 48D0030C */  jal        func_800F4120
    /* 5C528 8014E128 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C52C 8014E12C 23004014 */  bnez       $v0, .L8014E1BC
    /* 5C530 8014E130 00000000 */   nop
    /* 5C534 8014E134 92D0030C */  jal        func_800F4248
    /* 5C538 8014E138 04000424 */   addiu     $a0, $zero, 0x4
    /* 5C53C 8014E13C 48D0030C */  jal        func_800F4120
    /* 5C540 8014E140 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C544 8014E144 05004014 */  bnez       $v0, .L8014E15C
    /* 5C548 8014E148 00000000 */   nop
    /* 5C54C 8014E14C C734050C */  jal        func_8014D31C
    /* 5C550 8014E150 00000000 */   nop
    /* 5C554 8014E154 9F380508 */  j          .L8014E27C
    /* 5C558 8014E158 00000000 */   nop
  .L8014E15C:
    /* 5C55C 8014E15C 8CD9030C */  jal        func_800F6630
    /* 5C560 8014E160 06000424 */   addiu     $a0, $zero, 0x6
    /* 5C564 8014E164 80E4030C */  jal        func_800F9200
    /* 5C568 8014E168 00000000 */   nop
    /* 5C56C 8014E16C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5C570 8014E170 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5C574 8014E174 00000000 */  nop
    /* 5C578 8014E178 00006290 */  lbu        $v0, 0x0($v1)
    /* 5C57C 8014E17C 07000424 */  addiu      $a0, $zero, 0x7
    /* 5C580 8014E180 02110200 */  srl        $v0, $v0, 4
    /* 5C584 8014E184 92D0030C */  jal        func_800F4248
    /* 5C588 8014E188 000062A0 */   sb        $v0, 0x0($v1)
    /* 5C58C 8014E18C 5334050C */  jal        func_8014D14C
    /* 5C590 8014E190 00000000 */   nop
    /* 5C594 8014E194 F7E4030C */  jal        func_800F93DC
    /* 5C598 8014E198 00000000 */   nop
    /* 5C59C 8014E19C 92D0030C */  jal        func_800F4248
    /* 5C5A0 8014E1A0 03000424 */   addiu     $a0, $zero, 0x3
    /* 5C5A4 8014E1A4 62E0030C */  jal        func_800F8188
    /* 5C5A8 8014E1A8 81F20434 */   ori       $a0, $zero, 0xF281
    /* 5C5AC 8014E1AC E534050C */  jal        func_8014D394
    /* 5C5B0 8014E1B0 00000000 */   nop
    /* 5C5B4 8014E1B4 9F380508 */  j          .L8014E27C
    /* 5C5B8 8014E1B8 00000000 */   nop
  .L8014E1BC:
    /* 5C5BC 8014E1BC 8CD9030C */  jal        func_800F6630
    /* 5C5C0 8014E1C0 06000424 */   addiu     $a0, $zero, 0x6
    /* 5C5C4 8014E1C4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5C5C8 8014E1C8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5C5CC 8014E1CC 00000000 */  nop
    /* 5C5D0 8014E1D0 00006290 */  lbu        $v0, 0x0($v1)
    /* 5C5D4 8014E1D4 07000424 */  addiu      $a0, $zero, 0x7
    /* 5C5D8 8014E1D8 02110200 */  srl        $v0, $v0, 4
    /* 5C5DC 8014E1DC 92D0030C */  jal        func_800F4248
    /* 5C5E0 8014E1E0 000062A0 */   sb        $v0, 0x0($v1)
    /* 5C5E4 8014E1E4 50D4030C */  jal        func_800F5140
    /* 5C5E8 8014E1E8 00000000 */   nop
    /* 5C5EC 8014E1EC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5C5F0 8014E1F0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5C5F4 8014E1F4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5C5F8 8014E1F8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5C5FC 8014E1FC 00004394 */  lhu        $v1, 0x0($v0)
    /* 5C600 8014E200 06000424 */  addiu      $a0, $zero, 0x6
    /* 5C604 8014E204 8CD9030C */  jal        func_800F6630
    /* 5C608 8014E208 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5C60C 8014E20C 92D0030C */  jal        func_800F4248
    /* 5C610 8014E210 07000424 */   addiu     $a0, $zero, 0x7
    /* 5C614 8014E214 7AD8030C */  jal        func_800F61E8
    /* 5C618 8014E218 00000000 */   nop
    /* 5C61C 8014E21C 93E0030C */  jal        func_800F824C
    /* 5C620 8014E220 08000424 */   addiu     $a0, $zero, 0x8
    /* 5C624 8014E224 B93A050C */  jal        func_8014EAE4
    /* 5C628 8014E228 00000000 */   nop
    /* 5C62C 8014E22C 59D9030C */  jal        func_800F6564
    /* 5C630 8014E230 4AF20434 */   ori       $a0, $zero, 0xF24A
    /* 5C634 8014E234 04D5030C */  jal        func_800F5410
    /* 5C638 8014E238 00000000 */   nop
    /* 5C63C 8014E23C 0FCF030C */  jal        func_800F3C3C
    /* 5C640 8014E240 06000424 */   addiu     $a0, $zero, 0x6
    /* 5C644 8014E244 CECF030C */  jal        func_800F3F38
    /* 5C648 8014E248 21204000 */   addu      $a0, $v0, $zero
    /* 5C64C 8014E24C 62E0030C */  jal        func_800F8188
    /* 5C650 8014E250 4AF20434 */   ori       $a0, $zero, 0xF24A
    /* 5C654 8014E254 59D9030C */  jal        func_800F6564
    /* 5C658 8014E258 4BF20434 */   ori       $a0, $zero, 0xF24B
    /* 5C65C 8014E25C 04D5030C */  jal        func_800F5410
    /* 5C660 8014E260 00000000 */   nop
    /* 5C664 8014E264 0FCF030C */  jal        func_800F3C3C
    /* 5C668 8014E268 07000424 */   addiu     $a0, $zero, 0x7
    /* 5C66C 8014E26C CECF030C */  jal        func_800F3F38
    /* 5C670 8014E270 21204000 */   addu      $a0, $v0, $zero
    /* 5C674 8014E274 62E0030C */  jal        func_800F8188
    /* 5C678 8014E278 4BF20434 */   ori       $a0, $zero, 0xF24B
  .L8014E27C:
    /* 5C67C 8014E27C 90D8030C */  jal        func_800F6240
    /* 5C680 8014E280 7FF20434 */   ori       $a0, $zero, 0xF27F
    /* 5C684 8014E284 15380508 */  j          .L8014E054
    /* 5C688 8014E288 00000000 */   nop
  .L8014E28C:
    /* 5C68C 8014E28C 92D0030C */  jal        func_800F4248
    /* 5C690 8014E290 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 5C694 8014E294 62E0030C */  jal        func_800F8188
    /* 5C698 8014E298 48F20434 */   ori       $a0, $zero, 0xF248
    /* 5C69C 8014E29C 59D9030C */  jal        func_800F6564
    /* 5C6A0 8014E2A0 7AF20434 */   ori       $a0, $zero, 0xF27A
    /* 5C6A4 8014E2A4 62E0030C */  jal        func_800F8188
    /* 5C6A8 8014E2A8 62F20434 */   ori       $a0, $zero, 0xF262
    /* 5C6AC 8014E2AC 53D9030C */  jal        func_800F654C
    /* 5C6B0 8014E2B0 01000424 */   addiu     $a0, $zero, 0x1
    /* 5C6B4 8014E2B4 62E0030C */  jal        func_800F8188
    /* 5C6B8 8014E2B8 47F20434 */   ori       $a0, $zero, 0xF247
    /* 5C6BC 8014E2BC 59D9030C */  jal        func_800F6564
    /* 5C6C0 8014E2C0 7EF20434 */   ori       $a0, $zero, 0xF27E
    /* 5C6C4 8014E2C4 A0D0030C */  jal        func_800F4280
    /* 5C6C8 8014E2C8 9FF20434 */   ori       $a0, $zero, 0xF29F
    /* 5C6CC 8014E2CC 48D0030C */  jal        func_800F4120
    /* 5C6D0 8014E2D0 02020424 */   addiu     $a0, $zero, 0x202
    /* 5C6D4 8014E2D4 D2FE4014 */  bnez       $v0, .L8014DE20
    /* 5C6D8 8014E2D8 01000224 */   addiu     $v0, $zero, 0x1
    /* 5C6DC 8014E2DC 90D8030C */  jal        func_800F6240
    /* 5C6E0 8014E2E0 7FF20434 */   ori       $a0, $zero, 0xF27F
    /* 5C6E4 8014E2E4 88370508 */  j          .L8014DE20
    /* 5C6E8 8014E2E8 01000224 */   addiu     $v0, $zero, 0x1
  .L8014E2EC:
    /* 5C6EC 8014E2EC DDE3030C */  jal        func_800F8F74
    /* 5C6F0 8014E2F0 7FF20434 */   ori       $a0, $zero, 0xF27F
    /* 5C6F4 8014E2F4 59D9030C */  jal        func_800F6564
    /* 5C6F8 8014E2F8 A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 5C6FC 8014E2FC 0DD9030C */  jal        func_800F6434
    /* 5C700 8014E300 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C704 8014E304 03004014 */  bnez       $v0, .L8014E314
    /* 5C708 8014E308 00000000 */   nop
    /* 5C70C 8014E30C 0939050C */  jal        func_8014E424
    /* 5C710 8014E310 00000000 */   nop
  .L8014E314:
    /* 5C714 8014E314 49D7030C */  jal        func_800F5D24
    /* 5C718 8014E318 7BF20434 */   ori       $a0, $zero, 0xF27B
    /* 5C71C 8014E31C E3D6030C */  jal        func_800F5B8C
    /* 5C720 8014E320 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C724 8014E324 BEFE4010 */  beqz       $v0, .L8014DE20
    /* 5C728 8014E328 01000224 */   addiu     $v0, $zero, 0x1
    /* 5C72C 8014E32C 59D9030C */  jal        func_800F6564
    /* 5C730 8014E330 85F20434 */   ori       $a0, $zero, 0xF285
    /* 5C734 8014E334 0DD9030C */  jal        func_800F6434
    /* 5C738 8014E338 02020424 */   addiu     $a0, $zero, 0x202
    /* 5C73C 8014E33C 03004014 */  bnez       $v0, .L8014E34C
    /* 5C740 8014E340 00000000 */   nop
    /* 5C744 8014E344 C734050C */  jal        func_8014D31C
    /* 5C748 8014E348 00000000 */   nop
  .L8014E34C:
    /* 5C74C 8014E34C E338050C */  jal        func_8014E38C
    /* 5C750 8014E350 00000000 */   nop
    /* 5C754 8014E354 59D9030C */  jal        func_800F6564
    /* 5C758 8014E358 84F20434 */   ori       $a0, $zero, 0xF284
    /* 5C75C 8014E35C 62E0030C */  jal        func_800F8188
    /* 5C760 8014E360 67F40434 */   ori       $a0, $zero, 0xF467
    /* 5C764 8014E364 396E020C */  jal        func_8009B8E4
    /* 5C768 8014E368 00000000 */   nop
    /* 5C76C 8014E36C C7E5030C */  jal        func_800F971C
    /* 5C770 8014E370 00000000 */   nop
    /* 5C774 8014E374 4035050C */  jal        func_8014D500
    /* 5C778 8014E378 00000000 */   nop
  .L8014E37C:
    /* 5C77C 8014E37C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 5C780 8014E380 1000B08F */  lw         $s0, 0x10($sp)
    /* 5C784 8014E384 0800E003 */  jr         $ra
    /* 5C788 8014E388 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014DA2C
