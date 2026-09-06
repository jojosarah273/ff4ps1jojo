nonmatching func_800FA5B8, 0x27C

glabel func_800FA5B8
    /* 89B8 800FA5B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 89BC 800FA5BC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 89C0 800FA5C0 8CD9030C */  jal        func_800F6630
    /* 89C4 800FA5C4 D5000424 */   addiu     $a0, $zero, 0xD5
    /* 89C8 800FA5C8 0DD9030C */  jal        func_800F6434
    /* 89CC 800FA5CC 02020424 */   addiu     $a0, $zero, 0x202
    /* 89D0 800FA5D0 94004010 */  beqz       $v0, .L800FA824
    /* 89D4 800FA5D4 00000000 */   nop
    /* 89D8 800FA5D8 8CD9030C */  jal        func_800F6630
    /* 89DC 800FA5DC 50000424 */   addiu     $a0, $zero, 0x50
    /* 89E0 800FA5E0 0DD9030C */  jal        func_800F6434
    /* 89E4 800FA5E4 02000424 */   addiu     $a0, $zero, 0x2
    /* 89E8 800FA5E8 8E004010 */  beqz       $v0, .L800FA824
    /* 89EC 800FA5EC 00000000 */   nop
    /* 89F0 800FA5F0 8CD9030C */  jal        func_800F6630
    /* 89F4 800FA5F4 02000424 */   addiu     $a0, $zero, 0x2
    /* 89F8 800FA5F8 92D0030C */  jal        func_800F4248
    /* 89FC 800FA5FC 40000424 */   addiu     $a0, $zero, 0x40
    /* 8A00 800FA600 48D0030C */  jal        func_800F4120
    /* 8A04 800FA604 02020424 */   addiu     $a0, $zero, 0x202
    /* 8A08 800FA608 86004010 */  beqz       $v0, .L800FA824
    /* 8A0C 800FA60C 00000000 */   nop
    /* 8A10 800FA610 53D9030C */  jal        func_800F654C
    /* 8A14 800FA614 01000424 */   addiu     $a0, $zero, 0x1
    /* 8A18 800FA618 93E0030C */  jal        func_800F824C
    /* 8A1C 800FA61C 50000424 */   addiu     $a0, $zero, 0x50
    /* 8A20 800FA620 59D9030C */  jal        func_800F6564
    /* 8A24 800FA624 00170424 */   addiu     $a0, $zero, 0x1700
    /* 8A28 800FA628 5DD5030C */  jal        func_800F5574
    /* 8A2C 800FA62C 03000424 */   addiu     $a0, $zero, 0x3
    /* 8A30 800FA630 F5D4030C */  jal        func_800F53D4
    /* 8A34 800FA634 00000000 */   nop
    /* 8A38 800FA638 0C004010 */  beqz       $v0, .L800FA66C
    /* 8A3C 800FA63C 00000000 */   nop
    /* 8A40 800FA640 59D9030C */  jal        func_800F6564
    /* 8A44 800FA644 DB0F0424 */   addiu     $a0, $zero, 0xFDB
    /* 8A48 800FA648 92D0030C */  jal        func_800F4248
    /* 8A4C 800FA64C 30000424 */   addiu     $a0, $zero, 0x30
    /* 8A50 800FA650 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 8A54 800FA654 00000000 */  nop
    /* 8A58 800FA658 00006290 */  lbu        $v0, 0x0($v1)
    /* 8A5C 800FA65C 00000000 */  nop
    /* 8A60 800FA660 80004234 */  ori        $v0, $v0, 0x80
    /* 8A64 800FA664 A7E90308 */  j          .L800FA69C
    /* 8A68 800FA668 000062A0 */   sb        $v0, 0x0($v1)
  .L800FA66C:
    /* 8A6C 800FA66C 59D9030C */  jal        func_800F6564
    /* 8A70 800FA670 04170424 */   addiu     $a0, $zero, 0x1704
    /* 8A74 800FA674 0DD9030C */  jal        func_800F6434
    /* 8A78 800FA678 02020424 */   addiu     $a0, $zero, 0x202
    /* 8A7C 800FA67C 05004014 */  bnez       $v0, .L800FA694
    /* 8A80 800FA680 00000000 */   nop
    /* 8A84 800FA684 53D9030C */  jal        func_800F654C
    /* 8A88 800FA688 40000424 */   addiu     $a0, $zero, 0x40
    /* 8A8C 800FA68C A7E90308 */  j          .L800FA69C
    /* 8A90 800FA690 00000000 */   nop
  .L800FA694:
    /* 8A94 800FA694 53D9030C */  jal        func_800F654C
    /* 8A98 800FA698 21200000 */   addu      $a0, $zero, $zero
  .L800FA69C:
    /* 8A9C 800FA69C 62E0030C */  jal        func_800F8188
    /* 8AA0 800FA6A0 041A0424 */   addiu     $a0, $zero, 0x1A04
    /* 8AA4 800FA6A4 6AF1030C */  jal        func_800FC5A8
    /* 8AA8 800FA6A8 00000000 */   nop
    /* 8AAC 800FA6AC 9F7A040C */  jal        func_8011EA7C
    /* 8AB0 800FA6B0 00000000 */   nop
    /* 8AB4 800FA6B4 59D9030C */  jal        func_800F6564
    /* 8AB8 800FA6B8 00170424 */   addiu     $a0, $zero, 0x1700
    /* 8ABC 800FA6BC 5DD5030C */  jal        func_800F5574
    /* 8AC0 800FA6C0 03000424 */   addiu     $a0, $zero, 0x3
    /* 8AC4 800FA6C4 F5D4030C */  jal        func_800F53D4
    /* 8AC8 800FA6C8 00000000 */   nop
    /* 8ACC 800FA6CC 05004010 */  beqz       $v0, .L800FA6E4
    /* 8AD0 800FA6D0 00000000 */   nop
    /* 8AD4 800FA6D4 84DC030C */  jal        func_800F7210
    /* 8AD8 800FA6D8 AA160424 */   addiu     $a0, $zero, 0x16AA
    /* 8ADC 800FA6DC 40E3030C */  jal        func_800F8D00
    /* 8AE0 800FA6E0 DD0C0424 */   addiu     $a0, $zero, 0xCDD
  .L800FA6E4:
    /* 8AE4 800FA6E4 76F1030C */  jal        func_800FC5D8
    /* 8AE8 800FA6E8 00000000 */   nop
    /* 8AEC 800FA6EC 59D9030C */  jal        func_800F6564
    /* 8AF0 800FA6F0 031A0424 */   addiu     $a0, $zero, 0x1A03
    /* 8AF4 800FA6F4 0DD9030C */  jal        func_800F6434
    /* 8AF8 800FA6F8 02000424 */   addiu     $a0, $zero, 0x2
    /* 8AFC 800FA6FC 49004014 */  bnez       $v0, .L800FA824
    /* 8B00 800FA700 00000000 */   nop
    /* 8B04 800FA704 53D9030C */  jal        func_800F654C
    /* 8B08 800FA708 01000424 */   addiu     $a0, $zero, 0x1
    /* 8B0C 800FA70C 93E0030C */  jal        func_800F824C
    /* 8B10 800FA710 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 8B14 800FA714 EEE3030C */  jal        func_800F8FB8
    /* 8B18 800FA718 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 8B1C 800FA71C 59D9030C */  jal        func_800F6564
    /* 8B20 800FA720 031A0424 */   addiu     $a0, $zero, 0x1A03
    /* 8B24 800FA724 5DD5030C */  jal        func_800F5574
    /* 8B28 800FA728 03000424 */   addiu     $a0, $zero, 0x3
    /* 8B2C 800FA72C F0D4030C */  jal        func_800F53C0
    /* 8B30 800FA730 00000000 */   nop
    /* 8B34 800FA734 09004014 */  bnez       $v0, .L800FA75C
    /* 8B38 800FA738 00000000 */   nop
    /* 8B3C 800FA73C 59D9030C */  jal        func_800F6564
    /* 8B40 800FA740 031A0424 */   addiu     $a0, $zero, 0x1A03
    /* 8B44 800FA744 04D5030C */  jal        func_800F5410
    /* 8B48 800FA748 00000000 */   nop
    /* 8B4C 800FA74C 02D0030C */  jal        func_800F4008
    /* 8B50 800FA750 76000424 */   addiu     $a0, $zero, 0x76
    /* 8B54 800FA754 03EA0308 */  j          .L800FA80C
    /* 8B58 800FA758 00000000 */   nop
  .L800FA75C:
    /* 8B5C 800FA75C 5DD5030C */  jal        func_800F5574
    /* 8B60 800FA760 03000424 */   addiu     $a0, $zero, 0x3
    /* 8B64 800FA764 F5D4030C */  jal        func_800F53D4
    /* 8B68 800FA768 00000000 */   nop
    /* 8B6C 800FA76C 05004010 */  beqz       $v0, .L800FA784
    /* 8B70 800FA770 00000000 */   nop
    /* 8B74 800FA774 53D9030C */  jal        func_800F654C
    /* 8B78 800FA778 87000424 */   addiu     $a0, $zero, 0x87
    /* 8B7C 800FA77C 03EA0308 */  j          .L800FA80C
    /* 8B80 800FA780 00000000 */   nop
  .L800FA784:
    /* 8B84 800FA784 5DD5030C */  jal        func_800F5574
    /* 8B88 800FA788 04000424 */   addiu     $a0, $zero, 0x4
    /* 8B8C 800FA78C F5D4030C */  jal        func_800F53D4
    /* 8B90 800FA790 00000000 */   nop
    /* 8B94 800FA794 05004010 */  beqz       $v0, .L800FA7AC
    /* 8B98 800FA798 00000000 */   nop
    /* 8B9C 800FA79C 53D9030C */  jal        func_800F654C
    /* 8BA0 800FA7A0 86000424 */   addiu     $a0, $zero, 0x86
    /* 8BA4 800FA7A4 03EA0308 */  j          .L800FA80C
    /* 8BA8 800FA7A8 00000000 */   nop
  .L800FA7AC:
    /* 8BAC 800FA7AC 5DD5030C */  jal        func_800F5574
    /* 8BB0 800FA7B0 05000424 */   addiu     $a0, $zero, 0x5
    /* 8BB4 800FA7B4 F5D4030C */  jal        func_800F53D4
    /* 8BB8 800FA7B8 00000000 */   nop
    /* 8BBC 800FA7BC 05004010 */  beqz       $v0, .L800FA7D4
    /* 8BC0 800FA7C0 00000000 */   nop
    /* 8BC4 800FA7C4 53D9030C */  jal        func_800F654C
    /* 8BC8 800FA7C8 FB000424 */   addiu     $a0, $zero, 0xFB
    /* 8BCC 800FA7CC 03EA0308 */  j          .L800FA80C
    /* 8BD0 800FA7D0 00000000 */   nop
  .L800FA7D4:
    /* 8BD4 800FA7D4 5DD5030C */  jal        func_800F5574
    /* 8BD8 800FA7D8 06000424 */   addiu     $a0, $zero, 0x6
    /* 8BDC 800FA7DC F5D4030C */  jal        func_800F53D4
    /* 8BE0 800FA7E0 00000000 */   nop
    /* 8BE4 800FA7E4 07004010 */  beqz       $v0, .L800FA804
    /* 8BE8 800FA7E8 00000000 */   nop
    /* 8BEC 800FA7EC 53D9030C */  jal        func_800F654C
    /* 8BF0 800FA7F0 01000424 */   addiu     $a0, $zero, 0x1
    /* 8BF4 800FA7F4 93E0030C */  jal        func_800F824C
    /* 8BF8 800FA7F8 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 8BFC 800FA7FC 05EA0308 */  j          .L800FA814
    /* 8C00 800FA800 00000000 */   nop
  .L800FA804:
    /* 8C04 800FA804 53D9030C */  jal        func_800F654C
    /* 8C08 800FA808 DB000424 */   addiu     $a0, $zero, 0xDB
  .L800FA80C:
    /* 8C0C 800FA80C FA58040C */  jal        func_801163E8
    /* 8C10 800FA810 00000000 */   nop
  .L800FA814:
    /* 8C14 800FA814 EEE3030C */  jal        func_800F8FB8
    /* 8C18 800FA818 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 8C1C 800FA81C C6F5030C */  jal        func_800FD718
    /* 8C20 800FA820 00000000 */   nop
  .L800FA824:
    /* 8C24 800FA824 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8C28 800FA828 00000000 */  nop
    /* 8C2C 800FA82C 0800E003 */  jr         $ra
    /* 8C30 800FA830 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FA5B8
