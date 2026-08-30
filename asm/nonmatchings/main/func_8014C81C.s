nonmatching func_8014C81C, 0xB0

glabel func_8014C81C
    /* 5AC1C 8014C81C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5AC20 8014C820 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5AC24 8014C824 CCE4030C */  jal        func_800F9330
    /* 5AC28 8014C828 00000000 */   nop
    /* 5AC2C 8014C82C 77DC030C */  jal        func_800F71DC
    /* 5AC30 8014C830 21200000 */   addu      $a0, $zero, $zero
  .L8014C834:
    /* 5AC34 8014C834 DADA030C */  jal        func_800F6B68
    /* 5AC38 8014C838 C4F30434 */   ori       $a0, $zero, 0xF3C4
    /* 5AC3C 8014C83C 93E0030C */  jal        func_800F824C
    /* 5AC40 8014C840 21200000 */   addu      $a0, $zero, $zero
    /* 5AC44 8014C844 DADA030C */  jal        func_800F6B68
    /* 5AC48 8014C848 C5F30434 */   ori       $a0, $zero, 0xF3C5
    /* 5AC4C 8014C84C 93E0030C */  jal        func_800F824C
    /* 5AC50 8014C850 01000424 */   addiu     $a0, $zero, 0x1
    /* 5AC54 8014C854 8CD9030C */  jal        func_800F6630
    /* 5AC58 8014C858 02000424 */   addiu     $a0, $zero, 0x2
    /* 5AC5C 8014C85C 4553020C */  jal        func_80094D14
    /* 5AC60 8014C860 00000000 */   nop
    /* 5AC64 8014C864 8CD9030C */  jal        func_800F6630
    /* 5AC68 8014C868 21200000 */   addu      $a0, $zero, $zero
    /* 5AC6C 8014C86C DAE1030C */  jal        func_800F8768
    /* 5AC70 8014C870 70ED0434 */   ori       $a0, $zero, 0xED70
    /* 5AC74 8014C874 8CD9030C */  jal        func_800F6630
    /* 5AC78 8014C878 01000424 */   addiu     $a0, $zero, 0x1
    /* 5AC7C 8014C87C DAE1030C */  jal        func_800F8768
    /* 5AC80 8014C880 71ED0434 */   ori       $a0, $zero, 0xED71
    /* 5AC84 8014C884 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5AC88 8014C888 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5AC8C 8014C88C 00000000 */  nop
    /* 5AC90 8014C890 00006294 */  lhu        $v0, 0x0($v1)
    /* 5AC94 8014C894 40000424 */  addiu      $a0, $zero, 0x40
    /* 5AC98 8014C898 02004224 */  addiu      $v0, $v0, 0x2
    /* 5AC9C 8014C89C 56D6030C */  jal        func_800F5958
    /* 5ACA0 8014C8A0 000062A4 */   sh        $v0, 0x0($v1)
    /* 5ACA4 8014C8A4 F5D4030C */  jal        func_800F53D4
    /* 5ACA8 8014C8A8 00000000 */   nop
    /* 5ACAC 8014C8AC E1FF4010 */  beqz       $v0, .L8014C834
    /* 5ACB0 8014C8B0 00000000 */   nop
    /* 5ACB4 8014C8B4 68E5030C */  jal        func_800F95A0
    /* 5ACB8 8014C8B8 00000000 */   nop
    /* 5ACBC 8014C8BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5ACC0 8014C8C0 00000000 */  nop
    /* 5ACC4 8014C8C4 0800E003 */  jr         $ra
    /* 5ACC8 8014C8C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014C81C
