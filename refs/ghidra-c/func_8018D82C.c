
void ST_OBJ_994(void)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  
  uVar2 = DAT_801f67bc;
  DAT_8019b58c = DAT_8019b58c & ~(1 << (DAT_801f67bc & 0x1f));
  iVar4 = DAT_801f67bc * 0x10;
  if ((&DAT_801f67d8)[iVar4] == '\x02') {
    puVar6 = &DAT_801f6968 + iVar4;
    iVar3 = 0;
    puVar5 = (undefined1 *)
             ((&DAT_801f67e4)[DAT_801f67bc * 4] + (&DAT_801f67dc)[DAT_801f67bc * 4] + -0x10);
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + 1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < 0x10);
    (&DAT_801f67d8)[iVar4] = '\x06';
  }
  _spu_FsetRXX(DAT_801f67bc << 3 | 7,(&DAT_801f67e0)[uVar2 * 4],1);
  if (DAT_8019b58c == 0) {
    if (((DAT_801f695c == 0) && (DAT_801f67a8 != (code *)0x0)) && (DAT_8019b598 != 0)) {
      (*DAT_801f67a8)(DAT_8019b598,6);
      DAT_8019b598 = 0;
    }
    if ((DAT_801f67a4 != (code *)0x0) && (DAT_8019b588 != 0)) {
      (*DAT_801f67a4)(DAT_8019b588,6);
    }
    iVar4 = DAT_801f67c8;
    if (DAT_801f67b8 < 0x18) {
      iVar4 = DAT_801f67b8;
    }
    DAT_801f67a0 = (&DAT_801f67e0)[iVar4 * 4];
    DAT_801f695c = (uint)(DAT_801f695c != 1);
    if (DAT_801f695c != 1) {
      DAT_801f67a0 = DAT_801f67a0 + DAT_801f6958;
    }
    SpuSetIRQAddr(DAT_801f67a0);
    SpuSetIRQ(1);
    DAT_8019b584 = 0x40;
    if (DAT_801f67b8 < 0x18) {
      DAT_8019b584 = 0x32;
      ST_OBJ_C0C();
      return;
    }
  }
  else {
    do {
      DAT_801f67bc = DAT_801f67bc + 1;
      if (0x17 < (int)DAT_801f67bc) break;
    } while ((DAT_8019b58c & 1 << (DAT_801f67bc & 0x1f)) == 0);
    iVar4 = ST_OBJ_314();
    _spu_t(3,*(undefined4 *)(iVar4 + 0xc),DAT_801f6958);
  }
  return;
}



