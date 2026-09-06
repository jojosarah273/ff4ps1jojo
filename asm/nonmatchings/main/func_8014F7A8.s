nonmatching func_8014F7A8, 0x2A4

glabel func_8014F7A8
    /* 5DBA8 8014F7A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5DBAC 8014F7AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5DBB0 8014F7B0 8CD9030C */  jal        func_800F6630
    /* 5DBB4 8014F7B4 18000424 */   addiu     $a0, $zero, 0x18
    /* 5DBB8 8014F7B8 50D4030C */  jal        func_800F5140
    /* 5DBBC 8014F7BC 00000000 */   nop
    /* 5DBC0 8014F7C0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5DBC4 8014F7C4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5DBC8 8014F7C8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5DBCC 8014F7CC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5DBD0 8014F7D0 00004394 */  lhu        $v1, 0x0($v0)
    /* 5DBD4 8014F7D4 79F20434 */  ori        $a0, $zero, 0xF279
    /* 5DBD8 8014F7D8 59D9030C */  jal        func_800F6564
    /* 5DBDC 8014F7DC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5DBE0 8014F7E0 0DD9030C */  jal        func_800F6434
    /* 5DBE4 8014F7E4 02020424 */   addiu     $a0, $zero, 0x202
    /* 5DBE8 8014F7E8 0F004014 */  bnez       $v0, .L8014F828
    /* 5DBEC 8014F7EC 00000000 */   nop
    /* 5DBF0 8014F7F0 DADA030C */  jal        func_800F6B68
    /* 5DBF4 8014F7F4 53F00434 */   ori       $a0, $zero, 0xF053
    /* 5DBF8 8014F7F8 93E0030C */  jal        func_800F824C
    /* 5DBFC 8014F7FC 12000424 */   addiu     $a0, $zero, 0x12
    /* 5DC00 8014F800 DADA030C */  jal        func_800F6B68
    /* 5DC04 8014F804 54F00434 */   ori       $a0, $zero, 0xF054
    /* 5DC08 8014F808 04D5030C */  jal        func_800F5410
    /* 5DC0C 8014F80C 00000000 */   nop
    /* 5DC10 8014F810 02D0030C */  jal        func_800F4008
    /* 5DC14 8014F814 06000424 */   addiu     $a0, $zero, 0x6
    /* 5DC18 8014F818 93E0030C */  jal        func_800F824C
    /* 5DC1C 8014F81C 13000424 */   addiu     $a0, $zero, 0x13
    /* 5DC20 8014F820 123E0508 */  j          .L8014F848
    /* 5DC24 8014F824 00000000 */   nop
  .L8014F828:
    /* 5DC28 8014F828 DADA030C */  jal        func_800F6B68
    /* 5DC2C 8014F82C 43F00434 */   ori       $a0, $zero, 0xF043
    /* 5DC30 8014F830 93E0030C */  jal        func_800F824C
    /* 5DC34 8014F834 12000424 */   addiu     $a0, $zero, 0x12
    /* 5DC38 8014F838 DADA030C */  jal        func_800F6B68
    /* 5DC3C 8014F83C 44F00434 */   ori       $a0, $zero, 0xF044
    /* 5DC40 8014F840 93E0030C */  jal        func_800F824C
    /* 5DC44 8014F844 13000424 */   addiu     $a0, $zero, 0x13
  .L8014F848:
    /* 5DC48 8014F848 77DC030C */  jal        func_800F71DC
    /* 5DC4C 8014F84C 21200000 */   addu      $a0, $zero, $zero
  .L8014F850:
    /* 5DC50 8014F850 59D9030C */  jal        func_800F6564
    /* 5DC54 8014F854 C06C0424 */   addiu     $a0, $zero, 0x6CC0
    /* 5DC58 8014F858 0DD9030C */  jal        func_800F6434
    /* 5DC5C 8014F85C 02000424 */   addiu     $a0, $zero, 0x2
    /* 5DC60 8014F860 32004014 */  bnez       $v0, .L8014F92C
    /* 5DC64 8014F864 0D00043C */   lui       $a0, (0xDFE61 >> 16)
    /* 5DC68 8014F868 1ADB030C */  jal        func_800F6C68
    /* 5DC6C 8014F86C 61FE8434 */   ori       $a0, $a0, (0xDFE61 & 0xFFFF)
    /* 5DC70 8014F870 04D5030C */  jal        func_800F5410
    /* 5DC74 8014F874 00000000 */   nop
    /* 5DC78 8014F878 0FCF030C */  jal        func_800F3C3C
    /* 5DC7C 8014F87C 12000424 */   addiu     $a0, $zero, 0x12
    /* 5DC80 8014F880 CECF030C */  jal        func_800F3F38
    /* 5DC84 8014F884 21204000 */   addu      $a0, $v0, $zero
    /* 5DC88 8014F888 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5DC8C 8014F88C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5DC90 8014F890 00000000 */  nop
    /* 5DC94 8014F894 00006290 */  lbu        $v0, 0x0($v1)
    /* 5DC98 8014F898 00000000 */  nop
    /* 5DC9C 8014F89C 27100200 */  nor        $v0, $zero, $v0
    /* 5DCA0 8014F8A0 20D5030C */  jal        func_800F5480
    /* 5DCA4 8014F8A4 000062A0 */   sb        $v0, 0x0($v1)
    /* 5DCA8 8014F8A8 16E0030C */  jal        func_800F8058
    /* 5DCAC 8014F8AC 0F000424 */   addiu     $a0, $zero, 0xF
    /* 5DCB0 8014F8B0 58E2030C */  jal        func_800F8960
    /* 5DCB4 8014F8B4 00030424 */   addiu     $a0, $zero, 0x300
    /* 5DCB8 8014F8B8 0D00043C */  lui        $a0, (0xDFE62 >> 16)
    /* 5DCBC 8014F8BC 1ADB030C */  jal        func_800F6C68
    /* 5DCC0 8014F8C0 62FE8434 */   ori       $a0, $a0, (0xDFE62 & 0xFFFF)
    /* 5DCC4 8014F8C4 04D5030C */  jal        func_800F5410
    /* 5DCC8 8014F8C8 00000000 */   nop
    /* 5DCCC 8014F8CC 0FCF030C */  jal        func_800F3C3C
    /* 5DCD0 8014F8D0 13000424 */   addiu     $a0, $zero, 0x13
    /* 5DCD4 8014F8D4 CECF030C */  jal        func_800F3F38
    /* 5DCD8 8014F8D8 21204000 */   addu      $a0, $v0, $zero
    /* 5DCDC 8014F8DC 58E2030C */  jal        func_800F8960
    /* 5DCE0 8014F8E0 01030424 */   addiu     $a0, $zero, 0x301
    /* 5DCE4 8014F8E4 0D00043C */  lui        $a0, (0xDFE63 >> 16)
    /* 5DCE8 8014F8E8 1ADB030C */  jal        func_800F6C68
    /* 5DCEC 8014F8EC 63FE8434 */   ori       $a0, $a0, (0xDFE63 & 0xFFFF)
    /* 5DCF0 8014F8F0 58E2030C */  jal        func_800F8960
    /* 5DCF4 8014F8F4 02030424 */   addiu     $a0, $zero, 0x302
    /* 5DCF8 8014F8F8 0D00043C */  lui        $a0, (0xDFE64 >> 16)
    /* 5DCFC 8014F8FC 1ADB030C */  jal        func_800F6C68
    /* 5DD00 8014F900 64FE8434 */   ori       $a0, $a0, (0xDFE64 & 0xFFFF)
    /* 5DD04 8014F904 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5DD08 8014F908 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5DD0C 8014F90C 00000000 */  nop
    /* 5DD10 8014F910 00006290 */  lbu        $v0, 0x0($v1)
    /* 5DD14 8014F914 03030424 */  addiu      $a0, $zero, 0x303
    /* 5DD18 8014F918 40004238 */  xori       $v0, $v0, 0x40
    /* 5DD1C 8014F91C 58E2030C */  jal        func_800F8960
    /* 5DD20 8014F920 000062A0 */   sb        $v0, 0x0($v1)
    /* 5DD24 8014F924 6A3E0508 */  j          .L8014F9A8
    /* 5DD28 8014F928 00000000 */   nop
  .L8014F92C:
    /* 5DD2C 8014F92C 1ADB030C */  jal        func_800F6C68
    /* 5DD30 8014F930 61FE8434 */   ori       $a0, $a0, (0xDFE61 & 0xFFFF)
    /* 5DD34 8014F934 04D5030C */  jal        func_800F5410
    /* 5DD38 8014F938 00000000 */   nop
    /* 5DD3C 8014F93C 0FCF030C */  jal        func_800F3C3C
    /* 5DD40 8014F940 12000424 */   addiu     $a0, $zero, 0x12
    /* 5DD44 8014F944 CECF030C */  jal        func_800F3F38
    /* 5DD48 8014F948 21204000 */   addu      $a0, $v0, $zero
    /* 5DD4C 8014F94C 58E2030C */  jal        func_800F8960
    /* 5DD50 8014F950 00030424 */   addiu     $a0, $zero, 0x300
    /* 5DD54 8014F954 0D00043C */  lui        $a0, (0xDFE62 >> 16)
    /* 5DD58 8014F958 1ADB030C */  jal        func_800F6C68
    /* 5DD5C 8014F95C 62FE8434 */   ori       $a0, $a0, (0xDFE62 & 0xFFFF)
    /* 5DD60 8014F960 04D5030C */  jal        func_800F5410
    /* 5DD64 8014F964 00000000 */   nop
    /* 5DD68 8014F968 0FCF030C */  jal        func_800F3C3C
    /* 5DD6C 8014F96C 13000424 */   addiu     $a0, $zero, 0x13
    /* 5DD70 8014F970 CECF030C */  jal        func_800F3F38
    /* 5DD74 8014F974 21204000 */   addu      $a0, $v0, $zero
    /* 5DD78 8014F978 58E2030C */  jal        func_800F8960
    /* 5DD7C 8014F97C 01030424 */   addiu     $a0, $zero, 0x301
    /* 5DD80 8014F980 0D00043C */  lui        $a0, (0xDFE63 >> 16)
    /* 5DD84 8014F984 1ADB030C */  jal        func_800F6C68
    /* 5DD88 8014F988 63FE8434 */   ori       $a0, $a0, (0xDFE63 & 0xFFFF)
    /* 5DD8C 8014F98C 58E2030C */  jal        func_800F8960
    /* 5DD90 8014F990 02030424 */   addiu     $a0, $zero, 0x302
    /* 5DD94 8014F994 0D00043C */  lui        $a0, (0xDFE64 >> 16)
    /* 5DD98 8014F998 1ADB030C */  jal        func_800F6C68
    /* 5DD9C 8014F99C 64FE8434 */   ori       $a0, $a0, (0xDFE64 & 0xFFFF)
    /* 5DDA0 8014F9A0 58E2030C */  jal        func_800F8960
    /* 5DDA4 8014F9A4 03030424 */   addiu     $a0, $zero, 0x303
  .L8014F9A8:
    /* 5DDA8 8014F9A8 59D9030C */  jal        func_800F6564
    /* 5DDAC 8014F9AC 79F20434 */   ori       $a0, $zero, 0xF279
    /* 5DDB0 8014F9B0 0DD9030C */  jal        func_800F6434
    /* 5DDB4 8014F9B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 5DDB8 8014F9B8 0B004014 */  bnez       $v0, .L8014F9E8
    /* 5DDBC 8014F9BC 00000000 */   nop
    /* 5DDC0 8014F9C0 5CDB030C */  jal        func_800F6D70
    /* 5DDC4 8014F9C4 03030424 */   addiu     $a0, $zero, 0x303
    /* 5DDC8 8014F9C8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5DDCC 8014F9CC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5DDD0 8014F9D0 00000000 */  nop
    /* 5DDD4 8014F9D4 00006290 */  lbu        $v0, 0x0($v1)
    /* 5DDD8 8014F9D8 03030424 */  addiu      $a0, $zero, 0x303
    /* 5DDDC 8014F9DC 40004238 */  xori       $v0, $v0, 0x40
    /* 5DDE0 8014F9E0 58E2030C */  jal        func_800F8960
    /* 5DDE4 8014F9E4 000062A0 */   sb        $v0, 0x0($v1)
  .L8014F9E8:
    /* 5DDE8 8014F9E8 90D8030C */  jal        func_800F6240
    /* 5DDEC 8014F9EC 50F20434 */   ori       $a0, $zero, 0xF250
    /* 5DDF0 8014F9F0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5DDF4 8014F9F4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5DDF8 8014F9F8 00000000 */  nop
    /* 5DDFC 8014F9FC 00006294 */  lhu        $v0, 0x0($v1)
    /* 5DE00 8014FA00 00000000 */  nop
    /* 5DE04 8014FA04 04004224 */  addiu      $v0, $v0, 0x4
    /* 5DE08 8014FA08 000062A4 */  sh         $v0, 0x0($v1)
    /* 5DE0C 8014FA0C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 5DE10 8014FA10 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 5DE14 8014FA14 00000000 */  nop
    /* 5DE18 8014FA18 0000A294 */  lhu        $v0, 0x0($a1)
    /* 5DE1C 8014FA1C 08000424 */  addiu      $a0, $zero, 0x8
    /* 5DE20 8014FA20 04004224 */  addiu      $v0, $v0, 0x4
    /* 5DE24 8014FA24 56D6030C */  jal        func_800F5958
    /* 5DE28 8014FA28 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 5DE2C 8014FA2C F5D4030C */  jal        func_800F53D4
    /* 5DE30 8014FA30 00000000 */   nop
    /* 5DE34 8014FA34 86FF4010 */  beqz       $v0, .L8014F850
    /* 5DE38 8014FA38 00000000 */   nop
    /* 5DE3C 8014FA3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5DE40 8014FA40 00000000 */  nop
    /* 5DE44 8014FA44 0800E003 */  jr         $ra
    /* 5DE48 8014FA48 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014F7A8
