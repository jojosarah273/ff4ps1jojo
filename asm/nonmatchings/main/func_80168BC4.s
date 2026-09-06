nonmatching func_80168BC4, 0x26C

glabel func_80168BC4
    /* 76FC4 80168BC4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 76FC8 80168BC8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 76FCC 80168BCC DDE3030C */  jal        func_800F8F74
    /* 76FD0 80168BD0 26F30434 */   ori       $a0, $zero, 0xF326
    /* 76FD4 80168BD4 DDE3030C */  jal        func_800F8F74
    /* 76FD8 80168BD8 27F30434 */   ori       $a0, $zero, 0xF327
    /* 76FDC 80168BDC DDE3030C */  jal        func_800F8F74
    /* 76FE0 80168BE0 29F30434 */   ori       $a0, $zero, 0xF329
    /* 76FE4 80168BE4 DDE3030C */  jal        func_800F8F74
    /* 76FE8 80168BE8 2BF30434 */   ori       $a0, $zero, 0xF32B
    /* 76FEC 80168BEC DDE3030C */  jal        func_800F8F74
    /* 76FF0 80168BF0 2CF30434 */   ori       $a0, $zero, 0xF32C
    /* 76FF4 80168BF4 DDE3030C */  jal        func_800F8F74
    /* 76FF8 80168BF8 2DF30434 */   ori       $a0, $zero, 0xF32D
    /* 76FFC 80168BFC 80E4030C */  jal        func_800F9200
    /* 77000 80168C00 00000000 */   nop
    /* 77004 80168C04 20D5030C */  jal        func_800F5480
    /* 77008 80168C08 00000000 */   nop
    /* 7700C 80168C0C 16E0030C */  jal        func_800F8058
    /* 77010 80168C10 4D000424 */   addiu     $a0, $zero, 0x4D
    /* 77014 80168C14 62E0030C */  jal        func_800F8188
    /* 77018 80168C18 25F30434 */   ori       $a0, $zero, 0xF325
    /* 7701C 80168C1C 5DD5030C */  jal        func_800F5574
    /* 77020 80168C20 0D000424 */   addiu     $a0, $zero, 0xD
    /* 77024 80168C24 F0D4030C */  jal        func_800F53C0
    /* 77028 80168C28 00000000 */   nop
    /* 7702C 80168C2C 1B004010 */  beqz       $v0, .L80168C9C
    /* 77030 80168C30 00000000 */   nop
    /* 77034 80168C34 5DD5030C */  jal        func_800F5574
    /* 77038 80168C38 10000424 */   addiu     $a0, $zero, 0x10
    /* 7703C 80168C3C F5D4030C */  jal        func_800F53D4
    /* 77040 80168C40 00000000 */   nop
    /* 77044 80168C44 15004014 */  bnez       $v0, .L80168C9C
    /* 77048 80168C48 00000000 */   nop
    /* 7704C 80168C4C 80E4030C */  jal        func_800F9200
    /* 77050 80168C50 00000000 */   nop
    /* 77054 80168C54 90D8030C */  jal        func_800F6240
    /* 77058 80168C58 27F30434 */   ori       $a0, $zero, 0xF327
    /* 7705C 80168C5C 59D9030C */  jal        func_800F6564
    /* 77060 80168C60 13180424 */   addiu     $a0, $zero, 0x1813
    /* 77064 80168C64 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 77068 80168C68 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7706C 80168C6C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 77070 80168C70 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 77074 80168C74 00004394 */  lhu        $v1, 0x0($v0)
    /* 77078 80168C78 00190424 */  addiu      $a0, $zero, 0x1900
    /* 7707C 80168C7C 5CDB030C */  jal        func_800F6D70
    /* 77080 80168C80 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 77084 80168C84 92D0030C */  jal        func_800F4248
    /* 77088 80168C88 03000424 */   addiu     $a0, $zero, 0x3
    /* 7708C 80168C8C 62E0030C */  jal        func_800F8188
    /* 77090 80168C90 26F30434 */   ori       $a0, $zero, 0xF326
    /* 77094 80168C94 F7E4030C */  jal        func_800F93DC
    /* 77098 80168C98 00000000 */   nop
  .L80168C9C:
    /* 7709C 80168C9C 5DD5030C */  jal        func_800F5574
    /* 770A0 80168CA0 0A000424 */   addiu     $a0, $zero, 0xA
    /* 770A4 80168CA4 F5D4030C */  jal        func_800F53D4
    /* 770A8 80168CA8 00000000 */   nop
    /* 770AC 80168CAC 17004010 */  beqz       $v0, .L80168D0C
    /* 770B0 80168CB0 00000000 */   nop
    /* 770B4 80168CB4 80E4030C */  jal        func_800F9200
    /* 770B8 80168CB8 00000000 */   nop
    /* 770BC 80168CBC DDE3030C */  jal        func_800F8F74
    /* 770C0 80168CC0 33F10434 */   ori       $a0, $zero, 0xF133
    /* 770C4 80168CC4 53D9030C */  jal        func_800F654C
    /* 770C8 80168CC8 40000424 */   addiu     $a0, $zero, 0x40
    /* 770CC 80168CCC 62E0030C */  jal        func_800F8188
    /* 770D0 80168CD0 73F10434 */   ori       $a0, $zero, 0xF173
    /* 770D4 80168CD4 53D9030C */  jal        func_800F654C
    /* 770D8 80168CD8 08000424 */   addiu     $a0, $zero, 0x8
    /* 770DC 80168CDC 62E0030C */  jal        func_800F8188
    /* 770E0 80168CE0 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 770E4 80168CE4 62E0030C */  jal        func_800F8188
    /* 770E8 80168CE8 F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 770EC 80168CEC 53D9030C */  jal        func_800F654C
    /* 770F0 80168CF0 02000424 */   addiu     $a0, $zero, 0x2
    /* 770F4 80168CF4 62E0030C */  jal        func_800F8188
    /* 770F8 80168CF8 2DF30434 */   ori       $a0, $zero, 0xF32D
    /* 770FC 80168CFC 90D8030C */  jal        func_800F6240
    /* 77100 80168D00 2CF30434 */   ori       $a0, $zero, 0xF32C
    /* 77104 80168D04 F7E4030C */  jal        func_800F93DC
    /* 77108 80168D08 00000000 */   nop
  .L80168D0C:
    /* 7710C 80168D0C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 77110 80168D10 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 77114 80168D14 00000000 */  nop
    /* 77118 80168D18 00006290 */  lbu        $v0, 0x0($v1)
    /* 7711C 80168D1C 00000000 */  nop
    /* 77120 80168D20 80100200 */  sll        $v0, $v0, 2
    /* 77124 80168D24 000062A0 */  sb         $v0, 0x0($v1)
    /* 77128 80168D28 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 7712C 80168D2C 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 77130 80168D30 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 77134 80168D34 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 77138 80168D38 00008294 */  lhu        $v0, 0x0($a0)
    /* 7713C 80168D3C C7E5030C */  jal        func_800F971C
    /* 77140 80168D40 000062A4 */   sh        $v0, 0x0($v1)
    /* 77144 80168D44 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 77148 80168D48 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7714C 80168D4C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 77150 80168D50 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 77154 80168D54 00006294 */  lhu        $v0, 0x0($v1)
    /* 77158 80168D58 00000000 */  nop
    /* 7715C 80168D5C 000082A4 */  sh         $v0, 0x0($a0)
  .L80168D60:
    /* 77160 80168D60 1300043C */  lui        $a0, (0x13FA59 >> 16)
    /* 77164 80168D64 1ADB030C */  jal        func_800F6C68
    /* 77168 80168D68 59FA8434 */   ori       $a0, $a0, (0x13FA59 & 0xFFFF)
    /* 7716C 80168D6C 58E2030C */  jal        func_800F8960
    /* 77170 80168D70 21F30434 */   ori       $a0, $zero, 0xF321
    /* 77174 80168D74 D9D8030C */  jal        func_800F6364
    /* 77178 80168D78 00000000 */   nop
    /* 7717C 80168D7C EFD8030C */  jal        func_800F63BC
    /* 77180 80168D80 00000000 */   nop
    /* 77184 80168D84 A4D6030C */  jal        func_800F5A90
    /* 77188 80168D88 04000424 */   addiu     $a0, $zero, 0x4
    /* 7718C 80168D8C F5D4030C */  jal        func_800F53D4
    /* 77190 80168D90 00000000 */   nop
    /* 77194 80168D94 F2FF4010 */  beqz       $v0, .L80168D60
    /* 77198 80168D98 00000000 */   nop
    /* 7719C 80168D9C F7E4030C */  jal        func_800F93DC
    /* 771A0 80168DA0 00000000 */   nop
    /* 771A4 80168DA4 53D9030C */  jal        func_800F654C
    /* 771A8 80168DA8 38000424 */   addiu     $a0, $zero, 0x38
    /* 771AC 80168DAC 62E0030C */  jal        func_800F8188
    /* 771B0 80168DB0 30F30434 */   ori       $a0, $zero, 0xF330
    /* 771B4 80168DB4 C7E5030C */  jal        func_800F971C
    /* 771B8 80168DB8 00000000 */   nop
    /* 771BC 80168DBC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 771C0 80168DC0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 771C4 80168DC4 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 771C8 80168DC8 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 771CC 80168DCC 00004394 */  lhu        $v1, 0x0($v0)
    /* 771D0 80168DD0 00000000 */  nop
    /* 771D4 80168DD4 000083A4 */  sh         $v1, 0x0($a0)
  .L80168DD8:
    /* 771D8 80168DD8 C7E5030C */  jal        func_800F971C
    /* 771DC 80168DDC 00000000 */   nop
    /* 771E0 80168DE0 58E2030C */  jal        func_800F8960
    /* 771E4 80168DE4 90EE0434 */   ori       $a0, $zero, 0xEE90
    /* 771E8 80168DE8 D9D8030C */  jal        func_800F6364
    /* 771EC 80168DEC 00000000 */   nop
    /* 771F0 80168DF0 EFD8030C */  jal        func_800F63BC
    /* 771F4 80168DF4 00000000 */   nop
    /* 771F8 80168DF8 A4D6030C */  jal        func_800F5A90
    /* 771FC 80168DFC 20000424 */   addiu     $a0, $zero, 0x20
    /* 77200 80168E00 F5D4030C */  jal        func_800F53D4
    /* 77204 80168E04 00000000 */   nop
    /* 77208 80168E08 F3FF4010 */  beqz       $v0, .L80168DD8
    /* 7720C 80168E0C 00000000 */   nop
    /* 77210 80168E10 77DC030C */  jal        func_800F71DC
    /* 77214 80168E14 FF7F0424 */   addiu     $a0, $zero, 0x7FFF
    /* 77218 80168E18 40E3030C */  jal        func_800F8D00
    /* 7721C 80168E1C 92EE0434 */   ori       $a0, $zero, 0xEE92
    /* 77220 80168E20 1000BF8F */  lw         $ra, 0x10($sp)
    /* 77224 80168E24 00000000 */  nop
    /* 77228 80168E28 0800E003 */  jr         $ra
    /* 7722C 80168E2C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80168BC4
