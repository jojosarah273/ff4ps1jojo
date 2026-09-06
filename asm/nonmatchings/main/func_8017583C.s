nonmatching func_8017583C, 0x324

glabel func_8017583C
    /* 83C3C 8017583C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 83C40 80175840 1000BFAF */  sw         $ra, 0x10($sp)
    /* 83C44 80175844 8CD9030C */  jal        func_800F6630
    /* 83C48 80175848 93000424 */   addiu     $a0, $zero, 0x93
    /* 83C4C 8017584C 92D0030C */  jal        func_800F4248
    /* 83C50 80175850 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 83C54 80175854 93E0030C */  jal        func_800F824C
    /* 83C58 80175858 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 83C5C 8017585C EEE3030C */  jal        func_800F8FB8
    /* 83C60 80175860 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 83C64 80175864 9CDC030C */  jal        func_800F7270
    /* 83C68 80175868 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 83C6C 8017586C 59D9030C */  jal        func_800F6564
    /* 83C70 80175870 82120424 */   addiu     $a0, $zero, 0x1282
    /* 83C74 80175874 92D0030C */  jal        func_800F4248
    /* 83C78 80175878 10000424 */   addiu     $a0, $zero, 0x10
    /* 83C7C 8017587C 48D0030C */  jal        func_800F4120
    /* 83C80 80175880 02000424 */   addiu     $a0, $zero, 0x2
    /* 83C84 80175884 1B004014 */  bnez       $v0, .L801758F4
    /* 83C88 80175888 00000000 */   nop
    /* 83C8C 8017588C 8CD9030C */  jal        func_800F6630
    /* 83C90 80175890 93000424 */   addiu     $a0, $zero, 0x93
    /* 83C94 80175894 5DD5030C */  jal        func_800F5574
    /* 83C98 80175898 39000424 */   addiu     $a0, $zero, 0x39
    /* 83C9C 8017589C F5D4030C */  jal        func_800F53D4
    /* 83CA0 801758A0 00000000 */   nop
    /* 83CA4 801758A4 07004014 */  bnez       $v0, .L801758C4
    /* 83CA8 801758A8 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 83CAC 801758AC 5DD5030C */  jal        func_800F5574
    /* 83CB0 801758B0 3A000424 */   addiu     $a0, $zero, 0x3A
    /* 83CB4 801758B4 F5D4030C */  jal        func_800F53D4
    /* 83CB8 801758B8 00000000 */   nop
    /* 83CBC 801758BC 0D004010 */  beqz       $v0, .L801758F4
    /* 83CC0 801758C0 3D000424 */   addiu     $a0, $zero, 0x3D
  .L801758C4:
    /* 83CC4 801758C4 53D9030C */  jal        func_800F654C
    /* 83CC8 801758C8 00000000 */   nop
    /* 83CCC 801758CC 7F00043C */  lui        $a0, (0x7F5CE7 >> 16)
    /* 83CD0 801758D0 17E2030C */  jal        func_800F885C
    /* 83CD4 801758D4 E75C8434 */   ori       $a0, $a0, (0x7F5CE7 & 0xFFFF)
    /* 83CD8 801758D8 7AD8030C */  jal        func_800F61E8
    /* 83CDC 801758DC 00000000 */   nop
    /* 83CE0 801758E0 7F00043C */  lui        $a0, (0x7F5CE8 >> 16)
    /* 83CE4 801758E4 17E2030C */  jal        func_800F885C
    /* 83CE8 801758E8 E85C8434 */   ori       $a0, $a0, (0x7F5CE8 & 0xFFFF)
    /* 83CEC 801758EC D4D60508 */  j          .L80175B50
    /* 83CF0 801758F0 00000000 */   nop
  .L801758F4:
    /* 83CF4 801758F4 59D9030C */  jal        func_800F6564
    /* 83CF8 801758F8 81120424 */   addiu     $a0, $zero, 0x1281
    /* 83CFC 801758FC 92D0030C */  jal        func_800F4248
    /* 83D00 80175900 40000424 */   addiu     $a0, $zero, 0x40
    /* 83D04 80175904 48D0030C */  jal        func_800F4120
    /* 83D08 80175908 02000424 */   addiu     $a0, $zero, 0x2
    /* 83D0C 8017590C 3C004014 */  bnez       $v0, .L80175A00
    /* 83D10 80175910 00000000 */   nop
    /* 83D14 80175914 8CD9030C */  jal        func_800F6630
    /* 83D18 80175918 93000424 */   addiu     $a0, $zero, 0x93
    /* 83D1C 8017591C 5DD5030C */  jal        func_800F5574
    /* 83D20 80175920 76000424 */   addiu     $a0, $zero, 0x76
    /* 83D24 80175924 F5D4030C */  jal        func_800F53D4
    /* 83D28 80175928 00000000 */   nop
    /* 83D2C 8017592C 21004014 */  bnez       $v0, .L801759B4
    /* 83D30 80175930 00000000 */   nop
    /* 83D34 80175934 5DD5030C */  jal        func_800F5574
    /* 83D38 80175938 77000424 */   addiu     $a0, $zero, 0x77
    /* 83D3C 8017593C F5D4030C */  jal        func_800F53D4
    /* 83D40 80175940 00000000 */   nop
    /* 83D44 80175944 15004010 */  beqz       $v0, .L8017599C
    /* 83D48 80175948 00000000 */   nop
    /* 83D4C 8017594C 53D9030C */  jal        func_800F654C
    /* 83D50 80175950 12000424 */   addiu     $a0, $zero, 0x12
    /* 83D54 80175954 7F00043C */  lui        $a0, (0x7F5CD2 >> 16)
    /* 83D58 80175958 17E2030C */  jal        func_800F885C
    /* 83D5C 8017595C D25C8434 */   ori       $a0, $a0, (0x7F5CD2 & 0xFFFF)
    /* 83D60 80175960 53D9030C */  jal        func_800F654C
    /* 83D64 80175964 13000424 */   addiu     $a0, $zero, 0x13
    /* 83D68 80175968 7F00043C */  lui        $a0, (0x7F5CD3 >> 16)
    /* 83D6C 8017596C 17E2030C */  jal        func_800F885C
    /* 83D70 80175970 D35C8434 */   ori       $a0, $a0, (0x7F5CD3 & 0xFFFF)
    /* 83D74 80175974 7F00043C */  lui        $a0, (0x7F5CD4 >> 16)
    /* 83D78 80175978 17E2030C */  jal        func_800F885C
    /* 83D7C 8017597C D45C8434 */   ori       $a0, $a0, (0x7F5CD4 & 0xFFFF)
    /* 83D80 80175980 7F00043C */  lui        $a0, (0x7F5CD5 >> 16)
    /* 83D84 80175984 17E2030C */  jal        func_800F885C
    /* 83D88 80175988 D55C8434 */   ori       $a0, $a0, (0x7F5CD5 & 0xFFFF)
    /* 83D8C 8017598C 53D9030C */  jal        func_800F654C
    /* 83D90 80175990 14000424 */   addiu     $a0, $zero, 0x14
    /* 83D94 80175994 7CD60508 */  j          .L801759F0
    /* 83D98 80175998 7F00043C */   lui       $a0, (0x7F5CD6 >> 16)
  .L8017599C:
    /* 83D9C 8017599C 5DD5030C */  jal        func_800F5574
    /* 83DA0 801759A0 78000424 */   addiu     $a0, $zero, 0x78
    /* 83DA4 801759A4 F5D4030C */  jal        func_800F53D4
    /* 83DA8 801759A8 00000000 */   nop
    /* 83DAC 801759AC 14004010 */  beqz       $v0, .L80175A00
    /* 83DB0 801759B0 00000000 */   nop
  .L801759B4:
    /* 83DB4 801759B4 53D9030C */  jal        func_800F654C
    /* 83DB8 801759B8 13000424 */   addiu     $a0, $zero, 0x13
    /* 83DBC 801759BC 7F00043C */  lui        $a0, (0x7F5CD2 >> 16)
    /* 83DC0 801759C0 17E2030C */  jal        func_800F885C
    /* 83DC4 801759C4 D25C8434 */   ori       $a0, $a0, (0x7F5CD2 & 0xFFFF)
    /* 83DC8 801759C8 7F00043C */  lui        $a0, (0x7F5CD3 >> 16)
    /* 83DCC 801759CC 17E2030C */  jal        func_800F885C
    /* 83DD0 801759D0 D35C8434 */   ori       $a0, $a0, (0x7F5CD3 & 0xFFFF)
    /* 83DD4 801759D4 7F00043C */  lui        $a0, (0x7F5CD4 >> 16)
    /* 83DD8 801759D8 17E2030C */  jal        func_800F885C
    /* 83DDC 801759DC D45C8434 */   ori       $a0, $a0, (0x7F5CD4 & 0xFFFF)
    /* 83DE0 801759E0 7F00043C */  lui        $a0, (0x7F5CD5 >> 16)
    /* 83DE4 801759E4 17E2030C */  jal        func_800F885C
    /* 83DE8 801759E8 D55C8434 */   ori       $a0, $a0, (0x7F5CD5 & 0xFFFF)
    /* 83DEC 801759EC 7F00043C */  lui        $a0, (0x7F5CD6 >> 16)
  .L801759F0:
    /* 83DF0 801759F0 17E2030C */  jal        func_800F885C
    /* 83DF4 801759F4 D65C8434 */   ori       $a0, $a0, (0x7F5CD6 & 0xFFFF)
    /* 83DF8 801759F8 D4D60508 */  j          .L80175B50
    /* 83DFC 801759FC 00000000 */   nop
  .L80175A00:
    /* 83E00 80175A00 59D9030C */  jal        func_800F6564
    /* 83E04 80175A04 86120424 */   addiu     $a0, $zero, 0x1286
    /* 83E08 80175A08 92D0030C */  jal        func_800F4248
    /* 83E0C 80175A0C 01000424 */   addiu     $a0, $zero, 0x1
    /* 83E10 80175A10 48D0030C */  jal        func_800F4120
    /* 83E14 80175A14 02020424 */   addiu     $a0, $zero, 0x202
    /* 83E18 80175A18 4D004014 */  bnez       $v0, .L80175B50
    /* 83E1C 80175A1C 00000000 */   nop
    /* 83E20 80175A20 8CD9030C */  jal        func_800F6630
    /* 83E24 80175A24 93000424 */   addiu     $a0, $zero, 0x93
    /* 83E28 80175A28 5DD5030C */  jal        func_800F5574
    /* 83E2C 80175A2C D2000424 */   addiu     $a0, $zero, 0xD2
    /* 83E30 80175A30 F5D4030C */  jal        func_800F53D4
    /* 83E34 80175A34 00000000 */   nop
    /* 83E38 80175A38 08004010 */  beqz       $v0, .L80175A5C
    /* 83E3C 80175A3C 00000000 */   nop
    /* 83E40 80175A40 53D9030C */  jal        func_800F654C
    /* 83E44 80175A44 13000424 */   addiu     $a0, $zero, 0x13
    /* 83E48 80175A48 7F00043C */  lui        $a0, (0x7F5CDB >> 16)
    /* 83E4C 80175A4C 17E2030C */  jal        func_800F885C
    /* 83E50 80175A50 DB5C8434 */   ori       $a0, $a0, (0x7F5CDB & 0xFFFF)
    /* 83E54 80175A54 D4D60508 */  j          .L80175B50
    /* 83E58 80175A58 00000000 */   nop
  .L80175A5C:
    /* 83E5C 80175A5C 5DD5030C */  jal        func_800F5574
    /* 83E60 80175A60 D3000424 */   addiu     $a0, $zero, 0xD3
    /* 83E64 80175A64 F5D4030C */  jal        func_800F53D4
    /* 83E68 80175A68 00000000 */   nop
    /* 83E6C 80175A6C 20004014 */  bnez       $v0, .L80175AF0
    /* 83E70 80175A70 00000000 */   nop
    /* 83E74 80175A74 5DD5030C */  jal        func_800F5574
    /* 83E78 80175A78 D4000424 */   addiu     $a0, $zero, 0xD4
    /* 83E7C 80175A7C F5D4030C */  jal        func_800F53D4
    /* 83E80 80175A80 00000000 */   nop
    /* 83E84 80175A84 14004010 */  beqz       $v0, .L80175AD8
    /* 83E88 80175A88 00000000 */   nop
    /* 83E8C 80175A8C 53D9030C */  jal        func_800F654C
    /* 83E90 80175A90 13000424 */   addiu     $a0, $zero, 0x13
    /* 83E94 80175A94 7F00043C */  lui        $a0, (0x7F5CD9 >> 16)
    /* 83E98 80175A98 17E2030C */  jal        func_800F885C
    /* 83E9C 80175A9C D95C8434 */   ori       $a0, $a0, (0x7F5CD9 & 0xFFFF)
    /* 83EA0 80175AA0 7F00043C */  lui        $a0, (0x7F5CDA >> 16)
    /* 83EA4 80175AA4 17E2030C */  jal        func_800F885C
    /* 83EA8 80175AA8 DA5C8434 */   ori       $a0, $a0, (0x7F5CDA & 0xFFFF)
    /* 83EAC 80175AAC 7F00043C */  lui        $a0, (0x7F5CDB >> 16)
    /* 83EB0 80175AB0 17E2030C */  jal        func_800F885C
    /* 83EB4 80175AB4 DB5C8434 */   ori       $a0, $a0, (0x7F5CDB & 0xFFFF)
    /* 83EB8 80175AB8 7F00043C */  lui        $a0, (0x7F5CDC >> 16)
    /* 83EBC 80175ABC 17E2030C */  jal        func_800F885C
    /* 83EC0 80175AC0 DC5C8434 */   ori       $a0, $a0, (0x7F5CDC & 0xFFFF)
    /* 83EC4 80175AC4 7F00043C */  lui        $a0, (0x7F5CDD >> 16)
    /* 83EC8 80175AC8 17E2030C */  jal        func_800F885C
    /* 83ECC 80175ACC DD5C8434 */   ori       $a0, $a0, (0x7F5CDD & 0xFFFF)
    /* 83ED0 80175AD0 D4D60508 */  j          .L80175B50
    /* 83ED4 80175AD4 00000000 */   nop
  .L80175AD8:
    /* 83ED8 80175AD8 5DD5030C */  jal        func_800F5574
    /* 83EDC 80175ADC D5000424 */   addiu     $a0, $zero, 0xD5
    /* 83EE0 80175AE0 F5D4030C */  jal        func_800F53D4
    /* 83EE4 80175AE4 00000000 */   nop
    /* 83EE8 80175AE8 0E004010 */  beqz       $v0, .L80175B24
    /* 83EEC 80175AEC 00000000 */   nop
  .L80175AF0:
    /* 83EF0 80175AF0 53D9030C */  jal        func_800F654C
    /* 83EF4 80175AF4 13000424 */   addiu     $a0, $zero, 0x13
    /* 83EF8 80175AF8 7F00043C */  lui        $a0, (0x7F5CDA >> 16)
    /* 83EFC 80175AFC 17E2030C */  jal        func_800F885C
    /* 83F00 80175B00 DA5C8434 */   ori       $a0, $a0, (0x7F5CDA & 0xFFFF)
    /* 83F04 80175B04 7F00043C */  lui        $a0, (0x7F5CDB >> 16)
    /* 83F08 80175B08 17E2030C */  jal        func_800F885C
    /* 83F0C 80175B0C DB5C8434 */   ori       $a0, $a0, (0x7F5CDB & 0xFFFF)
    /* 83F10 80175B10 7F00043C */  lui        $a0, (0x7F5CDC >> 16)
    /* 83F14 80175B14 17E2030C */  jal        func_800F885C
    /* 83F18 80175B18 DC5C8434 */   ori       $a0, $a0, (0x7F5CDC & 0xFFFF)
    /* 83F1C 80175B1C D4D60508 */  j          .L80175B50
    /* 83F20 80175B20 00000000 */   nop
  .L80175B24:
    /* 83F24 80175B24 5DD5030C */  jal        func_800F5574
    /* 83F28 80175B28 D6000424 */   addiu     $a0, $zero, 0xD6
    /* 83F2C 80175B2C F5D4030C */  jal        func_800F53D4
    /* 83F30 80175B30 00000000 */   nop
    /* 83F34 80175B34 06004010 */  beqz       $v0, .L80175B50
    /* 83F38 80175B38 00000000 */   nop
    /* 83F3C 80175B3C 53D9030C */  jal        func_800F654C
    /* 83F40 80175B40 13000424 */   addiu     $a0, $zero, 0x13
    /* 83F44 80175B44 7F00043C */  lui        $a0, (0x7F5CDB >> 16)
    /* 83F48 80175B48 17E2030C */  jal        func_800F885C
    /* 83F4C 80175B4C DB5C8434 */   ori       $a0, $a0, (0x7F5CDB & 0xFFFF)
  .L80175B50:
    /* 83F50 80175B50 1000BF8F */  lw         $ra, 0x10($sp)
    /* 83F54 80175B54 00000000 */  nop
    /* 83F58 80175B58 0800E003 */  jr         $ra
    /* 83F5C 80175B5C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017583C
