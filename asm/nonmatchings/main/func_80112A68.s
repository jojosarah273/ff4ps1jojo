nonmatching func_80112A68, 0x658

glabel func_80112A68
    /* 20E68 80112A68 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 20E6C 80112A6C 04000424 */  addiu      $a0, $zero, 0x4
    /* 20E70 80112A70 1800BFAF */  sw         $ra, 0x18($sp)
    /* 20E74 80112A74 1400B1AF */  sw         $s1, 0x14($sp)
    /* 20E78 80112A78 53D9030C */  jal        func_800F654C
    /* 20E7C 80112A7C 1000B0AF */   sw        $s0, 0x10($sp)
    /* 20E80 80112A80 62E0030C */  jal        func_800F8188
    /* 20E84 80112A84 CD0A0424 */   addiu     $a0, $zero, 0xACD
    /* 20E88 80112A88 DDE3030C */  jal        func_800F8F74
    /* 20E8C 80112A8C CE0A0424 */   addiu     $a0, $zero, 0xACE
    /* 20E90 80112A90 F356040C */  jal        func_80115BCC
    /* 20E94 80112A94 1A80113C */   lui       $s1, %hi(D_80198C3C)
    /* 20E98 80112A98 77DC030C */  jal        func_800F71DC
    /* 20E9C 80112A9C 21200000 */   addu      $a0, $zero, $zero
    /* 20EA0 80112AA0 53D9030C */  jal        func_800F654C
    /* 20EA4 80112AA4 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 20EA8 80112AA8 1A80103C */  lui        $s0, %hi(D_80198C44)
  .L80112AAC:
    /* 20EAC 80112AAC DAE1030C */  jal        func_800F8768
    /* 20EB0 80112AB0 6D0A0424 */   addiu     $a0, $zero, 0xA6D
    /* 20EB4 80112AB4 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 20EB8 80112AB8 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 20EBC 80112ABC 00000000 */  nop
    /* 20EC0 80112AC0 00006294 */  lhu        $v0, 0x0($v1)
    /* 20EC4 80112AC4 60000424 */  addiu      $a0, $zero, 0x60
    /* 20EC8 80112AC8 04004224 */  addiu      $v0, $v0, 0x4
    /* 20ECC 80112ACC 56D6030C */  jal        func_800F5958
    /* 20ED0 80112AD0 000062A4 */   sh        $v0, 0x0($v1)
    /* 20ED4 80112AD4 F5D4030C */  jal        func_800F53D4
    /* 20ED8 80112AD8 00000000 */   nop
    /* 20EDC 80112ADC F3FF4010 */  beqz       $v0, .L80112AAC
    /* 20EE0 80112AE0 00000000 */   nop
    /* 20EE4 80112AE4 53D9030C */  jal        func_800F654C
    /* 20EE8 80112AE8 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 20EEC 80112AEC D05F040C */  jal        func_80117F40
    /* 20EF0 80112AF0 00000000 */   nop
    /* 20EF4 80112AF4 77DC030C */  jal        func_800F71DC
    /* 20EF8 80112AF8 00010424 */   addiu     $a0, $zero, 0x100
    /* 20EFC 80112AFC 5BE3030C */  jal        func_800F8D6C
    /* 20F00 80112B00 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 20F04 80112B04 77DC030C */  jal        func_800F71DC
    /* 20F08 80112B08 10000424 */   addiu     $a0, $zero, 0x10
    /* 20F0C 80112B0C 5BE3030C */  jal        func_800F8D6C
    /* 20F10 80112B10 2E000424 */   addiu     $a0, $zero, 0x2E
  .L80112B14:
    /* 20F14 80112B14 F6F9030C */  jal        func_800FE7D8
    /* 20F18 80112B18 00000000 */   nop
    /* 20F1C 80112B1C 1CFA030C */  jal        func_800FE870
    /* 20F20 80112B20 00000000 */   nop
    /* 20F24 80112B24 09FC030C */  jal        func_800FF024
    /* 20F28 80112B28 00000000 */   nop
    /* 20F2C 80112B2C 8CD9030C */  jal        func_800F6630
    /* 20F30 80112B30 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 20F34 80112B34 20D5030C */  jal        func_800F5480
    /* 20F38 80112B38 00000000 */   nop
    /* 20F3C 80112B3C 16E0030C */  jal        func_800F8058
    /* 20F40 80112B40 10000424 */   addiu     $a0, $zero, 0x10
    /* 20F44 80112B44 67D5050C */  jal        func_8017559C
    /* 20F48 80112B48 00000000 */   nop
    /* 20F4C 80112B4C 59D9030C */  jal        func_800F6564
    /* 20F50 80112B50 7A060424 */   addiu     $a0, $zero, 0x67A
    /* 20F54 80112B54 92D0030C */  jal        func_800F4248
    /* 20F58 80112B58 03000424 */   addiu     $a0, $zero, 0x3
    /* 20F5C 80112B5C 48D0030C */  jal        func_800F4120
    /* 20F60 80112B60 02020424 */   addiu     $a0, $zero, 0x202
    /* 20F64 80112B64 EBFF4014 */  bnez       $v0, .L80112B14
    /* 20F68 80112B68 00000000 */   nop
    /* 20F6C 80112B6C 8CD9030C */  jal        func_800F6630
    /* 20F70 80112B70 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 20F74 80112B74 7AD8030C */  jal        func_800F61E8
    /* 20F78 80112B78 00000000 */   nop
    /* 20F7C 80112B7C 93E0030C */  jal        func_800F824C
    /* 20F80 80112B80 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 20F84 80112B84 5DD5030C */  jal        func_800F5574
    /* 20F88 80112B88 20000424 */   addiu     $a0, $zero, 0x20
    /* 20F8C 80112B8C F5D4030C */  jal        func_800F53D4
    /* 20F90 80112B90 00000000 */   nop
    /* 20F94 80112B94 DFFF4010 */  beqz       $v0, .L80112B14
    /* 20F98 80112B98 00000000 */   nop
  .L80112B9C:
    /* 20F9C 80112B9C F6F9030C */  jal        func_800FE7D8
    /* 20FA0 80112BA0 00000000 */   nop
    /* 20FA4 80112BA4 304C040C */  jal        func_801130C0
    /* 20FA8 80112BA8 00000000 */   nop
    /* 20FAC 80112BAC 2DFA030C */  jal        func_800FE8B4
    /* 20FB0 80112BB0 00000000 */   nop
    /* 20FB4 80112BB4 D258040C */  jal        func_80116348
    /* 20FB8 80112BB8 00000000 */   nop
    /* 20FBC 80112BBC EEE3030C */  jal        func_800F8FB8
    /* 20FC0 80112BC0 79000424 */   addiu     $a0, $zero, 0x79
  .L80112BC4:
    /* 20FC4 80112BC4 8CD9030C */  jal        func_800F6630
    /* 20FC8 80112BC8 79000424 */   addiu     $a0, $zero, 0x79
    /* 20FCC 80112BCC 50D4030C */  jal        func_800F5140
    /* 20FD0 80112BD0 00000000 */   nop
    /* 20FD4 80112BD4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 20FD8 80112BD8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 20FDC 80112BDC 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 20FE0 80112BE0 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 20FE4 80112BE4 00004394 */  lhu        $v1, 0x0($v0)
    /* 20FE8 80112BE8 20000424 */  addiu      $a0, $zero, 0x20
    /* 20FEC 80112BEC 91E5030C */  jal        func_800F9644
    /* 20FF0 80112BF0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 20FF4 80112BF4 96D9030C */  jal        func_800F6658
    /* 20FF8 80112BF8 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 20FFC 80112BFC 04D5030C */  jal        func_800F5410
    /* 21000 80112C00 00000000 */   nop
    /* 21004 80112C04 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 21008 80112C08 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2100C 80112C0C 00000000 */  nop
    /* 21010 80112C10 00006294 */  lhu        $v0, 0x0($v1)
    /* 21014 80112C14 3C8C2426 */  addiu      $a0, $s1, %lo(D_80198C3C)
    /* 21018 80112C18 21284400 */  addu       $a1, $v0, $a0
    /* 2101C 80112C1C 2110A000 */  addu       $v0, $a1, $zero
    /* 21020 80112C20 01004490 */  lbu        $a0, 0x1($v0)
    /* 21024 80112C24 0000A390 */  lbu        $v1, 0x0($a1)
    /* 21028 80112C28 00220400 */  sll        $a0, $a0, 8
    /* 2102C 80112C2C 19D0030C */  jal        func_800F4064
    /* 21030 80112C30 25206400 */   or        $a0, $v1, $a0
    /* 21034 80112C34 9DE0030C */  jal        func_800F8274
    /* 21038 80112C38 0C000424 */   addiu     $a0, $zero, 0xC
    /* 2103C 80112C3C 96D9030C */  jal        func_800F6658
    /* 21040 80112C40 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 21044 80112C44 04D5030C */  jal        func_800F5410
    /* 21048 80112C48 00000000 */   nop
    /* 2104C 80112C4C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 21050 80112C50 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 21054 80112C54 00000000 */  nop
    /* 21058 80112C58 00006294 */  lhu        $v0, 0x0($v1)
    /* 2105C 80112C5C 448C0426 */  addiu      $a0, $s0, %lo(D_80198C44)
    /* 21060 80112C60 21284400 */  addu       $a1, $v0, $a0
    /* 21064 80112C64 2110A000 */  addu       $v0, $a1, $zero
    /* 21068 80112C68 01004490 */  lbu        $a0, 0x1($v0)
    /* 2106C 80112C6C 0000A390 */  lbu        $v1, 0x0($a1)
    /* 21070 80112C70 00220400 */  sll        $a0, $a0, 8
    /* 21074 80112C74 19D0030C */  jal        func_800F4064
    /* 21078 80112C78 25206400 */   or        $a0, $v1, $a0
    /* 2107C 80112C7C 9DE0030C */  jal        func_800F8274
    /* 21080 80112C80 0E000424 */   addiu     $a0, $zero, 0xE
    /* 21084 80112C84 96D9030C */  jal        func_800F6658
    /* 21088 80112C88 79000424 */   addiu     $a0, $zero, 0x79
    /* 2108C 80112C8C 99D0030C */  jal        func_800F4264
    /* 21090 80112C90 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 21094 80112C94 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 21098 80112C98 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2109C 80112C9C 00000000 */  nop
    /* 210A0 80112CA0 00006294 */  lhu        $v0, 0x0($v1)
    /* 210A4 80112CA4 00000000 */  nop
    /* 210A8 80112CA8 00110200 */  sll        $v0, $v0, 4
    /* 210AC 80112CAC 000062A4 */  sh         $v0, 0x0($v1)
    /* 210B0 80112CB0 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 210B4 80112CB4 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 210B8 80112CB8 00000000 */  nop
    /* 210BC 80112CBC 00008294 */  lhu        $v0, 0x0($a0)
    /* 210C0 80112CC0 00000000 */  nop
    /* 210C4 80112CC4 00014234 */  ori        $v0, $v0, 0x100
    /* 210C8 80112CC8 000082A4 */  sh         $v0, 0x0($a0)
    /* 210CC 80112CCC 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 210D0 80112CD0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 210D4 80112CD4 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 210D8 80112CD8 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 210DC 80112CDC 00006294 */  lhu        $v0, 0x0($v1)
    /* 210E0 80112CE0 21200000 */  addu       $a0, $zero, $zero
    /* 210E4 80112CE4 56D9030C */  jal        func_800F6558
    /* 210E8 80112CE8 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 210EC 80112CEC 98E5030C */  jal        func_800F9660
    /* 210F0 80112CF0 20000424 */   addiu     $a0, $zero, 0x20
    /* 210F4 80112CF4 53D9030C */  jal        func_800F654C
    /* 210F8 80112CF8 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 210FC 80112CFC 93E0030C */  jal        func_800F824C
    /* 21100 80112D00 91000424 */   addiu     $a0, $zero, 0x91
    /* 21104 80112D04 53D9030C */  jal        func_800F654C
    /* 21108 80112D08 78000424 */   addiu     $a0, $zero, 0x78
    /* 2110C 80112D0C 93E0030C */  jal        func_800F824C
    /* 21110 80112D10 8F000424 */   addiu     $a0, $zero, 0x8F
    /* 21114 80112D14 53D9030C */  jal        func_800F654C
    /* 21118 80112D18 60000424 */   addiu     $a0, $zero, 0x60
    /* 2111C 80112D1C 93E0030C */  jal        func_800F824C
    /* 21120 80112D20 92000424 */   addiu     $a0, $zero, 0x92
    /* 21124 80112D24 0756040C */  jal        func_8011581C
    /* 21128 80112D28 00000000 */   nop
    /* 2112C 80112D2C AFD8030C */  jal        func_800F62BC
    /* 21130 80112D30 79000424 */   addiu     $a0, $zero, 0x79
    /* 21134 80112D34 8CD9030C */  jal        func_800F6630
    /* 21138 80112D38 79000424 */   addiu     $a0, $zero, 0x79
    /* 2113C 80112D3C 5DD5030C */  jal        func_800F5574
    /* 21140 80112D40 03000424 */   addiu     $a0, $zero, 0x3
    /* 21144 80112D44 F5D4030C */  jal        func_800F53D4
    /* 21148 80112D48 00000000 */   nop
    /* 2114C 80112D4C 9DFF4010 */  beqz       $v0, .L80112BC4
    /* 21150 80112D50 00000000 */   nop
    /* 21154 80112D54 EEE3030C */  jal        func_800F8FB8
    /* 21158 80112D58 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 2115C 80112D5C 8CD9030C */  jal        func_800F6630
    /* 21160 80112D60 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 21164 80112D64 5DD5030C */  jal        func_800F5574
    /* 21168 80112D68 40000424 */   addiu     $a0, $zero, 0x40
    /* 2116C 80112D6C F0D4030C */  jal        func_800F53C0
    /* 21170 80112D70 00000000 */   nop
    /* 21174 80112D74 53004010 */  beqz       $v0, .L80112EC4
    /* 21178 80112D78 00000000 */   nop
    /* 2117C 80112D7C 5DD5030C */  jal        func_800F5574
    /* 21180 80112D80 90000424 */   addiu     $a0, $zero, 0x90
    /* 21184 80112D84 F0D4030C */  jal        func_800F53C0
    /* 21188 80112D88 00000000 */   nop
    /* 2118C 80112D8C 4D004014 */  bnez       $v0, .L80112EC4
    /* 21190 80112D90 00000000 */   nop
    /* 21194 80112D94 53D9030C */  jal        func_800F654C
    /* 21198 80112D98 01000424 */   addiu     $a0, $zero, 0x1
    /* 2119C 80112D9C 93E0030C */  jal        func_800F824C
    /* 211A0 80112DA0 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 211A4 80112DA4 8CD9030C */  jal        func_800F6630
    /* 211A8 80112DA8 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 211AC 80112DAC 92D0030C */  jal        func_800F4248
    /* 211B0 80112DB0 07000424 */   addiu     $a0, $zero, 0x7
    /* 211B4 80112DB4 48D0030C */  jal        func_800F4120
    /* 211B8 80112DB8 02020424 */   addiu     $a0, $zero, 0x202
    /* 211BC 80112DBC 41004014 */  bnez       $v0, .L80112EC4
    /* 211C0 80112DC0 00000000 */   nop
    /* 211C4 80112DC4 AFD8030C */  jal        func_800F62BC
    /* 211C8 80112DC8 C4000424 */   addiu     $a0, $zero, 0xC4
    /* 211CC 80112DCC 53D9030C */  jal        func_800F654C
    /* 211D0 80112DD0 23000424 */   addiu     $a0, $zero, 0x23
    /* 211D4 80112DD4 01F6030C */  jal        func_800FD804
    /* 211D8 80112DD8 00000000 */   nop
    /* 211DC 80112DDC 77DC030C */  jal        func_800F71DC
    /* 211E0 80112DE0 21200000 */   addu      $a0, $zero, $zero
  .L80112DE4:
    /* 211E4 80112DE4 DADA030C */  jal        func_800F6B68
    /* 211E8 80112DE8 6D0A0424 */   addiu     $a0, $zero, 0xA6D
    /* 211EC 80112DEC 5DD5030C */  jal        func_800F5574
    /* 211F0 80112DF0 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 211F4 80112DF4 F5D4030C */  jal        func_800F53D4
    /* 211F8 80112DF8 00000000 */   nop
    /* 211FC 80112DFC 0F004014 */  bnez       $v0, .L80112E3C
    /* 21200 80112E00 00000000 */   nop
    /* 21204 80112E04 5DD5030C */  jal        func_800F5574
    /* 21208 80112E08 06000424 */   addiu     $a0, $zero, 0x6
    /* 2120C 80112E0C F0D4030C */  jal        func_800F53C0
    /* 21210 80112E10 00000000 */   nop
    /* 21214 80112E14 09004014 */  bnez       $v0, .L80112E3C
    /* 21218 80112E18 00000000 */   nop
    /* 2121C 80112E1C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 21220 80112E20 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 21224 80112E24 00000000 */  nop
    /* 21228 80112E28 00006294 */  lhu        $v0, 0x0($v1)
    /* 2122C 80112E2C 00000000 */  nop
    /* 21230 80112E30 04004224 */  addiu      $v0, $v0, 0x4
    /* 21234 80112E34 794B0408 */  j          .L80112DE4
    /* 21238 80112E38 000062A4 */   sh        $v0, 0x0($v1)
  .L80112E3C:
    /* 2123C 80112E3C 3BE4030C */  jal        func_800F90EC
    /* 21240 80112E40 6D0A0424 */   addiu     $a0, $zero, 0xA6D
    /* 21244 80112E44 3BE4030C */  jal        func_800F90EC
    /* 21248 80112E48 710A0424 */   addiu     $a0, $zero, 0xA71
    /* 2124C 80112E4C 3BE4030C */  jal        func_800F90EC
    /* 21250 80112E50 750A0424 */   addiu     $a0, $zero, 0xA75
    /* 21254 80112E54 8CD9030C */  jal        func_800F6630
    /* 21258 80112E58 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 2125C 80112E5C 04D5030C */  jal        func_800F5410
    /* 21260 80112E60 00000000 */   nop
    /* 21264 80112E64 02D0030C */  jal        func_800F4008
    /* 21268 80112E68 20000424 */   addiu     $a0, $zero, 0x20
    /* 2126C 80112E6C DAE1030C */  jal        func_800F8768
    /* 21270 80112E70 6E0A0424 */   addiu     $a0, $zero, 0xA6E
    /* 21274 80112E74 DAE1030C */  jal        func_800F8768
    /* 21278 80112E78 760A0424 */   addiu     $a0, $zero, 0xA76
    /* 2127C 80112E7C 20D5030C */  jal        func_800F5480
    /* 21280 80112E80 00000000 */   nop
    /* 21284 80112E84 16E0030C */  jal        func_800F8058
    /* 21288 80112E88 10000424 */   addiu     $a0, $zero, 0x10
    /* 2128C 80112E8C DAE1030C */  jal        func_800F8768
    /* 21290 80112E90 720A0424 */   addiu     $a0, $zero, 0xA72
    /* 21294 80112E94 53D9030C */  jal        func_800F654C
    /* 21298 80112E98 48000424 */   addiu     $a0, $zero, 0x48
    /* 2129C 80112E9C DAE1030C */  jal        func_800F8768
    /* 212A0 80112EA0 6F0A0424 */   addiu     $a0, $zero, 0xA6F
    /* 212A4 80112EA4 53D9030C */  jal        func_800F654C
    /* 212A8 80112EA8 58000424 */   addiu     $a0, $zero, 0x58
    /* 212AC 80112EAC DAE1030C */  jal        func_800F8768
    /* 212B0 80112EB0 730A0424 */   addiu     $a0, $zero, 0xA73
    /* 212B4 80112EB4 53D9030C */  jal        func_800F654C
    /* 212B8 80112EB8 68000424 */   addiu     $a0, $zero, 0x68
    /* 212BC 80112EBC DAE1030C */  jal        func_800F8768
    /* 212C0 80112EC0 770A0424 */   addiu     $a0, $zero, 0xA77
  .L80112EC4:
    /* 212C4 80112EC4 EEE3030C */  jal        func_800F8FB8
    /* 212C8 80112EC8 24000424 */   addiu     $a0, $zero, 0x24
    /* 212CC 80112ECC EEE3030C */  jal        func_800F8FB8
    /* 212D0 80112ED0 25000424 */   addiu     $a0, $zero, 0x25
  .L80112ED4:
    /* 212D4 80112ED4 9CDC030C */  jal        func_800F7270
    /* 212D8 80112ED8 24000424 */   addiu     $a0, $zero, 0x24
    /* 212DC 80112EDC DADA030C */  jal        func_800F6B68
    /* 212E0 80112EE0 6D0A0424 */   addiu     $a0, $zero, 0xA6D
    /* 212E4 80112EE4 0DD9030C */  jal        func_800F6434
    /* 212E8 80112EE8 80000424 */   addiu     $a0, $zero, 0x80
    /* 212EC 80112EEC 1B004014 */  bnez       $v0, .L80112F5C
    /* 212F0 80112EF0 00000000 */   nop
    /* 212F4 80112EF4 5DD5030C */  jal        func_800F5574
    /* 212F8 80112EF8 06000424 */   addiu     $a0, $zero, 0x6
    /* 212FC 80112EFC F0D4030C */  jal        func_800F53C0
    /* 21300 80112F00 00000000 */   nop
    /* 21304 80112F04 15004014 */  bnez       $v0, .L80112F5C
    /* 21308 80112F08 00000000 */   nop
    /* 2130C 80112F0C 2658040C */  jal        func_80116098
    /* 21310 80112F10 00000000 */   nop
    /* 21314 80112F14 8CD9030C */  jal        func_800F6630
    /* 21318 80112F18 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 2131C 80112F1C 92D0030C */  jal        func_800F4248
    /* 21320 80112F20 07000424 */   addiu     $a0, $zero, 0x7
    /* 21324 80112F24 48D0030C */  jal        func_800F4120
    /* 21328 80112F28 02020424 */   addiu     $a0, $zero, 0x202
    /* 2132C 80112F2C 0B004014 */  bnez       $v0, .L80112F5C
    /* 21330 80112F30 00000000 */   nop
    /* 21334 80112F34 9CDC030C */  jal        func_800F7270
    /* 21338 80112F38 24000424 */   addiu     $a0, $zero, 0x24
    /* 2133C 80112F3C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 21340 80112F40 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 21344 80112F44 00000000 */  nop
    /* 21348 80112F48 00004494 */  lhu        $a0, 0x0($v0)
    /* 2134C 80112F4C C1CE030C */  jal        func_800F3B04
    /* 21350 80112F50 6D0A8424 */   addiu     $a0, $a0, 0xA6D
    /* 21354 80112F54 12D8030C */  jal        func_800F6048
    /* 21358 80112F58 21204000 */   addu      $a0, $v0, $zero
  .L80112F5C:
    /* 2135C 80112F5C 9CDC030C */  jal        func_800F7270
    /* 21360 80112F60 24000424 */   addiu     $a0, $zero, 0x24
    /* 21364 80112F64 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 21368 80112F68 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2136C 80112F6C 00000000 */  nop
    /* 21370 80112F70 00006294 */  lhu        $v0, 0x0($v1)
    /* 21374 80112F74 24000424 */  addiu      $a0, $zero, 0x24
    /* 21378 80112F78 04004224 */  addiu      $v0, $v0, 0x4
    /* 2137C 80112F7C 5BE3030C */  jal        func_800F8D6C
    /* 21380 80112F80 000062A4 */   sh        $v0, 0x0($v1)
    /* 21384 80112F84 56D6030C */  jal        func_800F5958
    /* 21388 80112F88 60000424 */   addiu     $a0, $zero, 0x60
    /* 2138C 80112F8C F5D4030C */  jal        func_800F53D4
    /* 21390 80112F90 00000000 */   nop
    /* 21394 80112F94 CFFF4010 */  beqz       $v0, .L80112ED4
    /* 21398 80112F98 00000000 */   nop
    /* 2139C 80112F9C 8CD9030C */  jal        func_800F6630
    /* 213A0 80112FA0 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 213A4 80112FA4 92D0030C */  jal        func_800F4248
    /* 213A8 80112FA8 01000424 */   addiu     $a0, $zero, 0x1
    /* 213AC 80112FAC 48D0030C */  jal        func_800F4120
    /* 213B0 80112FB0 02020424 */   addiu     $a0, $zero, 0x202
    /* 213B4 80112FB4 0D004014 */  bnez       $v0, .L80112FEC
    /* 213B8 80112FB8 00000000 */   nop
    /* 213BC 80112FBC 9CDC030C */  jal        func_800F7270
    /* 213C0 80112FC0 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 213C4 80112FC4 92D7030C */  jal        func_800F5E48
    /* 213C8 80112FC8 00000000 */   nop
    /* 213CC 80112FCC 5BE3030C */  jal        func_800F8D6C
    /* 213D0 80112FD0 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 213D4 80112FD4 56D6030C */  jal        func_800F5958
    /* 213D8 80112FD8 DEFF0434 */   ori       $a0, $zero, 0xFFDE
    /* 213DC 80112FDC F5D4030C */  jal        func_800F53D4
    /* 213E0 80112FE0 00000000 */   nop
    /* 213E4 80112FE4 09004014 */  bnez       $v0, .L8011300C
    /* 213E8 80112FE8 00000000 */   nop
  .L80112FEC:
    /* 213EC 80112FEC 8CD9030C */  jal        func_800F6630
    /* 213F0 80112FF0 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 213F4 80112FF4 5DD5030C */  jal        func_800F5574
    /* 213F8 80112FF8 B0000424 */   addiu     $a0, $zero, 0xB0
    /* 213FC 80112FFC F0D4030C */  jal        func_800F53C0
    /* 21400 80113000 00000000 */   nop
    /* 21404 80113004 E74A0408 */  j          .L80112B9C
    /* 21408 80113008 00000000 */   nop
  .L8011300C:
    /* 2140C 8011300C 53D9030C */  jal        func_800F654C
    /* 21410 80113010 23000424 */   addiu     $a0, $zero, 0x23
    /* 21414 80113014 D05F040C */  jal        func_80117F40
    /* 21418 80113018 00000000 */   nop
  .L8011301C:
    /* 2141C 8011301C F6F9030C */  jal        func_800FE7D8
    /* 21420 80113020 00000000 */   nop
    /* 21424 80113024 1CFA030C */  jal        func_800FE870
    /* 21428 80113028 00000000 */   nop
    /* 2142C 8011302C 09FC030C */  jal        func_800FF024
    /* 21430 80113030 00000000 */   nop
    /* 21434 80113034 8CD9030C */  jal        func_800F6630
    /* 21438 80113038 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 2143C 8011303C 20D5030C */  jal        func_800F5480
    /* 21440 80113040 00000000 */   nop
    /* 21444 80113044 16E0030C */  jal        func_800F8058
    /* 21448 80113048 10000424 */   addiu     $a0, $zero, 0x10
    /* 2144C 8011304C 67D5050C */  jal        func_8017559C
    /* 21450 80113050 00000000 */   nop
    /* 21454 80113054 59D9030C */  jal        func_800F6564
    /* 21458 80113058 7A060424 */   addiu     $a0, $zero, 0x67A
    /* 2145C 8011305C 92D0030C */  jal        func_800F4248
    /* 21460 80113060 03000424 */   addiu     $a0, $zero, 0x3
    /* 21464 80113064 48D0030C */  jal        func_800F4120
    /* 21468 80113068 02020424 */   addiu     $a0, $zero, 0x202
    /* 2146C 8011306C EBFF4014 */  bnez       $v0, .L8011301C
    /* 21470 80113070 00000000 */   nop
    /* 21474 80113074 8CD9030C */  jal        func_800F6630
    /* 21478 80113078 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 2147C 8011307C 33D7030C */  jal        func_800F5CCC
    /* 21480 80113080 00000000 */   nop
    /* 21484 80113084 93E0030C */  jal        func_800F824C
    /* 21488 80113088 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 2148C 8011308C 5DD5030C */  jal        func_800F5574
    /* 21490 80113090 10000424 */   addiu     $a0, $zero, 0x10
    /* 21494 80113094 F5D4030C */  jal        func_800F53D4
    /* 21498 80113098 00000000 */   nop
    /* 2149C 8011309C DFFF4010 */  beqz       $v0, .L8011301C
    /* 214A0 801130A0 00000000 */   nop
    /* 214A4 801130A4 977A040C */  jal        func_8011EA5C
    /* 214A8 801130A8 00000000 */   nop
    /* 214AC 801130AC 1800BF8F */  lw         $ra, 0x18($sp)
    /* 214B0 801130B0 1400B18F */  lw         $s1, 0x14($sp)
    /* 214B4 801130B4 1000B08F */  lw         $s0, 0x10($sp)
    /* 214B8 801130B8 0800E003 */  jr         $ra
    /* 214BC 801130BC 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80112A68
