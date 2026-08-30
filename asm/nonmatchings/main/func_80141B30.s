nonmatching func_80141B30, 0xA4

glabel func_80141B30
    /* 4FF30 80141B30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4FF34 80141B34 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4FF38 80141B38 C7E5030C */  jal        func_800F971C
    /* 4FF3C 80141B3C 00000000 */   nop
    /* 4FF40 80141B40 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4FF44 80141B44 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4FF48 80141B48 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4FF4C 80141B4C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4FF50 80141B50 00004394 */  lhu        $v1, 0x0($v0)
    /* 4FF54 80141B54 00000000 */  nop
    /* 4FF58 80141B58 000083A4 */  sh         $v1, 0x0($a0)
  .L80141B5C:
    /* 4FF5C 80141B5C 5601050C */  jal        func_80140558
    /* 4FF60 80141B60 00000000 */   nop
    /* 4FF64 80141B64 C400050C */  jal        func_80140310
    /* 4FF68 80141B68 00000000 */   nop
    /* 4FF6C 80141B6C 91E5030C */  jal        func_800F9644
    /* 4FF70 80141B70 20000424 */   addiu     $a0, $zero, 0x20
    /* 4FF74 80141B74 63D9030C */  jal        func_800F658C
    /* 4FF78 80141B78 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4FF7C 80141B7C 04D5030C */  jal        func_800F5410
    /* 4FF80 80141B80 00000000 */   nop
    /* 4FF84 80141B84 19D0030C */  jal        func_800F4064
    /* 4FF88 80141B88 08000424 */   addiu     $a0, $zero, 0x8
    /* 4FF8C 80141B8C 6CE0030C */  jal        func_800F81B0
    /* 4FF90 80141B90 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4FF94 80141B94 C7E5030C */  jal        func_800F971C
    /* 4FF98 80141B98 00000000 */   nop
    /* 4FF9C 80141B9C 98E5030C */  jal        func_800F9660
    /* 4FFA0 80141BA0 20000424 */   addiu     $a0, $zero, 0x20
    /* 4FFA4 80141BA4 D9D8030C */  jal        func_800F6364
    /* 4FFA8 80141BA8 00000000 */   nop
    /* 4FFAC 80141BAC 56D6030C */  jal        func_800F5958
    /* 4FFB0 80141BB0 15000424 */   addiu     $a0, $zero, 0x15
    /* 4FFB4 80141BB4 F5D4030C */  jal        func_800F53D4
    /* 4FFB8 80141BB8 00000000 */   nop
    /* 4FFBC 80141BBC E7FF4010 */  beqz       $v0, .L80141B5C
    /* 4FFC0 80141BC0 00000000 */   nop
    /* 4FFC4 80141BC4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4FFC8 80141BC8 00000000 */  nop
    /* 4FFCC 80141BCC 0800E003 */  jr         $ra
    /* 4FFD0 80141BD0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141B30
