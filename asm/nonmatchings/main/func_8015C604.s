nonmatching func_8015C604, 0x57C

glabel func_8015C604
    /* 6AA04 8015C604 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6AA08 8015C608 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6AA0C 8015C60C 8CD9030C */  jal        func_800F6630
    /* 6AA10 8015C610 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 6AA14 8015C614 62E0030C */  jal        func_800F8188
    /* 6AA18 8015C618 75390424 */   addiu     $a0, $zero, 0x3975
    /* 6AA1C 8015C61C 374B050C */  jal        func_80152CDC
    /* 6AA20 8015C620 00000000 */   nop
    /* 6AA24 8015C624 59D9030C */  jal        func_800F6564
    /* 6AA28 8015C628 2B350424 */   addiu     $a0, $zero, 0x352B
    /* 6AA2C 8015C62C 0DD9030C */  jal        func_800F6434
    /* 6AA30 8015C630 02000424 */   addiu     $a0, $zero, 0x2
    /* 6AA34 8015C634 09004014 */  bnez       $v0, .L8015C65C
    /* 6AA38 8015C638 00000000 */   nop
    /* 6AA3C 8015C63C A168050C */  jal        func_8015A284
    /* 6AA40 8015C640 00000000 */   nop
    /* 6AA44 8015C644 DE55050C */  jal        func_80155778
    /* 6AA48 8015C648 00000000 */   nop
    /* 6AA4C 8015C64C FF60050C */  jal        func_801583FC
    /* 6AA50 8015C650 00000000 */   nop
    /* 6AA54 8015C654 DDE3030C */  jal        func_800F8F74
    /* 6AA58 8015C658 2B350424 */   addiu     $a0, $zero, 0x352B
  .L8015C65C:
    /* 6AA5C 8015C65C 59D9030C */  jal        func_800F6564
    /* 6AA60 8015C660 3A390424 */   addiu     $a0, $zero, 0x393A
    /* 6AA64 8015C664 C1CE030C */  jal        func_800F3B04
    /* 6AA68 8015C668 3B390424 */   addiu     $a0, $zero, 0x393B
    /* 6AA6C 8015C66C 31DE030C */  jal        func_800F78C4
    /* 6AA70 8015C670 21204000 */   addu      $a0, $v0, $zero
    /* 6AA74 8015C674 46DE030C */  jal        func_800F7918
    /* 6AA78 8015C678 02020424 */   addiu     $a0, $zero, 0x202
    /* 6AA7C 8015C67C 0E004014 */  bnez       $v0, .L8015C6B8
    /* 6AA80 8015C680 00000000 */   nop
    /* 6AA84 8015C684 8CD9030C */  jal        func_800F6630
    /* 6AA88 8015C688 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 6AA8C 8015C68C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6AA90 8015C690 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6AA94 8015C694 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6AA98 8015C698 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6AA9C 8015C69C 00004394 */  lhu        $v1, 0x0($v0)
    /* 6AAA0 8015C6A0 C7E5030C */  jal        func_800F971C
    /* 6AAA4 8015C6A4 000083A4 */   sh        $v1, 0x0($a0)
    /* 6AAA8 8015C6A8 264C050C */  jal        func_80153098
    /* 6AAAC 8015C6AC 00000000 */   nop
    /* 6AAB0 8015C6B0 62E0030C */  jal        func_800F8188
    /* 6AAB4 8015C6B4 3B390424 */   addiu     $a0, $zero, 0x393B
  .L8015C6B8:
    /* 6AAB8 8015C6B8 9CDC030C */  jal        func_800F7270
    /* 6AABC 8015C6BC A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6AAC0 8015C6C0 3BE4030C */  jal        func_800F90EC
    /* 6AAC4 8015C6C4 52200424 */   addiu     $a0, $zero, 0x2052
    /* 6AAC8 8015C6C8 59D9030C */  jal        func_800F6564
    /* 6AACC 8015C6CC 38390424 */   addiu     $a0, $zero, 0x3938
    /* 6AAD0 8015C6D0 DAE1030C */  jal        func_800F8768
    /* 6AAD4 8015C6D4 50200424 */   addiu     $a0, $zero, 0x2050
    /* 6AAD8 8015C6D8 0DD9030C */  jal        func_800F6434
    /* 6AADC 8015C6DC 80800434 */   ori       $a0, $zero, 0x8080
    /* 6AAE0 8015C6E0 47004014 */  bnez       $v0, .L8015C800
    /* 6AAE4 8015C6E4 00000000 */   nop
    /* 6AAE8 8015C6E8 77DC030C */  jal        func_800F71DC
    /* 6AAEC 8015C6EC 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 6AAF0 8015C6F0 5BE3030C */  jal        func_800F8D6C
    /* 6AAF4 8015C6F4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6AAF8 8015C6F8 77DC030C */  jal        func_800F71DC
    /* 6AAFC 8015C6FC 02330424 */   addiu     $a0, $zero, 0x3302
    /* 6AB00 8015C700 5BE3030C */  jal        func_800F8D6C
    /* 6AB04 8015C704 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6AB08 8015C708 6673050C */  jal        func_8015CD98
    /* 6AB0C 8015C70C 00000000 */   nop
    /* 6AB10 8015C710 59D9030C */  jal        func_800F6564
    /* 6AB14 8015C714 8B380424 */   addiu     $a0, $zero, 0x388B
    /* 6AB18 8015C718 0DD9030C */  jal        func_800F6434
    /* 6AB1C 8015C71C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6AB20 8015C720 05004014 */  bnez       $v0, .L8015C738
    /* 6AB24 8015C724 00000000 */   nop
    /* 6AB28 8015C728 8CD9030C */  jal        func_800F6630
    /* 6AB2C 8015C72C DC000424 */   addiu     $a0, $zero, 0xDC
    /* 6AB30 8015C730 D2710508 */  j          .L8015C748
    /* 6AB34 8015C734 00000000 */   nop
  .L8015C738:
    /* 6AB38 8015C738 40DD030C */  jal        func_800F7500
    /* 6AB3C 8015C73C 01000424 */   addiu     $a0, $zero, 0x1
    /* 6AB40 8015C740 B6D9030C */  jal        func_800F66D8
    /* 6AB44 8015C744 80000424 */   addiu     $a0, $zero, 0x80
  .L8015C748:
    /* 6AB48 8015C748 62E0030C */  jal        func_800F8188
    /* 6AB4C 8015C74C 7B390424 */   addiu     $a0, $zero, 0x397B
    /* 6AB50 8015C750 80E4030C */  jal        func_800F9200
    /* 6AB54 8015C754 00000000 */   nop
    /* 6AB58 8015C758 5DD5030C */  jal        func_800F5574
    /* 6AB5C 8015C75C 10000424 */   addiu     $a0, $zero, 0x10
    /* 6AB60 8015C760 F5D4030C */  jal        func_800F53D4
    /* 6AB64 8015C764 00000000 */   nop
    /* 6AB68 8015C768 15004010 */  beqz       $v0, .L8015C7C0
    /* 6AB6C 8015C76C 00000000 */   nop
    /* 6AB70 8015C770 77DC030C */  jal        func_800F71DC
    /* 6AB74 8015C774 01000424 */   addiu     $a0, $zero, 0x1
    /* 6AB78 8015C778 8CD9030C */  jal        func_800F6630
    /* 6AB7C 8015C77C D0000424 */   addiu     $a0, $zero, 0xD0
    /* 6AB80 8015C780 C1CE030C */  jal        func_800F3B04
    /* 6AB84 8015C784 39350424 */   addiu     $a0, $zero, 0x3539
    /* 6AB88 8015C788 35D5030C */  jal        func_800F54D4
    /* 6AB8C 8015C78C 21204000 */   addu      $a0, $v0, $zero
    /* 6AB90 8015C790 F5D4030C */  jal        func_800F53D4
    /* 6AB94 8015C794 00000000 */   nop
    /* 6AB98 8015C798 03004014 */  bnez       $v0, .L8015C7A8
    /* 6AB9C 8015C79C 00000000 */   nop
    /* 6ABA0 8015C7A0 92D7030C */  jal        func_800F5E48
    /* 6ABA4 8015C7A4 00000000 */   nop
  .L8015C7A8:
    /* 6ABA8 8015C7A8 DADA030C */  jal        func_800F6B68
    /* 6ABAC 8015C7AC 39350424 */   addiu     $a0, $zero, 0x3539
    /* 6ABB0 8015C7B0 62E0030C */  jal        func_800F8188
    /* 6ABB4 8015C7B4 7B350424 */   addiu     $a0, $zero, 0x357B
    /* 6ABB8 8015C7B8 F8710508 */  j          .L8015C7E0
    /* 6ABBC 8015C7BC 00000000 */   nop
  .L8015C7C0:
    /* 6ABC0 8015C7C0 5DD5030C */  jal        func_800F5574
    /* 6ABC4 8015C7C4 0A000424 */   addiu     $a0, $zero, 0xA
    /* 6ABC8 8015C7C8 F5D4030C */  jal        func_800F53D4
    /* 6ABCC 8015C7CC 00000000 */   nop
    /* 6ABD0 8015C7D0 03004010 */  beqz       $v0, .L8015C7E0
    /* 6ABD4 8015C7D4 00000000 */   nop
    /* 6ABD8 8015C7D8 C673050C */  jal        func_8015CF18
    /* 6ABDC 8015C7DC 00000000 */   nop
  .L8015C7E0:
    /* 6ABE0 8015C7E0 53D9030C */  jal        func_800F654C
    /* 6ABE4 8015C7E4 0C000424 */   addiu     $a0, $zero, 0xC
    /* 6ABE8 8015C7E8 93E0030C */  jal        func_800F824C
    /* 6ABEC 8015C7EC D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6ABF0 8015C7F0 F7E4030C */  jal        func_800F93DC
    /* 6ABF4 8015C7F4 00000000 */   nop
    /* 6ABF8 8015C7F8 C2720508 */  j          .L8015CB08
    /* 6ABFC 8015C7FC 00000000 */   nop
  .L8015C800:
    /* 6AC00 8015C800 92D0030C */  jal        func_800F4248
    /* 6AC04 8015C804 40000424 */   addiu     $a0, $zero, 0x40
    /* 6AC08 8015C808 48D0030C */  jal        func_800F4120
    /* 6AC0C 8015C80C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6AC10 8015C810 77004014 */  bnez       $v0, .L8015C9F0
    /* 6AC14 8015C814 00000000 */   nop
    /* 6AC18 8015C818 C7E5030C */  jal        func_800F971C
    /* 6AC1C 8015C81C 00000000 */   nop
    /* 6AC20 8015C820 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6AC24 8015C824 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6AC28 8015C828 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6AC2C 8015C82C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6AC30 8015C830 00004394 */  lhu        $v1, 0x0($v0)
    /* 6AC34 8015C834 AB000424 */  addiu      $a0, $zero, 0xAB
    /* 6AC38 8015C838 5BE3030C */  jal        func_800F8D6C
    /* 6AC3C 8015C83C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6AC40 8015C840 77DC030C */  jal        func_800F71DC
    /* 6AC44 8015C844 1A320424 */   addiu     $a0, $zero, 0x321A
    /* 6AC48 8015C848 5BE3030C */  jal        func_800F8D6C
    /* 6AC4C 8015C84C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6AC50 8015C850 6673050C */  jal        func_8015CD98
    /* 6AC54 8015C854 00000000 */   nop
    /* 6AC58 8015C858 9CDC030C */  jal        func_800F7270
    /* 6AC5C 8015C85C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6AC60 8015C860 DADA030C */  jal        func_800F6B68
    /* 6AC64 8015C864 50200424 */   addiu     $a0, $zero, 0x2050
    /* 6AC68 8015C868 92D0030C */  jal        func_800F4248
    /* 6AC6C 8015C86C 08000424 */   addiu     $a0, $zero, 0x8
    /* 6AC70 8015C870 48D0030C */  jal        func_800F4120
    /* 6AC74 8015C874 02000424 */   addiu     $a0, $zero, 0x2
    /* 6AC78 8015C878 1B004014 */  bnez       $v0, .L8015C8E8
    /* 6AC7C 8015C87C 00000000 */   nop
    /* 6AC80 8015C880 53D9030C */  jal        func_800F654C
    /* 6AC84 8015C884 02000424 */   addiu     $a0, $zero, 0x2
    /* 6AC88 8015C888 93E0030C */  jal        func_800F824C
    /* 6AC8C 8015C88C D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6AC90 8015C890 40DD030C */  jal        func_800F7500
    /* 6AC94 8015C894 01000424 */   addiu     $a0, $zero, 0x1
    /* 6AC98 8015C898 B6D9030C */  jal        func_800F66D8
    /* 6AC9C 8015C89C 80000424 */   addiu     $a0, $zero, 0x80
    /* 6ACA0 8015C8A0 DAE1030C */  jal        func_800F8768
    /* 6ACA4 8015C8A4 52200424 */   addiu     $a0, $zero, 0x2052
    /* 6ACA8 8015C8A8 EFD8030C */  jal        func_800F63BC
    /* 6ACAC 8015C8AC 00000000 */   nop
    /* 6ACB0 8015C8B0 B6D9030C */  jal        func_800F66D8
    /* 6ACB4 8015C8B4 80000424 */   addiu     $a0, $zero, 0x80
    /* 6ACB8 8015C8B8 33D7030C */  jal        func_800F5CCC
    /* 6ACBC 8015C8BC 00000000 */   nop
    /* 6ACC0 8015C8C0 BBE0030C */  jal        func_800F82EC
    /* 6ACC4 8015C8C4 80000424 */   addiu     $a0, $zero, 0x80
    /* 6ACC8 8015C8C8 D3D6030C */  jal        func_800F5B4C
    /* 6ACCC 8015C8CC 00000000 */   nop
    /* 6ACD0 8015C8D0 A873050C */  jal        func_8015CEA0
    /* 6ACD4 8015C8D4 00000000 */   nop
    /* 6ACD8 8015C8D8 53D9030C */  jal        func_800F654C
    /* 6ACDC 8015C8DC 16000424 */   addiu     $a0, $zero, 0x16
    /* 6ACE0 8015C8E0 C2720508 */  j          .L8015CB08
    /* 6ACE4 8015C8E4 00000000 */   nop
  .L8015C8E8:
    /* 6ACE8 8015C8E8 59D9030C */  jal        func_800F6564
    /* 6ACEC 8015C8EC 8B380424 */   addiu     $a0, $zero, 0x388B
    /* 6ACF0 8015C8F0 0DD9030C */  jal        func_800F6434
    /* 6ACF4 8015C8F4 02000424 */   addiu     $a0, $zero, 0x2
    /* 6ACF8 8015C8F8 05004014 */  bnez       $v0, .L8015C910
    /* 6ACFC 8015C8FC 00000000 */   nop
    /* 6AD00 8015C900 8CD9030C */  jal        func_800F6630
    /* 6AD04 8015C904 DC000424 */   addiu     $a0, $zero, 0xDC
    /* 6AD08 8015C908 48720508 */  j          .L8015C920
    /* 6AD0C 8015C90C 00000000 */   nop
  .L8015C910:
    /* 6AD10 8015C910 40DD030C */  jal        func_800F7500
    /* 6AD14 8015C914 01000424 */   addiu     $a0, $zero, 0x1
    /* 6AD18 8015C918 B6D9030C */  jal        func_800F66D8
    /* 6AD1C 8015C91C 80000424 */   addiu     $a0, $zero, 0x80
  .L8015C920:
    /* 6AD20 8015C920 5DD5030C */  jal        func_800F5574
    /* 6AD24 8015C924 B0000424 */   addiu     $a0, $zero, 0xB0
    /* 6AD28 8015C928 F0D4030C */  jal        func_800F53C0
    /* 6AD2C 8015C92C 00000000 */   nop
    /* 6AD30 8015C930 09004014 */  bnez       $v0, .L8015C958
    /* 6AD34 8015C934 00000000 */   nop
    /* 6AD38 8015C938 DAE1030C */  jal        func_800F8768
    /* 6AD3C 8015C93C 52200424 */   addiu     $a0, $zero, 0x2052
    /* 6AD40 8015C940 53D9030C */  jal        func_800F654C
    /* 6AD44 8015C944 02000424 */   addiu     $a0, $zero, 0x2
    /* 6AD48 8015C948 93E0030C */  jal        func_800F824C
    /* 6AD4C 8015C94C D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6AD50 8015C950 78720508 */  j          .L8015C9E0
    /* 6AD54 8015C954 00000000 */   nop
  .L8015C958:
    /* 6AD58 8015C958 DAE1030C */  jal        func_800F8768
    /* 6AD5C 8015C95C 52200424 */   addiu     $a0, $zero, 0x2052
    /* 6AD60 8015C960 62E0030C */  jal        func_800F8188
    /* 6AD64 8015C964 7B390424 */   addiu     $a0, $zero, 0x397B
    /* 6AD68 8015C968 53D9030C */  jal        func_800F654C
    /* 6AD6C 8015C96C 0B000424 */   addiu     $a0, $zero, 0xB
    /* 6AD70 8015C970 93E0030C */  jal        func_800F824C
    /* 6AD74 8015C974 D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6AD78 8015C978 59D9030C */  jal        func_800F6564
    /* 6AD7C 8015C97C 8B380424 */   addiu     $a0, $zero, 0x388B
    /* 6AD80 8015C980 0DD9030C */  jal        func_800F6434
    /* 6AD84 8015C984 02020424 */   addiu     $a0, $zero, 0x202
    /* 6AD88 8015C988 15004014 */  bnez       $v0, .L8015C9E0
    /* 6AD8C 8015C98C 00000000 */   nop
    /* 6AD90 8015C990 59D9030C */  jal        func_800F6564
    /* 6AD94 8015C994 7B390424 */   addiu     $a0, $zero, 0x397B
    /* 6AD98 8015C998 5DD5030C */  jal        func_800F5574
    /* 6AD9C 8015C99C C8000424 */   addiu     $a0, $zero, 0xC8
    /* 6ADA0 8015C9A0 F5D4030C */  jal        func_800F53D4
    /* 6ADA4 8015C9A4 00000000 */   nop
    /* 6ADA8 8015C9A8 0D004014 */  bnez       $v0, .L8015C9E0
    /* 6ADAC 8015C9AC 00000000 */   nop
    /* 6ADB0 8015C9B0 40DD030C */  jal        func_800F7500
    /* 6ADB4 8015C9B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 6ADB8 8015C9B8 B6D9030C */  jal        func_800F66D8
    /* 6ADBC 8015C9BC 80000424 */   addiu     $a0, $zero, 0x80
    /* 6ADC0 8015C9C0 33D7030C */  jal        func_800F5CCC
    /* 6ADC4 8015C9C4 00000000 */   nop
    /* 6ADC8 8015C9C8 BBE0030C */  jal        func_800F82EC
    /* 6ADCC 8015C9CC 80000424 */   addiu     $a0, $zero, 0x80
    /* 6ADD0 8015C9D0 D3D6030C */  jal        func_800F5B4C
    /* 6ADD4 8015C9D4 00000000 */   nop
    /* 6ADD8 8015C9D8 A873050C */  jal        func_8015CEA0
    /* 6ADDC 8015C9DC 00000000 */   nop
  .L8015C9E0:
    /* 6ADE0 8015C9E0 53D9030C */  jal        func_800F654C
    /* 6ADE4 8015C9E4 01000424 */   addiu     $a0, $zero, 0x1
    /* 6ADE8 8015C9E8 C2720508 */  j          .L8015CB08
    /* 6ADEC 8015C9EC 00000000 */   nop
  .L8015C9F0:
    /* 6ADF0 8015C9F0 59D9030C */  jal        func_800F6564
    /* 6ADF4 8015C9F4 38390424 */   addiu     $a0, $zero, 0x3938
    /* 6ADF8 8015C9F8 92D0030C */  jal        func_800F4248
    /* 6ADFC 8015C9FC 20000424 */   addiu     $a0, $zero, 0x20
    /* 6AE00 8015CA00 48D0030C */  jal        func_800F4120
    /* 6AE04 8015CA04 02000424 */   addiu     $a0, $zero, 0x2
    /* 6AE08 8015CA08 27004014 */  bnez       $v0, .L8015CAA8
    /* 6AE0C 8015CA0C 00000000 */   nop
    /* 6AE10 8015CA10 53D9030C */  jal        func_800F654C
    /* 6AE14 8015CA14 03000424 */   addiu     $a0, $zero, 0x3
    /* 6AE18 8015CA18 93E0030C */  jal        func_800F824C
    /* 6AE1C 8015CA1C D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6AE20 8015CA20 77DC030C */  jal        func_800F71DC
    /* 6AE24 8015CA24 20010424 */   addiu     $a0, $zero, 0x120
    /* 6AE28 8015CA28 5BE3030C */  jal        func_800F8D6C
    /* 6AE2C 8015CA2C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6AE30 8015CA30 77DC030C */  jal        func_800F71DC
    /* 6AE34 8015CA34 7A2C0424 */   addiu     $a0, $zero, 0x2C7A
    /* 6AE38 8015CA38 5BE3030C */  jal        func_800F8D6C
    /* 6AE3C 8015CA3C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6AE40 8015CA40 6673050C */  jal        func_8015CD98
    /* 6AE44 8015CA44 00000000 */   nop
    /* 6AE48 8015CA48 9CDC030C */  jal        func_800F7270
    /* 6AE4C 8015CA4C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6AE50 8015CA50 59D9030C */  jal        func_800F6564
    /* 6AE54 8015CA54 8B380424 */   addiu     $a0, $zero, 0x388B
    /* 6AE58 8015CA58 0DD9030C */  jal        func_800F6434
    /* 6AE5C 8015CA5C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6AE60 8015CA60 05004014 */  bnez       $v0, .L8015CA78
    /* 6AE64 8015CA64 00000000 */   nop
    /* 6AE68 8015CA68 8CD9030C */  jal        func_800F6630
    /* 6AE6C 8015CA6C DC000424 */   addiu     $a0, $zero, 0xDC
    /* 6AE70 8015CA70 A2720508 */  j          .L8015CA88
    /* 6AE74 8015CA74 00000000 */   nop
  .L8015CA78:
    /* 6AE78 8015CA78 40DD030C */  jal        func_800F7500
    /* 6AE7C 8015CA7C 01000424 */   addiu     $a0, $zero, 0x1
    /* 6AE80 8015CA80 B6D9030C */  jal        func_800F66D8
    /* 6AE84 8015CA84 80000424 */   addiu     $a0, $zero, 0x80
  .L8015CA88:
    /* 6AE88 8015CA88 62E0030C */  jal        func_800F8188
    /* 6AE8C 8015CA8C 7B390424 */   addiu     $a0, $zero, 0x397B
    /* 6AE90 8015CA90 DAE1030C */  jal        func_800F8768
    /* 6AE94 8015CA94 52200424 */   addiu     $a0, $zero, 0x2052
    /* 6AE98 8015CA98 53D9030C */  jal        func_800F654C
    /* 6AE9C 8015CA9C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6AEA0 8015CAA0 C2720508 */  j          .L8015CB08
    /* 6AEA4 8015CAA4 00000000 */   nop
  .L8015CAA8:
    /* 6AEA8 8015CAA8 53D9030C */  jal        func_800F654C
    /* 6AEAC 8015CAAC 02000424 */   addiu     $a0, $zero, 0x2
    /* 6AEB0 8015CAB0 93E0030C */  jal        func_800F824C
    /* 6AEB4 8015CAB4 D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6AEB8 8015CAB8 77DC030C */  jal        func_800F71DC
    /* 6AEBC 8015CABC 08000424 */   addiu     $a0, $zero, 0x8
    /* 6AEC0 8015CAC0 5BE3030C */  jal        func_800F8D6C
    /* 6AEC4 8015CAC4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6AEC8 8015CAC8 77DC030C */  jal        func_800F71DC
    /* 6AECC 8015CACC DA320424 */   addiu     $a0, $zero, 0x32DA
    /* 6AED0 8015CAD0 5BE3030C */  jal        func_800F8D6C
    /* 6AED4 8015CAD4 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6AED8 8015CAD8 6673050C */  jal        func_8015CD98
    /* 6AEDC 8015CADC 00000000 */   nop
    /* 6AEE0 8015CAE0 9CDC030C */  jal        func_800F7270
    /* 6AEE4 8015CAE4 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6AEE8 8015CAE8 40DD030C */  jal        func_800F7500
    /* 6AEEC 8015CAEC 01000424 */   addiu     $a0, $zero, 0x1
    /* 6AEF0 8015CAF0 B6D9030C */  jal        func_800F66D8
    /* 6AEF4 8015CAF4 80000424 */   addiu     $a0, $zero, 0x80
    /* 6AEF8 8015CAF8 DAE1030C */  jal        func_800F8768
    /* 6AEFC 8015CAFC 52200424 */   addiu     $a0, $zero, 0x2052
    /* 6AF00 8015CB00 53D9030C */  jal        func_800F654C
    /* 6AF04 8015CB04 01000424 */   addiu     $a0, $zero, 0x1
  .L8015CB08:
    /* 6AF08 8015CB08 9CDC030C */  jal        func_800F7270
    /* 6AF0C 8015CB0C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6AF10 8015CB10 DAE1030C */  jal        func_800F8768
    /* 6AF14 8015CB14 51200424 */   addiu     $a0, $zero, 0x2051
    /* 6AF18 8015CB18 E072050C */  jal        func_8015CB80
    /* 6AF1C 8015CB1C 00000000 */   nop
    /* 6AF20 8015CB20 59D9030C */  jal        func_800F6564
    /* 6AF24 8015CB24 3A390424 */   addiu     $a0, $zero, 0x393A
    /* 6AF28 8015CB28 DAE1030C */  jal        func_800F8768
    /* 6AF2C 8015CB2C 53200424 */   addiu     $a0, $zero, 0x2053
    /* 6AF30 8015CB30 59D9030C */  jal        func_800F6564
    /* 6AF34 8015CB34 3B390424 */   addiu     $a0, $zero, 0x393B
    /* 6AF38 8015CB38 DAE1030C */  jal        func_800F8768
    /* 6AF3C 8015CB3C 54200424 */   addiu     $a0, $zero, 0x2054
    /* 6AF40 8015CB40 8CD9030C */  jal        func_800F6630
    /* 6AF44 8015CB44 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 6AF48 8015CB48 DD68050C */  jal        func_8015A374
    /* 6AF4C 8015CB4C 00000000 */   nop
    /* 6AF50 8015CB50 53D9030C */  jal        func_800F654C
    /* 6AF54 8015CB54 03000424 */   addiu     $a0, $zero, 0x3
    /* 6AF58 8015CB58 DD4C050C */  jal        func_80153374
    /* 6AF5C 8015CB5C 00000000 */   nop
    /* 6AF60 8015CB60 53D9030C */  jal        func_800F654C
    /* 6AF64 8015CB64 08000424 */   addiu     $a0, $zero, 0x8
    /* 6AF68 8015CB68 DAE1030C */  jal        func_800F8768
    /* 6AF6C 8015CB6C 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6AF70 8015CB70 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6AF74 8015CB74 00000000 */  nop
    /* 6AF78 8015CB78 0800E003 */  jr         $ra
    /* 6AF7C 8015CB7C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015C604
