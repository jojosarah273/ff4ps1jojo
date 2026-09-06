nonmatching func_800FE870, 0x44

glabel func_800FE870
    /* CC70 800FE870 F0000424 */  addiu      $a0, $zero, 0xF0
    /* CC74 800FE874 FC010324 */  addiu      $v1, $zero, 0x1FC
    /* CC78 800FE878 0D80023C */  lui        $v0, (0x800D04FD >> 16)
    /* CC7C 800FE87C FD044234 */  ori        $v0, $v0, (0x800D04FD & 0xFFFF)
  .L800FE880:
    /* CC80 800FE880 000044A0 */  sb         $a0, 0x0($v0)
    /* CC84 800FE884 FCFF6324 */  addiu      $v1, $v1, -0x4
    /* CC88 800FE888 FDFF6104 */  bgez       $v1, .L800FE880
    /* CC8C 800FE88C FCFF4224 */   addiu     $v0, $v0, -0x4
    /* CC90 800FE890 1F000324 */  addiu      $v1, $zero, 0x1F
    /* CC94 800FE894 0D80023C */  lui        $v0, (0x800D051F >> 16)
    /* CC98 800FE898 1F054234 */  ori        $v0, $v0, (0x800D051F & 0xFFFF)
  .L800FE89C:
    /* CC9C 800FE89C 000040A0 */  sb         $zero, 0x0($v0)
    /* CCA0 800FE8A0 FFFF6324 */  addiu      $v1, $v1, -0x1
    /* CCA4 800FE8A4 FDFF6104 */  bgez       $v1, .L800FE89C
    /* CCA8 800FE8A8 FFFF4224 */   addiu     $v0, $v0, -0x1
    /* CCAC 800FE8AC 0800E003 */  jr         $ra
    /* CCB0 800FE8B0 00000000 */   nop
endlabel func_800FE870
