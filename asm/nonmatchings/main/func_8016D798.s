nonmatching func_8016D798, 0xB8

glabel func_8016D798
    /* 7BB98 8016D798 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7BB9C 8016D79C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7BBA0 8016D7A0 5DD5030C */  jal        func_800F5574
    /* 7BBA4 8016D7A4 42000424 */   addiu     $a0, $zero, 0x42
    /* 7BBA8 8016D7A8 F0D4030C */  jal        func_800F53C0
    /* 7BBAC 8016D7AC 00000000 */   nop
    /* 7BBB0 8016D7B0 0B004010 */  beqz       $v0, .L8016D7E0
    /* 7BBB4 8016D7B4 00000000 */   nop
    /* 7BBB8 8016D7B8 BBE0030C */  jal        func_800F82EC
    /* 7BBBC 8016D7BC 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 7BBC0 8016D7C0 53D9030C */  jal        func_800F654C
    /* 7BBC4 8016D7C4 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 7BBC8 8016D7C8 BBE0030C */  jal        func_800F82EC
    /* 7BBCC 8016D7CC 39000424 */   addiu     $a0, $zero, 0x39
    /* 7BBD0 8016D7D0 EFD8030C */  jal        func_800F63BC
    /* 7BBD4 8016D7D4 00000000 */   nop
    /* 7BBD8 8016D7D8 10B60508 */  j          .L8016D840
    /* 7BBDC 8016D7DC 00000000 */   nop
  .L8016D7E0:
    /* 7BBE0 8016D7E0 20D5030C */  jal        func_800F5480
    /* 7BBE4 8016D7E4 00000000 */   nop
    /* 7BBE8 8016D7E8 16E0030C */  jal        func_800F8058
    /* 7BBEC 8016D7EC 0F000424 */   addiu     $a0, $zero, 0xF
    /* 7BBF0 8016D7F0 50D4030C */  jal        func_800F5140
    /* 7BBF4 8016D7F4 00000000 */   nop
    /* 7BBF8 8016D7F8 1600043C */  lui        $a0, (0x16FA40 >> 16)
    /* 7BBFC 8016D7FC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7BC00 8016D800 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7BC04 8016D804 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7BC08 8016D808 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7BC0C 8016D80C 00004394 */  lhu        $v1, 0x0($v0)
    /* 7BC10 8016D810 40FA8434 */  ori        $a0, $a0, (0x16FA40 & 0xFFFF)
    /* 7BC14 8016D814 1ADB030C */  jal        func_800F6C68
    /* 7BC18 8016D818 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7BC1C 8016D81C BBE0030C */  jal        func_800F82EC
    /* 7BC20 8016D820 39000424 */   addiu     $a0, $zero, 0x39
    /* 7BC24 8016D824 1600043C */  lui        $a0, (0x16FA41 >> 16)
    /* 7BC28 8016D828 1ADB030C */  jal        func_800F6C68
    /* 7BC2C 8016D82C 41FA8434 */   ori       $a0, $a0, (0x16FA41 & 0xFFFF)
    /* 7BC30 8016D830 BBE0030C */  jal        func_800F82EC
    /* 7BC34 8016D834 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 7BC38 8016D838 EFD8030C */  jal        func_800F63BC
    /* 7BC3C 8016D83C 00000000 */   nop
  .L8016D840:
    /* 7BC40 8016D840 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7BC44 8016D844 00000000 */  nop
    /* 7BC48 8016D848 0800E003 */  jr         $ra
    /* 7BC4C 8016D84C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016D798
