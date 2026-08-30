nonmatching func_800FD914, 0xE8

glabel func_800FD914
    /* BD14 800FD914 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* BD18 800FD918 1000BFAF */  sw         $ra, 0x10($sp)
    /* BD1C 800FD91C 93E0030C */  jal        func_800F824C
    /* BD20 800FD920 82000424 */   addiu     $a0, $zero, 0x82
    /* BD24 800FD924 EEE3030C */  jal        func_800F8FB8
    /* BD28 800FD928 79000424 */   addiu     $a0, $zero, 0x79
    /* BD2C 800FD92C 8CD9030C */  jal        func_800F6630
    /* BD30 800FD930 CA000424 */   addiu     $a0, $zero, 0xCA
    /* BD34 800FD934 5DD5030C */  jal        func_800F5574
    /* BD38 800FD938 02000424 */   addiu     $a0, $zero, 0x2
    /* BD3C 800FD93C F5D4030C */  jal        func_800F53D4
    /* BD40 800FD940 00000000 */   nop
    /* BD44 800FD944 29004014 */  bnez       $v0, .L800FD9EC
    /* BD48 800FD948 00000000 */   nop
    /* BD4C 800FD94C 53D9030C */  jal        func_800F654C
    /* BD50 800FD950 0F000424 */   addiu     $a0, $zero, 0xF
    /* BD54 800FD954 93E0030C */  jal        func_800F824C
    /* BD58 800FD958 80000424 */   addiu     $a0, $zero, 0x80
  .L800FD95C:
    /* BD5C 800FD95C ECF9030C */  jal        func_800FE7B0
    /* BD60 800FD960 00000000 */   nop
    /* BD64 800FD964 8CD9030C */  jal        func_800F6630
    /* BD68 800FD968 80000424 */   addiu     $a0, $zero, 0x80
    /* BD6C 800FD96C 62E0030C */  jal        func_800F8188
    /* BD70 800FD970 00210424 */   addiu     $a0, $zero, 0x2100
    /* BD74 800FD974 59D9030C */  jal        func_800F6564
    /* BD78 800FD978 00170424 */   addiu     $a0, $zero, 0x1700
    /* BD7C 800FD97C 5DD5030C */  jal        func_800F5574
    /* BD80 800FD980 03000424 */   addiu     $a0, $zero, 0x3
    /* BD84 800FD984 F5D4030C */  jal        func_800F53D4
    /* BD88 800FD988 00000000 */   nop
    /* BD8C 800FD98C 05004014 */  bnez       $v0, .L800FD9A4
    /* BD90 800FD990 00000000 */   nop
    /* BD94 800FD994 53D9030C */  jal        func_800F654C
    /* BD98 800FD998 30000424 */   addiu     $a0, $zero, 0x30
    /* BD9C 800FD99C 62E0030C */  jal        func_800F8188
    /* BDA0 800FD9A0 0C420424 */   addiu     $a0, $zero, 0x420C
  .L800FD9A4:
    /* BDA4 800FD9A4 AFD8030C */  jal        func_800F62BC
    /* BDA8 800FD9A8 79000424 */   addiu     $a0, $zero, 0x79
    /* BDAC 800FD9AC 8CD9030C */  jal        func_800F6630
    /* BDB0 800FD9B0 79000424 */   addiu     $a0, $zero, 0x79
    /* BDB4 800FD9B4 DCD0030C */  jal        func_800F4370
    /* BDB8 800FD9B8 82000424 */   addiu     $a0, $zero, 0x82
    /* BDBC 800FD9BC 48D0030C */  jal        func_800F4120
    /* BDC0 800FD9C0 02020424 */   addiu     $a0, $zero, 0x202
    /* BDC4 800FD9C4 E5FF4014 */  bnez       $v0, .L800FD95C
    /* BDC8 800FD9C8 00000000 */   nop
    /* BDCC 800FD9CC 68D7030C */  jal        func_800F5DA0
    /* BDD0 800FD9D0 80000424 */   addiu     $a0, $zero, 0x80
    /* BDD4 800FD9D4 E3D6030C */  jal        func_800F5B8C
    /* BDD8 800FD9D8 80800434 */   ori       $a0, $zero, 0x8080
    /* BDDC 800FD9DC DFFF4014 */  bnez       $v0, .L800FD95C
    /* BDE0 800FD9E0 00000000 */   nop
    /* BDE4 800FD9E4 EEE3030C */  jal        func_800F8FB8
    /* BDE8 800FD9E8 80000424 */   addiu     $a0, $zero, 0x80
  .L800FD9EC:
    /* BDEC 800FD9EC 1000BF8F */  lw         $ra, 0x10($sp)
    /* BDF0 800FD9F0 00000000 */  nop
    /* BDF4 800FD9F4 0800E003 */  jr         $ra
    /* BDF8 800FD9F8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FD914
