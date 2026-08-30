nonmatching func_80119C7C, 0xCC

glabel func_80119C7C
    /* 2807C 80119C7C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 28080 80119C80 1000BFAF */  sw         $ra, 0x10($sp)
    /* 28084 80119C84 1A80093C */  lui        $t1, %hi(D_8019EFA8)
    /* 28088 80119C88 A8EF2825 */  addiu      $t0, $t1, %lo(D_8019EFA8)
    /* 2808C 80119C8C 0D80063C */  lui        $a2, (0x800D0BDE >> 16)
    /* 28090 80119C90 DE0BC634 */  ori        $a2, $a2, (0x800D0BDE & 0xFFFF)
    /* 28094 80119C94 3F000724 */  addiu      $a3, $zero, 0x3F
  .L80119C98:
    /* 28098 80119C98 FDFFC590 */  lbu        $a1, -0x3($a2)
    /* 2809C 80119C9C FEFFC290 */  lbu        $v0, -0x2($a2)
    /* 280A0 80119CA0 FFFFC390 */  lbu        $v1, -0x1($a2)
    /* 280A4 80119CA4 0000C490 */  lbu        $a0, 0x0($a2)
    /* 280A8 80119CA8 0400C624 */  addiu      $a2, $a2, 0x4
    /* 280AC 80119CAC FFFFE724 */  addiu      $a3, $a3, -0x1
    /* 280B0 80119CB0 00120200 */  sll        $v0, $v0, 8
    /* 280B4 80119CB4 2528A200 */  or         $a1, $a1, $v0
    /* 280B8 80119CB8 001C0300 */  sll        $v1, $v1, 16
    /* 280BC 80119CBC 2528A300 */  or         $a1, $a1, $v1
    /* 280C0 80119CC0 00260400 */  sll        $a0, $a0, 24
    /* 280C4 80119CC4 2528A400 */  or         $a1, $a1, $a0
    /* 280C8 80119CC8 000005AD */  sw         $a1, 0x0($t0)
    /* 280CC 80119CCC F2FFE104 */  bgez       $a3, .L80119C98
    /* 280D0 80119CD0 04000825 */   addiu     $t0, $t0, 0x4
    /* 280D4 80119CD4 40000724 */  addiu      $a3, $zero, 0x40
    /* 280D8 80119CD8 1A80023C */  lui        $v0, %hi(D_8019EFA8)
    /* 280DC 80119CDC A8EF4224 */  addiu      $v0, $v0, %lo(D_8019EFA8)
    /* 280E0 80119CE0 00014824 */  addiu      $t0, $v0, 0x100
    /* 280E4 80119CE4 0D80063C */  lui        $a2, (0x800D0DDE >> 16)
    /* 280E8 80119CE8 DE0DC634 */  ori        $a2, $a2, (0x800D0DDE & 0xFFFF)
  .L80119CEC:
    /* 280EC 80119CEC FDFFC590 */  lbu        $a1, -0x3($a2)
    /* 280F0 80119CF0 FEFFC290 */  lbu        $v0, -0x2($a2)
    /* 280F4 80119CF4 FFFFC390 */  lbu        $v1, -0x1($a2)
    /* 280F8 80119CF8 0000C490 */  lbu        $a0, 0x0($a2)
    /* 280FC 80119CFC 0400C624 */  addiu      $a2, $a2, 0x4
    /* 28100 80119D00 0100E724 */  addiu      $a3, $a3, 0x1
    /* 28104 80119D04 00120200 */  sll        $v0, $v0, 8
    /* 28108 80119D08 2528A200 */  or         $a1, $a1, $v0
    /* 2810C 80119D0C 001C0300 */  sll        $v1, $v1, 16
    /* 28110 80119D10 2528A300 */  or         $a1, $a1, $v1
    /* 28114 80119D14 00260400 */  sll        $a0, $a0, 24
    /* 28118 80119D18 2528A400 */  or         $a1, $a1, $a0
    /* 2811C 80119D1C 000005AD */  sw         $a1, 0x0($t0)
    /* 28120 80119D20 8000E228 */  slti       $v0, $a3, 0x80
    /* 28124 80119D24 F1FF4014 */  bnez       $v0, .L80119CEC
    /* 28128 80119D28 04000825 */   addiu     $t0, $t0, 0x4
    /* 2812C 80119D2C 70FD050C */  jal        func_8017F5C0
    /* 28130 80119D30 A8EF2425 */   addiu     $a0, $t1, %lo(D_8019EFA8)
    /* 28134 80119D34 1000BF8F */  lw         $ra, 0x10($sp)
    /* 28138 80119D38 01000224 */  addiu      $v0, $zero, 0x1
    /* 2813C 80119D3C 080082A3 */  sb         $v0, %gp_rel(D_8019ED04)($gp)
    /* 28140 80119D40 0800E003 */  jr         $ra
    /* 28144 80119D44 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80119C7C
