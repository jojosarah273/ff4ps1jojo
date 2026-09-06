nonmatching func_80111BBC, 0x70

glabel func_80111BBC
    /* 1FFBC 80111BBC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1FFC0 80111BC0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1FFC4 80111BC4 77DC030C */  jal        func_800F71DC
    /* 1FFC8 80111BC8 21200000 */   addu      $a0, $zero, $zero
    /* 1FFCC 80111BCC 0D00043C */  lui        $a0, (0xD8210 >> 16)
  .L80111BD0:
    /* 1FFD0 80111BD0 1ADB030C */  jal        func_800F6C68
    /* 1FFD4 80111BD4 10828434 */   ori       $a0, $a0, (0xD8210 & 0xFFFF)
    /* 1FFD8 80111BD8 DAE1030C */  jal        func_800F8768
    /* 1FFDC 80111BDC 1B0E0424 */   addiu     $a0, $zero, 0xE1B
    /* 1FFE0 80111BE0 DAE1030C */  jal        func_800F8768
    /* 1FFE4 80111BE4 AD0A0424 */   addiu     $a0, $zero, 0xAAD
    /* 1FFE8 80111BE8 0D00043C */  lui        $a0, (0xD8220 >> 16)
    /* 1FFEC 80111BEC 1ADB030C */  jal        func_800F6C68
    /* 1FFF0 80111BF0 20828434 */   ori       $a0, $a0, (0xD8220 & 0xFFFF)
    /* 1FFF4 80111BF4 DAE1030C */  jal        func_800F8768
    /* 1FFF8 80111BF8 3B0E0424 */   addiu     $a0, $zero, 0xE3B
    /* 1FFFC 80111BFC D9D8030C */  jal        func_800F6364
    /* 20000 80111C00 00000000 */   nop
    /* 20004 80111C04 56D6030C */  jal        func_800F5958
    /* 20008 80111C08 10000424 */   addiu     $a0, $zero, 0x10
    /* 2000C 80111C0C F5D4030C */  jal        func_800F53D4
    /* 20010 80111C10 00000000 */   nop
    /* 20014 80111C14 EEFF4010 */  beqz       $v0, .L80111BD0
    /* 20018 80111C18 0D00043C */   lui       $a0, (0xD8210 >> 16)
    /* 2001C 80111C1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 20020 80111C20 00000000 */  nop
    /* 20024 80111C24 0800E003 */  jr         $ra
    /* 20028 80111C28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80111BBC
