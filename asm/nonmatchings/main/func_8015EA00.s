nonmatching func_8015EA00, 0xB0

glabel func_8015EA00
    /* 6CE00 8015EA00 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CE04 8015EA04 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6CE08 8015EA08 1886010C */  jal        func_80061860
    /* 6CE0C 8015EA0C 00000000 */   nop
    /* 6CE10 8015EA10 91E5030C */  jal        func_800F9644
    /* 6CE14 8015EA14 20000424 */   addiu     $a0, $zero, 0x20
    /* 6CE18 8015EA18 04D5030C */  jal        func_800F5410
    /* 6CE1C 8015EA1C 00000000 */   nop
    /* 6CE20 8015EA20 96D9030C */  jal        func_800F6658
    /* 6CE24 8015EA24 A4000424 */   addiu     $a0, $zero, 0xA4
    /* 6CE28 8015EA28 C1CE030C */  jal        func_800F3B04
    /* 6CE2C 8015EA2C 0B270424 */   addiu     $a0, $zero, 0x270B
    /* 6CE30 8015EA30 E5CF030C */  jal        func_800F3F94
    /* 6CE34 8015EA34 21204000 */   addu      $a0, $v0, $zero
    /* 6CE38 8015EA38 C1CE030C */  jal        func_800F3B04
    /* 6CE3C 8015EA3C 0D270424 */   addiu     $a0, $zero, 0x270D
    /* 6CE40 8015EA40 48D5030C */  jal        func_800F5520
    /* 6CE44 8015EA44 21204000 */   addu      $a0, $v0, $zero
    /* 6CE48 8015EA48 F0D4030C */  jal        func_800F53C0
    /* 6CE4C 8015EA4C 00000000 */   nop
    /* 6CE50 8015EA50 03004010 */  beqz       $v0, .L8015EA60
    /* 6CE54 8015EA54 00000000 */   nop
    /* 6CE58 8015EA58 63D9030C */  jal        func_800F658C
    /* 6CE5C 8015EA5C 0D270424 */   addiu     $a0, $zero, 0x270D
  .L8015EA60:
    /* 6CE60 8015EA60 6CE0030C */  jal        func_800F81B0
    /* 6CE64 8015EA64 0B270424 */   addiu     $a0, $zero, 0x270B
    /* 6CE68 8015EA68 C7E5030C */  jal        func_800F971C
    /* 6CE6C 8015EA6C 00000000 */   nop
    /* 6CE70 8015EA70 98E5030C */  jal        func_800F9660
    /* 6CE74 8015EA74 20000424 */   addiu     $a0, $zero, 0x20
    /* 6CE78 8015EA78 8CD9030C */  jal        func_800F6630
    /* 6CE7C 8015EA7C A5000424 */   addiu     $a0, $zero, 0xA5
    /* 6CE80 8015EA80 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6CE84 8015EA84 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6CE88 8015EA88 00000000 */  nop
    /* 6CE8C 8015EA8C 00006290 */  lbu        $v0, 0x0($v1)
    /* 6CE90 8015EA90 A5000424 */  addiu      $a0, $zero, 0xA5
    /* 6CE94 8015EA94 C0004234 */  ori        $v0, $v0, 0xC0
    /* 6CE98 8015EA98 93E0030C */  jal        func_800F824C
    /* 6CE9C 8015EA9C 000062A0 */   sb        $v0, 0x0($v1)
    /* 6CEA0 8015EAA0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6CEA4 8015EAA4 00000000 */  nop
    /* 6CEA8 8015EAA8 0800E003 */  jr         $ra
    /* 6CEAC 8015EAAC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015EA00
