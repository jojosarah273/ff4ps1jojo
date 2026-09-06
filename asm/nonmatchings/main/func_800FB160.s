nonmatching func_800FB160, 0xC4

glabel func_800FB160
    /* 9560 800FB160 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9564 800FB164 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9568 800FB168 18E9030C */  jal        func_800FA460
    /* 956C 800FB16C 00000000 */   nop
    /* 9570 800FB170 BAEC030C */  jal        func_800FB2E8
    /* 9574 800FB174 00000000 */   nop
    /* 9578 800FB178 53D9030C */  jal        func_800F654C
    /* 957C 800FB17C 01000424 */   addiu     $a0, $zero, 0x1
    /* 9580 800FB180 62E0030C */  jal        func_800F8188
    /* 9584 800FB184 01170424 */   addiu     $a0, $zero, 0x1701
    /* 9588 800FB188 DDE3030C */  jal        func_800F8F74
    /* 958C 800FB18C FA060424 */   addiu     $a0, $zero, 0x6FA
    /* 9590 800FB190 4AF7030C */  jal        func_800FDD28
    /* 9594 800FB194 00000000 */   nop
    /* 9598 800FB198 53D9030C */  jal        func_800F654C
    /* 959C 800FB19C 14000424 */   addiu     $a0, $zero, 0x14
    /* 95A0 800FB1A0 77DC030C */  jal        func_800F71DC
    /* 95A4 800FB1A4 80890434 */   ori       $a0, $zero, 0x8980
    /* 95A8 800FB1A8 5EFA030C */  jal        func_800FE978
    /* 95AC 800FB1AC 00000000 */   nop
    /* 95B0 800FB1B0 53D9030C */  jal        func_800F654C
    /* 95B4 800FB1B4 14000424 */   addiu     $a0, $zero, 0x14
    /* 95B8 800FB1B8 40DD030C */  jal        func_800F7500
    /* 95BC 800FB1BC 00820434 */   ori       $a0, $zero, 0x8200
    /* 95C0 800FB1C0 7E70040C */  jal        func_8011C1F8
    /* 95C4 800FB1C4 00000000 */   nop
    /* 95C8 800FB1C8 77DC030C */  jal        func_800F71DC
    /* 95CC 800FB1CC 21200000 */   addu      $a0, $zero, $zero
    /* 95D0 800FB1D0 1400043C */  lui        $a0, (0x148B80 >> 16)
  .L800FB1D4:
    /* 95D4 800FB1D4 1ADB030C */  jal        func_800F6C68
    /* 95D8 800FB1D8 808B8434 */   ori       $a0, $a0, (0x148B80 & 0xFFFF)
    /* 95DC 800FB1DC DAE1030C */  jal        func_800F8768
    /* 95E0 800FB1E0 DB0E0424 */   addiu     $a0, $zero, 0xEDB
    /* 95E4 800FB1E4 D9D8030C */  jal        func_800F6364
    /* 95E8 800FB1E8 00000000 */   nop
    /* 95EC 800FB1EC 56D6030C */  jal        func_800F5958
    /* 95F0 800FB1F0 00010424 */   addiu     $a0, $zero, 0x100
    /* 95F4 800FB1F4 F5D4030C */  jal        func_800F53D4
    /* 95F8 800FB1F8 00000000 */   nop
    /* 95FC 800FB1FC F5FF4010 */  beqz       $v0, .L800FB1D4
    /* 9600 800FB200 1400043C */   lui       $a0, (0x148B80 >> 16)
    /* 9604 800FB204 B7FE030C */  jal        func_800FFADC
    /* 9608 800FB208 00000000 */   nop
    /* 960C 800FB20C 8674040C */  jal        func_8011D218
    /* 9610 800FB210 00000000 */   nop
    /* 9614 800FB214 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9618 800FB218 00000000 */  nop
    /* 961C 800FB21C 0800E003 */  jr         $ra
    /* 9620 800FB220 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FB160
