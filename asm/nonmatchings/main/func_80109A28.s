nonmatching func_80109A28, 0xE0

glabel func_80109A28
    /* 17E28 80109A28 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 17E2C 80109A2C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 17E30 80109A30 8CD9030C */  jal        func_800F6630
    /* 17E34 80109A34 EC000424 */   addiu     $a0, $zero, 0xEC
    /* 17E38 80109A38 0DD9030C */  jal        func_800F6434
    /* 17E3C 80109A3C 02020424 */   addiu     $a0, $zero, 0x202
    /* 17E40 80109A40 2D004010 */  beqz       $v0, .L80109AF8
    /* 17E44 80109A44 00000000 */   nop
    /* 17E48 80109A48 EEE3030C */  jal        func_800F8FB8
    /* 17E4C 80109A4C EC000424 */   addiu     $a0, $zero, 0xEC
    /* 17E50 80109A50 53D9030C */  jal        func_800F654C
    /* 17E54 80109A54 80000424 */   addiu     $a0, $zero, 0x80
    /* 17E58 80109A58 62E0030C */  jal        func_800F8188
    /* 17E5C 80109A5C 15210424 */   addiu     $a0, $zero, 0x2115
    /* 17E60 80109A60 21F3030C */  jal        func_800FCC84
    /* 17E64 80109A64 00000000 */   nop
    /* 17E68 80109A68 53D9030C */  jal        func_800F654C
    /* 17E6C 80109A6C 09000424 */   addiu     $a0, $zero, 0x9
    /* 17E70 80109A70 62E0030C */  jal        func_800F8188
    /* 17E74 80109A74 00430424 */   addiu     $a0, $zero, 0x4300
    /* 17E78 80109A78 77DC030C */  jal        func_800F71DC
    /* 17E7C 80109A7C 40280424 */   addiu     $a0, $zero, 0x2840
    /* 17E80 80109A80 40E3030C */  jal        func_800F8D00
    /* 17E84 80109A84 16210424 */   addiu     $a0, $zero, 0x2116
    /* 17E88 80109A88 EEE3030C */  jal        func_800F8FB8
    /* 17E8C 80109A8C 10000424 */   addiu     $a0, $zero, 0x10
    /* 17E90 80109A90 77DC030C */  jal        func_800F71DC
    /* 17E94 80109A94 10060424 */   addiu     $a0, $zero, 0x610
    /* 17E98 80109A98 40E3030C */  jal        func_800F8D00
    /* 17E9C 80109A9C 02430424 */   addiu     $a0, $zero, 0x4302
    /* 17EA0 80109AA0 77DC030C */  jal        func_800F71DC
    /* 17EA4 80109AA4 40000424 */   addiu     $a0, $zero, 0x40
    /* 17EA8 80109AA8 40E3030C */  jal        func_800F8D00
    /* 17EAC 80109AAC 05430424 */   addiu     $a0, $zero, 0x4305
    /* 17EB0 80109AB0 2FF3030C */  jal        func_800FCCBC
    /* 17EB4 80109AB4 00000000 */   nop
    /* 17EB8 80109AB8 77DC030C */  jal        func_800F71DC
    /* 17EBC 80109ABC 60280424 */   addiu     $a0, $zero, 0x2860
    /* 17EC0 80109AC0 40E3030C */  jal        func_800F8D00
    /* 17EC4 80109AC4 16210424 */   addiu     $a0, $zero, 0x2116
    /* 17EC8 80109AC8 DDE3030C */  jal        func_800F8F74
    /* 17ECC 80109ACC 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 17ED0 80109AD0 77DC030C */  jal        func_800F71DC
    /* 17ED4 80109AD4 10060424 */   addiu     $a0, $zero, 0x610
    /* 17ED8 80109AD8 40E3030C */  jal        func_800F8D00
    /* 17EDC 80109ADC 02430424 */   addiu     $a0, $zero, 0x4302
    /* 17EE0 80109AE0 77DC030C */  jal        func_800F71DC
    /* 17EE4 80109AE4 40000424 */   addiu     $a0, $zero, 0x40
    /* 17EE8 80109AE8 40E3030C */  jal        func_800F8D00
    /* 17EEC 80109AEC 05430424 */   addiu     $a0, $zero, 0x4305
    /* 17EF0 80109AF0 2FF3030C */  jal        func_800FCCBC
    /* 17EF4 80109AF4 00000000 */   nop
  .L80109AF8:
    /* 17EF8 80109AF8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 17EFC 80109AFC 00000000 */  nop
    /* 17F00 80109B00 0800E003 */  jr         $ra
    /* 17F04 80109B04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80109A28
