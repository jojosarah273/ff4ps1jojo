nonmatching func_8016C78C, 0xCC

glabel func_8016C78C
    /* 7AB8C 8016C78C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7AB90 8016C790 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7AB94 8016C794 F8DA030C */  jal        func_800F6BE0
    /* 7AB98 8016C798 00200424 */   addiu     $a0, $zero, 0x2000
    /* 7AB9C 8016C79C 99D0030C */  jal        func_800F4264
    /* 7ABA0 8016C7A0 FF010424 */   addiu     $a0, $zero, 0x1FF
    /* 7ABA4 8016C7A4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7ABA8 8016C7A8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7ABAC 8016C7AC 00000000 */  nop
    /* 7ABB0 8016C7B0 00006294 */  lhu        $v0, 0x0($v1)
    /* 7ABB4 8016C7B4 2A000424 */  addiu      $a0, $zero, 0x2A
    /* 7ABB8 8016C7B8 42110200 */  srl        $v0, $v0, 5
    /* 7ABBC 8016C7BC 9DE0030C */  jal        func_800F8274
    /* 7ABC0 8016C7C0 000062A4 */   sh        $v0, 0x0($v1)
    /* 7ABC4 8016C7C4 C7E5030C */  jal        func_800F971C
    /* 7ABC8 8016C7C8 00000000 */   nop
    /* 7ABCC 8016C7CC 98E5030C */  jal        func_800F9660
    /* 7ABD0 8016C7D0 20000424 */   addiu     $a0, $zero, 0x20
    /* 7ABD4 8016C7D4 8CD9030C */  jal        func_800F6630
    /* 7ABD8 8016C7D8 2A000424 */   addiu     $a0, $zero, 0x2A
    /* 7ABDC 8016C7DC 04D5030C */  jal        func_800F5410
    /* 7ABE0 8016C7E0 00000000 */   nop
    /* 7ABE4 8016C7E4 0FCF030C */  jal        func_800F3C3C
    /* 7ABE8 8016C7E8 28000424 */   addiu     $a0, $zero, 0x28
    /* 7ABEC 8016C7EC CECF030C */  jal        func_800F3F38
    /* 7ABF0 8016C7F0 21204000 */   addu      $a0, $v0, $zero
    /* 7ABF4 8016C7F4 1300043C */  lui        $a0, (0x13E2AC >> 16)
    /* 7ABF8 8016C7F8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7ABFC 8016C7FC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7AC00 8016C800 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7AC04 8016C804 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7AC08 8016C808 00004394 */  lhu        $v1, 0x0($v0)
    /* 7AC0C 8016C80C ACE28434 */  ori        $a0, $a0, (0x13E2AC & 0xFFFF)
    /* 7AC10 8016C810 1ADB030C */  jal        func_800F6C68
    /* 7AC14 8016C814 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7AC18 8016C818 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7AC1C 8016C81C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7AC20 8016C820 00000000 */  nop
    /* 7AC24 8016C824 00006290 */  lbu        $v0, 0x0($v1)
    /* 7AC28 8016C828 00000000 */  nop
    /* 7AC2C 8016C82C 80100200 */  sll        $v0, $v0, 2
    /* 7AC30 8016C830 04D5030C */  jal        func_800F5410
    /* 7AC34 8016C834 000062A0 */   sb        $v0, 0x0($v1)
    /* 7AC38 8016C838 02D0030C */  jal        func_800F4008
    /* 7AC3C 8016C83C 10000424 */   addiu     $a0, $zero, 0x10
    /* 7AC40 8016C840 93E0030C */  jal        func_800F824C
    /* 7AC44 8016C844 4F000424 */   addiu     $a0, $zero, 0x4F
    /* 7AC48 8016C848 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7AC4C 8016C84C 00000000 */  nop
    /* 7AC50 8016C850 0800E003 */  jr         $ra
    /* 7AC54 8016C854 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016C78C
