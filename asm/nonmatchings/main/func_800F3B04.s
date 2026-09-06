nonmatching func_800F3B04, 0x98

glabel func_800F3B04
    /* 1F04 800F3B04 801F033C */  lui        $v1, (0x1F8003D2 >> 16)
    /* 1F08 800F3B08 D2036390 */  lbu        $v1, (0x1F8003D2 & 0xFFFF)($v1)
    /* 1F0C 800F3B0C 7E000224 */  addiu      $v0, $zero, 0x7E
    /* 1F10 800F3B10 0F006210 */  beq        $v1, $v0, .L800F3B50
    /* 1F14 800F3B14 7F006228 */   slti      $v0, $v1, 0x7F
    /* 1F18 800F3B18 05004010 */  beqz       $v0, .L800F3B30
    /* 1F1C 800F3B1C 70000224 */   addiu     $v0, $zero, 0x70
    /* 1F20 800F3B20 08006210 */  beq        $v1, $v0, .L800F3B44
    /* 1F24 800F3B24 FF7F0224 */   addiu     $v0, $zero, 0x7FFF
    /* 1F28 800F3B28 DDCE0308 */  j          .L800F3B74
    /* 1F2C 800F3B2C 2A104400 */   slt       $v0, $v0, $a0
  .L800F3B30:
    /* 1F30 800F3B30 7F000224 */  addiu      $v0, $zero, 0x7F
    /* 1F34 800F3B34 0C006210 */  beq        $v1, $v0, .L800F3B68
    /* 1F38 800F3B38 FF7F0224 */   addiu     $v0, $zero, 0x7FFF
    /* 1F3C 800F3B3C DDCE0308 */  j          .L800F3B74
    /* 1F40 800F3B40 2A104400 */   slt       $v0, $v0, $a0
  .L800F3B44:
    /* 1F44 800F3B44 0D80033C */  lui        $v1, (0x800D2200 >> 16)
    /* 1F48 800F3B48 E5CE0308 */  j          .L800F3B94
    /* 1F4C 800F3B4C 00226334 */   ori       $v1, $v1, (0x800D2200 & 0xFFFF)
  .L800F3B50:
    /* 1F50 800F3B50 0D80033C */  lui        $v1, (0x800D2400 >> 16)
    /* 1F54 800F3B54 00208228 */  slti       $v0, $a0, 0x2000
    /* 1F58 800F3B58 0E004010 */  beqz       $v0, .L800F3B94
    /* 1F5C 800F3B5C 00246334 */   ori       $v1, $v1, (0x800D2400 & 0xFFFF)
    /* 1F60 800F3B60 E5CE0308 */  j          .L800F3B94
    /* 1F64 800F3B64 0D80033C */   lui       $v1, (0x800D0000 >> 16)
  .L800F3B68:
    /* 1F68 800F3B68 0E80033C */  lui        $v1, (0x800E2400 >> 16)
    /* 1F6C 800F3B6C E5CE0308 */  j          .L800F3B94
    /* 1F70 800F3B70 00246334 */   ori       $v1, $v1, (0x800E2400 & 0xFFFF)
  .L800F3B74:
    /* 1F74 800F3B74 07004010 */  beqz       $v0, .L800F3B94
    /* 1F78 800F3B78 0D80033C */   lui       $v1, (0x800D0000 >> 16)
    /* 1F7C 800F3B7C FC7F033C */  lui        $v1, (0x7FFC8000 >> 16)
    /* 1F80 800F3B80 801F023C */  lui        $v0, (0x1F8003C0 >> 16)
    /* 1F84 800F3B84 C003428C */  lw         $v0, (0x1F8003C0 & 0xFFFF)($v0)
    /* 1F88 800F3B88 00806334 */  ori        $v1, $v1, (0x7FFC8000 & 0xFFFF)
    /* 1F8C 800F3B8C 43100200 */  sra        $v0, $v0, 1
    /* 1F90 800F3B90 21184300 */  addu       $v1, $v0, $v1
  .L800F3B94:
    /* 1F94 800F3B94 0800E003 */  jr         $ra
    /* 1F98 800F3B98 21106400 */   addu      $v0, $v1, $a0
endlabel func_800F3B04
