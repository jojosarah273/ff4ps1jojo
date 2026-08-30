nonmatching func_80145C74, 0x230

glabel func_80145C74
    /* 54074 80145C74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 54078 80145C78 1000BFAF */  sw         $ra, 0x10($sp)
  .L80145C7C:
    /* 5407C 80145C7C 59D9030C */  jal        func_800F6564
    /* 54080 80145C80 A8EF0434 */   ori       $a0, $zero, 0xEFA8
    /* 54084 80145C84 0DD9030C */  jal        func_800F6434
    /* 54088 80145C88 02000424 */   addiu     $a0, $zero, 0x2
    /* 5408C 80145C8C 05004014 */  bnez       $v0, .L80145CA4
    /* 54090 80145C90 00000000 */   nop
    /* 54094 80145C94 67C9010C */  jal        func_8007259C
    /* 54098 80145C98 00000000 */   nop
    /* 5409C 80145C9C 1F170508 */  j          .L80145C7C
    /* 540A0 80145CA0 00000000 */   nop
  .L80145CA4:
    /* 540A4 80145CA4 59D9030C */  jal        func_800F6564
    /* 540A8 80145CA8 BBF00434 */   ori       $a0, $zero, 0xF0BB
    /* 540AC 80145CAC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 540B0 80145CB0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 540B4 80145CB4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 540B8 80145CB8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 540BC 80145CBC 00004394 */  lhu        $v1, 0x0($v0)
    /* 540C0 80145CC0 21200000 */  addu       $a0, $zero, $zero
    /* 540C4 80145CC4 5BE3030C */  jal        func_800F8D6C
    /* 540C8 80145CC8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 540CC 80145CCC 77DC030C */  jal        func_800F71DC
    /* 540D0 80145CD0 E6DB0434 */   ori       $a0, $zero, 0xDBE6
    /* 540D4 80145CD4 4DDD030C */  jal        func_800F7534
    /* 540D8 80145CD8 B5F00434 */   ori       $a0, $zero, 0xF0B5
    /* 540DC 80145CDC 59D9030C */  jal        func_800F6564
    /* 540E0 80145CE0 B9F00434 */   ori       $a0, $zero, 0xF0B9
    /* 540E4 80145CE4 47D0010C */  jal        func_8007411C
    /* 540E8 80145CE8 00000000 */   nop
    /* 540EC 80145CEC C1CE030C */  jal        func_800F3B04
    /* 540F0 80145CF0 BBF00434 */   ori       $a0, $zero, 0xF0BB
    /* 540F4 80145CF4 AFDD030C */  jal        func_800F76BC
    /* 540F8 80145CF8 21204000 */   addu      $a0, $v0, $zero
    /* 540FC 80145CFC C1CE030C */  jal        func_800F3B04
    /* 54100 80145D00 BBF00434 */   ori       $a0, $zero, 0xF0BB
    /* 54104 80145D04 AFDD030C */  jal        func_800F76BC
    /* 54108 80145D08 21204000 */   addu      $a0, $v0, $zero
    /* 5410C 80145D0C 77DC030C */  jal        func_800F71DC
    /* 54110 80145D10 E6DB0434 */   ori       $a0, $zero, 0xDBE6
    /* 54114 80145D14 40E3030C */  jal        func_800F8D00
    /* 54118 80145D18 B5F00434 */   ori       $a0, $zero, 0xF0B5
    /* 5411C 80145D1C 77DC030C */  jal        func_800F71DC
    /* 54120 80145D20 40000424 */   addiu     $a0, $zero, 0x40
    /* 54124 80145D24 40E3030C */  jal        func_800F8D00
    /* 54128 80145D28 ADEF0434 */   ori       $a0, $zero, 0xEFAD
    /* 5412C 80145D2C 40E3030C */  jal        func_800F8D00
    /* 54130 80145D30 B6EF0434 */   ori       $a0, $zero, 0xEFB6
    /* 54134 80145D34 53D9030C */  jal        func_800F654C
    /* 54138 80145D38 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 5413C 80145D3C 62E0030C */  jal        func_800F8188
    /* 54140 80145D40 AFEF0434 */   ori       $a0, $zero, 0xEFAF
    /* 54144 80145D44 62E0030C */  jal        func_800F8188
    /* 54148 80145D48 B8EF0434 */   ori       $a0, $zero, 0xEFB8
  .L80145D4C:
    /* 5414C 80145D4C 67C9010C */  jal        func_8007259C
    /* 54150 80145D50 00000000 */   nop
    /* 54154 80145D54 91E5030C */  jal        func_800F9644
    /* 54158 80145D58 20000424 */   addiu     $a0, $zero, 0x20
    /* 5415C 80145D5C 63D9030C */  jal        func_800F658C
    /* 54160 80145D60 B5F00434 */   ori       $a0, $zero, 0xF0B5
    /* 54164 80145D64 6CE0030C */  jal        func_800F81B0
    /* 54168 80145D68 A9EF0434 */   ori       $a0, $zero, 0xEFA9
    /* 5416C 80145D6C 04D5030C */  jal        func_800F5410
    /* 54170 80145D70 00000000 */   nop
    /* 54174 80145D74 19D0030C */  jal        func_800F4064
    /* 54178 80145D78 40000424 */   addiu     $a0, $zero, 0x40
    /* 5417C 80145D7C 6CE0030C */  jal        func_800F81B0
    /* 54180 80145D80 B2EF0434 */   ori       $a0, $zero, 0xEFB2
    /* 54184 80145D84 63D9030C */  jal        func_800F658C
    /* 54188 80145D88 B7F00434 */   ori       $a0, $zero, 0xF0B7
    /* 5418C 80145D8C 6CE0030C */  jal        func_800F81B0
    /* 54190 80145D90 ABEF0434 */   ori       $a0, $zero, 0xEFAB
    /* 54194 80145D94 04D5030C */  jal        func_800F5410
    /* 54198 80145D98 00000000 */   nop
    /* 5419C 80145D9C 19D0030C */  jal        func_800F4064
    /* 541A0 80145DA0 00010424 */   addiu     $a0, $zero, 0x100
    /* 541A4 80145DA4 6CE0030C */  jal        func_800F81B0
    /* 541A8 80145DA8 B4EF0434 */   ori       $a0, $zero, 0xEFB4
    /* 541AC 80145DAC 63D9030C */  jal        func_800F658C
    /* 541B0 80145DB0 B5F00434 */   ori       $a0, $zero, 0xF0B5
    /* 541B4 80145DB4 04D5030C */  jal        func_800F5410
    /* 541B8 80145DB8 00000000 */   nop
    /* 541BC 80145DBC 19D0030C */  jal        func_800F4064
    /* 541C0 80145DC0 80000424 */   addiu     $a0, $zero, 0x80
    /* 541C4 80145DC4 6CE0030C */  jal        func_800F81B0
    /* 541C8 80145DC8 B5F00434 */   ori       $a0, $zero, 0xF0B5
    /* 541CC 80145DCC 63D9030C */  jal        func_800F658C
    /* 541D0 80145DD0 B7F00434 */   ori       $a0, $zero, 0xF0B7
    /* 541D4 80145DD4 04D5030C */  jal        func_800F5410
    /* 541D8 80145DD8 00000000 */   nop
    /* 541DC 80145DDC 19D0030C */  jal        func_800F4064
    /* 541E0 80145DE0 20000424 */   addiu     $a0, $zero, 0x20
    /* 541E4 80145DE4 6CE0030C */  jal        func_800F81B0
    /* 541E8 80145DE8 B7F00434 */   ori       $a0, $zero, 0xF0B7
    /* 541EC 80145DEC C7E5030C */  jal        func_800F971C
    /* 541F0 80145DF0 00000000 */   nop
    /* 541F4 80145DF4 98E5030C */  jal        func_800F9660
    /* 541F8 80145DF8 20000424 */   addiu     $a0, $zero, 0x20
    /* 541FC 80145DFC 49D7030C */  jal        func_800F5D24
    /* 54200 80145E00 BAF00434 */   ori       $a0, $zero, 0xF0BA
    /* 54204 80145E04 E3D6030C */  jal        func_800F5B8C
    /* 54208 80145E08 02020424 */   addiu     $a0, $zero, 0x202
    /* 5420C 80145E0C 13004014 */  bnez       $v0, .L80145E5C
    /* 54210 80145E10 00000000 */   nop
    /* 54214 80145E14 53D9030C */  jal        func_800F654C
    /* 54218 80145E18 08000424 */   addiu     $a0, $zero, 0x8
    /* 5421C 80145E1C 62E0030C */  jal        func_800F8188
    /* 54220 80145E20 BAF00434 */   ori       $a0, $zero, 0xF0BA
    /* 54224 80145E24 91E5030C */  jal        func_800F9644
    /* 54228 80145E28 20000424 */   addiu     $a0, $zero, 0x20
    /* 5422C 80145E2C 63D9030C */  jal        func_800F658C
    /* 54230 80145E30 B7F00434 */   ori       $a0, $zero, 0xF0B7
    /* 54234 80145E34 04D5030C */  jal        func_800F5410
    /* 54238 80145E38 00000000 */   nop
    /* 5423C 80145E3C 19D0030C */  jal        func_800F4064
    /* 54240 80145E40 00010424 */   addiu     $a0, $zero, 0x100
    /* 54244 80145E44 6CE0030C */  jal        func_800F81B0
    /* 54248 80145E48 B7F00434 */   ori       $a0, $zero, 0xF0B7
    /* 5424C 80145E4C C7E5030C */  jal        func_800F971C
    /* 54250 80145E50 00000000 */   nop
    /* 54254 80145E54 98E5030C */  jal        func_800F9660
    /* 54258 80145E58 20000424 */   addiu     $a0, $zero, 0x20
  .L80145E5C:
    /* 5425C 80145E5C 53D9030C */  jal        func_800F654C
    /* 54260 80145E60 01000424 */   addiu     $a0, $zero, 0x1
    /* 54264 80145E64 62E0030C */  jal        func_800F8188
    /* 54268 80145E68 A8EF0434 */   ori       $a0, $zero, 0xEFA8
    /* 5426C 80145E6C 62E0030C */  jal        func_800F8188
    /* 54270 80145E70 B1EF0434 */   ori       $a0, $zero, 0xEFB1
    /* 54274 80145E74 49D7030C */  jal        func_800F5D24
    /* 54278 80145E78 BBF00434 */   ori       $a0, $zero, 0xF0BB
    /* 5427C 80145E7C E3D6030C */  jal        func_800F5B8C
    /* 54280 80145E80 02020424 */   addiu     $a0, $zero, 0x202
    /* 54284 80145E84 B1FF4014 */  bnez       $v0, .L80145D4C
    /* 54288 80145E88 00000000 */   nop
    /* 5428C 80145E8C 67C9010C */  jal        func_8007259C
    /* 54290 80145E90 00000000 */   nop
    /* 54294 80145E94 1000BF8F */  lw         $ra, 0x10($sp)
    /* 54298 80145E98 00000000 */  nop
    /* 5429C 80145E9C 0800E003 */  jr         $ra
    /* 542A0 80145EA0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80145C74
