nonmatching func_8013D5C8, 0xC8

glabel func_8013D5C8
    /* 4B9C8 8013D5C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4B9CC 8013D5CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4B9D0 8013D5D0 A4F5040C */  jal        func_8013D690
    /* 4B9D4 8013D5D4 00000000 */   nop
    /* 4B9D8 8013D5D8 C7E5030C */  jal        func_800F971C
    /* 4B9DC 8013D5DC 00000000 */   nop
    /* 4B9E0 8013D5E0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4B9E4 8013D5E4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4B9E8 8013D5E8 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 4B9EC 8013D5EC 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 4B9F0 8013D5F0 00004394 */  lhu        $v1, 0x0($v0)
    /* 4B9F4 8013D5F4 20000424 */  addiu      $a0, $zero, 0x20
    /* 4B9F8 8013D5F8 91E5030C */  jal        func_800F9644
    /* 4B9FC 8013D5FC 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8013D600:
    /* 4BA00 8013D600 7ADB030C */  jal        func_800F6DE8
    /* 4BA04 8013D604 40030424 */   addiu     $a0, $zero, 0x340
    /* 4BA08 8013D608 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4BA0C 8013D60C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4BA10 8013D610 00000000 */  nop
    /* 4BA14 8013D614 00006294 */  lhu        $v0, 0x0($v1)
    /* 4BA18 8013D618 80030424 */  addiu      $a0, $zero, 0x380
    /* 4BA1C 8013D61C FF004238 */  xori       $v0, $v0, 0xFF
    /* 4BA20 8013D620 75E2030C */  jal        func_800F89D4
    /* 4BA24 8013D624 000062A4 */   sh        $v0, 0x0($v1)
    /* 4BA28 8013D628 7ADB030C */  jal        func_800F6DE8
    /* 4BA2C 8013D62C 42030424 */   addiu     $a0, $zero, 0x342
    /* 4BA30 8013D630 75E2030C */  jal        func_800F89D4
    /* 4BA34 8013D634 82030424 */   addiu     $a0, $zero, 0x382
    /* 4BA38 8013D638 EFD8030C */  jal        func_800F63BC
    /* 4BA3C 8013D63C 00000000 */   nop
    /* 4BA40 8013D640 EFD8030C */  jal        func_800F63BC
    /* 4BA44 8013D644 00000000 */   nop
    /* 4BA48 8013D648 EFD8030C */  jal        func_800F63BC
    /* 4BA4C 8013D64C 00000000 */   nop
    /* 4BA50 8013D650 EFD8030C */  jal        func_800F63BC
    /* 4BA54 8013D654 00000000 */   nop
    /* 4BA58 8013D658 A4D6030C */  jal        func_800F5A90
    /* 4BA5C 8013D65C 40000424 */   addiu     $a0, $zero, 0x40
    /* 4BA60 8013D660 F5D4030C */  jal        func_800F53D4
    /* 4BA64 8013D664 00000000 */   nop
    /* 4BA68 8013D668 E5FF4010 */  beqz       $v0, .L8013D600
    /* 4BA6C 8013D66C 00000000 */   nop
    /* 4BA70 8013D670 C7E5030C */  jal        func_800F971C
    /* 4BA74 8013D674 00000000 */   nop
    /* 4BA78 8013D678 98E5030C */  jal        func_800F9660
    /* 4BA7C 8013D67C 20000424 */   addiu     $a0, $zero, 0x20
    /* 4BA80 8013D680 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4BA84 8013D684 00000000 */  nop
    /* 4BA88 8013D688 0800E003 */  jr         $ra
    /* 4BA8C 8013D68C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013D5C8
