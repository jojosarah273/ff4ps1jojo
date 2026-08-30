nonmatching func_8011B7B4, 0xC0

glabel func_8011B7B4
    /* 29BB4 8011B7B4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29BB8 8011B7B8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 29BBC 8011B7BC 80E4030C */  jal        func_800F9200
    /* 29BC0 8011B7C0 00000000 */   nop
    /* 29BC4 8011B7C4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 29BC8 8011B7C8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 29BCC 8011B7CC 00000000 */  nop
    /* 29BD0 8011B7D0 00006290 */  lbu        $v0, 0x0($v1)
    /* 29BD4 8011B7D4 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 29BD8 8011B7D8 C2100200 */  srl        $v0, $v0, 3
    /* 29BDC 8011B7DC 93E0030C */  jal        func_800F824C
    /* 29BE0 8011B7E0 000062A0 */   sb        $v0, 0x0($v1)
    /* 29BE4 8011B7E4 EEE3030C */  jal        func_800F8FB8
    /* 29BE8 8011B7E8 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 29BEC 8011B7EC 59D9030C */  jal        func_800F6564
    /* 29BF0 8011B7F0 E50F0424 */   addiu     $a0, $zero, 0xFE5
    /* 29BF4 8011B7F4 0DD9030C */  jal        func_800F6434
    /* 29BF8 8011B7F8 80000424 */   addiu     $a0, $zero, 0x80
    /* 29BFC 8011B7FC 07004014 */  bnez       $v0, .L8011B81C
    /* 29C00 8011B800 00000000 */   nop
    /* 29C04 8011B804 59D9030C */  jal        func_800F6564
    /* 29C08 8011B808 01170424 */   addiu     $a0, $zero, 0x1701
    /* 29C0C 8011B80C 0DD9030C */  jal        func_800F6434
    /* 29C10 8011B810 02000424 */   addiu     $a0, $zero, 0x2
    /* 29C14 8011B814 09004014 */  bnez       $v0, .L8011B83C
    /* 29C18 8011B818 00000000 */   nop
  .L8011B81C:
    /* 29C1C 8011B81C 8CD9030C */  jal        func_800F6630
    /* 29C20 8011B820 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29C24 8011B824 04D5030C */  jal        func_800F5410
    /* 29C28 8011B828 00000000 */   nop
    /* 29C2C 8011B82C 02D0030C */  jal        func_800F4008
    /* 29C30 8011B830 20000424 */   addiu     $a0, $zero, 0x20
    /* 29C34 8011B834 93E0030C */  jal        func_800F824C
    /* 29C38 8011B838 3D000424 */   addiu     $a0, $zero, 0x3D
  .L8011B83C:
    /* 29C3C 8011B83C F7E4030C */  jal        func_800F93DC
    /* 29C40 8011B840 00000000 */   nop
    /* 29C44 8011B844 92D0030C */  jal        func_800F4248
    /* 29C48 8011B848 07000424 */   addiu     $a0, $zero, 0x7
    /* 29C4C 8011B84C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 29C50 8011B850 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 29C54 8011B854 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 29C58 8011B858 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 29C5C 8011B85C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29C60 8011B860 00004394 */  lhu        $v1, 0x0($v0)
    /* 29C64 8011B864 00000000 */  nop
    /* 29C68 8011B868 000083A4 */  sh         $v1, 0x0($a0)
    /* 29C6C 8011B86C 0800E003 */  jr         $ra
    /* 29C70 8011B870 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011B7B4
