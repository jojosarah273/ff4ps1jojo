nonmatching func_8013C554, 0x51C

glabel func_8013C554
    /* 4A954 8013C554 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4A958 8013C558 1000BFAF */  sw         $ra, 0x10($sp)
  .L8013C55C:
    /* 4A95C 8013C55C 59D9030C */  jal        func_800F6564
    /* 4A960 8013C560 B51B0424 */   addiu     $a0, $zero, 0x1BB5
    /* 4A964 8013C564 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4A968 8013C568 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4A96C 8013C56C 00000000 */  nop
    /* 4A970 8013C570 00006290 */  lbu        $v0, 0x0($v1)
    /* 4A974 8013C574 00000000 */  nop
    /* 4A978 8013C578 C0100200 */  sll        $v0, $v0, 3
    /* 4A97C 8013C57C 50D4030C */  jal        func_800F5140
    /* 4A980 8013C580 000062A0 */   sb        $v0, 0x0($v1)
    /* 4A984 8013C584 D3D3030C */  jal        func_800F4F4C
    /* 4A988 8013C588 00000000 */   nop
    /* 4A98C 8013C58C 02D0030C */  jal        func_800F4008
    /* 4A990 8013C590 86000424 */   addiu     $a0, $zero, 0x86
    /* 4A994 8013C594 93E0030C */  jal        func_800F824C
    /* 4A998 8013C598 46000424 */   addiu     $a0, $zero, 0x46
    /* 4A99C 8013C59C 59D9030C */  jal        func_800F6564
    /* 4A9A0 8013C5A0 B61B0424 */   addiu     $a0, $zero, 0x1BB6
    /* 4A9A4 8013C5A4 0DD9030C */  jal        func_800F6434
    /* 4A9A8 8013C5A8 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A9AC 8013C5AC 05004014 */  bnez       $v0, .L8013C5C4
    /* 4A9B0 8013C5B0 00000000 */   nop
    /* 4A9B4 8013C5B4 53D9030C */  jal        func_800F654C
    /* 4A9B8 8013C5B8 70000424 */   addiu     $a0, $zero, 0x70
    /* 4A9BC 8013C5BC 73F10408 */  j          .L8013C5CC
    /* 4A9C0 8013C5C0 00000000 */   nop
  .L8013C5C4:
    /* 4A9C4 8013C5C4 53D9030C */  jal        func_800F654C
    /* 4A9C8 8013C5C8 21200000 */   addu      $a0, $zero, $zero
  .L8013C5CC:
    /* 4A9CC 8013C5CC 93E0030C */  jal        func_800F824C
    /* 4A9D0 8013C5D0 45000424 */   addiu     $a0, $zero, 0x45
    /* 4A9D4 8013C5D4 B57D040C */  jal        func_8011F6D4
    /* 4A9D8 8013C5D8 00000000 */   nop
    /* 4A9DC 8013C5DC A17D040C */  jal        func_8011F684
    /* 4A9E0 8013C5E0 00000000 */   nop
    /* 4A9E4 8013C5E4 217E040C */  jal        func_8011F884
    /* 4A9E8 8013C5E8 00000000 */   nop
  .L8013C5EC:
    /* 4A9EC 8013C5EC 8CD9030C */  jal        func_800F6630
    /* 4A9F0 8013C5F0 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A9F4 8013C5F4 92D0030C */  jal        func_800F4248
    /* 4A9F8 8013C5F8 80000424 */   addiu     $a0, $zero, 0x80
    /* 4A9FC 8013C5FC 48D0030C */  jal        func_800F4120
    /* 4AA00 8013C600 02000424 */   addiu     $a0, $zero, 0x2
    /* 4AA04 8013C604 05004014 */  bnez       $v0, .L8013C61C
    /* 4AA08 8013C608 00000000 */   nop
    /* 4AA0C 8013C60C 5AAC040C */  jal        func_8012B168
    /* 4AA10 8013C610 00000000 */   nop
    /* 4AA14 8013C614 98F20408 */  j          .L8013CA60
    /* 4AA18 8013C618 00000000 */   nop
  .L8013C61C:
    /* 4AA1C 8013C61C 8CD9030C */  jal        func_800F6630
    /* 4AA20 8013C620 21200000 */   addu      $a0, $zero, $zero
    /* 4AA24 8013C624 92D0030C */  jal        func_800F4248
    /* 4AA28 8013C628 80000424 */   addiu     $a0, $zero, 0x80
    /* 4AA2C 8013C62C 48D0030C */  jal        func_800F4120
    /* 4AA30 8013C630 02000424 */   addiu     $a0, $zero, 0x2
    /* 4AA34 8013C634 05004014 */  bnez       $v0, .L8013C64C
    /* 4AA38 8013C638 00000000 */   nop
    /* 4AA3C 8013C63C 5AAC040C */  jal        func_8012B168
    /* 4AA40 8013C640 00000000 */   nop
    /* 4AA44 8013C644 27F20408 */  j          .L8013C89C
    /* 4AA48 8013C648 00000000 */   nop
  .L8013C64C:
    /* 4AA4C 8013C64C 8CD9030C */  jal        func_800F6630
    /* 4AA50 8013C650 01000424 */   addiu     $a0, $zero, 0x1
    /* 4AA54 8013C654 92D0030C */  jal        func_800F4248
    /* 4AA58 8013C658 01000424 */   addiu     $a0, $zero, 0x1
    /* 4AA5C 8013C65C 48D0030C */  jal        func_800F4120
    /* 4AA60 8013C660 02000424 */   addiu     $a0, $zero, 0x2
    /* 4AA64 8013C664 0D004014 */  bnez       $v0, .L8013C69C
    /* 4AA68 8013C668 00000000 */   nop
    /* 4AA6C 8013C66C 59D9030C */  jal        func_800F6564
    /* 4AA70 8013C670 B61B0424 */   addiu     $a0, $zero, 0x1BB6
    /* 4AA74 8013C674 7AD8030C */  jal        func_800F61E8
    /* 4AA78 8013C678 00000000 */   nop
    /* 4AA7C 8013C67C 92D0030C */  jal        func_800F4248
    /* 4AA80 8013C680 01000424 */   addiu     $a0, $zero, 0x1
    /* 4AA84 8013C684 62E0030C */  jal        func_800F8188
    /* 4AA88 8013C688 B61B0424 */   addiu     $a0, $zero, 0x1BB6
    /* 4AA8C 8013C68C 48D0030C */  jal        func_800F4120
    /* 4AA90 8013C690 02000424 */   addiu     $a0, $zero, 0x2
    /* 4AA94 8013C694 4D004014 */  bnez       $v0, .L8013C7CC
    /* 4AA98 8013C698 00000000 */   nop
  .L8013C69C:
    /* 4AA9C 8013C69C 8CD9030C */  jal        func_800F6630
    /* 4AAA0 8013C6A0 01000424 */   addiu     $a0, $zero, 0x1
    /* 4AAA4 8013C6A4 92D0030C */  jal        func_800F4248
    /* 4AAA8 8013C6A8 02000424 */   addiu     $a0, $zero, 0x2
    /* 4AAAC 8013C6AC 48D0030C */  jal        func_800F4120
    /* 4AAB0 8013C6B0 02000424 */   addiu     $a0, $zero, 0x2
    /* 4AAB4 8013C6B4 0D004014 */  bnez       $v0, .L8013C6EC
    /* 4AAB8 8013C6B8 00000000 */   nop
    /* 4AABC 8013C6BC 59D9030C */  jal        func_800F6564
    /* 4AAC0 8013C6C0 B61B0424 */   addiu     $a0, $zero, 0x1BB6
    /* 4AAC4 8013C6C4 7AD8030C */  jal        func_800F61E8
    /* 4AAC8 8013C6C8 00000000 */   nop
    /* 4AACC 8013C6CC 92D0030C */  jal        func_800F4248
    /* 4AAD0 8013C6D0 01000424 */   addiu     $a0, $zero, 0x1
    /* 4AAD4 8013C6D4 62E0030C */  jal        func_800F8188
    /* 4AAD8 8013C6D8 B61B0424 */   addiu     $a0, $zero, 0x1BB6
    /* 4AADC 8013C6DC 48D0030C */  jal        func_800F4120
    /* 4AAE0 8013C6E0 02020424 */   addiu     $a0, $zero, 0x202
    /* 4AAE4 8013C6E4 09004014 */  bnez       $v0, .L8013C70C
    /* 4AAE8 8013C6E8 00000000 */   nop
  .L8013C6EC:
    /* 4AAEC 8013C6EC 8CD9030C */  jal        func_800F6630
    /* 4AAF0 8013C6F0 01000424 */   addiu     $a0, $zero, 0x1
    /* 4AAF4 8013C6F4 92D0030C */  jal        func_800F4248
    /* 4AAF8 8013C6F8 08000424 */   addiu     $a0, $zero, 0x8
    /* 4AAFC 8013C6FC 48D0030C */  jal        func_800F4120
    /* 4AB00 8013C700 02000424 */   addiu     $a0, $zero, 0x2
    /* 4AB04 8013C704 29004014 */  bnez       $v0, .L8013C7AC
    /* 4AB08 8013C708 00000000 */   nop
  .L8013C70C:
    /* 4AB0C 8013C70C 59D9030C */  jal        func_800F6564
    /* 4AB10 8013C710 B51B0424 */   addiu     $a0, $zero, 0x1BB5
    /* 4AB14 8013C714 33D7030C */  jal        func_800F5CCC
    /* 4AB18 8013C718 00000000 */   nop
    /* 4AB1C 8013C71C E3D6030C */  jal        func_800F5B8C
    /* 4AB20 8013C720 80800434 */   ori       $a0, $zero, 0x8080
    /* 4AB24 8013C724 1F004014 */  bnez       $v0, .L8013C7A4
    /* 4AB28 8013C728 00000000 */   nop
    /* 4AB2C 8013C72C 59D9030C */  jal        func_800F6564
    /* 4AB30 8013C730 B71B0424 */   addiu     $a0, $zero, 0x1BB7
    /* 4AB34 8013C734 33D7030C */  jal        func_800F5CCC
    /* 4AB38 8013C738 00000000 */   nop
    /* 4AB3C 8013C73C E3D6030C */  jal        func_800F5B8C
    /* 4AB40 8013C740 80000424 */   addiu     $a0, $zero, 0x80
    /* 4AB44 8013C744 19004014 */  bnez       $v0, .L8013C7AC
    /* 4AB48 8013C748 00000000 */   nop
    /* 4AB4C 8013C74C 62E0030C */  jal        func_800F8188
    /* 4AB50 8013C750 B71B0424 */   addiu     $a0, $zero, 0x1BB7
    /* 4AB54 8013C754 53D9030C */  jal        func_800F654C
    /* 4AB58 8013C758 08000424 */   addiu     $a0, $zero, 0x8
  .L8013C75C:
    /* 4AB5C 8013C75C 91E5030C */  jal        func_800F9644
    /* 4AB60 8013C760 20000424 */   addiu     $a0, $zero, 0x20
    /* 4AB64 8013C764 75D7030C */  jal        func_800F5DD4
    /* 4AB68 8013C768 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 4AB6C 8013C76C 75D7030C */  jal        func_800F5DD4
    /* 4AB70 8013C770 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 4AB74 8013C774 98E5030C */  jal        func_800F9660
    /* 4AB78 8013C778 20000424 */   addiu     $a0, $zero, 0x20
    /* 4AB7C 8013C77C B299040C */  jal        func_801266C8
    /* 4AB80 8013C780 00000000 */   nop
    /* 4AB84 8013C784 33D7030C */  jal        func_800F5CCC
    /* 4AB88 8013C788 00000000 */   nop
    /* 4AB8C 8013C78C E3D6030C */  jal        func_800F5B8C
    /* 4AB90 8013C790 02020424 */   addiu     $a0, $zero, 0x202
    /* 4AB94 8013C794 F1FF4014 */  bnez       $v0, .L8013C75C
    /* 4AB98 8013C798 00000000 */   nop
    /* 4AB9C 8013C79C 1BF20408 */  j          .L8013C86C
    /* 4ABA0 8013C7A0 00000000 */   nop
  .L8013C7A4:
    /* 4ABA4 8013C7A4 62E0030C */  jal        func_800F8188
    /* 4ABA8 8013C7A8 B51B0424 */   addiu     $a0, $zero, 0x1BB5
  .L8013C7AC:
    /* 4ABAC 8013C7AC 8CD9030C */  jal        func_800F6630
    /* 4ABB0 8013C7B0 01000424 */   addiu     $a0, $zero, 0x1
    /* 4ABB4 8013C7B4 92D0030C */  jal        func_800F4248
    /* 4ABB8 8013C7B8 04000424 */   addiu     $a0, $zero, 0x4
    /* 4ABBC 8013C7BC 48D0030C */  jal        func_800F4120
    /* 4ABC0 8013C7C0 02000424 */   addiu     $a0, $zero, 0x2
    /* 4ABC4 8013C7C4 65FF4014 */  bnez       $v0, .L8013C55C
    /* 4ABC8 8013C7C8 00000000 */   nop
  .L8013C7CC:
    /* 4ABCC 8013C7CC 59D9030C */  jal        func_800F6564
    /* 4ABD0 8013C7D0 B51B0424 */   addiu     $a0, $zero, 0x1BB5
    /* 4ABD4 8013C7D4 7AD8030C */  jal        func_800F61E8
    /* 4ABD8 8013C7D8 00000000 */   nop
    /* 4ABDC 8013C7DC 5DD5030C */  jal        func_800F5574
    /* 4ABE0 8013C7E0 05000424 */   addiu     $a0, $zero, 0x5
    /* 4ABE4 8013C7E4 F5D4030C */  jal        func_800F53D4
    /* 4ABE8 8013C7E8 00000000 */   nop
    /* 4ABEC 8013C7EC 27004010 */  beqz       $v0, .L8013C88C
    /* 4ABF0 8013C7F0 00000000 */   nop
    /* 4ABF4 8013C7F4 59D9030C */  jal        func_800F6564
    /* 4ABF8 8013C7F8 B71B0424 */   addiu     $a0, $zero, 0x1BB7
    /* 4ABFC 8013C7FC 7AD8030C */  jal        func_800F61E8
    /* 4AC00 8013C800 00000000 */   nop
    /* 4AC04 8013C804 5DD5030C */  jal        func_800F5574
    /* 4AC08 8013C808 14000424 */   addiu     $a0, $zero, 0x14
    /* 4AC0C 8013C80C F5D4030C */  jal        func_800F53D4
    /* 4AC10 8013C810 00000000 */   nop
    /* 4AC14 8013C814 51FF4014 */  bnez       $v0, .L8013C55C
    /* 4AC18 8013C818 00000000 */   nop
    /* 4AC1C 8013C81C 62E0030C */  jal        func_800F8188
    /* 4AC20 8013C820 B71B0424 */   addiu     $a0, $zero, 0x1BB7
    /* 4AC24 8013C824 53D9030C */  jal        func_800F654C
    /* 4AC28 8013C828 08000424 */   addiu     $a0, $zero, 0x8
  .L8013C82C:
    /* 4AC2C 8013C82C 91E5030C */  jal        func_800F9644
    /* 4AC30 8013C830 20000424 */   addiu     $a0, $zero, 0x20
    /* 4AC34 8013C834 BCD8030C */  jal        func_800F62F0
    /* 4AC38 8013C838 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 4AC3C 8013C83C BCD8030C */  jal        func_800F62F0
    /* 4AC40 8013C840 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 4AC44 8013C844 98E5030C */  jal        func_800F9660
    /* 4AC48 8013C848 20000424 */   addiu     $a0, $zero, 0x20
    /* 4AC4C 8013C84C B299040C */  jal        func_801266C8
    /* 4AC50 8013C850 00000000 */   nop
    /* 4AC54 8013C854 33D7030C */  jal        func_800F5CCC
    /* 4AC58 8013C858 00000000 */   nop
    /* 4AC5C 8013C85C E3D6030C */  jal        func_800F5B8C
    /* 4AC60 8013C860 02020424 */   addiu     $a0, $zero, 0x202
    /* 4AC64 8013C864 F1FF4014 */  bnez       $v0, .L8013C82C
    /* 4AC68 8013C868 00000000 */   nop
  .L8013C86C:
    /* 4AC6C 8013C86C 217E040C */  jal        func_8011F884
    /* 4AC70 8013C870 00000000 */   nop
    /* 4AC74 8013C874 9CDC030C */  jal        func_800F7270
    /* 4AC78 8013C878 02000424 */   addiu     $a0, $zero, 0x2
    /* 4AC7C 8013C87C 5BE3030C */  jal        func_800F8D6C
    /* 4AC80 8013C880 21200000 */   addu      $a0, $zero, $zero
    /* 4AC84 8013C884 7BF10408 */  j          .L8013C5EC
    /* 4AC88 8013C888 00000000 */   nop
  .L8013C88C:
    /* 4AC8C 8013C88C 62E0030C */  jal        func_800F8188
    /* 4AC90 8013C890 B51B0424 */   addiu     $a0, $zero, 0x1BB5
    /* 4AC94 8013C894 57F10408 */  j          .L8013C55C
    /* 4AC98 8013C898 00000000 */   nop
  .L8013C89C:
    /* 4AC9C 8013C89C 59D9030C */  jal        func_800F6564
    /* 4ACA0 8013C8A0 B31B0424 */   addiu     $a0, $zero, 0x1BB3
    /* 4ACA4 8013C8A4 50D4030C */  jal        func_800F5140
    /* 4ACA8 8013C8A8 00000000 */   nop
    /* 4ACAC 8013C8AC D3D3030C */  jal        func_800F4F4C
    /* 4ACB0 8013C8B0 00000000 */   nop
    /* 4ACB4 8013C8B4 C1CE030C */  jal        func_800F3B04
    /* 4ACB8 8013C8B8 B41B0424 */   addiu     $a0, $zero, 0x1BB4
    /* 4ACBC 8013C8BC CECF030C */  jal        func_800F3F38
    /* 4ACC0 8013C8C0 21204000 */   addu      $a0, $v0, $zero
    /* 4ACC4 8013C8C4 50D4030C */  jal        func_800F5140
    /* 4ACC8 8013C8C8 00000000 */   nop
    /* 4ACCC 8013C8CC 3489040C */  jal        func_801224D0
    /* 4ACD0 8013C8D0 00000000 */   nop
    /* 4ACD4 8013C8D4 59D9030C */  jal        func_800F6564
    /* 4ACD8 8013C8D8 B51B0424 */   addiu     $a0, $zero, 0x1BB5
    /* 4ACDC 8013C8DC 04D5030C */  jal        func_800F5410
    /* 4ACE0 8013C8E0 00000000 */   nop
    /* 4ACE4 8013C8E4 C1CE030C */  jal        func_800F3B04
    /* 4ACE8 8013C8E8 B71B0424 */   addiu     $a0, $zero, 0x1BB7
    /* 4ACEC 8013C8EC CECF030C */  jal        func_800F3F38
    /* 4ACF0 8013C8F0 21204000 */   addu      $a0, $v0, $zero
    /* 4ACF4 8013C8F4 50D4030C */  jal        func_800F5140
    /* 4ACF8 8013C8F8 00000000 */   nop
    /* 4ACFC 8013C8FC D3D3030C */  jal        func_800F4F4C
    /* 4AD00 8013C900 00000000 */   nop
    /* 4AD04 8013C904 C1CE030C */  jal        func_800F3B04
    /* 4AD08 8013C908 B61B0424 */   addiu     $a0, $zero, 0x1BB6
    /* 4AD0C 8013C90C CECF030C */  jal        func_800F3F38
    /* 4AD10 8013C910 21204000 */   addu      $a0, $v0, $zero
    /* 4AD14 8013C914 50D4030C */  jal        func_800F5140
    /* 4AD18 8013C918 00000000 */   nop
    /* 4AD1C 8013C91C 93E0030C */  jal        func_800F824C
    /* 4AD20 8013C920 43000424 */   addiu     $a0, $zero, 0x43
    /* 4AD24 8013C924 65DD030C */  jal        func_800F7594
    /* 4AD28 8013C928 43000424 */   addiu     $a0, $zero, 0x43
    /* 4AD2C 8013C92C 5CDB030C */  jal        func_800F6D70
    /* 4AD30 8013C930 40140424 */   addiu     $a0, $zero, 0x1440
    /* 4AD34 8013C934 5DD5030C */  jal        func_800F5574
    /* 4AD38 8013C938 19000424 */   addiu     $a0, $zero, 0x19
    /* 4AD3C 8013C93C F5D4030C */  jal        func_800F53D4
    /* 4AD40 8013C940 00000000 */   nop
    /* 4AD44 8013C944 44004014 */  bnez       $v0, .L8013CA58
    /* 4AD48 8013C948 00000000 */   nop
    /* 4AD4C 8013C94C 5DD5030C */  jal        func_800F5574
    /* 4AD50 8013C950 C8000424 */   addiu     $a0, $zero, 0xC8
    /* 4AD54 8013C954 F5D4030C */  jal        func_800F53D4
    /* 4AD58 8013C958 00000000 */   nop
    /* 4AD5C 8013C95C 3E004014 */  bnez       $v0, .L8013CA58
    /* 4AD60 8013C960 00000000 */   nop
    /* 4AD64 8013C964 5DD5030C */  jal        func_800F5574
    /* 4AD68 8013C968 EE000424 */   addiu     $a0, $zero, 0xEE
    /* 4AD6C 8013C96C F0D4030C */  jal        func_800F53C0
    /* 4AD70 8013C970 00000000 */   nop
    /* 4AD74 8013C974 38004014 */  bnez       $v0, .L8013CA58
    /* 4AD78 8013C978 00000000 */   nop
    /* 4AD7C 8013C97C 5CDB030C */  jal        func_800F6D70
    /* 4AD80 8013C980 40140424 */   addiu     $a0, $zero, 0x1440
    /* 4AD84 8013C984 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4AD88 8013C988 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4AD8C 8013C98C 00000000 */  nop
    /* 4AD90 8013C990 00004394 */  lhu        $v1, 0x0($v0)
    /* 4AD94 8013C994 28FF0434 */  ori        $a0, $zero, 0xFF28
    /* 4AD98 8013C998 C1CE030C */  jal        func_800F3B04
    /* 4AD9C 8013C99C 21206400 */   addu      $a0, $v1, $a0
    /* 4ADA0 8013C9A0 35D5030C */  jal        func_800F54D4
    /* 4ADA4 8013C9A4 21204000 */   addu      $a0, $v0, $zero
    /* 4ADA8 8013C9A8 F5D4030C */  jal        func_800F53D4
    /* 4ADAC 8013C9AC 00000000 */   nop
    /* 4ADB0 8013C9B0 19004010 */  beqz       $v0, .L8013CA18
    /* 4ADB4 8013C9B4 00000000 */   nop
    /* 4ADB8 8013C9B8 DADA030C */  jal        func_800F6B68
    /* 4ADBC 8013C9BC 29FF0434 */   ori       $a0, $zero, 0xFF29
    /* 4ADC0 8013C9C0 04D5030C */  jal        func_800F5410
    /* 4ADC4 8013C9C4 00000000 */   nop
    /* 4ADC8 8013C9C8 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 4ADCC 8013C9CC 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 4ADD0 8013C9D0 00000000 */  nop
    /* 4ADD4 8013C9D4 00004494 */  lhu        $a0, 0x0($v0)
    /* 4ADD8 8013C9D8 C1CE030C */  jal        func_800F3B04
    /* 4ADDC 8013C9DC 41148424 */   addiu     $a0, $a0, 0x1441
    /* 4ADE0 8013C9E0 CECF030C */  jal        func_800F3F38
    /* 4ADE4 8013C9E4 21204000 */   addu      $a0, $v0, $zero
    /* 4ADE8 8013C9E8 5DD5030C */  jal        func_800F5574
    /* 4ADEC 8013C9EC 64000424 */   addiu     $a0, $zero, 0x64
    /* 4ADF0 8013C9F0 F0D4030C */  jal        func_800F53C0
    /* 4ADF4 8013C9F4 00000000 */   nop
    /* 4ADF8 8013C9F8 17004014 */  bnez       $v0, .L8013CA58
    /* 4ADFC 8013C9FC 00000000 */   nop
    /* 4AE00 8013CA00 58E2030C */  jal        func_800F8960
    /* 4AE04 8013CA04 41140424 */   addiu     $a0, $zero, 0x1441
    /* 4AE08 8013CA08 3BE4030C */  jal        func_800F90EC
    /* 4AE0C 8013CA0C 29FF0434 */   ori       $a0, $zero, 0xFF29
    /* 4AE10 8013CA10 96F20408 */  j          .L8013CA58
    /* 4AE14 8013CA14 00000000 */   nop
  .L8013CA18:
    /* 4AE18 8013CA18 91E5030C */  jal        func_800F9644
    /* 4AE1C 8013CA1C 20000424 */   addiu     $a0, $zero, 0x20
    /* 4AE20 8013CA20 7ADB030C */  jal        func_800F6DE8
    /* 4AE24 8013CA24 40140424 */   addiu     $a0, $zero, 0x1440
    /* 4AE28 8013CA28 8BE4030C */  jal        func_800F922C
    /* 4AE2C 8013CA2C 00000000 */   nop
    /* 4AE30 8013CA30 F8DA030C */  jal        func_800F6BE0
    /* 4AE34 8013CA34 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 4AE38 8013CA38 75E2030C */  jal        func_800F89D4
    /* 4AE3C 8013CA3C 40140424 */   addiu     $a0, $zero, 0x1440
    /* 4AE40 8013CA40 04E5030C */  jal        func_800F9410
    /* 4AE44 8013CA44 00000000 */   nop
    /* 4AE48 8013CA48 F7E1030C */  jal        func_800F87DC
    /* 4AE4C 8013CA4C 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 4AE50 8013CA50 98E5030C */  jal        func_800F9660
    /* 4AE54 8013CA54 20000424 */   addiu     $a0, $zero, 0x20
  .L8013CA58:
    /* 4AE58 8013CA58 2DF1040C */  jal        func_8013C4B4
    /* 4AE5C 8013CA5C 00000000 */   nop
  .L8013CA60:
    /* 4AE60 8013CA60 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4AE64 8013CA64 00000000 */  nop
    /* 4AE68 8013CA68 0800E003 */  jr         $ra
    /* 4AE6C 8013CA6C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013C554
