nonmatching func_80153608, 0x3BC

glabel func_80153608
    /* 61A08 80153608 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 61A0C 8015360C 01000224 */  addiu      $v0, $zero, 0x1
    /* 61A10 80153610 1000BFAF */  sw         $ra, 0x10($sp)
    /* 61A14 80153614 1A80013C */  lui        $at, %hi(D_8019EDC6)
    /* 61A18 80153618 C6ED22A4 */  sh         $v0, %lo(D_8019EDC6)($at)
    /* 61A1C 8015361C 734C050C */  jal        func_801531CC
    /* 61A20 80153620 00000000 */   nop
    /* 61A24 80153624 5DD5030C */  jal        func_800F5574
    /* 61A28 80153628 32000424 */   addiu     $a0, $zero, 0x32
    /* 61A2C 8015362C F0D4030C */  jal        func_800F53C0
    /* 61A30 80153630 00000000 */   nop
    /* 61A34 80153634 DB004010 */  beqz       $v0, .L801539A4
    /* 61A38 80153638 00000000 */   nop
    /* 61A3C 8015363C 40DD030C */  jal        func_800F7500
    /* 61A40 80153640 21200000 */   addu      $a0, $zero, $zero
    /* 61A44 80153644 AFE3030C */  jal        func_800F8EBC
    /* 61A48 80153648 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 61A4C 8015364C 94E3030C */  jal        func_800F8E50
    /* 61A50 80153650 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 61A54 80153654 94E3030C */  jal        func_800F8E50
    /* 61A58 80153658 9E280424 */   addiu     $a0, $zero, 0x289E
  .L8015365C:
    /* 61A5C 8015365C 65DD030C */  jal        func_800F7594
    /* 61A60 80153660 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 61A64 80153664 5CDB030C */  jal        func_800F6D70
    /* 61A68 80153668 88350424 */   addiu     $a0, $zero, 0x3588
    /* 61A6C 8015366C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 61A70 80153670 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 61A74 80153674 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 61A78 80153678 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 61A7C 8015367C 00004394 */  lhu        $v1, 0x0($v0)
    /* 61A80 80153680 A9000424 */  addiu      $a0, $zero, 0xA9
    /* 61A84 80153684 5BE3030C */  jal        func_800F8D6C
    /* 61A88 80153688 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 61A8C 8015368C 0FCF030C */  jal        func_800F3C3C
    /* 61A90 80153690 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 61A94 80153694 CAD3030C */  jal        func_800F4F28
    /* 61A98 80153698 21204000 */   addu      $a0, $v0, $zero
    /* 61A9C 8015369C D3D3030C */  jal        func_800F4F4C
    /* 61AA0 801536A0 00000000 */   nop
    /* 61AA4 801536A4 0FCF030C */  jal        func_800F3C3C
    /* 61AA8 801536A8 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 61AAC 801536AC 90DE030C */  jal        func_800F7A40
    /* 61AB0 801536B0 21204000 */   addu      $a0, $v0, $zero
    /* 61AB4 801536B4 9CDC030C */  jal        func_800F7270
    /* 61AB8 801536B8 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 61ABC 801536BC 0E00043C */  lui        $a0, (0xEA000 >> 16)
    /* 61AC0 801536C0 1ADB030C */  jal        func_800F6C68
    /* 61AC4 801536C4 00A08434 */   ori       $a0, $a0, (0xEA000 & 0xFFFF)
    /* 61AC8 801536C8 62E0030C */  jal        func_800F8188
    /* 61ACC 801536CC 3D390424 */   addiu     $a0, $zero, 0x393D
    /* 61AD0 801536D0 0E00043C */  lui        $a0, (0xEA001 >> 16)
    /* 61AD4 801536D4 1ADB030C */  jal        func_800F6C68
    /* 61AD8 801536D8 01A08434 */   ori       $a0, $a0, (0xEA001 & 0xFFFF)
    /* 61ADC 801536DC 62E0030C */  jal        func_800F8188
    /* 61AE0 801536E0 3E390424 */   addiu     $a0, $zero, 0x393E
    /* 61AE4 801536E4 5CDB030C */  jal        func_800F6D70
    /* 61AE8 801536E8 F0380424 */   addiu     $a0, $zero, 0x38F0
    /* 61AEC 801536EC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 61AF0 801536F0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 61AF4 801536F4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 61AF8 801536F8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 61AFC 801536FC 00004394 */  lhu        $v1, 0x0($v0)
    /* 61B00 80153700 3F390424 */  addiu      $a0, $zero, 0x393F
    /* 61B04 80153704 40E3030C */  jal        func_800F8D00
    /* 61B08 80153708 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 61B0C 8015370C DB48050C */  jal        func_8015236C
    /* 61B10 80153710 00000000 */   nop
    /* 61B14 80153714 04D5030C */  jal        func_800F5410
    /* 61B18 80153718 00000000 */   nop
    /* 61B1C 8015371C 59D9030C */  jal        func_800F6564
    /* 61B20 80153720 41390424 */   addiu     $a0, $zero, 0x3941
    /* 61B24 80153724 C1CE030C */  jal        func_800F3B04
    /* 61B28 80153728 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 61B2C 8015372C CECF030C */  jal        func_800F3F38
    /* 61B30 80153730 21204000 */   addu      $a0, $v0, $zero
    /* 61B34 80153734 62E0030C */  jal        func_800F8188
    /* 61B38 80153738 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 61B3C 8015373C 59D9030C */  jal        func_800F6564
    /* 61B40 80153740 42390424 */   addiu     $a0, $zero, 0x3942
    /* 61B44 80153744 C1CE030C */  jal        func_800F3B04
    /* 61B48 80153748 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 61B4C 8015374C CECF030C */  jal        func_800F3F38
    /* 61B50 80153750 21204000 */   addu      $a0, $v0, $zero
    /* 61B54 80153754 62E0030C */  jal        func_800F8188
    /* 61B58 80153758 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 61B5C 8015375C 59D9030C */  jal        func_800F6564
    /* 61B60 80153760 43390424 */   addiu     $a0, $zero, 0x3943
    /* 61B64 80153764 C1CE030C */  jal        func_800F3B04
    /* 61B68 80153768 9E280424 */   addiu     $a0, $zero, 0x289E
    /* 61B6C 8015376C CECF030C */  jal        func_800F3F38
    /* 61B70 80153770 21204000 */   addu      $a0, $v0, $zero
    /* 61B74 80153774 62E0030C */  jal        func_800F8188
    /* 61B78 80153778 9E280424 */   addiu     $a0, $zero, 0x289E
    /* 61B7C 8015377C AFD8030C */  jal        func_800F62BC
    /* 61B80 80153780 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 61B84 80153784 8CD9030C */  jal        func_800F6630
    /* 61B88 80153788 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 61B8C 8015378C 5DD5030C */  jal        func_800F5574
    /* 61B90 80153790 03000424 */   addiu     $a0, $zero, 0x3
    /* 61B94 80153794 F5D4030C */  jal        func_800F53D4
    /* 61B98 80153798 00000000 */   nop
    /* 61B9C 8015379C AFFF4010 */  beqz       $v0, .L8015365C
    /* 61BA0 801537A0 00000000 */   nop
    /* 61BA4 801537A4 C1CE030C */  jal        func_800F3B04
    /* 61BA8 801537A8 9E280424 */   addiu     $a0, $zero, 0x289E
    /* 61BAC 801537AC AFDD030C */  jal        func_800F76BC
    /* 61BB0 801537B0 21204000 */   addu      $a0, $v0, $zero
    /* 61BB4 801537B4 BADD030C */  jal        func_800F76E8
    /* 61BB8 801537B8 00000000 */   nop
    /* 61BBC 801537BC C1CE030C */  jal        func_800F3B04
    /* 61BC0 801537C0 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 61BC4 801537C4 32DF030C */  jal        func_800F7CC8
    /* 61BC8 801537C8 21204000 */   addu      $a0, $v0, $zero
    /* 61BCC 801537CC 43DF030C */  jal        func_800F7D0C
    /* 61BD0 801537D0 00000000 */   nop
    /* 61BD4 801537D4 C1CE030C */  jal        func_800F3B04
    /* 61BD8 801537D8 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 61BDC 801537DC 32DF030C */  jal        func_800F7CC8
    /* 61BE0 801537E0 21204000 */   addu      $a0, $v0, $zero
    /* 61BE4 801537E4 C1CE030C */  jal        func_800F3B04
    /* 61BE8 801537E8 9E280424 */   addiu     $a0, $zero, 0x289E
    /* 61BEC 801537EC AFDD030C */  jal        func_800F76BC
    /* 61BF0 801537F0 21204000 */   addu      $a0, $v0, $zero
    /* 61BF4 801537F4 BADD030C */  jal        func_800F76E8
    /* 61BF8 801537F8 00000000 */   nop
    /* 61BFC 801537FC C1CE030C */  jal        func_800F3B04
    /* 61C00 80153800 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 61C04 80153804 32DF030C */  jal        func_800F7CC8
    /* 61C08 80153808 21204000 */   addu      $a0, $v0, $zero
    /* 61C0C 8015380C 43DF030C */  jal        func_800F7D0C
    /* 61C10 80153810 00000000 */   nop
    /* 61C14 80153814 C1CE030C */  jal        func_800F3B04
    /* 61C18 80153818 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 61C1C 8015381C 32DF030C */  jal        func_800F7CC8
    /* 61C20 80153820 21204000 */   addu      $a0, $v0, $zero
    /* 61C24 80153824 59D9030C */  jal        func_800F6564
    /* 61C28 80153828 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 61C2C 8015382C C1CE030C */  jal        func_800F3B04
    /* 61C30 80153830 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 61C34 80153834 31DE030C */  jal        func_800F78C4
    /* 61C38 80153838 21204000 */   addu      $a0, $v0, $zero
    /* 61C3C 8015383C 46DE030C */  jal        func_800F7918
    /* 61C40 80153840 02000424 */   addiu     $a0, $zero, 0x2
    /* 61C44 80153844 57004014 */  bnez       $v0, .L801539A4
    /* 61C48 80153848 00000000 */   nop
    /* 61C4C 8015384C 59D9030C */  jal        func_800F6564
    /* 61C50 80153850 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* 61C54 80153854 C1CE030C */  jal        func_800F3B04
    /* 61C58 80153858 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* 61C5C 8015385C 31DE030C */  jal        func_800F78C4
    /* 61C60 80153860 21204000 */   addu      $a0, $v0, $zero
    /* 61C64 80153864 C1CE030C */  jal        func_800F3B04
    /* 61C68 80153868 A2160424 */   addiu     $a0, $zero, 0x16A2
    /* 61C6C 8015386C 31DE030C */  jal        func_800F78C4
    /* 61C70 80153870 21204000 */   addu      $a0, $v0, $zero
    /* 61C74 80153874 46DE030C */  jal        func_800F7918
    /* 61C78 80153878 02000424 */   addiu     $a0, $zero, 0x2
    /* 61C7C 8015387C 49004014 */  bnez       $v0, .L801539A4
    /* 61C80 80153880 00000000 */   nop
    /* 61C84 80153884 59D9030C */  jal        func_800F6564
    /* 61C88 80153888 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* 61C8C 8015388C 93E0030C */  jal        func_800F824C
    /* 61C90 80153890 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 61C94 80153894 59D9030C */  jal        func_800F6564
    /* 61C98 80153898 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* 61C9C 8015389C 93E0030C */  jal        func_800F824C
    /* 61CA0 801538A0 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 61CA4 801538A4 20D5030C */  jal        func_800F5480
    /* 61CA8 801538A8 00000000 */   nop
    /* 61CAC 801538AC 59D9030C */  jal        func_800F6564
    /* 61CB0 801538B0 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* 61CB4 801538B4 C1CE030C */  jal        func_800F3B04
    /* 61CB8 801538B8 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 61CBC 801538BC D2DF030C */  jal        func_800F7F48
    /* 61CC0 801538C0 21204000 */   addu      $a0, $v0, $zero
    /* 61CC4 801538C4 62E0030C */  jal        func_800F8188
    /* 61CC8 801538C8 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* 61CCC 801538CC 59D9030C */  jal        func_800F6564
    /* 61CD0 801538D0 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* 61CD4 801538D4 C1CE030C */  jal        func_800F3B04
    /* 61CD8 801538D8 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 61CDC 801538DC D2DF030C */  jal        func_800F7F48
    /* 61CE0 801538E0 21204000 */   addu      $a0, $v0, $zero
    /* 61CE4 801538E4 62E0030C */  jal        func_800F8188
    /* 61CE8 801538E8 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* 61CEC 801538EC 59D9030C */  jal        func_800F6564
    /* 61CF0 801538F0 A2160424 */   addiu     $a0, $zero, 0x16A2
    /* 61CF4 801538F4 C1CE030C */  jal        func_800F3B04
    /* 61CF8 801538F8 9E280424 */   addiu     $a0, $zero, 0x289E
    /* 61CFC 801538FC D2DF030C */  jal        func_800F7F48
    /* 61D00 80153900 21204000 */   addu      $a0, $v0, $zero
    /* 61D04 80153904 62E0030C */  jal        func_800F8188
    /* 61D08 80153908 A2160424 */   addiu     $a0, $zero, 0x16A2
    /* 61D0C 8015390C F0D4030C */  jal        func_800F53C0
    /* 61D10 80153910 00000000 */   nop
    /* 61D14 80153914 0F004014 */  bnez       $v0, .L80153954
    /* 61D18 80153918 00000000 */   nop
    /* 61D1C 8015391C 8CD9030C */  jal        func_800F6630
    /* 61D20 80153920 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 61D24 80153924 62E0030C */  jal        func_800F8188
    /* 61D28 80153928 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 61D2C 8015392C 8CD9030C */  jal        func_800F6630
    /* 61D30 80153930 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 61D34 80153934 62E0030C */  jal        func_800F8188
    /* 61D38 80153938 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 61D3C 8015393C DDE3030C */  jal        func_800F8F74
    /* 61D40 80153940 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* 61D44 80153944 DDE3030C */  jal        func_800F8F74
    /* 61D48 80153948 A1160424 */   addiu     $a0, $zero, 0x16A1
    /* 61D4C 8015394C DDE3030C */  jal        func_800F8F74
    /* 61D50 80153950 A2160424 */   addiu     $a0, $zero, 0x16A2
  .L80153954:
    /* 61D54 80153954 59D9030C */  jal        func_800F6564
    /* 61D58 80153958 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 61D5C 8015395C 62E0030C */  jal        func_800F8188
    /* 61D60 80153960 9A350424 */   addiu     $a0, $zero, 0x359A
    /* 61D64 80153964 59D9030C */  jal        func_800F6564
    /* 61D68 80153968 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 61D6C 8015396C 62E0030C */  jal        func_800F8188
    /* 61D70 80153970 9B350424 */   addiu     $a0, $zero, 0x359B
    /* 61D74 80153974 DDE3030C */  jal        func_800F8F74
    /* 61D78 80153978 9C350424 */   addiu     $a0, $zero, 0x359C
    /* 61D7C 8015397C 53D9030C */  jal        func_800F654C
    /* 61D80 80153980 37000424 */   addiu     $a0, $zero, 0x37
    /* 61D84 80153984 62E0030C */  jal        func_800F8188
    /* 61D88 80153988 CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 61D8C 8015398C 994C050C */  jal        func_80153264
    /* 61D90 80153990 00000000 */   nop
    /* 61D94 80153994 53D9030C */  jal        func_800F654C
    /* 61D98 80153998 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 61D9C 8015399C 62E0030C */  jal        func_800F8188
    /* 61DA0 801539A0 CC340424 */   addiu     $a0, $zero, 0x34CC
  .L801539A4:
    /* 61DA4 801539A4 53D9030C */  jal        func_800F654C
    /* 61DA8 801539A8 05000424 */   addiu     $a0, $zero, 0x5
    /* 61DAC 801539AC 0E43050C */  jal        func_80150C38
    /* 61DB0 801539B0 00000000 */   nop
    /* 61DB4 801539B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 61DB8 801539B8 00000000 */  nop
    /* 61DBC 801539BC 0800E003 */  jr         $ra
    /* 61DC0 801539C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80153608
