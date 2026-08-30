nonmatching func_800FA834, 0x180

glabel func_800FA834
    /* 8C34 800FA834 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8C38 800FA838 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8C3C 800FA83C DDE3030C */  jal        func_800F8F74
    /* 8C40 800FA840 00170424 */   addiu     $a0, $zero, 0x1700
    /* 8C44 800FA844 DDE3030C */  jal        func_800F8F74
    /* 8C48 800FA848 01170424 */   addiu     $a0, $zero, 0x1701
    /* 8C4C 800FA84C DDE3030C */  jal        func_800F8F74
    /* 8C50 800FA850 03170424 */   addiu     $a0, $zero, 0x1703
    /* 8C54 800FA854 DDE3030C */  jal        func_800F8F74
    /* 8C58 800FA858 0F170424 */   addiu     $a0, $zero, 0x170F
    /* 8C5C 800FA85C DDE3030C */  jal        func_800F8F74
    /* 8C60 800FA860 12170424 */   addiu     $a0, $zero, 0x1712
    /* 8C64 800FA864 DDE3030C */  jal        func_800F8F74
    /* 8C68 800FA868 18170424 */   addiu     $a0, $zero, 0x1718
    /* 8C6C 800FA86C DDE3030C */  jal        func_800F8F74
    /* 8C70 800FA870 1C170424 */   addiu     $a0, $zero, 0x171C
    /* 8C74 800FA874 DDE3030C */  jal        func_800F8F74
    /* 8C78 800FA878 20170424 */   addiu     $a0, $zero, 0x1720
    /* 8C7C 800FA87C DDE3030C */  jal        func_800F8F74
    /* 8C80 800FA880 24170424 */   addiu     $a0, $zero, 0x1724
    /* 8C84 800FA884 DDE3030C */  jal        func_800F8F74
    /* 8C88 800FA888 28170424 */   addiu     $a0, $zero, 0x1728
    /* 8C8C 800FA88C DDE3030C */  jal        func_800F8F74
    /* 8C90 800FA890 2B170424 */   addiu     $a0, $zero, 0x172B
    /* 8C94 800FA894 DDE3030C */  jal        func_800F8F74
    /* 8C98 800FA898 1B170424 */   addiu     $a0, $zero, 0x171B
    /* 8C9C 800FA89C DDE3030C */  jal        func_800F8F74
    /* 8CA0 800FA8A0 1F170424 */   addiu     $a0, $zero, 0x171F
    /* 8CA4 800FA8A4 DDE3030C */  jal        func_800F8F74
    /* 8CA8 800FA8A8 23170424 */   addiu     $a0, $zero, 0x1723
    /* 8CAC 800FA8AC DDE3030C */  jal        func_800F8F74
    /* 8CB0 800FA8B0 27170424 */   addiu     $a0, $zero, 0x1727
    /* 8CB4 800FA8B4 77DC030C */  jal        func_800F71DC
    /* 8CB8 800FA8B8 21200000 */   addu      $a0, $zero, $zero
    /* 8CBC 800FA8BC 40E3030C */  jal        func_800F8D00
    /* 8CC0 800FA8C0 2C170424 */   addiu     $a0, $zero, 0x172C
    /* 8CC4 800FA8C4 77DC030C */  jal        func_800F71DC
    /* 8CC8 800FA8C8 21200000 */   addu      $a0, $zero, $zero
  .L800FA8CC:
    /* 8CCC 800FA8CC 1200043C */  lui        $a0, (0x12F200 >> 16)
    /* 8CD0 800FA8D0 1ADB030C */  jal        func_800F6C68
    /* 8CD4 800FA8D4 00F28434 */   ori       $a0, $a0, (0x12F200 & 0xFFFF)
    /* 8CD8 800FA8D8 DAE1030C */  jal        func_800F8768
    /* 8CDC 800FA8DC E0120424 */   addiu     $a0, $zero, 0x12E0
    /* 8CE0 800FA8E0 D9D8030C */  jal        func_800F6364
    /* 8CE4 800FA8E4 00000000 */   nop
    /* 8CE8 800FA8E8 56D6030C */  jal        func_800F5958
    /* 8CEC 800FA8EC 40000424 */   addiu     $a0, $zero, 0x40
    /* 8CF0 800FA8F0 F5D4030C */  jal        func_800F53D4
    /* 8CF4 800FA8F4 00000000 */   nop
    /* 8CF8 800FA8F8 F4FF4010 */  beqz       $v0, .L800FA8CC
    /* 8CFC 800FA8FC 00000000 */   nop
    /* 8D00 800FA900 77DC030C */  jal        func_800F71DC
    /* 8D04 800FA904 21200000 */   addu      $a0, $zero, $zero
    /* 8D08 800FA908 1200043C */  lui        $a0, (0x12F240 >> 16)
  .L800FA90C:
    /* 8D0C 800FA90C 1ADB030C */  jal        func_800F6C68
    /* 8D10 800FA910 40F28434 */   ori       $a0, $a0, (0x12F240 & 0xFFFF)
    /* 8D14 800FA914 DAE1030C */  jal        func_800F8768
    /* 8D18 800FA918 80120424 */   addiu     $a0, $zero, 0x1280
    /* 8D1C 800FA91C D9D8030C */  jal        func_800F6364
    /* 8D20 800FA920 00000000 */   nop
    /* 8D24 800FA924 56D6030C */  jal        func_800F5958
    /* 8D28 800FA928 20000424 */   addiu     $a0, $zero, 0x20
    /* 8D2C 800FA92C F5D4030C */  jal        func_800F53D4
    /* 8D30 800FA930 00000000 */   nop
    /* 8D34 800FA934 F5FF4010 */  beqz       $v0, .L800FA90C
    /* 8D38 800FA938 1200043C */   lui       $a0, (0x12F240 >> 16)
    /* 8D3C 800FA93C 77DC030C */  jal        func_800F71DC
    /* 8D40 800FA940 21200000 */   addu      $a0, $zero, $zero
  .L800FA944:
    /* 8D44 800FA944 3BE4030C */  jal        func_800F90EC
    /* 8D48 800FA948 A0120424 */   addiu     $a0, $zero, 0x12A0
    /* 8D4C 800FA94C D9D8030C */  jal        func_800F6364
    /* 8D50 800FA950 00000000 */   nop
    /* 8D54 800FA954 56D6030C */  jal        func_800F5958
    /* 8D58 800FA958 20000424 */   addiu     $a0, $zero, 0x20
    /* 8D5C 800FA95C F5D4030C */  jal        func_800F53D4
    /* 8D60 800FA960 00000000 */   nop
    /* 8D64 800FA964 F7FF4010 */  beqz       $v0, .L800FA944
    /* 8D68 800FA968 00000000 */   nop
    /* 8D6C 800FA96C 53D9030C */  jal        func_800F654C
    /* 8D70 800FA970 FE000424 */   addiu     $a0, $zero, 0xFE
    /* 8D74 800FA974 62E0030C */  jal        func_800F8188
    /* 8D78 800FA978 9C140424 */   addiu     $a0, $zero, 0x149C
    /* 8D7C 800FA97C 53D9030C */  jal        func_800F654C
    /* 8D80 800FA980 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 8D84 800FA984 62E0030C */  jal        func_800F8188
    /* 8D88 800FA988 9E140424 */   addiu     $a0, $zero, 0x149E
    /* 8D8C 800FA98C 53D9030C */  jal        func_800F654C
    /* 8D90 800FA990 01000424 */   addiu     $a0, $zero, 0x1
    /* 8D94 800FA994 62E0030C */  jal        func_800F8188
    /* 8D98 800FA998 9D140424 */   addiu     $a0, $zero, 0x149D
    /* 8D9C 800FA99C 62E0030C */  jal        func_800F8188
    /* 8DA0 800FA9A0 9F140424 */   addiu     $a0, $zero, 0x149F
    /* 8DA4 800FA9A4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8DA8 800FA9A8 00000000 */  nop
    /* 8DAC 800FA9AC 0800E003 */  jr         $ra
    /* 8DB0 800FA9B0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FA834
