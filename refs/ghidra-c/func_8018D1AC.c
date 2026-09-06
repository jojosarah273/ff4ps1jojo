
char * ST_OBJ_314(uint param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  
  iVar1 = DAT_801f6958;
  iVar7 = (&DAT_801f67e0)[param_1 * 4];
  if (DAT_801f695c == 0) {
    iVar1 = (&DAT_801f67e4)[param_1 * 4];
    puVar2 = (undefined1 *)(iVar1 + 1);
    *puVar2 = 6;
    *(undefined1 *)(iVar1 + 0x11) = 2;
    puVar2[DAT_801f6958 + -0x10] = 2;
    pcVar3 = (char *)ST_OBJ_3C0();
    return pcVar3;
  }
  iVar4 = (&DAT_801f67e4)[param_1 * 4];
  puVar2 = (undefined1 *)(iVar4 + 1);
  *puVar2 = 2;
  *(undefined1 *)(iVar4 + 0x11) = 2;
  puVar2[DAT_801f6958 + -0x10] = 3;
  _spu_t(2,iVar7 + iVar1);
  iVar1 = param_1 * 0x10;
  if ((&DAT_801f67d8)[param_1 * 0x10] == '\x02') {
    uVar6 = 1 << (param_1 & 0x1f);
    puVar2 = (undefined1 *)((&DAT_801f67e4)[param_1 * 4] + (&DAT_801f67dc)[param_1 * 4] + -0x10);
    DAT_8019b5a0 = DAT_8019b5a0 | uVar6;
    DAT_8019b588 = DAT_8019b588 & ~uVar6;
    iVar7 = 0;
    (&DAT_801f6968)[iVar1] = *puVar2;
    *puVar2 = 0;
    (&DAT_801f6969)[iVar1] = puVar2[1];
    puVar8 = &DAT_801f696a + iVar1;
    puVar2[1] = 7;
    puVar2 = puVar2 + 2;
    do {
      iVar7 = iVar7 + 1;
      *puVar8 = *puVar2;
      puVar8 = puVar8 + 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (iVar7 < 0xe);
    uVar6 = 0;
    if (DAT_8019b588 != 0) {
      uVar5 = 1;
      do {
        if ((DAT_8019b588 & uVar5) != 0) break;
        uVar6 = uVar6 + 1;
        uVar5 = 1 << (uVar6 & 0x1f);
      } while ((int)uVar6 < 0x18);
      DAT_801f67b8 = uVar6;
      pcVar3 = (char *)ST_OBJ_510();
      return pcVar3;
    }
    DAT_801f67b8 = 0x18;
    uVar5 = 1;
    do {
      DAT_801f67c8 = uVar6;
      if ((DAT_8019b5a0 & uVar5) != 0) break;
      uVar6 = uVar6 + 1;
      uVar5 = 1 << (uVar6 & 0x1f);
      DAT_801f67c8 = uVar6;
    } while ((int)uVar6 < 0x18);
  }
  _spu_t(1);
  return &DAT_801f67d8 + param_1 * 0x10;
}



