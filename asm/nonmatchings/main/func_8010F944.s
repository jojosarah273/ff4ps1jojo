nonmatching func_8010F944, 0x180

glabel func_8010F944
    /* 1DD44 8010F944 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1DD48 8010F948 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1DD4C 8010F94C 77DC030C */  jal        func_800F71DC
    /* 1DD50 8010F950 30000424 */   addiu     $a0, $zero, 0x30
    /* 1DD54 8010F954 5BE3030C */  jal        func_800F8D6C
    /* 1DD58 8010F958 EF000424 */   addiu     $a0, $zero, 0xEF
    /* 1DD5C 8010F95C 77DC030C */  jal        func_800F71DC
    /* 1DD60 8010F960 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 1DD64 8010F964 5BE3030C */  jal        func_800F8D6C
    /* 1DD68 8010F968 F1000424 */   addiu     $a0, $zero, 0xF1
    /* 1DD6C 8010F96C 77DC030C */  jal        func_800F71DC
    /* 1DD70 8010F970 00010424 */   addiu     $a0, $zero, 0x100
    /* 1DD74 8010F974 5BE3030C */  jal        func_800F8D6C
    /* 1DD78 8010F978 F3000424 */   addiu     $a0, $zero, 0xF3
    /* 1DD7C 8010F97C 77DC030C */  jal        func_800F71DC
    /* 1DD80 8010F980 E0FF0434 */   ori       $a0, $zero, 0xFFE0
    /* 1DD84 8010F984 5BE3030C */  jal        func_800F8D6C
    /* 1DD88 8010F988 F5000424 */   addiu     $a0, $zero, 0xF5
    /* 1DD8C 8010F98C 2A3F040C */  jal        func_8010FCA8
    /* 1DD90 8010F990 00000000 */   nop
    /* 1DD94 8010F994 77DC030C */  jal        func_800F71DC
    /* 1DD98 8010F998 40010424 */   addiu     $a0, $zero, 0x140
    /* 1DD9C 8010F99C 5BE3030C */  jal        func_800F8D6C
    /* 1DDA0 8010F9A0 89000424 */   addiu     $a0, $zero, 0x89
  .L8010F9A4:
    /* 1DDA4 8010F9A4 DEF9030C */  jal        func_800FE778
    /* 1DDA8 8010F9A8 00000000 */   nop
    /* 1DDAC 8010F9AC 9CDC030C */  jal        func_800F7270
    /* 1DDB0 8010F9B0 89000424 */   addiu     $a0, $zero, 0x89
    /* 1DDB4 8010F9B4 56D6030C */  jal        func_800F5958
    /* 1DDB8 8010F9B8 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 1DDBC 8010F9BC F5D4030C */  jal        func_800F53D4
    /* 1DDC0 8010F9C0 00000000 */   nop
    /* 1DDC4 8010F9C4 05004010 */  beqz       $v0, .L8010F9DC
    /* 1DDC8 8010F9C8 00000000 */   nop
    /* 1DDCC 8010F9CC 53D9030C */  jal        func_800F654C
    /* 1DDD0 8010F9D0 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 1DDD4 8010F9D4 D05F040C */  jal        func_80117F40
    /* 1DDD8 8010F9D8 00000000 */   nop
  .L8010F9DC:
    /* 1DDDC 8010F9DC 1CFA030C */  jal        func_800FE870
    /* 1DDE0 8010F9E0 00000000 */   nop
    /* 1DDE4 8010F9E4 9CDC030C */  jal        func_800F7270
    /* 1DDE8 8010F9E8 89000424 */   addiu     $a0, $zero, 0x89
    /* 1DDEC 8010F9EC 56D6030C */  jal        func_800F5958
    /* 1DDF0 8010F9F0 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 1DDF4 8010F9F4 F0D4030C */  jal        func_800F53C0
    /* 1DDF8 8010F9F8 00000000 */   nop
    /* 1DDFC 8010F9FC 0D004014 */  bnez       $v0, .L8010FA34
    /* 1DE00 8010FA00 00000000 */   nop
    /* 1DE04 8010FA04 8CD9030C */  jal        func_800F6630
    /* 1DE08 8010FA08 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1DE0C 8010FA0C 92D0030C */  jal        func_800F4248
    /* 1DE10 8010FA10 03000424 */   addiu     $a0, $zero, 0x3
    /* 1DE14 8010FA14 48D0030C */  jal        func_800F4120
    /* 1DE18 8010FA18 02020424 */   addiu     $a0, $zero, 0x202
    /* 1DE1C 8010FA1C 17004014 */  bnez       $v0, .L8010FA7C
    /* 1DE20 8010FA20 00000000 */   nop
    /* 1DE24 8010FA24 68D7030C */  jal        func_800F5DA0
    /* 1DE28 8010FA28 F1000424 */   addiu     $a0, $zero, 0xF1
    /* 1DE2C 8010FA2C 9F3E0408 */  j          .L8010FA7C
    /* 1DE30 8010FA30 00000000 */   nop
  .L8010FA34:
    /* 1DE34 8010FA34 4B57040C */  jal        func_80115D2C
    /* 1DE38 8010FA38 00000000 */   nop
    /* 1DE3C 8010FA3C 9CDC030C */  jal        func_800F7270
    /* 1DE40 8010FA40 89000424 */   addiu     $a0, $zero, 0x89
    /* 1DE44 8010FA44 56D6030C */  jal        func_800F5958
    /* 1DE48 8010FA48 38010424 */   addiu     $a0, $zero, 0x138
    /* 1DE4C 8010FA4C F5D4030C */  jal        func_800F53D4
    /* 1DE50 8010FA50 00000000 */   nop
    /* 1DE54 8010FA54 09004010 */  beqz       $v0, .L8010FA7C
    /* 1DE58 8010FA58 00000000 */   nop
    /* 1DE5C 8010FA5C 53D9030C */  jal        func_800F654C
    /* 1DE60 8010FA60 23000424 */   addiu     $a0, $zero, 0x23
    /* 1DE64 8010FA64 01F6030C */  jal        func_800FD804
    /* 1DE68 8010FA68 00000000 */   nop
    /* 1DE6C 8010FA6C 53D9030C */  jal        func_800F654C
    /* 1DE70 8010FA70 01000424 */   addiu     $a0, $zero, 0x1
    /* 1DE74 8010FA74 93E0030C */  jal        func_800F824C
    /* 1DE78 8010FA78 E5000424 */   addiu     $a0, $zero, 0xE5
  .L8010FA7C:
    /* 1DE7C 8010FA7C 1D41040C */  jal        func_80110474
    /* 1DE80 8010FA80 00000000 */   nop
    /* 1DE84 8010FA84 9CDC030C */  jal        func_800F7270
    /* 1DE88 8010FA88 89000424 */   addiu     $a0, $zero, 0x89
    /* 1DE8C 8010FA8C 92D7030C */  jal        func_800F5E48
    /* 1DE90 8010FA90 00000000 */   nop
    /* 1DE94 8010FA94 5BE3030C */  jal        func_800F8D6C
    /* 1DE98 8010FA98 89000424 */   addiu     $a0, $zero, 0x89
    /* 1DE9C 8010FA9C 19D7030C */  jal        func_800F5C64
    /* 1DEA0 8010FAA0 02020424 */   addiu     $a0, $zero, 0x202
    /* 1DEA4 8010FAA4 BFFF4014 */  bnez       $v0, .L8010F9A4
    /* 1DEA8 8010FAA8 00000000 */   nop
    /* 1DEAC 8010FAAC 977A040C */  jal        func_8011EA5C
    /* 1DEB0 8010FAB0 00000000 */   nop
    /* 1DEB4 8010FAB4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1DEB8 8010FAB8 00000000 */  nop
    /* 1DEBC 8010FABC 0800E003 */  jr         $ra
    /* 1DEC0 8010FAC0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010F944
