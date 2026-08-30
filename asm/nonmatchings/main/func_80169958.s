nonmatching func_80169958, 0xC0

glabel func_80169958
    /* 77D58 80169958 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 77D5C 8016995C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 77D60 80169960 C7E5030C */  jal        func_800F971C
    /* 77D64 80169964 00000000 */   nop
    /* 77D68 80169968 62E0030C */  jal        func_800F8188
    /* 77D6C 8016996C A0000424 */   addiu     $a0, $zero, 0xA0
    /* 77D70 80169970 7AE0030C */  jal        func_800F81E8
    /* 77D74 80169974 1A210424 */   addiu     $a0, $zero, 0x211A
    /* 77D78 80169978 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 77D7C 8016997C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 77D80 80169980 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 77D84 80169984 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 77D88 80169988 00004394 */  lhu        $v1, 0x0($v0)
    /* 77D8C 8016998C 00000000 */  nop
    /* 77D90 80169990 000083A4 */  sh         $v1, 0x0($a0)
    /* 77D94 80169994 7E00043C */  lui        $a0, (0x7E8000 >> 16)
  .L80169998:
    /* 77D98 80169998 17E2030C */  jal        func_800F885C
    /* 77D9C 8016999C 00808434 */   ori       $a0, $a0, (0x7E8000 & 0xFFFF)
    /* 77DA0 801699A0 D9D8030C */  jal        func_800F6364
    /* 77DA4 801699A4 00000000 */   nop
    /* 77DA8 801699A8 56D6030C */  jal        func_800F5958
    /* 77DAC 801699AC 00800434 */   ori       $a0, $zero, 0x8000
    /* 77DB0 801699B0 F5D4030C */  jal        func_800F53D4
    /* 77DB4 801699B4 00000000 */   nop
    /* 77DB8 801699B8 F7FF4010 */  beqz       $v0, .L80169998
    /* 77DBC 801699BC 7E00043C */   lui       $a0, (0x7E8000 >> 16)
    /* 77DC0 801699C0 77DC030C */  jal        func_800F71DC
    /* 77DC4 801699C4 00800434 */   ori       $a0, $zero, 0x8000
    /* 77DC8 801699C8 40E3030C */  jal        func_800F8D00
    /* 77DCC 801699CC 1B7D0424 */   addiu     $a0, $zero, 0x7D1B
    /* 77DD0 801699D0 77DC030C */  jal        func_800F71DC
    /* 77DD4 801699D4 36F30434 */   ori       $a0, $zero, 0xF336
    /* 77DD8 801699D8 40E3030C */  jal        func_800F8D00
    /* 77DDC 801699DC 197D0424 */   addiu     $a0, $zero, 0x7D19
    /* 77DE0 801699E0 53D9030C */  jal        func_800F654C
    /* 77DE4 801699E4 13000424 */   addiu     $a0, $zero, 0x13
    /* 77DE8 801699E8 62E0030C */  jal        func_800F8188
    /* 77DEC 801699EC 1E7D0424 */   addiu     $a0, $zero, 0x7D1E
    /* 77DF0 801699F0 53D9030C */  jal        func_800F654C
    /* 77DF4 801699F4 20000424 */   addiu     $a0, $zero, 0x20
    /* 77DF8 801699F8 62E0030C */  jal        func_800F8188
    /* 77DFC 801699FC 1D7D0424 */   addiu     $a0, $zero, 0x7D1D
    /* 77E00 80169A00 36B5050C */  jal        func_8016D4D8
    /* 77E04 80169A04 00000000 */   nop
    /* 77E08 80169A08 1000BF8F */  lw         $ra, 0x10($sp)
    /* 77E0C 80169A0C 00000000 */  nop
    /* 77E10 80169A10 0800E003 */  jr         $ra
    /* 77E14 80169A14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80169958
