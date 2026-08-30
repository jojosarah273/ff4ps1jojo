nonmatching func_8013095C, 0xC8

glabel func_8013095C
    /* 3ED5C 8013095C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3ED60 80130960 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3ED64 80130964 53D9030C */  jal        func_800F654C
    /* 3ED68 80130968 24000424 */   addiu     $a0, $zero, 0x24
    /* 3ED6C 8013096C 77DC030C */  jal        func_800F71DC
    /* 3ED70 80130970 30010424 */   addiu     $a0, $zero, 0x130
    /* 3ED74 80130974 9DC2040C */  jal        func_80130A74
    /* 3ED78 80130978 00000000 */   nop
    /* 3ED7C 8013097C 77DC030C */  jal        func_800F71DC
    /* 3ED80 80130980 B0010424 */   addiu     $a0, $zero, 0x1B0
    /* 3ED84 80130984 9DC2040C */  jal        func_80130A74
    /* 3ED88 80130988 00000000 */   nop
    /* 3ED8C 8013098C 77DC030C */  jal        func_800F71DC
    /* 3ED90 80130990 30020424 */   addiu     $a0, $zero, 0x230
    /* 3ED94 80130994 9DC2040C */  jal        func_80130A74
    /* 3ED98 80130998 00000000 */   nop
    /* 3ED9C 8013099C 59D9030C */  jal        func_800F6564
    /* 3EDA0 801309A0 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3EDA4 801309A4 0DD9030C */  jal        func_800F6434
    /* 3EDA8 801309A8 02020424 */   addiu     $a0, $zero, 0x202
    /* 3EDAC 801309AC 05004014 */  bnez       $v0, .L801309C4
    /* 3EDB0 801309B0 00000000 */   nop
    /* 3EDB4 801309B4 77DC030C */  jal        func_800F71DC
    /* 3EDB8 801309B8 30010424 */   addiu     $a0, $zero, 0x130
    /* 3EDBC 801309BC 7DC20408 */  j          .L801309F4
    /* 3EDC0 801309C0 00000000 */   nop
  .L801309C4:
    /* 3EDC4 801309C4 5DD5030C */  jal        func_800F5574
    /* 3EDC8 801309C8 01000424 */   addiu     $a0, $zero, 0x1
    /* 3EDCC 801309CC F5D4030C */  jal        func_800F53D4
    /* 3EDD0 801309D0 00000000 */   nop
    /* 3EDD4 801309D4 05004010 */  beqz       $v0, .L801309EC
    /* 3EDD8 801309D8 00000000 */   nop
    /* 3EDDC 801309DC 77DC030C */  jal        func_800F71DC
    /* 3EDE0 801309E0 B0010424 */   addiu     $a0, $zero, 0x1B0
    /* 3EDE4 801309E4 7DC20408 */  j          .L801309F4
    /* 3EDE8 801309E8 00000000 */   nop
  .L801309EC:
    /* 3EDEC 801309EC 77DC030C */  jal        func_800F71DC
    /* 3EDF0 801309F0 30020424 */   addiu     $a0, $zero, 0x230
  .L801309F4:
    /* 3EDF4 801309F4 53D9030C */  jal        func_800F654C
    /* 3EDF8 801309F8 20000424 */   addiu     $a0, $zero, 0x20
    /* 3EDFC 801309FC 80E4030C */  jal        func_800F9200
    /* 3EE00 80130A00 00000000 */   nop
    /* 3EE04 80130A04 40DD030C */  jal        func_800F7500
    /* 3EE08 80130A08 05000424 */   addiu     $a0, $zero, 0x5
    /* 3EE0C 80130A0C 89C2040C */  jal        func_80130A24
    /* 3EE10 80130A10 00000000 */   nop
    /* 3EE14 80130A14 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3EE18 80130A18 00000000 */  nop
    /* 3EE1C 80130A1C 0800E003 */  jr         $ra
    /* 3EE20 80130A20 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013095C
