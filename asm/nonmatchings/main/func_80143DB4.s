nonmatching func_80143DB4, 0x90

glabel func_80143DB4
    /* 521B4 80143DB4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 521B8 80143DB8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 521BC 80143DBC 80E4030C */  jal        func_800F9200
    /* 521C0 80143DC0 00000000 */   nop
    /* 521C4 80143DC4 04D5030C */  jal        func_800F5410
    /* 521C8 80143DC8 00000000 */   nop
    /* 521CC 80143DCC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 521D0 80143DD0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 521D4 80143DD4 00000000 */  nop
    /* 521D8 80143DD8 00004394 */  lhu        $v1, 0x0($v0)
    /* 521DC 80143DDC F3F10434 */  ori        $a0, $zero, 0xF1F3
    /* 521E0 80143DE0 C1CE030C */  jal        func_800F3B04
    /* 521E4 80143DE4 21206400 */   addu      $a0, $v1, $a0
    /* 521E8 80143DE8 CECF030C */  jal        func_800F3F38
    /* 521EC 80143DEC 21204000 */   addu      $a0, $v0, $zero
    /* 521F0 80143DF0 DAE1030C */  jal        func_800F8768
    /* 521F4 80143DF4 F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 521F8 80143DF8 F7E4030C */  jal        func_800F93DC
    /* 521FC 80143DFC 00000000 */   nop
    /* 52200 80143E00 04D5030C */  jal        func_800F5410
    /* 52204 80143E04 00000000 */   nop
    /* 52208 80143E08 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5220C 80143E0C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 52210 80143E10 00000000 */  nop
    /* 52214 80143E14 00004394 */  lhu        $v1, 0x0($v0)
    /* 52218 80143E18 B3F10434 */  ori        $a0, $zero, 0xF1B3
    /* 5221C 80143E1C C1CE030C */  jal        func_800F3B04
    /* 52220 80143E20 21206400 */   addu      $a0, $v1, $a0
    /* 52224 80143E24 CECF030C */  jal        func_800F3F38
    /* 52228 80143E28 21204000 */   addu      $a0, $v0, $zero
    /* 5222C 80143E2C DAE1030C */  jal        func_800F8768
    /* 52230 80143E30 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 52234 80143E34 1000BF8F */  lw         $ra, 0x10($sp)
    /* 52238 80143E38 00000000 */  nop
    /* 5223C 80143E3C 0800E003 */  jr         $ra
    /* 52240 80143E40 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80143DB4
