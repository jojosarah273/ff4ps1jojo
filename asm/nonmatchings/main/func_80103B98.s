nonmatching func_80103B98, 0x240

glabel func_80103B98
    /* 11F98 80103B98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 11F9C 80103B9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 11FA0 80103BA0 2310040C */  jal        func_8010408C
    /* 11FA4 80103BA4 00000000 */   nop
    /* 11FA8 80103BA8 77DC030C */  jal        func_800F71DC
    /* 11FAC 80103BAC 98FF0434 */   ori       $a0, $zero, 0xFF98
    /* 11FB0 80103BB0 5BE3030C */  jal        func_800F8D6C
    /* 11FB4 80103BB4 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 11FB8 80103BB8 EEE3030C */  jal        func_800F8FB8
    /* 11FBC 80103BBC 70000424 */   addiu     $a0, $zero, 0x70
    /* 11FC0 80103BC0 EEE3030C */  jal        func_800F8FB8
    /* 11FC4 80103BC4 71000424 */   addiu     $a0, $zero, 0x71
    /* 11FC8 80103BC8 EEE3030C */  jal        func_800F8FB8
    /* 11FCC 80103BCC 72000424 */   addiu     $a0, $zero, 0x72
    /* 11FD0 80103BD0 EEE3030C */  jal        func_800F8FB8
    /* 11FD4 80103BD4 73000424 */   addiu     $a0, $zero, 0x73
    /* 11FD8 80103BD8 53D9030C */  jal        func_800F654C
    /* 11FDC 80103BDC 81000424 */   addiu     $a0, $zero, 0x81
    /* 11FE0 80103BE0 62E0030C */  jal        func_800F8188
    /* 11FE4 80103BE4 00420424 */   addiu     $a0, $zero, 0x4200
    /* 11FE8 80103BE8 53D9030C */  jal        func_800F654C
    /* 11FEC 80103BEC 21200000 */   addu      $a0, $zero, $zero
    /* 11FF0 80103BF0 93E0030C */  jal        func_800F824C
    /* 11FF4 80103BF4 79000424 */   addiu     $a0, $zero, 0x79
  .L80103BF8:
    /* 11FF8 80103BF8 ECF9030C */  jal        func_800FE7B0
    /* 11FFC 80103BFC 00000000 */   nop
    /* 12000 80103C00 DDE3030C */  jal        func_800F8F74
    /* 12004 80103C04 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 12008 80103C08 8CD9030C */  jal        func_800F6630
    /* 1200C 80103C0C 79000424 */   addiu     $a0, $zero, 0x79
    /* 12010 80103C10 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 12014 80103C14 00000000 */  nop
    /* 12018 80103C18 00006290 */  lbu        $v0, 0x0($v1)
    /* 1201C 80103C1C 00000000 */  nop
    /* 12020 80103C20 82100200 */  srl        $v0, $v0, 2
    /* 12024 80103C24 04D5030C */  jal        func_800F5410
    /* 12028 80103C28 000062A0 */   sb        $v0, 0x0($v1)
    /* 1202C 80103C2C 02D0030C */  jal        func_800F4008
    /* 12030 80103C30 09000424 */   addiu     $a0, $zero, 0x9
    /* 12034 80103C34 93E0030C */  jal        func_800F824C
    /* 12038 80103C38 6E000424 */   addiu     $a0, $zero, 0x6E
    /* 1203C 80103C3C EEE3030C */  jal        func_800F8FB8
    /* 12040 80103C40 6F000424 */   addiu     $a0, $zero, 0x6F
    /* 12044 80103C44 B9F9030C */  jal        func_800FE6E4
    /* 12048 80103C48 00000000 */   nop
    /* 1204C 80103C4C 8CD9030C */  jal        func_800F6630
    /* 12050 80103C50 79000424 */   addiu     $a0, $zero, 0x79
    /* 12054 80103C54 92D0030C */  jal        func_800F4248
    /* 12058 80103C58 07000424 */   addiu     $a0, $zero, 0x7
    /* 1205C 80103C5C 48D0030C */  jal        func_800F4120
    /* 12060 80103C60 02020424 */   addiu     $a0, $zero, 0x202
    /* 12064 80103C64 0F004014 */  bnez       $v0, .L80103CA4
    /* 12068 80103C68 00000000 */   nop
    /* 1206C 80103C6C 8CD9030C */  jal        func_800F6630
    /* 12070 80103C70 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 12074 80103C74 20D5030C */  jal        func_800F5480
    /* 12078 80103C78 00000000 */   nop
    /* 1207C 80103C7C 16E0030C */  jal        func_800F8058
    /* 12080 80103C80 01000424 */   addiu     $a0, $zero, 0x1
    /* 12084 80103C84 93E0030C */  jal        func_800F824C
    /* 12088 80103C88 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 1208C 80103C8C 8CD9030C */  jal        func_800F6630
    /* 12090 80103C90 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 12094 80103C94 16E0030C */  jal        func_800F8058
    /* 12098 80103C98 21200000 */   addu      $a0, $zero, $zero
    /* 1209C 80103C9C 93E0030C */  jal        func_800F824C
    /* 120A0 80103CA0 5D000424 */   addiu     $a0, $zero, 0x5D
  .L80103CA4:
    /* 120A4 80103CA4 C00F040C */  jal        func_80103F00
    /* 120A8 80103CA8 00000000 */   nop
    /* 120AC 80103CAC 2310040C */  jal        func_8010408C
    /* 120B0 80103CB0 00000000 */   nop
    /* 120B4 80103CB4 AFD8030C */  jal        func_800F62BC
    /* 120B8 80103CB8 79000424 */   addiu     $a0, $zero, 0x79
    /* 120BC 80103CBC 8CD9030C */  jal        func_800F6630
    /* 120C0 80103CC0 79000424 */   addiu     $a0, $zero, 0x79
    /* 120C4 80103CC4 5DD5030C */  jal        func_800F5574
    /* 120C8 80103CC8 60000424 */   addiu     $a0, $zero, 0x60
    /* 120CC 80103CCC F5D4030C */  jal        func_800F53D4
    /* 120D0 80103CD0 00000000 */   nop
    /* 120D4 80103CD4 C8FF4010 */  beqz       $v0, .L80103BF8
    /* 120D8 80103CD8 00000000 */   nop
    /* 120DC 80103CDC 53D9030C */  jal        func_800F654C
    /* 120E0 80103CE0 5F000424 */   addiu     $a0, $zero, 0x5F
    /* 120E4 80103CE4 93E0030C */  jal        func_800F824C
    /* 120E8 80103CE8 79000424 */   addiu     $a0, $zero, 0x79
  .L80103CEC:
    /* 120EC 80103CEC ECF9030C */  jal        func_800FE7B0
    /* 120F0 80103CF0 00000000 */   nop
    /* 120F4 80103CF4 DDE3030C */  jal        func_800F8F74
    /* 120F8 80103CF8 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 120FC 80103CFC 8CD9030C */  jal        func_800F6630
    /* 12100 80103D00 79000424 */   addiu     $a0, $zero, 0x79
    /* 12104 80103D04 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 12108 80103D08 00000000 */  nop
    /* 1210C 80103D0C 00006290 */  lbu        $v0, 0x0($v1)
    /* 12110 80103D10 00000000 */  nop
    /* 12114 80103D14 82100200 */  srl        $v0, $v0, 2
    /* 12118 80103D18 04D5030C */  jal        func_800F5410
    /* 1211C 80103D1C 000062A0 */   sb        $v0, 0x0($v1)
    /* 12120 80103D20 02D0030C */  jal        func_800F4008
    /* 12124 80103D24 09000424 */   addiu     $a0, $zero, 0x9
    /* 12128 80103D28 93E0030C */  jal        func_800F824C
    /* 1212C 80103D2C 6E000424 */   addiu     $a0, $zero, 0x6E
    /* 12130 80103D30 EEE3030C */  jal        func_800F8FB8
    /* 12134 80103D34 6F000424 */   addiu     $a0, $zero, 0x6F
    /* 12138 80103D38 B9F9030C */  jal        func_800FE6E4
    /* 1213C 80103D3C 00000000 */   nop
    /* 12140 80103D40 8CD9030C */  jal        func_800F6630
    /* 12144 80103D44 79000424 */   addiu     $a0, $zero, 0x79
    /* 12148 80103D48 92D0030C */  jal        func_800F4248
    /* 1214C 80103D4C 07000424 */   addiu     $a0, $zero, 0x7
    /* 12150 80103D50 48D0030C */  jal        func_800F4120
    /* 12154 80103D54 02020424 */   addiu     $a0, $zero, 0x202
    /* 12158 80103D58 0F004014 */  bnez       $v0, .L80103D98
    /* 1215C 80103D5C 00000000 */   nop
    /* 12160 80103D60 8CD9030C */  jal        func_800F6630
    /* 12164 80103D64 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 12168 80103D68 20D5030C */  jal        func_800F5480
    /* 1216C 80103D6C 00000000 */   nop
    /* 12170 80103D70 16E0030C */  jal        func_800F8058
    /* 12174 80103D74 01000424 */   addiu     $a0, $zero, 0x1
    /* 12178 80103D78 93E0030C */  jal        func_800F824C
    /* 1217C 80103D7C 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 12180 80103D80 8CD9030C */  jal        func_800F6630
    /* 12184 80103D84 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 12188 80103D88 16E0030C */  jal        func_800F8058
    /* 1218C 80103D8C 21200000 */   addu      $a0, $zero, $zero
    /* 12190 80103D90 93E0030C */  jal        func_800F824C
    /* 12194 80103D94 5D000424 */   addiu     $a0, $zero, 0x5D
  .L80103D98:
    /* 12198 80103D98 2310040C */  jal        func_8010408C
    /* 1219C 80103D9C 00000000 */   nop
    /* 121A0 80103DA0 68D7030C */  jal        func_800F5DA0
    /* 121A4 80103DA4 79000424 */   addiu     $a0, $zero, 0x79
    /* 121A8 80103DA8 8CD9030C */  jal        func_800F6630
    /* 121AC 80103DAC 79000424 */   addiu     $a0, $zero, 0x79
    /* 121B0 80103DB0 5DD5030C */  jal        func_800F5574
    /* 121B4 80103DB4 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 121B8 80103DB8 F5D4030C */  jal        func_800F53D4
    /* 121BC 80103DBC 00000000 */   nop
    /* 121C0 80103DC0 CAFF4010 */  beqz       $v0, .L80103CEC
    /* 121C4 80103DC4 00000000 */   nop
    /* 121C8 80103DC8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 121CC 80103DCC 00000000 */  nop
    /* 121D0 80103DD0 0800E003 */  jr         $ra
    /* 121D4 80103DD4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80103B98
