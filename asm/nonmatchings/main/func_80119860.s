nonmatching func_80119860, 0x90

glabel func_80119860
    /* 27C60 80119860 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 27C64 80119864 1000BFAF */  sw         $ra, 0x10($sp)
    /* 27C68 80119868 655D040C */  jal        func_80117594
    /* 27C6C 8011986C 00000000 */   nop
    /* 27C70 80119870 93E0030C */  jal        func_800F824C
    /* 27C74 80119874 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 27C78 80119878 CC20040C */  jal        func_80108330
    /* 27C7C 8011987C 00000000 */   nop
    /* 27C80 80119880 261F040C */  jal        func_80107C98
    /* 27C84 80119884 00000000 */   nop
    /* 27C88 80119888 6D17040C */  jal        func_80105DB4
    /* 27C8C 8011988C 00000000 */   nop
    /* 27C90 80119890 CF1F040C */  jal        func_80107F3C
    /* 27C94 80119894 00000000 */   nop
    /* 27C98 80119898 ECF9030C */  jal        func_800FE7B0
    /* 27C9C 8011989C 00000000 */   nop
    /* 27CA0 801198A0 8A26040C */  jal        func_80109A28
    /* 27CA4 801198A4 00000000 */   nop
    /* 27CA8 801198A8 8CD9030C */  jal        func_800F6630
    /* 27CAC 801198AC DB000424 */   addiu     $a0, $zero, 0xDB
    /* 27CB0 801198B0 0DD9030C */  jal        func_800F6434
    /* 27CB4 801198B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 27CB8 801198B8 07004014 */  bnez       $v0, .L801198D8
    /* 27CBC 801198BC 00000000 */   nop
    /* 27CC0 801198C0 715D040C */  jal        func_801175C4
    /* 27CC4 801198C4 00000000 */   nop
    /* 27CC8 801198C8 D9D8030C */  jal        func_800F6364
    /* 27CCC 801198CC 00000000 */   nop
    /* 27CD0 801198D0 40E3030C */  jal        func_800F8D00
    /* 27CD4 801198D4 D3090424 */   addiu     $a0, $zero, 0x9D3
  .L801198D8:
    /* 27CD8 801198D8 977A040C */  jal        func_8011EA5C
    /* 27CDC 801198DC 00000000 */   nop
    /* 27CE0 801198E0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 27CE4 801198E4 00000000 */  nop
    /* 27CE8 801198E8 0800E003 */  jr         $ra
    /* 27CEC 801198EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80119860
