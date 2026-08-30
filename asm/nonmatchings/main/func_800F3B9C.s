nonmatching func_800F3B9C, 0xA0

glabel func_800F3B9C
    /* 1F9C 800F3B9C FFFFA530 */  andi       $a1, $a1, 0xFFFF
    /* 1FA0 800F3BA0 03140400 */  sra        $v0, $a0, 16
    /* 1FA4 800F3BA4 FF004330 */  andi       $v1, $v0, 0xFF
    /* 1FA8 800F3BA8 2128A400 */  addu       $a1, $a1, $a0
    /* 1FAC 800F3BAC 7E000224 */  addiu      $v0, $zero, 0x7E
    /* 1FB0 800F3BB0 0F006210 */  beq        $v1, $v0, .L800F3BF0
    /* 1FB4 800F3BB4 FFFFA530 */   andi      $a1, $a1, 0xFFFF
    /* 1FB8 800F3BB8 7F006228 */  slti       $v0, $v1, 0x7F
    /* 1FBC 800F3BBC 05004010 */  beqz       $v0, .L800F3BD4
    /* 1FC0 800F3BC0 70000224 */   addiu     $v0, $zero, 0x70
    /* 1FC4 800F3BC4 08006210 */  beq        $v1, $v0, .L800F3BE8
    /* 1FC8 800F3BC8 0D80033C */   lui       $v1, (0x800D2200 >> 16)
    /* 1FCC 800F3BCC 04CF0308 */  j          .L800F3C10
    /* 1FD0 800F3BD0 00140500 */   sll       $v0, $a1, 16
  .L800F3BD4:
    /* 1FD4 800F3BD4 7F000224 */  addiu      $v0, $zero, 0x7F
    /* 1FD8 800F3BD8 0B006210 */  beq        $v1, $v0, .L800F3C08
    /* 1FDC 800F3BDC 0E80033C */   lui       $v1, (0x800E2400 >> 16)
    /* 1FE0 800F3BE0 04CF0308 */  j          .L800F3C10
    /* 1FE4 800F3BE4 00140500 */   sll       $v0, $a1, 16
  .L800F3BE8:
    /* 1FE8 800F3BE8 0CCF0308 */  j          .L800F3C30
    /* 1FEC 800F3BEC 00226334 */   ori       $v1, $v1, (0x800D2200 & 0xFFFF)
  .L800F3BF0:
    /* 1FF0 800F3BF0 0D80033C */  lui        $v1, (0x800D2400 >> 16)
    /* 1FF4 800F3BF4 0020A22C */  sltiu      $v0, $a1, 0x2000
    /* 1FF8 800F3BF8 0D004010 */  beqz       $v0, .L800F3C30
    /* 1FFC 800F3BFC 00246334 */   ori       $v1, $v1, (0x800D2400 & 0xFFFF)
    /* 2000 800F3C00 0CCF0308 */  j          .L800F3C30
    /* 2004 800F3C04 0D80033C */   lui       $v1, (0x800D0000 >> 16)
  .L800F3C08:
    /* 2008 800F3C08 0CCF0308 */  j          .L800F3C30
    /* 200C 800F3C0C 00246334 */   ori       $v1, $v1, (0x800E2400 & 0xFFFF)
  .L800F3C10:
    /* 2010 800F3C10 07004104 */  bgez       $v0, .L800F3C30
    /* 2014 800F3C14 0D80033C */   lui       $v1, (0x800D0000 >> 16)
    /* 2018 800F3C18 FC7F033C */  lui        $v1, (0x7FFC8000 >> 16)
    /* 201C 800F3C1C 00806334 */  ori        $v1, $v1, (0x7FFC8000 & 0xFFFF)
    /* 2020 800F3C20 FF00023C */  lui        $v0, (0xFF0000 >> 16)
    /* 2024 800F3C24 24108200 */  and        $v0, $a0, $v0
    /* 2028 800F3C28 43100200 */  sra        $v0, $v0, 1
    /* 202C 800F3C2C 21184300 */  addu       $v1, $v0, $v1
  .L800F3C30:
    /* 2030 800F3C30 FFFF8230 */  andi       $v0, $a0, 0xFFFF
    /* 2034 800F3C34 0800E003 */  jr         $ra
    /* 2038 800F3C38 21106200 */   addu      $v0, $v1, $v0
endlabel func_800F3B9C
