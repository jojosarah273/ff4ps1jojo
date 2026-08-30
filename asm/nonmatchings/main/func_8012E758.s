nonmatching func_8012E758, 0x74

glabel func_8012E758
    /* 3CB58 8012E758 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3CB5C 8012E75C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3CB60 8012E760 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3CB64 8012E764 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3CB68 8012E768 00006290 */  lbu        $v0, 0x0($v1)
    /* 3CB6C 8012E76C 43000424 */  addiu      $a0, $zero, 0x43
    /* 3CB70 8012E770 40110200 */  sll        $v0, $v0, 5
    /* 3CB74 8012E774 93E0030C */  jal        func_800F824C
    /* 3CB78 8012E778 000062A0 */   sb        $v0, 0x0($v1)
    /* 3CB7C 8012E77C 65DD030C */  jal        func_800F7594
    /* 3CB80 8012E780 43000424 */   addiu     $a0, $zero, 0x43
    /* 3CB84 8012E784 77DC030C */  jal        func_800F71DC
    /* 3CB88 8012E788 20000424 */   addiu     $a0, $zero, 0x20
  .L8012E78C:
    /* 3CB8C 8012E78C 5CDB030C */  jal        func_800F6D70
    /* 3CB90 8012E790 28FE0434 */   ori       $a0, $zero, 0xFE28
    /* 3CB94 8012E794 58E2030C */  jal        func_800F8960
    /* 3CB98 8012E798 60A10434 */   ori       $a0, $zero, 0xA160
    /* 3CB9C 8012E79C EFD8030C */  jal        func_800F63BC
    /* 3CBA0 8012E7A0 00000000 */   nop
    /* 3CBA4 8012E7A4 92D7030C */  jal        func_800F5E48
    /* 3CBA8 8012E7A8 00000000 */   nop
    /* 3CBAC 8012E7AC 19D7030C */  jal        func_800F5C64
    /* 3CBB0 8012E7B0 02020424 */   addiu     $a0, $zero, 0x202
    /* 3CBB4 8012E7B4 F5FF4014 */  bnez       $v0, .L8012E78C
    /* 3CBB8 8012E7B8 00000000 */   nop
    /* 3CBBC 8012E7BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3CBC0 8012E7C0 00000000 */  nop
    /* 3CBC4 8012E7C4 0800E003 */  jr         $ra
    /* 3CBC8 8012E7C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012E758
