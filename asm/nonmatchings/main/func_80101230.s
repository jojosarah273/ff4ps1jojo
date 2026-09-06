nonmatching func_80101230, 0x120

glabel func_80101230
    /* F630 80101230 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* F634 80101234 1000BFAF */  sw         $ra, 0x10($sp)
    /* F638 80101238 CCE4030C */  jal        func_800F9330
    /* F63C 8010123C 00000000 */   nop
    /* F640 80101240 84DC030C */  jal        func_800F7210
    /* F644 80101244 2C170424 */   addiu     $a0, $zero, 0x172C
    /* F648 80101248 59D9030C */  jal        func_800F6564
    /* F64C 8010124C 00170424 */   addiu     $a0, $zero, 0x1700
    /* F650 80101250 5DD5030C */  jal        func_800F5574
    /* F654 80101254 03000424 */   addiu     $a0, $zero, 0x3
    /* F658 80101258 F5D4030C */  jal        func_800F53D4
    /* F65C 8010125C 00000000 */   nop
    /* F660 80101260 16004010 */  beqz       $v0, .L801012BC
    /* F664 80101264 00000000 */   nop
    /* F668 80101268 59D9030C */  jal        func_800F6564
    /* F66C 8010126C 02170424 */   addiu     $a0, $zero, 0x1702
    /* F670 80101270 DAE1030C */  jal        func_800F8768
    /* F674 80101274 2E170424 */   addiu     $a0, $zero, 0x172E
    /* F678 80101278 59D9030C */  jal        func_800F6564
    /* F67C 8010127C 05170424 */   addiu     $a0, $zero, 0x1705
    /* F680 80101280 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* F684 80101284 00000000 */  nop
    /* F688 80101288 00006290 */  lbu        $v0, 0x0($v1)
    /* F68C 8010128C 00000000 */  nop
    /* F690 80101290 80110200 */  sll        $v0, $v0, 6
    /* F694 80101294 04D5030C */  jal        func_800F5410
    /* F698 80101298 000062A0 */   sb        $v0, 0x0($v1)
    /* F69C 8010129C C1CE030C */  jal        func_800F3B04
    /* F6A0 801012A0 06170424 */   addiu     $a0, $zero, 0x1706
    /* F6A4 801012A4 CECF030C */  jal        func_800F3F38
    /* F6A8 801012A8 21204000 */   addu      $a0, $v0, $zero
    /* F6AC 801012AC DAE1030C */  jal        func_800F8768
    /* F6B0 801012B0 2F170424 */   addiu     $a0, $zero, 0x172F
    /* F6B4 801012B4 BB040408 */  j          .L801012EC
    /* F6B8 801012B8 00000000 */   nop
  .L801012BC:
    /* F6BC 801012BC 59D9030C */  jal        func_800F6564
    /* F6C0 801012C0 00170424 */   addiu     $a0, $zero, 0x1700
    /* F6C4 801012C4 04D5030C */  jal        func_800F5410
    /* F6C8 801012C8 00000000 */   nop
    /* F6CC 801012CC 02D0030C */  jal        func_800F4008
    /* F6D0 801012D0 FB000424 */   addiu     $a0, $zero, 0xFB
    /* F6D4 801012D4 DAE1030C */  jal        func_800F8768
    /* F6D8 801012D8 2E170424 */   addiu     $a0, $zero, 0x172E
    /* F6DC 801012DC 59D9030C */  jal        func_800F6564
    /* F6E0 801012E0 06170424 */   addiu     $a0, $zero, 0x1706
    /* F6E4 801012E4 DAE1030C */  jal        func_800F8768
    /* F6E8 801012E8 2F170424 */   addiu     $a0, $zero, 0x172F
  .L801012EC:
    /* F6EC 801012EC 59D9030C */  jal        func_800F6564
    /* F6F0 801012F0 07170424 */   addiu     $a0, $zero, 0x1707
    /* F6F4 801012F4 DAE1030C */  jal        func_800F8768
    /* F6F8 801012F8 30170424 */   addiu     $a0, $zero, 0x1730
    /* F6FC 801012FC 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* F700 80101300 00000000 */  nop
    /* F704 80101304 00006294 */  lhu        $v0, 0x0($v1)
    /* F708 80101308 C0000424 */  addiu      $a0, $zero, 0xC0
    /* F70C 8010130C 03004224 */  addiu      $v0, $v0, 0x3
    /* F710 80101310 56D6030C */  jal        func_800F5958
    /* F714 80101314 000062A4 */   sh        $v0, 0x0($v1)
    /* F718 80101318 F0D4030C */  jal        func_800F53C0
    /* F71C 8010131C 00000000 */   nop
    /* F720 80101320 03004010 */  beqz       $v0, .L80101330
    /* F724 80101324 00000000 */   nop
    /* F728 80101328 77DC030C */  jal        func_800F71DC
    /* F72C 8010132C 21200000 */   addu      $a0, $zero, $zero
  .L80101330:
    /* F730 80101330 40E3030C */  jal        func_800F8D00
    /* F734 80101334 2C170424 */   addiu     $a0, $zero, 0x172C
    /* F738 80101338 68E5030C */  jal        func_800F95A0
    /* F73C 8010133C 00000000 */   nop
    /* F740 80101340 1000BF8F */  lw         $ra, 0x10($sp)
    /* F744 80101344 00000000 */  nop
    /* F748 80101348 0800E003 */  jr         $ra
    /* F74C 8010134C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80101230
