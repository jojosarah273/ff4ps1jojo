nonmatching func_8013B764, 0x54

glabel func_8013B764
    /* 49B64 8013B764 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* 49B68 8013B768 68FD4224 */  addiu      $v0, $v0, %lo(D_801CFD68)
    /* 49B6C 8013B76C 00800334 */  ori        $v1, $zero, 0x8000
    /* 49B70 8013B770 21104300 */  addu       $v0, $v0, $v1
    /* 49B74 8013B774 FF200524 */  addiu      $a1, $zero, 0x20FF
    /* 49B78 8013B778 4E200324 */  addiu      $v1, $zero, 0x204E
    /* 49B7C 8013B77C 70200424 */  addiu      $a0, $zero, 0x2070
    /* 49B80 8013B780 D85043A4 */  sh         $v1, 0x50D8($v0)
    /* 49B84 8013B784 67200324 */  addiu      $v1, $zero, 0x2067
    /* 49B88 8013B788 DA5044A4 */  sh         $a0, 0x50DA($v0)
    /* 49B8C 8013B78C 6F200424 */  addiu      $a0, $zero, 0x206F
    /* 49B90 8013B790 DC5043A4 */  sh         $v1, 0x50DC($v0)
    /* 49B94 8013B794 64200324 */  addiu      $v1, $zero, 0x2064
    /* 49B98 8013B798 965045A4 */  sh         $a1, 0x5096($v0)
    /* 49B9C 8013B79C 9A5045A4 */  sh         $a1, 0x509A($v0)
    /* 49BA0 8013B7A0 D65045A4 */  sh         $a1, 0x50D6($v0)
    /* 49BA4 8013B7A4 DE5044A4 */  sh         $a0, 0x50DE($v0)
    /* 49BA8 8013B7A8 E05043A4 */  sh         $v1, 0x50E0($v0)
    /* 49BAC 8013B7AC E25045A4 */  sh         $a1, 0x50E2($v0)
    /* 49BB0 8013B7B0 0800E003 */  jr         $ra
    /* 49BB4 8013B7B4 E45045A4 */   sh        $a1, 0x50E4($v0)
endlabel func_8013B764
