nonmatching func_80114FD0, 0x68

glabel func_80114FD0
    /* 233D0 80114FD0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 233D4 80114FD4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 233D8 80114FD8 53D9030C */  jal        func_800F654C
    /* 233DC 80114FDC 04000424 */   addiu     $a0, $zero, 0x4
    /* 233E0 80114FE0 62E0030C */  jal        func_800F8188
    /* 233E4 80114FE4 04170424 */   addiu     $a0, $zero, 0x1704
    /* 233E8 80114FE8 53D9030C */  jal        func_800F654C
    /* 233EC 80114FEC 10000424 */   addiu     $a0, $zero, 0x10
    /* 233F0 80114FF0 93E0030C */  jal        func_800F824C
    /* 233F4 80114FF4 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 233F8 80114FF8 53D9030C */  jal        func_800F654C
    /* 233FC 80114FFC 0F000424 */   addiu     $a0, $zero, 0xF
    /* 23400 80115000 62E0030C */  jal        func_800F8188
    /* 23404 80115004 FD060424 */   addiu     $a0, $zero, 0x6FD
    /* 23408 80115008 53D9030C */  jal        func_800F654C
    /* 2340C 8011500C 03000424 */   addiu     $a0, $zero, 0x3
    /* 23410 80115010 93E0030C */  jal        func_800F824C
    /* 23414 80115014 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 23418 80115018 53D9030C */  jal        func_800F654C
    /* 2341C 8011501C 20000424 */   addiu     $a0, $zero, 0x20
    /* 23420 80115020 93E0030C */  jal        func_800F824C
    /* 23424 80115024 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 23428 80115028 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2342C 8011502C 00000000 */  nop
    /* 23430 80115030 0800E003 */  jr         $ra
    /* 23434 80115034 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80114FD0
