nonmatching func_80129B04, 0x150

glabel func_80129B04
    /* 37F04 80129B04 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 37F08 80129B08 1000BFAF */  sw         $ra, 0x10($sp)
    /* 37F0C 80129B0C E7E4030C */  jal        func_800F939C
    /* 37F10 80129B10 00000000 */   nop
    /* 37F14 80129B14 65DD030C */  jal        func_800F7594
    /* 37F18 80129B18 41000424 */   addiu     $a0, $zero, 0x41
    /* 37F1C 80129B1C 8CDB030C */  jal        func_800F6E30
    /* 37F20 80129B20 60000424 */   addiu     $a0, $zero, 0x60
    /* 37F24 80129B24 50D4030C */  jal        func_800F5140
    /* 37F28 80129B28 00000000 */   nop
    /* 37F2C 80129B2C 93E0030C */  jal        func_800F824C
    /* 37F30 80129B30 45000424 */   addiu     $a0, $zero, 0x45
    /* 37F34 80129B34 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 37F38 80129B38 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 37F3C 80129B3C 00000000 */  nop
    /* 37F40 80129B40 00004390 */  lbu        $v1, 0x0($v0)
    /* 37F44 80129B44 00000000 */  nop
    /* 37F48 80129B48 80180300 */  sll        $v1, $v1, 2
    /* 37F4C 80129B4C 04D5030C */  jal        func_800F5410
    /* 37F50 80129B50 000043A0 */   sb        $v1, 0x0($v0)
    /* 37F54 80129B54 0FCF030C */  jal        func_800F3C3C
    /* 37F58 80129B58 45000424 */   addiu     $a0, $zero, 0x45
    /* 37F5C 80129B5C CECF030C */  jal        func_800F3F38
    /* 37F60 80129B60 21204000 */   addu      $a0, $v0, $zero
    /* 37F64 80129B64 9CCE030C */  jal        func_800F3A70
    /* 37F68 80129B68 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 37F6C 80129B6C C1CE030C */  jal        func_800F3B04
    /* 37F70 80129B70 21204000 */   addu      $a0, $v0, $zero
    /* 37F74 80129B74 CECF030C */  jal        func_800F3F38
    /* 37F78 80129B78 21204000 */   addu      $a0, $v0, $zero
    /* 37F7C 80129B7C 93E0030C */  jal        func_800F824C
    /* 37F80 80129B80 45000424 */   addiu     $a0, $zero, 0x45
    /* 37F84 80129B84 EEE3030C */  jal        func_800F8FB8
    /* 37F88 80129B88 46000424 */   addiu     $a0, $zero, 0x46
    /* 37F8C 80129B8C 65DD030C */  jal        func_800F7594
    /* 37F90 80129B90 45000424 */   addiu     $a0, $zero, 0x45
    /* 37F94 80129B94 0D80023C */  lui        $v0, %hi(D_800D015B)
    /* 37F98 80129B98 5B014290 */  lbu        $v0, %lo(D_800D015B)($v0)
    /* 37F9C 80129B9C 0D80033C */  lui        $v1, %hi(D_800D015A)
    /* 37FA0 80129BA0 5A016390 */  lbu        $v1, %lo(D_800D015A)($v1)
    /* 37FA4 80129BA4 00120200 */  sll        $v0, $v0, 8
    /* 37FA8 80129BA8 25186200 */  or         $v1, $v1, $v0
    /* 37FAC 80129BAC 0ADC0234 */  ori        $v0, $zero, 0xDC0A
    /* 37FB0 80129BB0 11006210 */  beq        $v1, $v0, .L80129BF8
    /* 37FB4 80129BB4 00000000 */   nop
    /* 37FB8 80129BB8 2A104300 */  slt        $v0, $v0, $v1
    /* 37FBC 80129BBC 06004014 */  bnez       $v0, .L80129BD8
    /* 37FC0 80129BC0 5ADC0234 */   ori       $v0, $zero, 0xDC5A
    /* 37FC4 80129BC4 BADB0234 */  ori        $v0, $zero, 0xDBBA
    /* 37FC8 80129BC8 07006210 */  beq        $v1, $v0, .L80129BE8
    /* 37FCC 80129BCC 1A80023C */   lui       $v0, %hi(D_80199C5C)
    /* 37FD0 80129BD0 0DA70408 */  j          .L80129C34
    /* 37FD4 80129BD4 00000000 */   nop
  .L80129BD8:
    /* 37FD8 80129BD8 0C006210 */  beq        $v1, $v0, .L80129C0C
    /* 37FDC 80129BDC 1A80023C */   lui       $v0, %hi(D_80199CFC)
    /* 37FE0 80129BE0 0DA70408 */  j          .L80129C34
    /* 37FE4 80129BE4 00000000 */   nop
  .L80129BE8:
    /* 37FE8 80129BE8 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 37FEC 80129BEC 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 37FF0 80129BF0 06A70408 */  j          .L80129C18
    /* 37FF4 80129BF4 5C9C4224 */   addiu     $v0, $v0, %lo(D_80199C5C)
  .L80129BF8:
    /* 37FF8 80129BF8 1A80023C */  lui        $v0, %hi(D_80199CAC)
    /* 37FFC 80129BFC 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 38000 80129C00 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 38004 80129C04 06A70408 */  j          .L80129C18
    /* 38008 80129C08 AC9C4224 */   addiu     $v0, $v0, %lo(D_80199CAC)
  .L80129C0C:
    /* 3800C 80129C0C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 38010 80129C10 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 38014 80129C14 FC9C4224 */  addiu      $v0, $v0, %lo(D_80199CFC)
  .L80129C18:
    /* 38018 80129C18 00008394 */  lhu        $v1, 0x0($a0)
    /* 3801C 80129C1C 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 38020 80129C20 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 38024 80129C24 21186200 */  addu       $v1, $v1, $v0
    /* 38028 80129C28 00006290 */  lbu        $v0, 0x0($v1)
    /* 3802C 80129C2C 00000000 */  nop
    /* 38030 80129C30 000082A0 */  sb         $v0, 0x0($a0)
  .L80129C34:
    /* 38034 80129C34 83E5030C */  jal        func_800F960C
    /* 38038 80129C38 00000000 */   nop
    /* 3803C 80129C3C 5DD5030C */  jal        func_800F5574
    /* 38040 80129C40 21200000 */   addu      $a0, $zero, $zero
    /* 38044 80129C44 1000BF8F */  lw         $ra, 0x10($sp)
    /* 38048 80129C48 00000000 */  nop
    /* 3804C 80129C4C 0800E003 */  jr         $ra
    /* 38050 80129C50 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80129B04
