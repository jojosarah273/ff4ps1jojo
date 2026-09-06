nonmatching func_80155778, 0x510

glabel func_80155778
    /* 63B78 80155778 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 63B7C 8015577C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 63B80 80155780 40DD030C */  jal        func_800F7500
    /* 63B84 80155784 30200424 */   addiu     $a0, $zero, 0x2030
    /* 63B88 80155788 AFE3030C */  jal        func_800F8EBC
    /* 63B8C 8015578C 86000424 */   addiu     $a0, $zero, 0x86
    /* 63B90 80155790 40DD030C */  jal        func_800F7500
    /* 63B94 80155794 80270424 */   addiu     $a0, $zero, 0x2780
    /* 63B98 80155798 AFE3030C */  jal        func_800F8EBC
    /* 63B9C 8015579C 84000424 */   addiu     $a0, $zero, 0x84
    /* 63BA0 801557A0 EEE3030C */  jal        func_800F8FB8
    /* 63BA4 801557A4 A9000424 */   addiu     $a0, $zero, 0xA9
  .L801557A8:
    /* 63BA8 801557A8 C7E5030C */  jal        func_800F971C
    /* 63BAC 801557AC 00000000 */   nop
    /* 63BB0 801557B0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 63BB4 801557B4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 63BB8 801557B8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 63BBC 801557BC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 63BC0 801557C0 00004394 */  lhu        $v1, 0x0($v0)
    /* 63BC4 801557C4 AB000424 */  addiu      $a0, $zero, 0xAB
    /* 63BC8 801557C8 5BE3030C */  jal        func_800F8D6C
    /* 63BCC 801557CC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 63BD0 801557D0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 63BD4 801557D4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 63BD8 801557D8 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 63BDC 801557DC 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 63BE0 801557E0 00006294 */  lhu        $v0, 0x0($v1)
    /* 63BE4 801557E4 00000000 */  nop
    /* 63BE8 801557E8 000082A4 */  sh         $v0, 0x0($a0)
  .L801557EC:
    /* 63BEC 801557EC B6D9030C */  jal        func_800F66D8
    /* 63BF0 801557F0 86000424 */   addiu     $a0, $zero, 0x86
    /* 63BF4 801557F4 0DD9030C */  jal        func_800F6434
    /* 63BF8 801557F8 02020424 */   addiu     $a0, $zero, 0x202
    /* 63BFC 801557FC 03004014 */  bnez       $v0, .L8015580C
    /* 63C00 80155800 00000000 */   nop
    /* 63C04 80155804 53D9030C */  jal        func_800F654C
    /* 63C08 80155808 60000424 */   addiu     $a0, $zero, 0x60
  .L8015580C:
    /* 63C0C 8015580C 9DE1030C */  jal        func_800F8674
    /* 63C10 80155810 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 63C14 80155814 EFD8030C */  jal        func_800F63BC
    /* 63C18 80155818 00000000 */   nop
    /* 63C1C 8015581C D9D8030C */  jal        func_800F6364
    /* 63C20 80155820 00000000 */   nop
    /* 63C24 80155824 56D6030C */  jal        func_800F5958
    /* 63C28 80155828 03000424 */   addiu     $a0, $zero, 0x3
    /* 63C2C 8015582C F5D4030C */  jal        func_800F53D4
    /* 63C30 80155830 00000000 */   nop
    /* 63C34 80155834 EDFF4010 */  beqz       $v0, .L801557EC
    /* 63C38 80155838 00000000 */   nop
  .L8015583C:
    /* 63C3C 8015583C B6D9030C */  jal        func_800F66D8
    /* 63C40 80155840 86000424 */   addiu     $a0, $zero, 0x86
    /* 63C44 80155844 9DE1030C */  jal        func_800F8674
    /* 63C48 80155848 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 63C4C 8015584C EFD8030C */  jal        func_800F63BC
    /* 63C50 80155850 00000000 */   nop
    /* 63C54 80155854 D9D8030C */  jal        func_800F6364
    /* 63C58 80155858 00000000 */   nop
    /* 63C5C 8015585C 56D6030C */  jal        func_800F5958
    /* 63C60 80155860 07000424 */   addiu     $a0, $zero, 0x7
    /* 63C64 80155864 F5D4030C */  jal        func_800F53D4
    /* 63C68 80155868 00000000 */   nop
    /* 63C6C 8015586C F3FF4010 */  beqz       $v0, .L8015583C
    /* 63C70 80155870 00000000 */   nop
    /* 63C74 80155874 8CD9030C */  jal        func_800F6630
    /* 63C78 80155878 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 63C7C 8015587C 424A050C */  jal        func_80152908
    /* 63C80 80155880 00000000 */   nop
    /* 63C84 80155884 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 63C88 80155888 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 63C8C 8015588C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 63C90 80155890 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 63C94 80155894 00004394 */  lhu        $v1, 0x0($v0)
    /* 63C98 80155898 B0000424 */  addiu      $a0, $zero, 0xB0
    /* 63C9C 8015589C 8CD9030C */  jal        func_800F6630
    /* 63CA0 801558A0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 63CA4 801558A4 DAE1030C */  jal        func_800F8768
    /* 63CA8 801558A8 DB320424 */   addiu     $a0, $zero, 0x32DB
    /* 63CAC 801558AC 8CD9030C */  jal        func_800F6630
    /* 63CB0 801558B0 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 63CB4 801558B4 DAE1030C */  jal        func_800F8768
    /* 63CB8 801558B8 DC320424 */   addiu     $a0, $zero, 0x32DC
    /* 63CBC 801558BC 8CD9030C */  jal        func_800F6630
    /* 63CC0 801558C0 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 63CC4 801558C4 DAE1030C */  jal        func_800F8768
    /* 63CC8 801558C8 DF320424 */   addiu     $a0, $zero, 0x32DF
    /* 63CCC 801558CC 8CD9030C */  jal        func_800F6630
    /* 63CD0 801558D0 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 63CD4 801558D4 DAE1030C */  jal        func_800F8768
    /* 63CD8 801558D8 E0320424 */   addiu     $a0, $zero, 0x32E0
    /* 63CDC 801558DC 8CD9030C */  jal        func_800F6630
    /* 63CE0 801558E0 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 63CE4 801558E4 93E0030C */  jal        func_800F824C
    /* 63CE8 801558E8 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 63CEC 801558EC EEE3030C */  jal        func_800F8FB8
    /* 63CF0 801558F0 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 63CF4 801558F4 EEE3030C */  jal        func_800F8FB8
    /* 63CF8 801558F8 B8000424 */   addiu     $a0, $zero, 0xB8
    /* 63CFC 801558FC 8CD9030C */  jal        func_800F6630
    /* 63D00 80155900 B0000424 */   addiu     $a0, $zero, 0xB0
    /* 63D04 80155904 0DD9030C */  jal        func_800F6434
    /* 63D08 80155908 02000424 */   addiu     $a0, $zero, 0x2
    /* 63D0C 8015590C 1D004014 */  bnez       $v0, .L80155984
    /* 63D10 80155910 00000000 */   nop
    /* 63D14 80155914 5DD5030C */  jal        func_800F5574
    /* 63D18 80155918 4D000424 */   addiu     $a0, $zero, 0x4D
    /* 63D1C 8015591C F0D4030C */  jal        func_800F53C0
    /* 63D20 80155920 00000000 */   nop
    /* 63D24 80155924 17004010 */  beqz       $v0, .L80155984
    /* 63D28 80155928 00000000 */   nop
    /* 63D2C 8015592C 5DD5030C */  jal        func_800F5574
    /* 63D30 80155930 54000424 */   addiu     $a0, $zero, 0x54
    /* 63D34 80155934 F0D4030C */  jal        func_800F53C0
    /* 63D38 80155938 00000000 */   nop
    /* 63D3C 8015593C 07004014 */  bnez       $v0, .L8015595C
    /* 63D40 80155940 00000000 */   nop
    /* 63D44 80155944 53D9030C */  jal        func_800F654C
    /* 63D48 80155948 80000424 */   addiu     $a0, $zero, 0x80
    /* 63D4C 8015594C 93E0030C */  jal        func_800F824C
    /* 63D50 80155950 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 63D54 80155954 61560508 */  j          .L80155984
    /* 63D58 80155958 00000000 */   nop
  .L8015595C:
    /* 63D5C 8015595C 5DD5030C */  jal        func_800F5574
    /* 63D60 80155960 61000424 */   addiu     $a0, $zero, 0x61
    /* 63D64 80155964 F0D4030C */  jal        func_800F53C0
    /* 63D68 80155968 00000000 */   nop
    /* 63D6C 8015596C 05004014 */  bnez       $v0, .L80155984
    /* 63D70 80155970 00000000 */   nop
    /* 63D74 80155974 53D9030C */  jal        func_800F654C
    /* 63D78 80155978 40000424 */   addiu     $a0, $zero, 0x40
    /* 63D7C 8015597C 93E0030C */  jal        func_800F824C
    /* 63D80 80155980 B7000424 */   addiu     $a0, $zero, 0xB7
  .L80155984:
    /* 63D84 80155984 8CD9030C */  jal        func_800F6630
    /* 63D88 80155988 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 63D8C 8015598C 0DD9030C */  jal        func_800F6434
    /* 63D90 80155990 02000424 */   addiu     $a0, $zero, 0x2
    /* 63D94 80155994 1D004014 */  bnez       $v0, .L80155A0C
    /* 63D98 80155998 00000000 */   nop
    /* 63D9C 8015599C 5DD5030C */  jal        func_800F5574
    /* 63DA0 801559A0 4D000424 */   addiu     $a0, $zero, 0x4D
    /* 63DA4 801559A4 F0D4030C */  jal        func_800F53C0
    /* 63DA8 801559A8 00000000 */   nop
    /* 63DAC 801559AC 17004010 */  beqz       $v0, .L80155A0C
    /* 63DB0 801559B0 00000000 */   nop
    /* 63DB4 801559B4 5DD5030C */  jal        func_800F5574
    /* 63DB8 801559B8 54000424 */   addiu     $a0, $zero, 0x54
    /* 63DBC 801559BC F0D4030C */  jal        func_800F53C0
    /* 63DC0 801559C0 00000000 */   nop
    /* 63DC4 801559C4 07004014 */  bnez       $v0, .L801559E4
    /* 63DC8 801559C8 00000000 */   nop
    /* 63DCC 801559CC 53D9030C */  jal        func_800F654C
    /* 63DD0 801559D0 80000424 */   addiu     $a0, $zero, 0x80
    /* 63DD4 801559D4 93E0030C */  jal        func_800F824C
    /* 63DD8 801559D8 B8000424 */   addiu     $a0, $zero, 0xB8
    /* 63DDC 801559DC 83560508 */  j          .L80155A0C
    /* 63DE0 801559E0 00000000 */   nop
  .L801559E4:
    /* 63DE4 801559E4 5DD5030C */  jal        func_800F5574
    /* 63DE8 801559E8 61000424 */   addiu     $a0, $zero, 0x61
    /* 63DEC 801559EC F0D4030C */  jal        func_800F53C0
    /* 63DF0 801559F0 00000000 */   nop
    /* 63DF4 801559F4 05004014 */  bnez       $v0, .L80155A0C
    /* 63DF8 801559F8 00000000 */   nop
    /* 63DFC 801559FC 53D9030C */  jal        func_800F654C
    /* 63E00 80155A00 40000424 */   addiu     $a0, $zero, 0x40
    /* 63E04 80155A04 93E0030C */  jal        func_800F824C
    /* 63E08 80155A08 B8000424 */   addiu     $a0, $zero, 0xB8
  .L80155A0C:
    /* 63E0C 80155A0C 8CD9030C */  jal        func_800F6630
    /* 63E10 80155A10 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 63E14 80155A14 0FCF030C */  jal        func_800F3C3C
    /* 63E18 80155A18 B8000424 */   addiu     $a0, $zero, 0xB8
    /* 63E1C 80155A1C 31DE030C */  jal        func_800F78C4
    /* 63E20 80155A20 21204000 */   addu      $a0, $v0, $zero
    /* 63E24 80155A24 46DE030C */  jal        func_800F7918
    /* 63E28 80155A28 02000424 */   addiu     $a0, $zero, 0x2
    /* 63E2C 80155A2C 0F004014 */  bnez       $v0, .L80155A6C
    /* 63E30 80155A30 00000000 */   nop
    /* 63E34 80155A34 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 63E38 80155A38 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 63E3C 80155A3C 00000000 */  nop
    /* 63E40 80155A40 00006290 */  lbu        $v0, 0x0($v1)
    /* 63E44 80155A44 02000424 */  addiu      $a0, $zero, 0x2
    /* 63E48 80155A48 C0004238 */  xori       $v0, $v0, 0xC0
    /* 63E4C 80155A4C C8D7030C */  jal        func_800F5F20
    /* 63E50 80155A50 000062A0 */   sb        $v0, 0x0($v1)
    /* 63E54 80155A54 05004014 */  bnez       $v0, .L80155A6C
    /* 63E58 80155A58 00000000 */   nop
    /* 63E5C 80155A5C EEE3030C */  jal        func_800F8FB8
    /* 63E60 80155A60 B0000424 */   addiu     $a0, $zero, 0xB0
    /* 63E64 80155A64 EEE3030C */  jal        func_800F8FB8
    /* 63E68 80155A68 B1000424 */   addiu     $a0, $zero, 0xB1
  .L80155A6C:
    /* 63E6C 80155A6C 9CDC030C */  jal        func_800F7270
    /* 63E70 80155A70 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 63E74 80155A74 9EDA030C */  jal        func_800F6A78
    /* 63E78 80155A78 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 63E7C 80155A7C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 63E80 80155A80 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 63E84 80155A84 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 63E88 80155A88 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 63E8C 80155A8C 00004394 */  lhu        $v1, 0x0($v0)
    /* 63E90 80155A90 E5000424 */  addiu      $a0, $zero, 0xE5
    /* 63E94 80155A94 5BE3030C */  jal        func_800F8D6C
    /* 63E98 80155A98 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 63E9C 80155A9C 77DC030C */  jal        func_800F71DC
    /* 63EA0 80155AA0 00910434 */   ori       $a0, $zero, 0x9100
    /* 63EA4 80155AA4 5BE3030C */  jal        func_800F8D6C
    /* 63EA8 80155AA8 80000424 */   addiu     $a0, $zero, 0x80
    /* 63EAC 80155AAC 53D9030C */  jal        func_800F654C
    /* 63EB0 80155AB0 0F000424 */   addiu     $a0, $zero, 0xF
    /* 63EB4 80155AB4 93E0030C */  jal        func_800F824C
    /* 63EB8 80155AB8 82000424 */   addiu     $a0, $zero, 0x82
    /* 63EBC 80155ABC 53D9030C */  jal        func_800F654C
    /* 63EC0 80155AC0 08000424 */   addiu     $a0, $zero, 0x8
    /* 63EC4 80155AC4 BE49050C */  jal        func_801526F8
    /* 63EC8 80155AC8 00000000 */   nop
    /* 63ECC 80155ACC C7E5030C */  jal        func_800F971C
    /* 63ED0 80155AD0 00000000 */   nop
    /* 63ED4 80155AD4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 63ED8 80155AD8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 63EDC 80155ADC 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 63EE0 80155AE0 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 63EE4 80155AE4 00006294 */  lhu        $v0, 0x0($v1)
    /* 63EE8 80155AE8 00000000 */  nop
    /* 63EEC 80155AEC 000082A4 */  sh         $v0, 0x0($a0)
    /* 63EF0 80155AF0 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 63EF4 80155AF4 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 63EF8 80155AF8 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 63EFC 80155AFC 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 63F00 80155B00 00006294 */  lhu        $v0, 0x0($v1)
    /* 63F04 80155B04 00000000 */  nop
    /* 63F08 80155B08 000082A4 */  sh         $v0, 0x0($a0)
  .L80155B0C:
    /* 63F0C 80155B0C DADA030C */  jal        func_800F6B68
    /* 63F10 80155B10 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 63F14 80155B14 BBE0030C */  jal        func_800F82EC
    /* 63F18 80155B18 84000424 */   addiu     $a0, $zero, 0x84
    /* 63F1C 80155B1C EFD8030C */  jal        func_800F63BC
    /* 63F20 80155B20 00000000 */   nop
    /* 63F24 80155B24 D9D8030C */  jal        func_800F6364
    /* 63F28 80155B28 00000000 */   nop
    /* 63F2C 80155B2C 56D6030C */  jal        func_800F5958
    /* 63F30 80155B30 08000424 */   addiu     $a0, $zero, 0x8
    /* 63F34 80155B34 F5D4030C */  jal        func_800F53D4
    /* 63F38 80155B38 00000000 */   nop
    /* 63F3C 80155B3C F3FF4010 */  beqz       $v0, .L80155B0C
    /* 63F40 80155B40 00000000 */   nop
    /* 63F44 80155B44 59D9030C */  jal        func_800F6564
    /* 63F48 80155B48 A0280424 */   addiu     $a0, $zero, 0x28A0
    /* 63F4C 80155B4C 92D0030C */  jal        func_800F4248
    /* 63F50 80155B50 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 63F54 80155B54 93E0030C */  jal        func_800F824C
    /* 63F58 80155B58 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 63F5C 80155B5C 53D9030C */  jal        func_800F654C
    /* 63F60 80155B60 03000424 */   addiu     $a0, $zero, 0x3
    /* 63F64 80155B64 93E0030C */  jal        func_800F824C
    /* 63F68 80155B68 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 63F6C 80155B6C 0349050C */  jal        func_8015240C
    /* 63F70 80155B70 00000000 */   nop
    /* 63F74 80155B74 9CDC030C */  jal        func_800F7270
    /* 63F78 80155B78 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 63F7C 80155B7C 0F00043C */  lui        $a0, (0xFA590 >> 16)
  .L80155B80:
    /* 63F80 80155B80 1ADB030C */  jal        func_800F6C68
    /* 63F84 80155B84 90A58434 */   ori       $a0, $a0, (0xFA590 & 0xFFFF)
    /* 63F88 80155B88 BBE0030C */  jal        func_800F82EC
    /* 63F8C 80155B8C 84000424 */   addiu     $a0, $zero, 0x84
    /* 63F90 80155B90 EFD8030C */  jal        func_800F63BC
    /* 63F94 80155B94 00000000 */   nop
    /* 63F98 80155B98 D9D8030C */  jal        func_800F6364
    /* 63F9C 80155B9C 00000000 */   nop
    /* 63FA0 80155BA0 A4D6030C */  jal        func_800F5A90
    /* 63FA4 80155BA4 0B000424 */   addiu     $a0, $zero, 0xB
    /* 63FA8 80155BA8 F5D4030C */  jal        func_800F53D4
    /* 63FAC 80155BAC 00000000 */   nop
    /* 63FB0 80155BB0 F3FF4010 */  beqz       $v0, .L80155B80
    /* 63FB4 80155BB4 0F00043C */   lui       $a0, (0xFA590 >> 16)
    /* 63FB8 80155BB8 04D5030C */  jal        func_800F5410
    /* 63FBC 80155BBC 00000000 */   nop
    /* 63FC0 80155BC0 8CD9030C */  jal        func_800F6630
    /* 63FC4 80155BC4 84000424 */   addiu     $a0, $zero, 0x84
    /* 63FC8 80155BC8 02D0030C */  jal        func_800F4008
    /* 63FCC 80155BCC 0B000424 */   addiu     $a0, $zero, 0xB
    /* 63FD0 80155BD0 93E0030C */  jal        func_800F824C
    /* 63FD4 80155BD4 84000424 */   addiu     $a0, $zero, 0x84
    /* 63FD8 80155BD8 8CD9030C */  jal        func_800F6630
    /* 63FDC 80155BDC 85000424 */   addiu     $a0, $zero, 0x85
    /* 63FE0 80155BE0 02D0030C */  jal        func_800F4008
    /* 63FE4 80155BE4 21200000 */   addu      $a0, $zero, $zero
    /* 63FE8 80155BE8 93E0030C */  jal        func_800F824C
    /* 63FEC 80155BEC 85000424 */   addiu     $a0, $zero, 0x85
    /* 63FF0 80155BF0 AFD8030C */  jal        func_800F62BC
    /* 63FF4 80155BF4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 63FF8 80155BF8 8CD9030C */  jal        func_800F6630
    /* 63FFC 80155BFC AB000424 */   addiu     $a0, $zero, 0xAB
    /* 64000 80155C00 5DD5030C */  jal        func_800F5574
    /* 64004 80155C04 05000424 */   addiu     $a0, $zero, 0x5
    /* 64008 80155C08 F5D4030C */  jal        func_800F53D4
    /* 6400C 80155C0C 00000000 */   nop
    /* 64010 80155C10 96FF4010 */  beqz       $v0, .L80155A6C
    /* 64014 80155C14 00000000 */   nop
    /* 64018 80155C18 04D5030C */  jal        func_800F5410
    /* 6401C 80155C1C 00000000 */   nop
    /* 64020 80155C20 8CD9030C */  jal        func_800F6630
    /* 64024 80155C24 86000424 */   addiu     $a0, $zero, 0x86
    /* 64028 80155C28 02D0030C */  jal        func_800F4008
    /* 6402C 80155C2C 80000424 */   addiu     $a0, $zero, 0x80
    /* 64030 80155C30 93E0030C */  jal        func_800F824C
    /* 64034 80155C34 86000424 */   addiu     $a0, $zero, 0x86
    /* 64038 80155C38 8CD9030C */  jal        func_800F6630
    /* 6403C 80155C3C 87000424 */   addiu     $a0, $zero, 0x87
    /* 64040 80155C40 02D0030C */  jal        func_800F4008
    /* 64044 80155C44 21200000 */   addu      $a0, $zero, $zero
    /* 64048 80155C48 93E0030C */  jal        func_800F824C
    /* 6404C 80155C4C 87000424 */   addiu     $a0, $zero, 0x87
    /* 64050 80155C50 AFD8030C */  jal        func_800F62BC
    /* 64054 80155C54 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 64058 80155C58 8CD9030C */  jal        func_800F6630
    /* 6405C 80155C5C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 64060 80155C60 5DD5030C */  jal        func_800F5574
    /* 64064 80155C64 05000424 */   addiu     $a0, $zero, 0x5
    /* 64068 80155C68 F5D4030C */  jal        func_800F53D4
    /* 6406C 80155C6C 00000000 */   nop
    /* 64070 80155C70 CDFE4010 */  beqz       $v0, .L801557A8
    /* 64074 80155C74 00000000 */   nop
    /* 64078 80155C78 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6407C 80155C7C 00000000 */  nop
    /* 64080 80155C80 0800E003 */  jr         $ra
    /* 64084 80155C84 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80155778
