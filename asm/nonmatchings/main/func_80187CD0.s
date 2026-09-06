nonmatching func_80187CD0, 0x4C

glabel func_80187CD0
    /* 960D0 80187CD0 AE0084A7 */  sh         $a0, %gp_rel(D_8019EDAA)($gp)
    /* 960D4 80187CD4 05008014 */  bnez       $a0, .L80187CEC
    /* 960D8 80187CD8 1D80023C */   lui       $v0, %hi(D_801CF568)
    /* 960DC 80187CDC 0D80033C */  lui        $v1, (0x800D2200 >> 16)
    /* 960E0 80187CE0 00226334 */  ori        $v1, $v1, (0x800D2200 & 0xFFFF)
    /* 960E4 80187CE4 3E1F0608 */  j          .L80187CF8
    /* 960E8 80187CE8 68F54424 */   addiu     $a0, $v0, %lo(D_801CF568)
  .L80187CEC:
    /* 960EC 80187CEC 68F54324 */  addiu      $v1, $v0, %lo(D_801CF568)
    /* 960F0 80187CF0 0D80043C */  lui        $a0, (0x800D2200 >> 16)
    /* 960F4 80187CF4 00228434 */  ori        $a0, $a0, (0x800D2200 & 0xFFFF)
  .L80187CF8:
    /* 960F8 80187CF8 FF070524 */  addiu      $a1, $zero, 0x7FF
  .L80187CFC:
    /* 960FC 80187CFC 00006290 */  lbu        $v0, 0x0($v1)
    /* 96100 80187D00 01006324 */  addiu      $v1, $v1, 0x1
    /* 96104 80187D04 FFFFA524 */  addiu      $a1, $a1, -0x1
    /* 96108 80187D08 000082A0 */  sb         $v0, 0x0($a0)
    /* 9610C 80187D0C FBFFA104 */  bgez       $a1, .L80187CFC
    /* 96110 80187D10 01008424 */   addiu     $a0, $a0, 0x1
    /* 96114 80187D14 0800E003 */  jr         $ra
    /* 96118 80187D18 00000000 */   nop
endlabel func_80187CD0
