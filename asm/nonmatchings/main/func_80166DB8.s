nonmatching func_80166DB8, 0xA0

glabel func_80166DB8
    /* 751B8 80166DB8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 751BC 80166DBC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 751C0 80166DC0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 751C4 80166DC4 0F00043C */  lui        $a0, (0xF1F3F >> 16)
    /* 751C8 80166DC8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 751CC 80166DCC 00004594 */  lhu        $a1, 0x0($v0)
    /* 751D0 80166DD0 E7CE030C */  jal        func_800F3B9C
    /* 751D4 80166DD4 3F1F8434 */   ori       $a0, $a0, (0xF1F3F & 0xFFFF)
    /* 751D8 80166DD8 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 751DC 80166DDC 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 751E0 80166DE0 00000000 */  nop
    /* 751E4 80166DE4 00006494 */  lhu        $a0, 0x0($v1)
    /* 751E8 80166DE8 CECF030C */  jal        func_800F3F38
    /* 751EC 80166DEC 21204400 */   addu      $a0, $v0, $a0
    /* 751F0 80166DF0 ADCE030C */  jal        func_800F3AB4
    /* 751F4 80166DF4 03000424 */   addiu     $a0, $zero, 0x3
    /* 751F8 80166DF8 21204000 */  addu       $a0, $v0, $zero
    /* 751FC 80166DFC E7CE030C */  jal        func_800F3B9C
    /* 75200 80166E00 21280000 */   addu      $a1, $zero, $zero
    /* 75204 80166E04 31DE030C */  jal        func_800F78C4
    /* 75208 80166E08 21204000 */   addu      $a0, $v0, $zero
    /* 7520C 80166E0C 0FCF030C */  jal        func_800F3C3C
    /* 75210 80166E10 21200000 */   addu      $a0, $zero, $zero
    /* 75214 80166E14 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 75218 80166E18 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 7521C 80166E1C 00000000 */  nop
    /* 75220 80166E20 00006494 */  lhu        $a0, 0x0($v1)
    /* 75224 80166E24 00000000 */  nop
    /* 75228 80166E28 21104400 */  addu       $v0, $v0, $a0
    /* 7522C 80166E2C 00004494 */  lhu        $a0, 0x0($v0)
    /* 75230 80166E30 C1CE030C */  jal        func_800F3B04
    /* 75234 80166E34 00000000 */   nop
    /* 75238 80166E38 31DE030C */  jal        func_800F78C4
    /* 7523C 80166E3C 21204000 */   addu      $a0, $v0, $zero
    /* 75240 80166E40 969B050C */  jal        func_80166E58
    /* 75244 80166E44 00000000 */   nop
    /* 75248 80166E48 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7524C 80166E4C 00000000 */  nop
    /* 75250 80166E50 0800E003 */  jr         $ra
    /* 75254 80166E54 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80166DB8
