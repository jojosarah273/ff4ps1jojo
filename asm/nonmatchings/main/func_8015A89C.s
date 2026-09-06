nonmatching func_8015A89C, 0x80

glabel func_8015A89C
    /* 68C9C 8015A89C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 68CA0 8015A8A0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 68CA4 8015A8A4 59D9030C */  jal        func_800F6564
    /* 68CA8 8015A8A8 58350424 */   addiu     $a0, $zero, 0x3558
    /* 68CAC 8015A8AC 0DD9030C */  jal        func_800F6434
    /* 68CB0 8015A8B0 02000424 */   addiu     $a0, $zero, 0x2
    /* 68CB4 8015A8B4 03004014 */  bnez       $v0, .L8015A8C4
    /* 68CB8 8015A8B8 00000000 */   nop
    /* 68CBC 8015A8BC DADA030C */  jal        func_800F6B68
    /* 68CC0 8015A8C0 2F200424 */   addiu     $a0, $zero, 0x202F
  .L8015A8C4:
    /* 68CC4 8015A8C4 DADA030C */  jal        func_800F6B68
    /* 68CC8 8015A8C8 16200424 */   addiu     $a0, $zero, 0x2016
    /* 68CCC 8015A8CC 04D5030C */  jal        func_800F5410
    /* 68CD0 8015A8D0 00000000 */   nop
    /* 68CD4 8015A8D4 02D0030C */  jal        func_800F4008
    /* 68CD8 8015A8D8 14000424 */   addiu     $a0, $zero, 0x14
    /* 68CDC 8015A8DC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 68CE0 8015A8E0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 68CE4 8015A8E4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 68CE8 8015A8E8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 68CEC 8015A8EC 00004394 */  lhu        $v1, 0x0($v0)
    /* 68CF0 8015A8F0 A9000424 */  addiu      $a0, $zero, 0xA9
    /* 68CF4 8015A8F4 5BE3030C */  jal        func_800F8D6C
    /* 68CF8 8015A8F8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 68CFC 8015A8FC FB6A050C */  jal        func_8015ABEC
    /* 68D00 8015A900 00000000 */   nop
    /* 68D04 8015A904 5B69050C */  jal        func_8015A56C
    /* 68D08 8015A908 00000000 */   nop
    /* 68D0C 8015A90C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 68D10 8015A910 00000000 */  nop
    /* 68D14 8015A914 0800E003 */  jr         $ra
    /* 68D18 8015A918 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015A89C
