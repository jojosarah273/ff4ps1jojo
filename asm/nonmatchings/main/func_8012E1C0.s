nonmatching func_8012E1C0, 0xA4

glabel func_8012E1C0
    /* 3C5C0 8012E1C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3C5C4 8012E1C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3C5C8 8012E1C8 50D4030C */  jal        func_800F5140
    /* 3C5CC 8012E1CC 00000000 */   nop
    /* 3C5D0 8012E1D0 3489040C */  jal        func_801224D0
    /* 3C5D4 8012E1D4 00000000 */   nop
    /* 3C5D8 8012E1D8 91E5030C */  jal        func_800F9644
    /* 3C5DC 8012E1DC 20000424 */   addiu     $a0, $zero, 0x20
    /* 3C5E0 8012E1E0 1A80053C */  lui        $a1, %hi(D_80199C0C)
    /* 3C5E4 8012E1E4 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3C5E8 8012E1E8 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3C5EC 8012E1EC 0C9CA524 */  addiu      $a1, $a1, %lo(D_80199C0C)
    /* 3C5F0 8012E1F0 00006294 */  lhu        $v0, 0x0($v1)
    /* 3C5F4 8012E1F4 1A80063C */  lui        $a2, %hi(D_8019ED40)
    /* 3C5F8 8012E1F8 40EDC68C */  lw         $a2, %lo(D_8019ED40)($a2)
    /* 3C5FC 8012E1FC 21104500 */  addu       $v0, $v0, $a1
    /* 3C600 8012E200 00004390 */  lbu        $v1, 0x0($v0)
    /* 3C604 8012E204 00000000 */  nop
    /* 3C608 8012E208 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 3C60C 8012E20C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 3C610 8012E210 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 3C614 8012E214 00000000 */  nop
    /* 3C618 8012E218 00008294 */  lhu        $v0, 0x0($a0)
    /* 3C61C 8012E21C 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 3C620 8012E220 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 3C624 8012E224 21104500 */  addu       $v0, $v0, $a1
    /* 3C628 8012E228 01004390 */  lbu        $v1, 0x1($v0)
    /* 3C62C 8012E22C 00000000 */  nop
    /* 3C630 8012E230 010083A0 */  sb         $v1, 0x1($a0)
    /* 3C634 8012E234 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3C638 8012E238 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3C63C 8012E23C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3C640 8012E240 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3C644 8012E244 00004394 */  lhu        $v1, 0x0($v0)
    /* 3C648 8012E248 20000424 */  addiu      $a0, $zero, 0x20
    /* 3C64C 8012E24C 98E5030C */  jal        func_800F9660
    /* 3C650 8012E250 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3C654 8012E254 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3C658 8012E258 00000000 */  nop
    /* 3C65C 8012E25C 0800E003 */  jr         $ra
    /* 3C660 8012E260 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012E1C0
