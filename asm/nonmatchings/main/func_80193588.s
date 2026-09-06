nonmatching func_80193588, 0x40

glabel func_80193588
    /* A1988 80193588 0D008004 */  bltz       $a0, .L801935C0
    /* A198C 8019358C 00000000 */   nop
    /* A1990 80193590 1A80023C */  lui        $v0, %hi(D_8019D0F4)
    /* A1994 80193594 F4D0428C */  lw         $v0, %lo(D_8019D0F4)($v0)
    /* A1998 80193598 00000000 */  nop
    /* A199C 8019359C 2A104400 */  slt        $v0, $v0, $a0
    /* A19A0 801935A0 07004014 */  bnez       $v0, .L801935C0
    /* A19A4 801935A4 00000000 */   nop
    /* A19A8 801935A8 1980023C */  lui        $v0, %hi(func_80193C40)
    /* A19AC 801935AC 403C4224 */  addiu      $v0, $v0, %lo(func_80193C40)
    /* A19B0 801935B0 1A80013C */  lui        $at, %hi(D_8019D0F8)
    /* A19B4 801935B4 F8D024AC */  sw         $a0, %lo(D_8019D0F8)($at)
    /* A19B8 801935B8 1A80013C */  lui        $at, %hi(D_8019DB50)
    /* A19BC 801935BC 50DB22AC */  sw         $v0, %lo(D_8019DB50)($at)
  .L801935C0:
    /* A19C0 801935C0 0800E003 */  jr         $ra
    /* A19C4 801935C4 00000000 */   nop
endlabel func_80193588
