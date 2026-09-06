nonmatching func_8012CD6C, 0x94

glabel func_8012CD6C
    /* 3B16C 8012CD6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3B170 8012CD70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3B174 8012CD74 59D9030C */  jal        func_800F6564
    /* 3B178 8012CD78 041A0424 */   addiu     $a0, $zero, 0x1A04
    /* 3B17C 8012CD7C 92D0030C */  jal        func_800F4248
    /* 3B180 8012CD80 80000424 */   addiu     $a0, $zero, 0x80
    /* 3B184 8012CD84 48D0030C */  jal        func_800F4120
    /* 3B188 8012CD88 02000424 */   addiu     $a0, $zero, 0x2
    /* 3B18C 8012CD8C 05004010 */  beqz       $v0, .L8012CDA4
    /* 3B190 8012CD90 00000000 */   nop
    /* 3B194 8012CD94 13B3040C */  jal        func_8012CC4C
    /* 3B198 8012CD98 00000000 */   nop
    /* 3B19C 8012CD9C 7CB30408 */  j          .L8012CDF0
    /* 3B1A0 8012CDA0 02000224 */   addiu     $v0, $zero, 0x2
  .L8012CDA4:
    /* 3B1A4 8012CDA4 53D9030C */  jal        func_800F654C
    /* 3B1A8 8012CDA8 07000424 */   addiu     $a0, $zero, 0x7
    /* 3B1AC 8012CDAC 62E0030C */  jal        func_800F8188
    /* 3B1B0 8012CDB0 031A0424 */   addiu     $a0, $zero, 0x1A03
    /* 3B1B4 8012CDB4 DDE3030C */  jal        func_800F8F74
    /* 3B1B8 8012CDB8 191B0424 */   addiu     $a0, $zero, 0x1B19
    /* 3B1BC 8012CDBC 9CDC030C */  jal        func_800F7270
    /* 3B1C0 8012CDC0 93000424 */   addiu     $a0, $zero, 0x93
    /* 3B1C4 8012CDC4 40E3030C */  jal        func_800F8D00
    /* 3B1C8 8012CDC8 A51B0424 */   addiu     $a0, $zero, 0x1BA5
    /* 3B1CC 8012CDCC 84DC030C */  jal        func_800F7210
    /* 3B1D0 8012CDD0 651A0424 */   addiu     $a0, $zero, 0x1A65
    /* 3B1D4 8012CDD4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 3B1D8 8012CDD8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 3B1DC 8012CDDC 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 3B1E0 8012CDE0 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 3B1E4 8012CDE4 00004394 */  lhu        $v1, 0x0($v0)
    /* 3B1E8 8012CDE8 01000224 */  addiu      $v0, $zero, 0x1
    /* 3B1EC 8012CDEC 000083A4 */  sh         $v1, 0x0($a0)
  .L8012CDF0:
    /* 3B1F0 8012CDF0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B1F4 8012CDF4 00000000 */  nop
    /* 3B1F8 8012CDF8 0800E003 */  jr         $ra
    /* 3B1FC 8012CDFC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012CD6C
