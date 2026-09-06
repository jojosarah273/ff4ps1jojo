nonmatching func_80171194, 0x330

glabel func_80171194
    /* 7F594 80171194 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7F598 80171198 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7F59C 8017119C 8CD9030C */  jal        func_800F6630
    /* 7F5A0 801711A0 D3000424 */   addiu     $a0, $zero, 0xD3
    /* 7F5A4 801711A4 0DD9030C */  jal        func_800F6434
    /* 7F5A8 801711A8 02000424 */   addiu     $a0, $zero, 0x2
    /* 7F5AC 801711AC C1004010 */  beqz       $v0, .L801714B4
    /* 7F5B0 801711B0 00000000 */   nop
    /* 7F5B4 801711B4 8CD9030C */  jal        func_800F6630
    /* 7F5B8 801711B8 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 7F5BC 801711BC 5DD5030C */  jal        func_800F5574
    /* 7F5C0 801711C0 10000424 */   addiu     $a0, $zero, 0x10
    /* 7F5C4 801711C4 F5D4030C */  jal        func_800F53D4
    /* 7F5C8 801711C8 00000000 */   nop
    /* 7F5CC 801711CC B9004010 */  beqz       $v0, .L801714B4
    /* 7F5D0 801711D0 00000000 */   nop
    /* 7F5D4 801711D4 59D9030C */  jal        func_800F6564
    /* 7F5D8 801711D8 04170424 */   addiu     $a0, $zero, 0x1704
    /* 7F5DC 801711DC 0DD9030C */  jal        func_800F6434
    /* 7F5E0 801711E0 02000424 */   addiu     $a0, $zero, 0x2
    /* 7F5E4 801711E4 B3004010 */  beqz       $v0, .L801714B4
    /* 7F5E8 801711E8 00000000 */   nop
    /* 7F5EC 801711EC 9BE4030C */  jal        func_800F926C
    /* 7F5F0 801711F0 00000000 */   nop
    /* 7F5F4 801711F4 53D9030C */  jal        func_800F654C
    /* 7F5F8 801711F8 15000424 */   addiu     $a0, $zero, 0x15
    /* 7F5FC 801711FC 80E4030C */  jal        func_800F9200
    /* 7F600 80171200 00000000 */   nop
    /* 7F604 80171204 12E5030C */  jal        func_800F9448
    /* 7F608 80171208 00000000 */   nop
    /* 7F60C 8017120C 59D9030C */  jal        func_800F6564
    /* 7F610 80171210 03170424 */   addiu     $a0, $zero, 0x1703
    /* 7F614 80171214 EEE3030C */  jal        func_800F8FB8
    /* 7F618 80171218 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7F61C 8017121C 19DE030C */  jal        func_800F7864
    /* 7F620 80171220 00000000 */   nop
    /* 7F624 80171224 BADD030C */  jal        func_800F76E8
    /* 7F628 80171228 00000000 */   nop
    /* 7F62C 8017122C 0FCF030C */  jal        func_800F3C3C
    /* 7F630 80171230 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7F634 80171234 32DF030C */  jal        func_800F7CC8
    /* 7F638 80171238 21204000 */   addu      $a0, $v0, $zero
    /* 7F63C 8017123C 19DE030C */  jal        func_800F7864
    /* 7F640 80171240 00000000 */   nop
    /* 7F644 80171244 BADD030C */  jal        func_800F76E8
    /* 7F648 80171248 00000000 */   nop
    /* 7F64C 8017124C 0FCF030C */  jal        func_800F3C3C
    /* 7F650 80171250 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7F654 80171254 32DF030C */  jal        func_800F7CC8
    /* 7F658 80171258 21204000 */   addu      $a0, $v0, $zero
    /* 7F65C 8017125C 93E0030C */  jal        func_800F824C
    /* 7F660 80171260 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 7F664 80171264 9CDC030C */  jal        func_800F7270
    /* 7F668 80171268 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7F66C 8017126C DADA030C */  jal        func_800F6B68
    /* 7F670 80171270 01100424 */   addiu     $a0, $zero, 0x1001
    /* 7F674 80171274 92D0030C */  jal        func_800F4248
    /* 7F678 80171278 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 7F67C 8017127C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7F680 80171280 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7F684 80171284 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7F688 80171288 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7F68C 8017128C 00004394 */  lhu        $v1, 0x0($v0)
    /* 7F690 80171290 FAB20434 */  ori        $a0, $zero, 0xB2FA
    /* 7F694 80171294 DADA030C */  jal        func_800F6B68
    /* 7F698 80171298 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7F69C 8017129C 50D4030C */  jal        func_800F5140
    /* 7F6A0 801712A0 00000000 */   nop
    /* 7F6A4 801712A4 62E0030C */  jal        func_800F8188
    /* 7F6A8 801712A8 10070424 */   addiu     $a0, $zero, 0x710
    /* 7F6AC 801712AC 59D9030C */  jal        func_800F6564
    /* 7F6B0 801712B0 05170424 */   addiu     $a0, $zero, 0x1705
    /* 7F6B4 801712B4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7F6B8 801712B8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7F6BC 801712BC 00000000 */  nop
    /* 7F6C0 801712C0 00006290 */  lbu        $v0, 0x0($v1)
    /* 7F6C4 801712C4 07000424 */  addiu      $a0, $zero, 0x7
    /* 7F6C8 801712C8 00110200 */  sll        $v0, $v0, 4
    /* 7F6CC 801712CC 93E0030C */  jal        func_800F824C
    /* 7F6D0 801712D0 000062A0 */   sb        $v0, 0x0($v1)
    /* 7F6D4 801712D4 EEE3030C */  jal        func_800F8FB8
    /* 7F6D8 801712D8 06000424 */   addiu     $a0, $zero, 0x6
    /* 7F6DC 801712DC 8CD9030C */  jal        func_800F6630
    /* 7F6E0 801712E0 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 7F6E4 801712E4 0DD9030C */  jal        func_800F6434
    /* 7F6E8 801712E8 02000424 */   addiu     $a0, $zero, 0x2
    /* 7F6EC 801712EC 21004014 */  bnez       $v0, .L80171374
    /* 7F6F0 801712F0 00000000 */   nop
    /* 7F6F4 801712F4 8CD9030C */  jal        func_800F6630
    /* 7F6F8 801712F8 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 7F6FC 801712FC 92D0030C */  jal        func_800F4248
    /* 7F700 80171300 08000424 */   addiu     $a0, $zero, 0x8
    /* 7F704 80171304 04D5030C */  jal        func_800F5410
    /* 7F708 80171308 00000000 */   nop
    /* 7F70C 8017130C 0FCF030C */  jal        func_800F3C3C
    /* 7F710 80171310 07000424 */   addiu     $a0, $zero, 0x7
    /* 7F714 80171314 CECF030C */  jal        func_800F3F38
    /* 7F718 80171318 21204000 */   addu      $a0, $v0, $zero
    /* 7F71C 8017131C 93E0030C */  jal        func_800F824C
    /* 7F720 80171320 07000424 */   addiu     $a0, $zero, 0x7
    /* 7F724 80171324 8CD9030C */  jal        func_800F6630
    /* 7F728 80171328 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 7F72C 8017132C 92D0030C */  jal        func_800F4248
    /* 7F730 80171330 01000424 */   addiu     $a0, $zero, 0x1
    /* 7F734 80171334 48D0030C */  jal        func_800F4120
    /* 7F738 80171338 02020424 */   addiu     $a0, $zero, 0x202
    /* 7F73C 8017133C 0D004014 */  bnez       $v0, .L80171374
    /* 7F740 80171340 00000000 */   nop
    /* 7F744 80171344 8CD9030C */  jal        func_800F6630
    /* 7F748 80171348 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 7F74C 8017134C 92D0030C */  jal        func_800F4248
    /* 7F750 80171350 08000424 */   addiu     $a0, $zero, 0x8
    /* 7F754 80171354 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7F758 80171358 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7F75C 8017135C 00000000 */  nop
    /* 7F760 80171360 00006290 */  lbu        $v0, 0x0($v1)
    /* 7F764 80171364 06000424 */  addiu      $a0, $zero, 0x6
    /* 7F768 80171368 C2100200 */  srl        $v0, $v0, 3
    /* 7F76C 8017136C 93E0030C */  jal        func_800F824C
    /* 7F770 80171370 000062A0 */   sb        $v0, 0x0($v1)
  .L80171374:
    /* 7F774 80171374 8CD9030C */  jal        func_800F6630
    /* 7F778 80171378 07000424 */   addiu     $a0, $zero, 0x7
    /* 7F77C 8017137C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7F780 80171380 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7F784 80171384 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7F788 80171388 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7F78C 8017138C 00004394 */  lhu        $v1, 0x0($v0)
    /* 7F790 80171390 21200000 */  addu       $a0, $zero, $zero
    /* 7F794 80171394 40DD030C */  jal        func_800F7500
    /* 7F798 80171398 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8017139C:
    /* 7F79C 8017139C 5CDB030C */  jal        func_800F6D70
    /* 7F7A0 801713A0 B4C00434 */   ori       $a0, $zero, 0xC0B4
    /* 7F7A4 801713A4 58E2030C */  jal        func_800F8960
    /* 7F7A8 801713A8 44040424 */   addiu     $a0, $zero, 0x444
    /* 7F7AC 801713AC EFD8030C */  jal        func_800F63BC
    /* 7F7B0 801713B0 00000000 */   nop
    /* 7F7B4 801713B4 5CDB030C */  jal        func_800F6D70
    /* 7F7B8 801713B8 B4C00434 */   ori       $a0, $zero, 0xC0B4
    /* 7F7BC 801713BC 20D5030C */  jal        func_800F5480
    /* 7F7C0 801713C0 00000000 */   nop
    /* 7F7C4 801713C4 0FCF030C */  jal        func_800F3C3C
    /* 7F7C8 801713C8 06000424 */   addiu     $a0, $zero, 0x6
    /* 7F7CC 801713CC D2DF030C */  jal        func_800F7F48
    /* 7F7D0 801713D0 21204000 */   addu      $a0, $v0, $zero
    /* 7F7D4 801713D4 58E2030C */  jal        func_800F8960
    /* 7F7D8 801713D8 44040424 */   addiu     $a0, $zero, 0x444
    /* 7F7DC 801713DC EFD8030C */  jal        func_800F63BC
    /* 7F7E0 801713E0 00000000 */   nop
    /* 7F7E4 801713E4 DADA030C */  jal        func_800F6B68
    /* 7F7E8 801713E8 C4C00434 */   ori       $a0, $zero, 0xC0C4
    /* 7F7EC 801713EC 58E2030C */  jal        func_800F8960
    /* 7F7F0 801713F0 44040424 */   addiu     $a0, $zero, 0x444
    /* 7F7F4 801713F4 D9D8030C */  jal        func_800F6364
    /* 7F7F8 801713F8 00000000 */   nop
    /* 7F7FC 801713FC EFD8030C */  jal        func_800F63BC
    /* 7F800 80171400 00000000 */   nop
    /* 7F804 80171404 DADA030C */  jal        func_800F6B68
    /* 7F808 80171408 C4C00434 */   ori       $a0, $zero, 0xC0C4
    /* 7F80C 8017140C 92D0030C */  jal        func_800F4248
    /* 7F810 80171410 F1000424 */   addiu     $a0, $zero, 0xF1
    /* 7F814 80171414 04D5030C */  jal        func_800F5410
    /* 7F818 80171418 00000000 */   nop
    /* 7F81C 8017141C C1CE030C */  jal        func_800F3B04
    /* 7F820 80171420 10070424 */   addiu     $a0, $zero, 0x710
    /* 7F824 80171424 CECF030C */  jal        func_800F3F38
    /* 7F828 80171428 21204000 */   addu      $a0, $v0, $zero
    /* 7F82C 8017142C 58E2030C */  jal        func_800F8960
    /* 7F830 80171430 44040424 */   addiu     $a0, $zero, 0x444
    /* 7F834 80171434 D9D8030C */  jal        func_800F6364
    /* 7F838 80171438 00000000 */   nop
    /* 7F83C 8017143C EFD8030C */  jal        func_800F63BC
    /* 7F840 80171440 00000000 */   nop
    /* 7F844 80171444 A4D6030C */  jal        func_800F5A90
    /* 7F848 80171448 10000424 */   addiu     $a0, $zero, 0x10
    /* 7F84C 8017144C F5D4030C */  jal        func_800F53D4
    /* 7F850 80171450 00000000 */   nop
    /* 7F854 80171454 D1FF4010 */  beqz       $v0, .L8017139C
    /* 7F858 80171458 00000000 */   nop
    /* 7F85C 8017145C 8CD9030C */  jal        func_800F6630
    /* 7F860 80171460 A2000424 */   addiu     $a0, $zero, 0xA2
    /* 7F864 80171464 92D0030C */  jal        func_800F4248
    /* 7F868 80171468 08000424 */   addiu     $a0, $zero, 0x8
    /* 7F86C 8017146C 48D0030C */  jal        func_800F4120
    /* 7F870 80171470 02000424 */   addiu     $a0, $zero, 0x2
    /* 7F874 80171474 0D004014 */  bnez       $v0, .L801714AC
    /* 7F878 80171478 00000000 */   nop
    /* 7F87C 8017147C 59D9030C */  jal        func_800F6564
    /* 7F880 80171480 4F040424 */   addiu     $a0, $zero, 0x44F
    /* 7F884 80171484 92D0030C */  jal        func_800F4248
    /* 7F888 80171488 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 7F88C 8017148C 62E0030C */  jal        func_800F8188
    /* 7F890 80171490 4F040424 */   addiu     $a0, $zero, 0x44F
    /* 7F894 80171494 59D9030C */  jal        func_800F6564
    /* 7F898 80171498 53040424 */   addiu     $a0, $zero, 0x453
    /* 7F89C 8017149C 92D0030C */  jal        func_800F4248
    /* 7F8A0 801714A0 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 7F8A4 801714A4 62E0030C */  jal        func_800F8188
    /* 7F8A8 801714A8 53040424 */   addiu     $a0, $zero, 0x453
  .L801714AC:
    /* 7F8AC 801714AC 12E5030C */  jal        func_800F9448
    /* 7F8B0 801714B0 00000000 */   nop
  .L801714B4:
    /* 7F8B4 801714B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7F8B8 801714B8 00000000 */  nop
    /* 7F8BC 801714BC 0800E003 */  jr         $ra
    /* 7F8C0 801714C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80171194
