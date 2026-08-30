nonmatching func_8013E200, 0xF8

glabel func_8013E200
    /* 4C600 8013E200 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4C604 8013E204 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4C608 8013E208 8CD9030C */  jal        func_800F6630
    /* 4C60C 8013E20C 21200000 */   addu      $a0, $zero, $zero
    /* 4C610 8013E210 80E4030C */  jal        func_800F9200
    /* 4C614 8013E214 00000000 */   nop
    /* 4C618 8013E218 8CD9030C */  jal        func_800F6630
    /* 4C61C 8013E21C 21200000 */   addu      $a0, $zero, $zero
    /* 4C620 8013E220 20D5030C */  jal        func_800F5480
    /* 4C624 8013E224 00000000 */   nop
    /* 4C628 8013E228 16E0030C */  jal        func_800F8058
    /* 4C62C 8013E22C 10000424 */   addiu     $a0, $zero, 0x10
    /* 4C630 8013E230 93E0030C */  jal        func_800F824C
    /* 4C634 8013E234 21200000 */   addu      $a0, $zero, $zero
    /* 4C638 8013E238 590F050C */  jal        func_80143D64
    /* 4C63C 8013E23C 00000000 */   nop
    /* 4C640 8013E240 93E0030C */  jal        func_800F824C
    /* 4C644 8013E244 01000424 */   addiu     $a0, $zero, 0x1
    /* 4C648 8013E248 450F050C */  jal        func_80143D14
    /* 4C64C 8013E24C 00000000 */   nop
    /* 4C650 8013E250 93E0030C */  jal        func_800F824C
    /* 4C654 8013E254 03000424 */   addiu     $a0, $zero, 0x3
    /* 4C658 8013E258 DADA030C */  jal        func_800F6B68
    /* 4C65C 8013E25C 73F10434 */   ori       $a0, $zero, 0xF173
    /* 4C660 8013E260 93E0030C */  jal        func_800F824C
    /* 4C664 8013E264 04000424 */   addiu     $a0, $zero, 0x4
    /* 4C668 8013E268 EEE3030C */  jal        func_800F8FB8
    /* 4C66C 8013E26C 05000424 */   addiu     $a0, $zero, 0x5
    /* 4C670 8013E270 8EF7040C */  jal        func_8013DE38
    /* 4C674 8013E274 00000000 */   nop
    /* 4C678 8013E278 8CD9030C */  jal        func_800F6630
    /* 4C67C 8013E27C 21200000 */   addu      $a0, $zero, $zero
    /* 4C680 8013E280 04D5030C */  jal        func_800F5410
    /* 4C684 8013E284 00000000 */   nop
    /* 4C688 8013E288 02D0030C */  jal        func_800F4008
    /* 4C68C 8013E28C 20000424 */   addiu     $a0, $zero, 0x20
    /* 4C690 8013E290 93E0030C */  jal        func_800F824C
    /* 4C694 8013E294 21200000 */   addu      $a0, $zero, $zero
    /* 4C698 8013E298 8CD9030C */  jal        func_800F6630
    /* 4C69C 8013E29C 01000424 */   addiu     $a0, $zero, 0x1
    /* 4C6A0 8013E2A0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4C6A4 8013E2A4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4C6A8 8013E2A8 00000000 */  nop
    /* 4C6AC 8013E2AC 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C6B0 8013E2B0 01000424 */  addiu      $a0, $zero, 0x1
    /* 4C6B4 8013E2B4 27100200 */  nor        $v0, $zero, $v0
    /* 4C6B8 8013E2B8 93E0030C */  jal        func_800F824C
    /* 4C6BC 8013E2BC 000062A0 */   sb        $v0, 0x0($v1)
    /* 4C6C0 8013E2C0 53D9030C */  jal        func_800F654C
    /* 4C6C4 8013E2C4 40000424 */   addiu     $a0, $zero, 0x40
    /* 4C6C8 8013E2C8 93E0030C */  jal        func_800F824C
    /* 4C6CC 8013E2CC 05000424 */   addiu     $a0, $zero, 0x5
    /* 4C6D0 8013E2D0 8EF7040C */  jal        func_8013DE38
    /* 4C6D4 8013E2D4 00000000 */   nop
    /* 4C6D8 8013E2D8 F7E4030C */  jal        func_800F93DC
    /* 4C6DC 8013E2DC 00000000 */   nop
    /* 4C6E0 8013E2E0 93E0030C */  jal        func_800F824C
    /* 4C6E4 8013E2E4 21200000 */   addu      $a0, $zero, $zero
    /* 4C6E8 8013E2E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4C6EC 8013E2EC 00000000 */  nop
    /* 4C6F0 8013E2F0 0800E003 */  jr         $ra
    /* 4C6F4 8013E2F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013E200
