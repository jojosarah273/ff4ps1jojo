nonmatching func_8015B284, 0x170

glabel func_8015B284
    /* 69684 8015B284 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 69688 8015B288 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6968C 8015B28C DDE3030C */  jal        func_800F8F74
    /* 69690 8015B290 3D350424 */   addiu     $a0, $zero, 0x353D
    /* 69694 8015B294 5DD5030C */  jal        func_800F5574
    /* 69698 8015B298 6D000424 */   addiu     $a0, $zero, 0x6D
    /* 6969C 8015B29C F0D4030C */  jal        func_800F53C0
    /* 696A0 8015B2A0 00000000 */   nop
    /* 696A4 8015B2A4 11004010 */  beqz       $v0, .L8015B2EC
    /* 696A8 8015B2A8 00000000 */   nop
    /* 696AC 8015B2AC 5DD5030C */  jal        func_800F5574
    /* 696B0 8015B2B0 DE000424 */   addiu     $a0, $zero, 0xDE
    /* 696B4 8015B2B4 F0D4030C */  jal        func_800F53C0
    /* 696B8 8015B2B8 00000000 */   nop
    /* 696BC 8015B2BC 41004014 */  bnez       $v0, .L8015B3C4
    /* 696C0 8015B2C0 00000000 */   nop
    /* 696C4 8015B2C4 5DD5030C */  jal        func_800F5574
    /* 696C8 8015B2C8 B0000424 */   addiu     $a0, $zero, 0xB0
    /* 696CC 8015B2CC F0D4030C */  jal        func_800F53C0
    /* 696D0 8015B2D0 00000000 */   nop
    /* 696D4 8015B2D4 3B004010 */  beqz       $v0, .L8015B3C4
    /* 696D8 8015B2D8 00000000 */   nop
    /* 696DC 8015B2DC F0D4030C */  jal        func_800F53C0
    /* 696E0 8015B2E0 00000000 */   nop
    /* 696E4 8015B2E4 39004014 */  bnez       $v0, .L8015B3CC
    /* 696E8 8015B2E8 00000000 */   nop
  .L8015B2EC:
    /* 696EC 8015B2EC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 696F0 8015B2F0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 696F4 8015B2F4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 696F8 8015B2F8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 696FC 8015B2FC 00004394 */  lhu        $v1, 0x0($v0)
    /* 69700 8015B300 E5000424 */  addiu      $a0, $zero, 0xE5
    /* 69704 8015B304 5BE3030C */  jal        func_800F8D6C
    /* 69708 8015B308 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6970C 8015B30C 77DC030C */  jal        func_800F71DC
    /* 69710 8015B310 00910434 */   ori       $a0, $zero, 0x9100
    /* 69714 8015B314 5BE3030C */  jal        func_800F8D6C
    /* 69718 8015B318 80000424 */   addiu     $a0, $zero, 0x80
    /* 6971C 8015B31C 53D9030C */  jal        func_800F654C
    /* 69720 8015B320 0F000424 */   addiu     $a0, $zero, 0xF
    /* 69724 8015B324 93E0030C */  jal        func_800F824C
    /* 69728 8015B328 82000424 */   addiu     $a0, $zero, 0x82
    /* 6972C 8015B32C 53D9030C */  jal        func_800F654C
    /* 69730 8015B330 08000424 */   addiu     $a0, $zero, 0x8
    /* 69734 8015B334 BE49050C */  jal        func_801526F8
    /* 69738 8015B338 00000000 */   nop
    /* 6973C 8015B33C 59D9030C */  jal        func_800F6564
    /* 69740 8015B340 A2280424 */   addiu     $a0, $zero, 0x28A2
    /* 69744 8015B344 92D0030C */  jal        func_800F4248
    /* 69748 8015B348 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 6974C 8015B34C 50D4030C */  jal        func_800F5140
    /* 69750 8015B350 00000000 */   nop
    /* 69754 8015B354 0F00043C */  lui        $a0, (0xFA550 >> 16)
    /* 69758 8015B358 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6975C 8015B35C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 69760 8015B360 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 69764 8015B364 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 69768 8015B368 00004394 */  lhu        $v1, 0x0($v0)
    /* 6976C 8015B36C 50A58434 */  ori        $a0, $a0, (0xFA550 & 0xFFFF)
    /* 69770 8015B370 1ADB030C */  jal        func_800F6C68
    /* 69774 8015B374 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 69778 8015B378 93E0030C */  jal        func_800F824C
    /* 6977C 8015B37C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 69780 8015B380 0F00043C */  lui        $a0, (0xFA551 >> 16)
    /* 69784 8015B384 1ADB030C */  jal        func_800F6C68
    /* 69788 8015B388 51A58434 */   ori       $a0, $a0, (0xFA551 & 0xFFFF)
    /* 6978C 8015B38C 93E0030C */  jal        func_800F824C
    /* 69790 8015B390 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 69794 8015B394 91E5030C */  jal        func_800F9644
    /* 69798 8015B398 20000424 */   addiu     $a0, $zero, 0x20
    /* 6979C 8015B39C 96D9030C */  jal        func_800F6658
    /* 697A0 8015B3A0 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 697A4 8015B3A4 E8D0030C */  jal        func_800F43A0
    /* 697A8 8015B3A8 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 697AC 8015B3AC 98E5030C */  jal        func_800F9660
    /* 697B0 8015B3B0 20000424 */   addiu     $a0, $zero, 0x20
    /* 697B4 8015B3B4 7AD0030C */  jal        func_800F41E8
    /* 697B8 8015B3B8 02020424 */   addiu     $a0, $zero, 0x202
    /* 697BC 8015B3BC 03004014 */  bnez       $v0, .L8015B3CC
    /* 697C0 8015B3C0 00000000 */   nop
  .L8015B3C4:
    /* 697C4 8015B3C4 90D8030C */  jal        func_800F6240
    /* 697C8 8015B3C8 3D350424 */   addiu     $a0, $zero, 0x353D
  .L8015B3CC:
    /* 697CC 8015B3CC 91E5030C */  jal        func_800F9644
    /* 697D0 8015B3D0 20000424 */   addiu     $a0, $zero, 0x20
    /* 697D4 8015B3D4 C7E5030C */  jal        func_800F971C
    /* 697D8 8015B3D8 00000000 */   nop
    /* 697DC 8015B3DC 98E5030C */  jal        func_800F9660
    /* 697E0 8015B3E0 20000424 */   addiu     $a0, $zero, 0x20
    /* 697E4 8015B3E4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 697E8 8015B3E8 00000000 */  nop
    /* 697EC 8015B3EC 0800E003 */  jr         $ra
    /* 697F0 8015B3F0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015B284
