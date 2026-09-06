nonmatching func_80134C74, 0x200

glabel func_80134C74
    /* 43074 80134C74 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 43078 80134C78 2400BFAF */  sw         $ra, 0x24($sp)
    /* 4307C 80134C7C 2000B2AF */  sw         $s2, 0x20($sp)
    /* 43080 80134C80 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 43084 80134C84 9BE4030C */  jal        func_800F926C
    /* 43088 80134C88 1800B0AF */   sw        $s0, 0x18($sp)
    /* 4308C 80134C8C A6E4030C */  jal        func_800F9298
    /* 43090 80134C90 1D80103C */   lui       $s0, %hi(D_801D3D68)
    /* 43094 80134C94 77DC030C */  jal        func_800F71DC
    /* 43098 80134C98 00010424 */   addiu     $a0, $zero, 0x100
    /* 4309C 80134C9C CCE4030C */  jal        func_800F9330
    /* 430A0 80134CA0 683D1026 */   addiu     $s0, $s0, %lo(D_801D3D68)
    /* 430A4 80134CA4 2EE5030C */  jal        func_800F94B8
    /* 430A8 80134CA8 0100123C */   lui       $s2, (0x10000 >> 16)
    /* 430AC 80134CAC 53D9030C */  jal        func_800F654C
    /* 430B0 80134CB0 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 430B4 80134CB4 80E4030C */  jal        func_800F9200
    /* 430B8 80134CB8 00000000 */   nop
    /* 430BC 80134CBC 12E5030C */  jal        func_800F9448
    /* 430C0 80134CC0 00000000 */   nop
    /* 430C4 80134CC4 A7BA050C */  jal        func_8016EA9C
    /* 430C8 80134CC8 00000000 */   nop
    /* 430CC 80134CCC 4F8F040C */  jal        func_80123D3C
    /* 430D0 80134CD0 00000000 */   nop
    /* 430D4 80134CD4 21200002 */  addu       $a0, $s0, $zero
    /* 430D8 80134CD8 00020524 */  addiu      $a1, $zero, 0x200
    /* 430DC 80134CDC 21300000 */  addu       $a2, $zero, $zero
    /* 430E0 80134CE0 3EFE050C */  jal        func_8017F8F8
    /* 430E4 80134CE4 21380000 */   addu      $a3, $zero, $zero
    /* 430E8 80134CE8 21200002 */  addu       $a0, $s0, $zero
    /* 430EC 80134CEC 00020524 */  addiu      $a1, $zero, 0x200
    /* 430F0 80134CF0 21300000 */  addu       $a2, $zero, $zero
    /* 430F4 80134CF4 3EFE050C */  jal        func_8017F8F8
    /* 430F8 80134CF8 11000724 */   addiu     $a3, $zero, 0x11
    /* 430FC 80134CFC 21200002 */  addu       $a0, $s0, $zero
    /* 43100 80134D00 00020524 */  addiu      $a1, $zero, 0x200
    /* 43104 80134D04 21300000 */  addu       $a2, $zero, $zero
    /* 43108 80134D08 3EFE050C */  jal        func_8017F8F8
    /* 4310C 80134D0C 12000724 */   addiu     $a3, $zero, 0x12
    /* 43110 80134D10 1A80023C */  lui        $v0, %hi(D_8019A7FC)
    /* 43114 80134D14 FCA75124 */  addiu      $s1, $v0, %lo(D_8019A7FC)
    /* 43118 80134D18 1A80033C */  lui        $v1, %hi(D_8019A774)
    /* 4311C 80134D1C 74A77024 */  addiu      $s0, $v1, %lo(D_8019A774)
    /* 43120 80134D20 1A80013C */  lui        $at, %hi(D_8019EE30)
    /* 43124 80134D24 30EE20A4 */  sh         $zero, %lo(D_8019EE30)($at)
    /* 43128 80134D28 1A80013C */  lui        $at, %hi(D_8019EE2E)
    /* 4312C 80134D2C 2EEE20A4 */  sh         $zero, %lo(D_8019EE2E)($at)
    /* 43130 80134D30 1A80013C */  lui        $at, %hi(D_8019EE2C)
    /* 43134 80134D34 2CEE20A4 */  sh         $zero, %lo(D_8019EE2C)($at)
  .L80134D38:
    /* 43138 80134D38 1000A427 */  addiu      $a0, $sp, 0x10
    /* 4313C 80134D3C 00002586 */  lh         $a1, 0x0($s1)
    /* 43140 80134D40 02002696 */  lhu        $a2, 0x2($s1)
    /* 43144 80134D44 04003126 */  addiu      $s1, $s1, 0x4
    /* 43148 80134D48 00000296 */  lhu        $v0, 0x0($s0)
    /* 4314C 80134D4C 02000396 */  lhu        $v1, 0x2($s0)
    /* 43150 80134D50 04000796 */  lhu        $a3, 0x4($s0)
    /* 43154 80134D54 06000896 */  lhu        $t0, 0x6($s0)
    /* 43158 80134D58 08001026 */  addiu      $s0, $s0, 0x8
    /* 4315C 80134D5C 00FFC624 */  addiu      $a2, $a2, -0x100
    /* 43160 80134D60 00340600 */  sll        $a2, $a2, 16
    /* 43164 80134D64 03340600 */  sra        $a2, $a2, 16
    /* 43168 80134D68 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 4316C 80134D6C 1200A3A7 */  sh         $v1, 0x12($sp)
    /* 43170 80134D70 1400A7A7 */  sh         $a3, 0x14($sp)
    /* 43174 80134D74 C051060C */  jal        func_80194700
    /* 43178 80134D78 1600A8A7 */   sh        $t0, 0x16($sp)
    /* 4317C 80134D7C E550060C */  jal        func_80194394
    /* 43180 80134D80 21200000 */   addu      $a0, $zero, $zero
    /* 43184 80134D84 21184002 */  addu       $v1, $s2, $zero
    /* 43188 80134D88 0100023C */  lui        $v0, (0x10000 >> 16)
    /* 4318C 80134D8C 031C0300 */  sra        $v1, $v1, 16
    /* 43190 80134D90 11006328 */  slti       $v1, $v1, 0x11
    /* 43194 80134D94 E8FF6014 */  bnez       $v1, .L80134D38
    /* 43198 80134D98 21904202 */   addu      $s2, $s2, $v0
    /* 4319C 80134D9C 77DC030C */  jal        func_800F71DC
    /* 431A0 80134DA0 00ED0434 */   ori       $a0, $zero, 0xED00
    /* 431A4 80134DA4 40E3030C */  jal        func_800F8D00
    /* 431A8 80134DA8 1D1B0424 */   addiu     $a0, $zero, 0x1B1D
    /* 431AC 80134DAC 53D9030C */  jal        func_800F654C
    /* 431B0 80134DB0 20000424 */   addiu     $a0, $zero, 0x20
    /* 431B4 80134DB4 93E0030C */  jal        func_800F824C
    /* 431B8 80134DB8 C1000424 */   addiu     $a0, $zero, 0xC1
    /* 431BC 80134DBC DDE3030C */  jal        func_800F8F74
    /* 431C0 80134DC0 791B0424 */   addiu     $a0, $zero, 0x1B79
    /* 431C4 80134DC4 DDE3030C */  jal        func_800F8F74
    /* 431C8 80134DC8 7A1B0424 */   addiu     $a0, $zero, 0x1B7A
    /* 431CC 80134DCC 9FBA050C */  jal        func_8016EA7C
    /* 431D0 80134DD0 00000000 */   nop
    /* 431D4 80134DD4 53D9030C */  jal        func_800F654C
    /* 431D8 80134DD8 20000424 */   addiu     $a0, $zero, 0x20
    /* 431DC 80134DDC 93E0030C */  jal        func_800F824C
    /* 431E0 80134DE0 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 431E4 80134DE4 DDE3030C */  jal        func_800F8F74
    /* 431E8 80134DE8 941B0424 */   addiu     $a0, $zero, 0x1B94
    /* 431EC 80134DEC ED8F040C */  jal        func_80123FB4
    /* 431F0 80134DF0 00000000 */   nop
    /* 431F4 80134DF4 6E90040C */  jal        func_801241B8
    /* 431F8 80134DF8 00000000 */   nop
    /* 431FC 80134DFC CC98040C */  jal        func_80126330
    /* 43200 80134E00 00000000 */   nop
    /* 43204 80134E04 A97D040C */  jal        func_8011F6A4
    /* 43208 80134E08 00000000 */   nop
    /* 4320C 80134E0C 2CDE040C */  jal        func_801378B0
    /* 43210 80134E10 00000000 */   nop
    /* 43214 80134E14 53D9030C */  jal        func_800F654C
    /* 43218 80134E18 0A000424 */   addiu     $a0, $zero, 0xA
    /* 4321C 80134E1C 62E0030C */  jal        func_800F8188
    /* 43220 80134E20 7C1B0424 */   addiu     $a0, $zero, 0x1B7C
    /* 43224 80134E24 FDD3040C */  jal        func_80134FF4
    /* 43228 80134E28 00000000 */   nop
    /* 4322C 80134E2C 8499040C */  jal        func_80126610
    /* 43230 80134E30 00000000 */   nop
    /* 43234 80134E34 4588040C */  jal        func_80122114
    /* 43238 80134E38 00000000 */   nop
    /* 4323C 80134E3C C7E5030C */  jal        func_800F971C
    /* 43240 80134E40 00000000 */   nop
    /* 43244 80134E44 52CF030C */  jal        func_800F3D48
    /* 43248 80134E48 00000000 */   nop
    /* 4324C 80134E4C 2EE5030C */  jal        func_800F94B8
    /* 43250 80134E50 00000000 */   nop
    /* 43254 80134E54 12E5030C */  jal        func_800F9448
    /* 43258 80134E58 00000000 */   nop
    /* 4325C 80134E5C 2400BF8F */  lw         $ra, 0x24($sp)
    /* 43260 80134E60 2000B28F */  lw         $s2, 0x20($sp)
    /* 43264 80134E64 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 43268 80134E68 1800B08F */  lw         $s0, 0x18($sp)
    /* 4326C 80134E6C 0800E003 */  jr         $ra
    /* 43270 80134E70 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_80134C74
