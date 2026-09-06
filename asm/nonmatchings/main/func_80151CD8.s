nonmatching func_80151CD8, 0x250

glabel func_80151CD8
    /* 600D8 80151CD8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 600DC 80151CDC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 600E0 80151CE0 77DC030C */  jal        func_800F71DC
    /* 600E4 80151CE4 7F000424 */   addiu     $a0, $zero, 0x7F
  .L80151CE8:
    /* 600E8 80151CE8 0BE4030C */  jal        func_800F902C
    /* 600EC 80151CEC 80000424 */   addiu     $a0, $zero, 0x80
    /* 600F0 80151CF0 92D7030C */  jal        func_800F5E48
    /* 600F4 80151CF4 00000000 */   nop
    /* 600F8 80151CF8 19D7030C */  jal        func_800F5C64
    /* 600FC 80151CFC 80800434 */   ori       $a0, $zero, 0x8080
    /* 60100 80151D00 F9FF4014 */  bnez       $v0, .L80151CE8
    /* 60104 80151D04 00000000 */   nop
    /* 60108 80151D08 77DC030C */  jal        func_800F71DC
    /* 6010C 80151D0C 7D190424 */   addiu     $a0, $zero, 0x197D
  .L80151D10:
    /* 60110 80151D10 3BE4030C */  jal        func_800F90EC
    /* 60114 80151D14 00200424 */   addiu     $a0, $zero, 0x2000
    /* 60118 80151D18 92D7030C */  jal        func_800F5E48
    /* 6011C 80151D1C 00000000 */   nop
    /* 60120 80151D20 19D7030C */  jal        func_800F5C64
    /* 60124 80151D24 80800434 */   ori       $a0, $zero, 0x8080
    /* 60128 80151D28 F9FF4014 */  bnez       $v0, .L80151D10
    /* 6012C 80151D2C 00000000 */   nop
    /* 60130 80151D30 77DC030C */  jal        func_800F71DC
    /* 60134 80151D34 07000424 */   addiu     $a0, $zero, 0x7
  .L80151D38:
    /* 60138 80151D38 3BE4030C */  jal        func_800F90EC
    /* 6013C 80151D3C 04180424 */   addiu     $a0, $zero, 0x1804
    /* 60140 80151D40 92D7030C */  jal        func_800F5E48
    /* 60144 80151D44 00000000 */   nop
    /* 60148 80151D48 19D7030C */  jal        func_800F5C64
    /* 6014C 80151D4C 80800434 */   ori       $a0, $zero, 0x8080
    /* 60150 80151D50 F9FF4014 */  bnez       $v0, .L80151D38
    /* 60154 80151D54 00000000 */   nop
    /* 60158 80151D58 77DC030C */  jal        func_800F71DC
    /* 6015C 80151D5C 10070424 */   addiu     $a0, $zero, 0x710
    /* 60160 80151D60 53D9030C */  jal        func_800F654C
    /* 60164 80151D64 80000424 */   addiu     $a0, $zero, 0x80
  .L80151D68:
    /* 60168 80151D68 DAE1030C */  jal        func_800F8768
    /* 6016C 80151D6C 7A2C0424 */   addiu     $a0, $zero, 0x2C7A
    /* 60170 80151D70 92D7030C */  jal        func_800F5E48
    /* 60174 80151D74 00000000 */   nop
    /* 60178 80151D78 92D7030C */  jal        func_800F5E48
    /* 6017C 80151D7C 00000000 */   nop
    /* 60180 80151D80 92D7030C */  jal        func_800F5E48
    /* 60184 80151D84 00000000 */   nop
    /* 60188 80151D88 92D7030C */  jal        func_800F5E48
    /* 6018C 80151D8C 00000000 */   nop
    /* 60190 80151D90 19D7030C */  jal        func_800F5C64
    /* 60194 80151D94 80800434 */   ori       $a0, $zero, 0x8080
    /* 60198 80151D98 F3FF4014 */  bnez       $v0, .L80151D68
    /* 6019C 80151D9C 00000000 */   nop
    /* 601A0 80151DA0 77DC030C */  jal        func_800F71DC
    /* 601A4 80151DA4 3F330424 */   addiu     $a0, $zero, 0x333F
    /* 601A8 80151DA8 53D9030C */  jal        func_800F654C
    /* 601AC 80151DAC FF000424 */   addiu     $a0, $zero, 0xFF
  .L80151DB0:
    /* 601B0 80151DB0 DAE1030C */  jal        func_800F8768
    /* 601B4 80151DB4 7F390424 */   addiu     $a0, $zero, 0x397F
    /* 601B8 80151DB8 92D7030C */  jal        func_800F5E48
    /* 601BC 80151DBC 00000000 */   nop
    /* 601C0 80151DC0 19D7030C */  jal        func_800F5C64
    /* 601C4 80151DC4 80800434 */   ori       $a0, $zero, 0x8080
    /* 601C8 80151DC8 F9FF4014 */  bnez       $v0, .L80151DB0
    /* 601CC 80151DCC 00000000 */   nop
    /* 601D0 80151DD0 77DC030C */  jal        func_800F71DC
    /* 601D4 80151DD4 05000424 */   addiu     $a0, $zero, 0x5
  .L80151DD8:
    /* 601D8 80151DD8 DAE1030C */  jal        func_800F8768
    /* 601DC 80151DDC 29390424 */   addiu     $a0, $zero, 0x3929
    /* 601E0 80151DE0 92D7030C */  jal        func_800F5E48
    /* 601E4 80151DE4 00000000 */   nop
    /* 601E8 80151DE8 19D7030C */  jal        func_800F5C64
    /* 601EC 80151DEC 80800434 */   ori       $a0, $zero, 0x8080
    /* 601F0 80151DF0 F9FF4014 */  bnez       $v0, .L80151DD8
    /* 601F4 80151DF4 00000000 */   nop
    /* 601F8 80151DF8 77DC030C */  jal        func_800F71DC
    /* 601FC 80151DFC 07000424 */   addiu     $a0, $zero, 0x7
  .L80151E00:
    /* 60200 80151E00 DAE1030C */  jal        func_800F8768
    /* 60204 80151E04 F7350424 */   addiu     $a0, $zero, 0x35F7
    /* 60208 80151E08 92D7030C */  jal        func_800F5E48
    /* 6020C 80151E0C 00000000 */   nop
    /* 60210 80151E10 19D7030C */  jal        func_800F5C64
    /* 60214 80151E14 80800434 */   ori       $a0, $zero, 0x8080
    /* 60218 80151E18 F9FF4014 */  bnez       $v0, .L80151E00
    /* 6021C 80151E1C 00000000 */   nop
    /* 60220 80151E20 93E0030C */  jal        func_800F824C
    /* 60224 80151E24 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 60228 80151E28 62E0030C */  jal        func_800F8188
    /* 6022C 80151E2C 7B350424 */   addiu     $a0, $zero, 0x357B
    /* 60230 80151E30 62E0030C */  jal        func_800F8188
    /* 60234 80151E34 7C350424 */   addiu     $a0, $zero, 0x357C
    /* 60238 80151E38 62E0030C */  jal        func_800F8188
    /* 6023C 80151E3C 83350424 */   addiu     $a0, $zero, 0x3583
    /* 60240 80151E40 62E0030C */  jal        func_800F8188
    /* 60244 80151E44 5E350424 */   addiu     $a0, $zero, 0x355E
    /* 60248 80151E48 62E0030C */  jal        func_800F8188
    /* 6024C 80151E4C 01360424 */   addiu     $a0, $zero, 0x3601
    /* 60250 80151E50 62E0030C */  jal        func_800F8188
    /* 60254 80151E54 02360424 */   addiu     $a0, $zero, 0x3602
    /* 60258 80151E58 62E0030C */  jal        func_800F8188
    /* 6025C 80151E5C D6380424 */   addiu     $a0, $zero, 0x38D6
    /* 60260 80151E60 53D9030C */  jal        func_800F654C
    /* 60264 80151E64 1A000424 */   addiu     $a0, $zero, 0x1A
    /* 60268 80151E68 62E0030C */  jal        func_800F8188
    /* 6026C 80151E6C 17330424 */   addiu     $a0, $zero, 0x3317
    /* 60270 80151E70 62E0030C */  jal        func_800F8188
    /* 60274 80151E74 33330424 */   addiu     $a0, $zero, 0x3333
    /* 60278 80151E78 62E0030C */  jal        func_800F8188
    /* 6027C 80151E7C 4F330424 */   addiu     $a0, $zero, 0x334F
    /* 60280 80151E80 62E0030C */  jal        func_800F8188
    /* 60284 80151E84 6B330424 */   addiu     $a0, $zero, 0x336B
    /* 60288 80151E88 62E0030C */  jal        func_800F8188
    /* 6028C 80151E8C 87330424 */   addiu     $a0, $zero, 0x3387
    /* 60290 80151E90 7AD8030C */  jal        func_800F61E8
    /* 60294 80151E94 00000000 */   nop
    /* 60298 80151E98 62E0030C */  jal        func_800F8188
    /* 6029C 80151E9C 1B330424 */   addiu     $a0, $zero, 0x331B
    /* 602A0 80151EA0 62E0030C */  jal        func_800F8188
    /* 602A4 80151EA4 37330424 */   addiu     $a0, $zero, 0x3337
    /* 602A8 80151EA8 62E0030C */  jal        func_800F8188
    /* 602AC 80151EAC 53330424 */   addiu     $a0, $zero, 0x3353
    /* 602B0 80151EB0 62E0030C */  jal        func_800F8188
    /* 602B4 80151EB4 6F330424 */   addiu     $a0, $zero, 0x336F
    /* 602B8 80151EB8 62E0030C */  jal        func_800F8188
    /* 602BC 80151EBC 8B330424 */   addiu     $a0, $zero, 0x338B
    /* 602C0 80151EC0 59D9030C */  jal        func_800F6564
    /* 602C4 80151EC4 AC160424 */   addiu     $a0, $zero, 0x16AC
    /* 602C8 80151EC8 62E0030C */  jal        func_800F8188
    /* 602CC 80151ECC 38350424 */   addiu     $a0, $zero, 0x3538
    /* 602D0 80151ED0 62E0030C */  jal        func_800F8188
    /* 602D4 80151ED4 EE380424 */   addiu     $a0, $zero, 0x38EE
    /* 602D8 80151ED8 77DC030C */  jal        func_800F71DC
    /* 602DC 80151EDC 18000424 */   addiu     $a0, $zero, 0x18
    /* 602E0 80151EE0 53D9030C */  jal        func_800F654C
    /* 602E4 80151EE4 02000424 */   addiu     $a0, $zero, 0x2
  .L80151EE8:
    /* 602E8 80151EE8 DAE1030C */  jal        func_800F8768
    /* 602EC 80151EEC A4350424 */   addiu     $a0, $zero, 0x35A4
    /* 602F0 80151EF0 3BE4030C */  jal        func_800F90EC
    /* 602F4 80151EF4 A5350424 */   addiu     $a0, $zero, 0x35A5
    /* 602F8 80151EF8 92D7030C */  jal        func_800F5E48
    /* 602FC 80151EFC 00000000 */   nop
    /* 60300 80151F00 92D7030C */  jal        func_800F5E48
    /* 60304 80151F04 00000000 */   nop
    /* 60308 80151F08 19D7030C */  jal        func_800F5C64
    /* 6030C 80151F0C 80800434 */   ori       $a0, $zero, 0x8080
    /* 60310 80151F10 F5FF4014 */  bnez       $v0, .L80151EE8
    /* 60314 80151F14 00000000 */   nop
    /* 60318 80151F18 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6031C 80151F1C 00000000 */  nop
    /* 60320 80151F20 0800E003 */  jr         $ra
    /* 60324 80151F24 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80151CD8
