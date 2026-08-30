nonmatching func_800FDD28, 0x64

glabel func_800FDD28
    /* C128 800FDD28 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* C12C 800FDD2C 1000BFAF */  sw         $ra, 0x10($sp)
    /* C130 800FDD30 53D9030C */  jal        func_800F654C
    /* C134 800FDD34 80000424 */   addiu     $a0, $zero, 0x80
    /* C138 800FDD38 62E0030C */  jal        func_800F8188
    /* C13C 800FDD3C 15210424 */   addiu     $a0, $zero, 0x2115
    /* C140 800FDD40 21200000 */  addu       $a0, $zero, $zero
    /* C144 800FDD44 0E80073C */  lui        $a3, %hi(D_800E7C00)
    /* C148 800FDD48 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* C14C 800FDD4C 68FD4624 */  addiu      $a2, $v0, %lo(D_801CFD68)
  .L800FDD50:
    /* C150 800FDD50 21288700 */  addu       $a1, $a0, $a3
    /* C154 800FDD54 00388224 */  addiu      $v0, $a0, 0x3800
    /* C158 800FDD58 40100200 */  sll        $v0, $v0, 1
    /* C15C 800FDD5C 21104600 */  addu       $v0, $v0, $a2
    /* C160 800FDD60 01008424 */  addiu      $a0, $a0, 0x1
    /* C164 800FDD64 FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* C168 800FDD68 00004394 */  lhu        $v1, 0x0($v0)
    /* C16C 800FDD6C 0001822C */  sltiu      $v0, $a0, 0x100
    /* C170 800FDD70 021A0300 */  srl        $v1, $v1, 8
    /* C174 800FDD74 F6FF4014 */  bnez       $v0, .L800FDD50
    /* C178 800FDD78 007CA3A0 */   sb        $v1, %lo(D_800E7C00)($a1)
    /* C17C 800FDD7C 1000BF8F */  lw         $ra, 0x10($sp)
    /* C180 800FDD80 00000000 */  nop
    /* C184 800FDD84 0800E003 */  jr         $ra
    /* C188 800FDD88 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FDD28
