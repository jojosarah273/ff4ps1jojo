nonmatching func_8016DCE0, 0xBC

glabel func_8016DCE0
    /* 7C0E0 8016DCE0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7C0E4 8016DCE4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7C0E8 8016DCE8 C7E5030C */  jal        func_800F971C
    /* 7C0EC 8016DCEC 00000000 */   nop
    /* 7C0F0 8016DCF0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7C0F4 8016DCF4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7C0F8 8016DCF8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7C0FC 8016DCFC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7C100 8016DD00 00004394 */  lhu        $v1, 0x0($v0)
    /* 7C104 8016DD04 00000000 */  nop
    /* 7C108 8016DD08 000083A4 */  sh         $v1, 0x0($a0)
  .L8016DD0C:
    /* 7C10C 8016DD0C DAE1030C */  jal        func_800F8768
    /* 7C110 8016DD10 03230424 */   addiu     $a0, $zero, 0x2303
    /* 7C114 8016DD14 D9D8030C */  jal        func_800F6364
    /* 7C118 8016DD18 00000000 */   nop
    /* 7C11C 8016DD1C 56D6030C */  jal        func_800F5958
    /* 7C120 8016DD20 00090424 */   addiu     $a0, $zero, 0x900
    /* 7C124 8016DD24 F5D4030C */  jal        func_800F53D4
    /* 7C128 8016DD28 00000000 */   nop
    /* 7C12C 8016DD2C F7FF4010 */  beqz       $v0, .L8016DD0C
    /* 7C130 8016DD30 00000000 */   nop
    /* 7C134 8016DD34 C7E5030C */  jal        func_800F971C
    /* 7C138 8016DD38 00000000 */   nop
    /* 7C13C 8016DD3C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7C140 8016DD40 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7C144 8016DD44 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7C148 8016DD48 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7C14C 8016DD4C 00004394 */  lhu        $v1, 0x0($v0)
    /* 7C150 8016DD50 00000000 */  nop
    /* 7C154 8016DD54 000083A4 */  sh         $v1, 0x0($a0)
    /* 7C158 8016DD58 1400043C */  lui        $a0, (0x14EE00 >> 16)
  .L8016DD5C:
    /* 7C15C 8016DD5C 1ADB030C */  jal        func_800F6C68
    /* 7C160 8016DD60 00EE8434 */   ori       $a0, $a0, (0x14EE00 & 0xFFFF)
    /* 7C164 8016DD64 DAE1030C */  jal        func_800F8768
    /* 7C168 8016DD68 83280424 */   addiu     $a0, $zero, 0x2883
    /* 7C16C 8016DD6C D9D8030C */  jal        func_800F6364
    /* 7C170 8016DD70 00000000 */   nop
    /* 7C174 8016DD74 56D6030C */  jal        func_800F5958
    /* 7C178 8016DD78 80000424 */   addiu     $a0, $zero, 0x80
    /* 7C17C 8016DD7C F5D4030C */  jal        func_800F53D4
    /* 7C180 8016DD80 00000000 */   nop
    /* 7C184 8016DD84 F5FF4010 */  beqz       $v0, .L8016DD5C
    /* 7C188 8016DD88 1400043C */   lui       $a0, (0x14EE00 >> 16)
    /* 7C18C 8016DD8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7C190 8016DD90 00000000 */  nop
    /* 7C194 8016DD94 0800E003 */  jr         $ra
    /* 7C198 8016DD98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016DCE0
