nonmatching func_80193560, 0x24

glabel func_80193560
    /* A1960 80193560 0600A010 */  beqz       $a1, .L8019357C
    /* A1964 80193564 FFFFA224 */   addiu     $v0, $a1, -0x1
    /* A1968 80193568 FFFF0324 */  addiu      $v1, $zero, -0x1
  .L8019356C:
    /* A196C 8019356C 000080AC */  sw         $zero, 0x0($a0)
    /* A1970 80193570 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* A1974 80193574 FDFF4314 */  bne        $v0, $v1, .L8019356C
    /* A1978 80193578 04008424 */   addiu     $a0, $a0, 0x4
  .L8019357C:
    /* A197C 8019357C 0800E003 */  jr         $ra
    /* A1980 80193580 00000000 */   nop
endlabel func_80193560
    /* A1984 80193584 00000000 */  nop
