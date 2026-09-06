nonmatching func_800FC1CC, 0xE0

glabel func_800FC1CC
    /* A5CC 800FC1CC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A5D0 800FC1D0 3F000424 */  addiu      $a0, $zero, 0x3F
    /* A5D4 800FC1D4 1400BFAF */  sw         $ra, 0x14($sp)
    /* A5D8 800FC1D8 53D9030C */  jal        func_800F654C
    /* A5DC 800FC1DC 1000B0AF */   sw        $s0, 0x10($sp)
    /* A5E0 800FC1E0 01F6030C */  jal        func_800FD804
    /* A5E4 800FC1E4 1A80103C */   lui       $s0, %hi(D_80198A68)
    /* A5E8 800FC1E8 53D9030C */  jal        func_800F654C
    /* A5EC 800FC1EC 03000424 */   addiu     $a0, $zero, 0x3
    /* A5F0 800FC1F0 62E0030C */  jal        func_800F8188
    /* A5F4 800FC1F4 2C210424 */   addiu     $a0, $zero, 0x212C
    /* A5F8 800FC1F8 EEE3030C */  jal        func_800F8FB8
    /* A5FC 800FC1FC 79000424 */   addiu     $a0, $zero, 0x79
  .L800FC200:
    /* A600 800FC200 ECF9030C */  jal        func_800FE7B0
    /* A604 800FC204 00000000 */   nop
    /* A608 800FC208 8CD9030C */  jal        func_800F6630
    /* A60C 800FC20C 79000424 */   addiu     $a0, $zero, 0x79
    /* A610 800FC210 19DE030C */  jal        func_800F7864
    /* A614 800FC214 00000000 */   nop
    /* A618 800FC218 A4E5030C */  jal        func_800F9690
    /* A61C 800FC21C 00000000 */   nop
    /* A620 800FC220 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* A624 800FC224 688A0426 */  addiu      $a0, $s0, %lo(D_80198A68)
    /* A628 800FC228 00004394 */  lhu        $v1, 0x0($v0)
    /* A62C 800FC22C 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* A630 800FC230 21186400 */  addu       $v1, $v1, $a0
    /* A634 800FC234 00006290 */  lbu        $v0, 0x0($v1)
    /* A638 800FC238 06210424 */  addiu      $a0, $zero, 0x2106
    /* A63C 800FC23C 62E0030C */  jal        func_800F8188
    /* A640 800FC240 0000A2A0 */   sb        $v0, 0x0($a1)
    /* A644 800FC244 AFD8030C */  jal        func_800F62BC
    /* A648 800FC248 79000424 */   addiu     $a0, $zero, 0x79
    /* A64C 800FC24C AFD8030C */  jal        func_800F62BC
    /* A650 800FC250 79000424 */   addiu     $a0, $zero, 0x79
    /* A654 800FC254 8CD9030C */  jal        func_800F6630
    /* A658 800FC258 79000424 */   addiu     $a0, $zero, 0x79
    /* A65C 800FC25C 5DD5030C */  jal        func_800F5574
    /* A660 800FC260 2A000424 */   addiu     $a0, $zero, 0x2A
    /* A664 800FC264 F5D4030C */  jal        func_800F53D4
    /* A668 800FC268 00000000 */   nop
    /* A66C 800FC26C E4FF4010 */  beqz       $v0, .L800FC200
    /* A670 800FC270 00000000 */   nop
    /* A674 800FC274 8CD9030C */  jal        func_800F6630
    /* A678 800FC278 C6000424 */   addiu     $a0, $zero, 0xC6
    /* A67C 800FC27C 0DD9030C */  jal        func_800F6434
    /* A680 800FC280 02020424 */   addiu     $a0, $zero, 0x202
    /* A684 800FC284 03004014 */  bnez       $v0, .L800FC294
    /* A688 800FC288 00000000 */   nop
    /* A68C 800FC28C DFF4030C */  jal        func_800FD37C
    /* A690 800FC290 00000000 */   nop
  .L800FC294:
    /* A694 800FC294 ABF0030C */  jal        func_800FC2AC
    /* A698 800FC298 00000000 */   nop
    /* A69C 800FC29C 1400BF8F */  lw         $ra, 0x14($sp)
    /* A6A0 800FC2A0 1000B08F */  lw         $s0, 0x10($sp)
    /* A6A4 800FC2A4 0800E003 */  jr         $ra
    /* A6A8 800FC2A8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FC1CC
