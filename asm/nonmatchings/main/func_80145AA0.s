nonmatching func_80145AA0, 0x58

glabel func_80145AA0
    /* 53EA0 80145AA0 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* 53EA4 80145AA4 68FD4224 */  addiu      $v0, $v0, %lo(D_801CFD68)
    /* 53EA8 80145AA8 00800334 */  ori        $v1, $zero, 0x8000
    /* 53EAC 80145AAC 21104300 */  addu       $v0, $v0, $v1
    /* 53EB0 80145AB0 F7200424 */  addiu      $a0, $zero, 0x20F7
    /* 53EB4 80145AB4 F8200324 */  addiu      $v1, $zero, 0x20F8
    /* 53EB8 80145AB8 FA200524 */  addiu      $a1, $zero, 0x20FA
    /* 53EBC 80145ABC A45244A4 */  sh         $a0, 0x52A4($v0)
    /* 53EC0 80145AC0 FC200424 */  addiu      $a0, $zero, 0x20FC
    /* 53EC4 80145AC4 A65243A4 */  sh         $v1, 0x52A6($v0)
    /* 53EC8 80145AC8 A85243A4 */  sh         $v1, 0x52A8($v0)
    /* 53ECC 80145ACC AA5243A4 */  sh         $v1, 0x52AA($v0)
    /* 53ED0 80145AD0 AC5243A4 */  sh         $v1, 0x52AC($v0)
    /* 53ED4 80145AD4 FD200324 */  addiu      $v1, $zero, 0x20FD
    /* 53ED8 80145AD8 E45245A4 */  sh         $a1, 0x52E4($v0)
    /* 53EDC 80145ADC 245345A4 */  sh         $a1, 0x5324($v0)
    /* 53EE0 80145AE0 645344A4 */  sh         $a0, 0x5364($v0)
    /* 53EE4 80145AE4 665343A4 */  sh         $v1, 0x5366($v0)
    /* 53EE8 80145AE8 685343A4 */  sh         $v1, 0x5368($v0)
    /* 53EEC 80145AEC 6A5343A4 */  sh         $v1, 0x536A($v0)
    /* 53EF0 80145AF0 0800E003 */  jr         $ra
    /* 53EF4 80145AF4 6C5343A4 */   sh        $v1, 0x536C($v0)
endlabel func_80145AA0
