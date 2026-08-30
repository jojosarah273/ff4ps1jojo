nonmatching func_80131F98, 0x78

glabel func_80131F98
    /* 40398 80131F98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4039C 80131F9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 403A0 80131FA0 93E0030C */  jal        func_800F824C
    /* 403A4 80131FA4 48000424 */   addiu     $a0, $zero, 0x48
    /* 403A8 80131FA8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 403AC 80131FAC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 403B0 80131FB0 00000000 */  nop
    /* 403B4 80131FB4 00006290 */  lbu        $v0, 0x0($v1)
    /* 403B8 80131FB8 49000424 */  addiu      $a0, $zero, 0x49
    /* 403BC 80131FBC 27100200 */  nor        $v0, $zero, $v0
    /* 403C0 80131FC0 93E0030C */  jal        func_800F824C
    /* 403C4 80131FC4 000062A0 */   sb        $v0, 0x0($v1)
    /* 403C8 80131FC8 AFE3030C */  jal        func_800F8EBC
    /* 403CC 80131FCC 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 403D0 80131FD0 53D9030C */  jal        func_800F654C
    /* 403D4 80131FD4 21200000 */   addu      $a0, $zero, $zero
  .L80131FD8:
    /* 403D8 80131FD8 04C8040C */  jal        func_80132010
    /* 403DC 80131FDC 00000000 */   nop
    /* 403E0 80131FE0 7AD8030C */  jal        func_800F61E8
    /* 403E4 80131FE4 00000000 */   nop
    /* 403E8 80131FE8 5DD5030C */  jal        func_800F5574
    /* 403EC 80131FEC 05000424 */   addiu     $a0, $zero, 0x5
    /* 403F0 80131FF0 F5D4030C */  jal        func_800F53D4
    /* 403F4 80131FF4 00000000 */   nop
    /* 403F8 80131FF8 F7FF4010 */  beqz       $v0, .L80131FD8
    /* 403FC 80131FFC 00000000 */   nop
    /* 40400 80132000 1000BF8F */  lw         $ra, 0x10($sp)
    /* 40404 80132004 00000000 */  nop
    /* 40408 80132008 0800E003 */  jr         $ra
    /* 4040C 8013200C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131F98
