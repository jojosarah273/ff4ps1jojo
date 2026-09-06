nonmatching func_80145B90, 0xE4

glabel func_80145B90
    /* 53F90 80145B90 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 53F94 80145B94 1000BFAF */  sw         $ra, 0x10($sp)
    /* 53F98 80145B98 CCE4030C */  jal        func_800F9330
    /* 53F9C 80145B9C 00000000 */   nop
    /* 53FA0 80145BA0 1600043C */  lui        $a0, (0x16FB6D >> 16)
    /* 53FA4 80145BA4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 53FA8 80145BA8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 53FAC 80145BAC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 53FB0 80145BB0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 53FB4 80145BB4 00004394 */  lhu        $v1, 0x0($v0)
    /* 53FB8 80145BB8 6DFB8434 */  ori        $a0, $a0, (0x16FB6D & 0xFFFF)
    /* 53FBC 80145BBC 1ADB030C */  jal        func_800F6C68
    /* 53FC0 80145BC0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 53FC4 80145BC4 93E0030C */  jal        func_800F824C
    /* 53FC8 80145BC8 26000424 */   addiu     $a0, $zero, 0x26
    /* 53FCC 80145BCC 53D9030C */  jal        func_800F654C
    /* 53FD0 80145BD0 18000424 */   addiu     $a0, $zero, 0x18
    /* 53FD4 80145BD4 93E0030C */  jal        func_800F824C
    /* 53FD8 80145BD8 28000424 */   addiu     $a0, $zero, 0x28
    /* 53FDC 80145BDC C8C9010C */  jal        func_80072720
    /* 53FE0 80145BE0 00000000 */   nop
    /* 53FE4 80145BE4 77DC030C */  jal        func_800F71DC
    /* 53FE8 80145BE8 00180424 */   addiu     $a0, $zero, 0x1800
    /* 53FEC 80145BEC 40E3030C */  jal        func_800F8D00
    /* 53FF0 80145BF0 B7F00434 */   ori       $a0, $zero, 0xF0B7
    /* 53FF4 80145BF4 53D9030C */  jal        func_800F654C
    /* 53FF8 80145BF8 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 53FFC 80145BFC 62E0030C */  jal        func_800F8188
    /* 54000 80145C00 B9F00434 */   ori       $a0, $zero, 0xF0B9
    /* 54004 80145C04 53D9030C */  jal        func_800F654C
    /* 54008 80145C08 08000424 */   addiu     $a0, $zero, 0x8
    /* 5400C 80145C0C 62E0030C */  jal        func_800F8188
    /* 54010 80145C10 BAF00434 */   ori       $a0, $zero, 0xF0BA
    /* 54014 80145C14 62E0030C */  jal        func_800F8188
    /* 54018 80145C18 BBF00434 */   ori       $a0, $zero, 0xF0BB
    /* 5401C 80145C1C 91E5030C */  jal        func_800F9644
    /* 54020 80145C20 20000424 */   addiu     $a0, $zero, 0x20
    /* 54024 80145C24 96D9030C */  jal        func_800F6658
    /* 54028 80145C28 2A000424 */   addiu     $a0, $zero, 0x2A
    /* 5402C 80145C2C 04D5030C */  jal        func_800F5410
    /* 54030 80145C30 00000000 */   nop
    /* 54034 80145C34 19D0030C */  jal        func_800F4064
    /* 54038 80145C38 00D90434 */   ori       $a0, $zero, 0xD900
    /* 5403C 80145C3C 6CE0030C */  jal        func_800F81B0
    /* 54040 80145C40 B5F00434 */   ori       $a0, $zero, 0xF0B5
    /* 54044 80145C44 C7E5030C */  jal        func_800F971C
    /* 54048 80145C48 00000000 */   nop
    /* 5404C 80145C4C 98E5030C */  jal        func_800F9660
    /* 54050 80145C50 20000424 */   addiu     $a0, $zero, 0x20
    /* 54054 80145C54 1D17050C */  jal        func_80145C74
    /* 54058 80145C58 00000000 */   nop
    /* 5405C 80145C5C 68E5030C */  jal        func_800F95A0
    /* 54060 80145C60 00000000 */   nop
    /* 54064 80145C64 1000BF8F */  lw         $ra, 0x10($sp)
    /* 54068 80145C68 00000000 */  nop
    /* 5406C 80145C6C 0800E003 */  jr         $ra
    /* 54070 80145C70 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80145B90
