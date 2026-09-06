nonmatching func_800FD85C, 0xB8

glabel func_800FD85C
    /* BC5C 800FD85C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* BC60 800FD860 1000BFAF */  sw         $ra, 0x10($sp)
    /* BC64 800FD864 93E0030C */  jal        func_800F824C
    /* BC68 800FD868 82000424 */   addiu     $a0, $zero, 0x82
    /* BC6C 800FD86C EEE3030C */  jal        func_800F8FB8
    /* BC70 800FD870 79000424 */   addiu     $a0, $zero, 0x79
    /* BC74 800FD874 EEE3030C */  jal        func_800F8FB8
    /* BC78 800FD878 80000424 */   addiu     $a0, $zero, 0x80
  .L800FD87C:
    /* BC7C 800FD87C ECF9030C */  jal        func_800FE7B0
    /* BC80 800FD880 00000000 */   nop
    /* BC84 800FD884 8CD9030C */  jal        func_800F6630
    /* BC88 800FD888 80000424 */   addiu     $a0, $zero, 0x80
    /* BC8C 800FD88C 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* BC90 800FD890 00000000 */  nop
    /* BC94 800FD894 00004490 */  lbu        $a0, 0x0($v0)
    /* BC98 800FD898 01000324 */  addiu      $v1, $zero, 0x1
    /* BC9C 800FD89C 03008310 */  beq        $a0, $v1, .L800FD8AC
    /* BCA0 800FD8A0 00000000 */   nop
    /* BCA4 800FD8A4 62E0030C */  jal        func_800F8188
    /* BCA8 800FD8A8 00210424 */   addiu     $a0, $zero, 0x2100
  .L800FD8AC:
    /* BCAC 800FD8AC AFD8030C */  jal        func_800F62BC
    /* BCB0 800FD8B0 79000424 */   addiu     $a0, $zero, 0x79
    /* BCB4 800FD8B4 8CD9030C */  jal        func_800F6630
    /* BCB8 800FD8B8 79000424 */   addiu     $a0, $zero, 0x79
    /* BCBC 800FD8BC DCD0030C */  jal        func_800F4370
    /* BCC0 800FD8C0 82000424 */   addiu     $a0, $zero, 0x82
    /* BCC4 800FD8C4 48D0030C */  jal        func_800F4120
    /* BCC8 800FD8C8 02020424 */   addiu     $a0, $zero, 0x202
    /* BCCC 800FD8CC EBFF4014 */  bnez       $v0, .L800FD87C
    /* BCD0 800FD8D0 00000000 */   nop
    /* BCD4 800FD8D4 AFD8030C */  jal        func_800F62BC
    /* BCD8 800FD8D8 80000424 */   addiu     $a0, $zero, 0x80
    /* BCDC 800FD8DC 8CD9030C */  jal        func_800F6630
    /* BCE0 800FD8E0 80000424 */   addiu     $a0, $zero, 0x80
    /* BCE4 800FD8E4 5DD5030C */  jal        func_800F5574
    /* BCE8 800FD8E8 10000424 */   addiu     $a0, $zero, 0x10
    /* BCEC 800FD8EC F5D4030C */  jal        func_800F53D4
    /* BCF0 800FD8F0 00000000 */   nop
    /* BCF4 800FD8F4 E1FF4010 */  beqz       $v0, .L800FD87C
    /* BCF8 800FD8F8 00000000 */   nop
    /* BCFC 800FD8FC 68D7030C */  jal        func_800F5DA0
    /* BD00 800FD900 80000424 */   addiu     $a0, $zero, 0x80
    /* BD04 800FD904 1000BF8F */  lw         $ra, 0x10($sp)
    /* BD08 800FD908 00000000 */  nop
    /* BD0C 800FD90C 0800E003 */  jr         $ra
    /* BD10 800FD910 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FD85C
