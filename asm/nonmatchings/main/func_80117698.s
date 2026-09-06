nonmatching func_80117698, 0x74

glabel func_80117698
    /* 25A98 80117698 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 25A9C 8011769C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 25AA0 801176A0 655D040C */  jal        func_80117594
    /* 25AA4 801176A4 00000000 */   nop
    /* 25AA8 801176A8 62E0030C */  jal        func_800F8188
    /* 25AAC 801176AC 001A0424 */   addiu     $a0, $zero, 0x1A00
    /* 25AB0 801176B0 1400043C */  lui        $a0, (0x14FBA6 >> 16)
    /* 25AB4 801176B4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 25AB8 801176B8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 25ABC 801176BC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 25AC0 801176C0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 25AC4 801176C4 00004394 */  lhu        $v1, 0x0($v0)
    /* 25AC8 801176C8 A6FB8434 */  ori        $a0, $a0, (0x14FBA6 & 0xFFFF)
    /* 25ACC 801176CC 1ADB030C */  jal        func_800F6C68
    /* 25AD0 801176D0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 25AD4 801176D4 62E0030C */  jal        func_800F8188
    /* 25AD8 801176D8 011A0424 */   addiu     $a0, $zero, 0x1A01
    /* 25ADC 801176DC 6AF1030C */  jal        func_800FC5A8
    /* 25AE0 801176E0 00000000 */   nop
    /* 25AE4 801176E4 AF7A040C */  jal        func_8011EABC
    /* 25AE8 801176E8 00000000 */   nop
    /* 25AEC 801176EC 76F1030C */  jal        func_800FC5D8
    /* 25AF0 801176F0 00000000 */   nop
    /* 25AF4 801176F4 DEF9030C */  jal        func_800FE778
    /* 25AF8 801176F8 00000000 */   nop
    /* 25AFC 801176FC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 25B00 80117700 00000000 */  nop
    /* 25B04 80117704 0800E003 */  jr         $ra
    /* 25B08 80117708 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80117698
