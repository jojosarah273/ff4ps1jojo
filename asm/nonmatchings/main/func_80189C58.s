nonmatching func_80189C58, 0x9C

glabel func_80189C58
    /* 98058 80189C58 C0FFBD27 */  addiu      $sp, $sp, -0x40
    /* 9805C 80189C5C 3000B2AF */  sw         $s2, 0x30($sp)
    /* 98060 80189C60 21908000 */  addu       $s2, $a0, $zero
    /* 98064 80189C64 3400B3AF */  sw         $s3, 0x34($sp)
    /* 98068 80189C68 2198A000 */  addu       $s3, $a1, $zero
    /* 9806C 80189C6C 00340600 */  sll        $a2, $a2, 16
    /* 98070 80189C70 2C00B1AF */  sw         $s1, 0x2C($sp)
    /* 98074 80189C74 038C0600 */  sra        $s1, $a2, 16
    /* 98078 80189C78 9C028287 */  lh         $v0, %gp_rel(D_8019EF98)($gp)
    /* 9807C 80189C7C 003C0700 */  sll        $a3, $a3, 16
    /* 98080 80189C80 2800B0AF */  sw         $s0, 0x28($sp)
    /* 98084 80189C84 03840700 */  sra        $s0, $a3, 16
    /* 98088 80189C88 07004014 */  bnez       $v0, .L80189CA8
    /* 9808C 80189C8C 3800BFAF */   sw        $ra, 0x38($sp)
    /* 98090 80189C90 FA30060C */  jal        func_8018C3E8
    /* 98094 80189C94 01000424 */   addiu     $a0, $zero, 0x1
    /* 98098 80189C98 9C028397 */  lhu        $v1, %gp_rel(D_8019EF98)($gp)
    /* 9809C 80189C9C 00000000 */  nop
    /* 980A0 80189CA0 01006324 */  addiu      $v1, $v1, 0x1
    /* 980A4 80189CA4 9C0283A7 */  sh         $v1, %gp_rel(D_8019EF98)($gp)
  .L80189CA8:
    /* 980A8 80189CA8 5000A28F */  lw         $v0, 0x50($sp)
    /* 980AC 80189CAC 5400A38F */  lw         $v1, 0x54($sp)
    /* 980B0 80189CB0 1000A427 */  addiu      $a0, $sp, 0x10
    /* 980B4 80189CB4 1000B2AF */  sw         $s2, 0x10($sp)
    /* 980B8 80189CB8 1400B3AF */  sw         $s3, 0x14($sp)
    /* 980BC 80189CBC 1A00B0A7 */  sh         $s0, 0x1A($sp)
    /* 980C0 80189CC0 1800B1A7 */  sh         $s1, 0x18($sp)
    /* 980C4 80189CC4 1C00A2AF */  sw         $v0, 0x1C($sp)
    /* 980C8 80189CC8 8E2E060C */  jal        func_8018BA38
    /* 980CC 80189CCC 2000A3AF */   sw        $v1, 0x20($sp)
    /* 980D0 80189CD0 0E2E060C */  jal        func_8018B838
    /* 980D4 80189CD4 01000424 */   addiu     $a0, $zero, 0x1
    /* 980D8 80189CD8 3800BF8F */  lw         $ra, 0x38($sp)
    /* 980DC 80189CDC 3400B38F */  lw         $s3, 0x34($sp)
    /* 980E0 80189CE0 3000B28F */  lw         $s2, 0x30($sp)
    /* 980E4 80189CE4 2C00B18F */  lw         $s1, 0x2C($sp)
    /* 980E8 80189CE8 2800B08F */  lw         $s0, 0x28($sp)
    /* 980EC 80189CEC 0800E003 */  jr         $ra
    /* 980F0 80189CF0 4000BD27 */   addiu     $sp, $sp, 0x40
endlabel func_80189C58
