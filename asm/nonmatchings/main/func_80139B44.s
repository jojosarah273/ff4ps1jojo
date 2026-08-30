nonmatching func_80139B44, 0xC8

glabel func_80139B44
    /* 47F44 80139B44 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 47F48 80139B48 1000BFAF */  sw         $ra, 0x10($sp)
    /* 47F4C 80139B4C 29E7040C */  jal        func_80139CA4
    /* 47F50 80139B50 00000000 */   nop
    /* 47F54 80139B54 A5E5040C */  jal        func_80139694
    /* 47F58 80139B58 00000000 */   nop
    /* 47F5C 80139B5C 59D9030C */  jal        func_800F6564
    /* 47F60 80139B60 AF1B0424 */   addiu     $a0, $zero, 0x1BAF
    /* 47F64 80139B64 0DD9030C */  jal        func_800F6434
    /* 47F68 80139B68 02000424 */   addiu     $a0, $zero, 0x2
    /* 47F6C 80139B6C 07004014 */  bnez       $v0, .L80139B8C
    /* 47F70 80139B70 00000000 */   nop
    /* 47F74 80139B74 DADA030C */  jal        func_800F6B68
    /* 47F78 80139B78 40130424 */   addiu     $a0, $zero, 0x1340
    /* 47F7C 80139B7C FED8030C */  jal        func_800F63F8
    /* 47F80 80139B80 00000000 */   nop
    /* 47F84 80139B84 E7E60408 */  j          .L80139B9C
    /* 47F88 80139B88 00000000 */   nop
  .L80139B8C:
    /* 47F8C 80139B8C DADA030C */  jal        func_800F6B68
    /* 47F90 80139B90 40140424 */   addiu     $a0, $zero, 0x1440
    /* 47F94 80139B94 FED8030C */  jal        func_800F63F8
    /* 47F98 80139B98 00000000 */   nop
  .L80139B9C:
    /* 47F9C 80139B9C F5D4030C */  jal        func_800F53D4
    /* 47FA0 80139BA0 00000000 */   nop
    /* 47FA4 80139BA4 15004014 */  bnez       $v0, .L80139BFC
    /* 47FA8 80139BA8 00000000 */   nop
    /* 47FAC 80139BAC 5DD5030C */  jal        func_800F5574
    /* 47FB0 80139BB0 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 47FB4 80139BB4 F0D4030C */  jal        func_800F53C0
    /* 47FB8 80139BB8 00000000 */   nop
    /* 47FBC 80139BBC 0F004014 */  bnez       $v0, .L80139BFC
    /* 47FC0 80139BC0 00000000 */   nop
    /* 47FC4 80139BC4 62E0030C */  jal        func_800F8188
    /* 47FC8 80139BC8 391B0424 */   addiu     $a0, $zero, 0x1B39
    /* 47FCC 80139BCC C7E5030C */  jal        func_800F971C
    /* 47FD0 80139BD0 00000000 */   nop
  .L80139BD4:
    /* 47FD4 80139BD4 03E7040C */  jal        func_80139C0C
    /* 47FD8 80139BD8 00000000 */   nop
    /* 47FDC 80139BDC 7AD8030C */  jal        func_800F61E8
    /* 47FE0 80139BE0 00000000 */   nop
    /* 47FE4 80139BE4 5DD5030C */  jal        func_800F5574
    /* 47FE8 80139BE8 05000424 */   addiu     $a0, $zero, 0x5
    /* 47FEC 80139BEC F5D4030C */  jal        func_800F53D4
    /* 47FF0 80139BF0 00000000 */   nop
    /* 47FF4 80139BF4 F7FF4010 */  beqz       $v0, .L80139BD4
    /* 47FF8 80139BF8 00000000 */   nop
  .L80139BFC:
    /* 47FFC 80139BFC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 48000 80139C00 00000000 */  nop
    /* 48004 80139C04 0800E003 */  jr         $ra
    /* 48008 80139C08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80139B44
