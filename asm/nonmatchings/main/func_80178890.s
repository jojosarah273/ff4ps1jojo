nonmatching func_80178890, 0x7C

glabel func_80178890
    /* 86C90 80178890 24000824 */  addiu      $t0, $zero, 0x24
    /* 86C94 80178894 01000724 */  addiu      $a3, $zero, 0x1
    /* 86C98 80178898 00010624 */  addiu      $a2, $zero, 0x100
    /* 86C9C 8017889C 1A80043C */  lui        $a0, %hi(D_8019FFE8)
    /* 86CA0 801788A0 E8FF8224 */  addiu      $v0, $a0, %lo(D_8019FFE8)
    /* 86CA4 801788A4 F0000524 */  addiu      $a1, $zero, 0xF0
    /* 86CA8 801788A8 9F000324 */  addiu      $v1, $zero, 0x9F
  .L801788AC:
    /* 86CAC 801788AC 060040A4 */  sh         $zero, 0x6($v0)
    /* 86CB0 801788B0 040040A4 */  sh         $zero, 0x4($v0)
    /* 86CB4 801788B4 020040A4 */  sh         $zero, 0x2($v0)
    /* 86CB8 801788B8 000040A4 */  sh         $zero, 0x0($v0)
    /* 86CBC 801788BC 0C0048A0 */  sb         $t0, 0xC($v0)
    /* 86CC0 801788C0 0D0047A0 */  sb         $a3, 0xD($v0)
    /* 86CC4 801788C4 080046A4 */  sh         $a2, 0x8($v0)
    /* 86CC8 801788C8 0A0045A4 */  sh         $a1, 0xA($v0)
    /* 86CCC 801788CC FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 86CD0 801788D0 F6FF6104 */  bgez       $v1, .L801788AC
    /* 86CD4 801788D4 0E004224 */   addiu     $v0, $v0, 0xE
    /* 86CD8 801788D8 E8FF8424 */  addiu      $a0, $a0, %lo(D_8019FFE8)
    /* 86CDC 801788DC 28000224 */  addiu      $v0, $zero, 0x28
    /* 86CE0 801788E0 00010324 */  addiu      $v1, $zero, 0x100
    /* 86CE4 801788E4 280082A0 */  sb         $v0, 0x28($a0)
    /* 86CE8 801788E8 50000224 */  addiu      $v0, $zero, 0x50
    /* 86CEC 801788EC 1A0080A0 */  sb         $zero, 0x1A($a0)
    /* 86CF0 801788F0 0C0080A0 */  sb         $zero, 0xC($a0)
    /* 86CF4 801788F4 120083A4 */  sh         $v1, 0x12($a0)
    /* 86CF8 801788F8 C00082A4 */  sh         $v0, 0xC0($a0)
    /* 86CFC 801788FC CE0082A4 */  sh         $v0, 0xCE($a0)
    /* 86D00 80178900 2C0180AF */  sw         $zero, %gp_rel(D_8019EE28)($gp)
    /* 86D04 80178904 0800E003 */  jr         $ra
    /* 86D08 80178908 00000000 */   nop
endlabel func_80178890
