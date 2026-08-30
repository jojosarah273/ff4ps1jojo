nonmatching func_80187DAC, 0xB0

glabel func_80187DAC
    /* 961AC 80187DAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 961B0 80187DB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 961B4 80187DB4 0D80043C */  lui        $a0, (0x800D1000 >> 16)
    /* 961B8 80187DB8 00108434 */  ori        $a0, $a0, (0x800D1000 & 0xFFFF)
    /* 961BC 80187DBC FF070624 */  addiu      $a2, $zero, 0x7FF
  .L80187DC0:
    /* 961C0 80187DC0 000080A0 */  sb         $zero, 0x0($a0)
    /* 961C4 80187DC4 FFFFC624 */  addiu      $a2, $a2, -0x1
    /* 961C8 80187DC8 FDFFC104 */  bgez       $a2, .L80187DC0
    /* 961CC 80187DCC 01008424 */   addiu     $a0, $a0, 0x1
    /* 961D0 80187DD0 2BFC030C */  jal        func_800FF0AC
    /* 961D4 80187DD4 00000000 */   nop
    /* 961D8 80187DD8 0D80053C */  lui        $a1, (0x800D2200 >> 16)
    /* 961DC 80187DDC 0022A534 */  ori        $a1, $a1, (0x800D2200 & 0xFFFF)
    /* 961E0 80187DE0 0D80043C */  lui        $a0, (0x800D1000 >> 16)
    /* 961E4 80187DE4 00108434 */  ori        $a0, $a0, (0x800D1000 & 0xFFFF)
    /* 961E8 80187DE8 FF070624 */  addiu      $a2, $zero, 0x7FF
  .L80187DEC:
    /* 961EC 80187DEC 00008290 */  lbu        $v0, 0x0($a0)
    /* 961F0 80187DF0 00000000 */  nop
    /* 961F4 80187DF4 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 961F8 80187DF8 00008390 */  lbu        $v1, 0x0($a0)
    /* 961FC 80187DFC 00000000 */  nop
    /* 96200 80187E00 0008A3A0 */  sb         $v1, 0x800($a1)
    /* 96204 80187E04 00008290 */  lbu        $v0, 0x0($a0)
    /* 96208 80187E08 FFFFC624 */  addiu      $a2, $a2, -0x1
    /* 9620C 80187E0C 0010A2A0 */  sb         $v0, 0x1000($a1)
    /* 96210 80187E10 00008390 */  lbu        $v1, 0x0($a0)
    /* 96214 80187E14 01008424 */  addiu      $a0, $a0, 0x1
    /* 96218 80187E18 0018A3A0 */  sb         $v1, 0x1800($a1)
    /* 9621C 80187E1C F3FFC104 */  bgez       $a2, .L80187DEC
    /* 96220 80187E20 0100A524 */   addiu     $a1, $a1, 0x1
    /* 96224 80187E24 0D80053C */  lui        $a1, (0x800D2200 >> 16)
    /* 96228 80187E28 0022A534 */  ori        $a1, $a1, (0x800D2200 & 0xFFFF)
    /* 9622C 80187E2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 96230 80187E30 20000224 */  addiu      $v0, $zero, 0x20
    /* 96234 80187E34 AA06A0A0 */  sb         $zero, 0x6AA($a1)
    /* 96238 80187E38 AB06A2A0 */  sb         $v0, 0x6AB($a1)
    /* 9623C 80187E3C AA0EA0A0 */  sb         $zero, 0xEAA($a1)
    /* 96240 80187E40 AB0EA2A0 */  sb         $v0, 0xEAB($a1)
    /* 96244 80187E44 AA16A0A0 */  sb         $zero, 0x16AA($a1)
    /* 96248 80187E48 AB16A2A0 */  sb         $v0, 0x16AB($a1)
    /* 9624C 80187E4C AA1EA0A0 */  sb         $zero, 0x1EAA($a1)
    /* 96250 80187E50 AB1EA2A0 */  sb         $v0, 0x1EAB($a1)
    /* 96254 80187E54 0800E003 */  jr         $ra
    /* 96258 80187E58 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80187DAC
