
void ST_OBJ_3C0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  uint unaff_s0;
  char *unaff_s1;
  
  _spu_t(2);
  iVar2 = unaff_s0 * 0x10;
  if (*unaff_s1 == '\x02') {
    uVar4 = 1 << (unaff_s0 & 0x1f);
    puVar5 = (undefined1 *)((&DAT_801f67e4)[unaff_s0 * 4] + (&DAT_801f67dc)[unaff_s0 * 4] + -0x10);
    DAT_8019b5a0 = DAT_8019b5a0 | uVar4;
    DAT_8019b588 = DAT_8019b588 & ~uVar4;
    iVar3 = 0;
    (&DAT_801f6968)[iVar2] = *puVar5;
    *puVar5 = 0;
    (&DAT_801f6969)[iVar2] = puVar5[1];
    puVar6 = &DAT_801f696a + iVar2;
    puVar5[1] = 7;
    puVar5 = puVar5 + 2;
    do {
      iVar3 = iVar3 + 1;
      *puVar6 = *puVar5;
      puVar6 = puVar6 + 1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (iVar3 < 0xe);
    uVar4 = 0;
    if (DAT_8019b588 != 0) {
      uVar1 = 1;
      do {
        if ((DAT_8019b588 & uVar1) != 0) break;
        uVar4 = uVar4 + 1;
        uVar1 = 1 << (uVar4 & 0x1f);
      } while ((int)uVar4 < 0x18);
      DAT_801f67b8 = uVar4;
      ST_OBJ_510();
      return;
    }
    DAT_801f67b8 = 0x18;
    uVar1 = 1;
    do {
      DAT_801f67c8 = uVar4;
      if ((DAT_8019b5a0 & uVar1) != 0) break;
      uVar4 = uVar4 + 1;
      uVar1 = 1 << (uVar4 & 0x1f);
      DAT_801f67c8 = uVar4;
    } while ((int)uVar4 < 0x18);
  }
  _spu_t(1);
  return;
}



