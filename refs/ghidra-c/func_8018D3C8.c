
void ST_OBJ_530(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0xffffffff;
  SpuSetIRQ(0);
  iVar5 = 0;
  if ((DAT_8019b584 & 0xf0) == 0x40) {
    ST_OBJ_584();
    return;
  }
  DAT_8019b584 = 0x33;
  if (DAT_8019b5a0 != 0) {
    uVar2 = 0;
    iVar4 = 7;
    do {
      if ((DAT_8019b5a0 & 1 << (uVar2 & 0x1f)) != 0) {
        iVar3 = (&DAT_801f67dc)[uVar2 * 4];
        iVar1 = (&DAT_801f67e0)[uVar2 * 4] + iVar3 + -8;
        if (DAT_801f695c == 0) {
          iVar1 = iVar1 + DAT_801f6958;
        }
        _spu_FsetRXX(iVar4,iVar1,1);
        if (iVar5 < iVar3) {
          iVar5 = iVar3;
          uVar6 = uVar2;
        }
      }
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 + 8;
    } while ((int)uVar2 < 0x18);
  }
  if (DAT_8019b588 == 0) {
    if (iVar5 < 9) {
      SpuSetIRQ(0);
      DAT_8019b584 = 0x43;
      SpuSetIRQCallback(DAT_801f67b4);
      FUN_8018e4b8(DAT_801f67b0);
      if (DAT_801f67d4 != 0) {
        _spu_FsetPCR(1);
      }
      if ((DAT_801f67ac != (code *)0x0) && (DAT_8019b5a0 != 0)) {
        (*DAT_801f67ac)(DAT_8019b5a0,8);
      }
      DAT_8019b5a0 = 0;
      DAT_8019b5a4 = 0;
      DAT_8019b584 = 0x10;
      ST_OBJ_96C();
      return;
    }
    SpuSetIRQCallback(ST_OBJ_1174);
    DAT_801f67a0 = (&DAT_801f67e0)[uVar6 * 4] + iVar5 + -8;
    if (DAT_801f695c == 0) {
      DAT_801f67a0 = DAT_801f67a0 + DAT_801f6958;
    }
    SpuSetIRQAddr(DAT_801f67a0);
  }
  if ((DAT_801f67ac != (code *)0x0) && (DAT_8019b5a4 != 0)) {
    (*DAT_801f67ac)(DAT_8019b5a4,6);
  }
  if (DAT_8019b588 == 0) {
    DAT_8019b584 = 0x41;
    SpuSetIRQ(1);
    ST_OBJ_96C();
    return;
  }
  DAT_8019b58c = DAT_8019b588;
  DAT_8019b5a4 = DAT_8019b5a0;
  DAT_801f67bc = DAT_801f67b8;
  if (DAT_801f695c == 0) {
    if ((DAT_8019b594 != 0) && (uVar6 = 0, DAT_801f6960 == 0)) {
      DAT_8019b58c = DAT_8019b588 | DAT_8019b594;
      DAT_8019b59c = DAT_8019b594;
      DAT_8019b598 = DAT_8019b594;
      DAT_8019b594 = 0;
      uVar2 = 1;
      do {
        if ((DAT_8019b58c & uVar2) != 0) break;
        uVar6 = uVar6 + 1;
        uVar2 = 1 << (uVar6 & 0x1f);
      } while ((int)uVar6 < 0x18);
      DAT_801f67bc = uVar6;
      ST_OBJ_938();
      return;
    }
  }
  else if (((DAT_8019b590 != 0) && (DAT_8019b59c != 0)) &&
          (uVar6 = DAT_8019b590 & DAT_8019b59c, DAT_801f6964 == 0)) {
    SpuSetKey(1,uVar6);
    if ((DAT_8019b100 & 1) != 0) {
      SpuFlush(1);
    }
    DAT_801f67bc = 0;
    DAT_8019b59c = 0;
    DAT_8019b590 = 0;
    DAT_8019b58c = DAT_8019b588 | uVar6;
    uVar6 = 1;
    do {
      if ((DAT_8019b58c & uVar6) != 0) break;
      DAT_801f67bc = DAT_801f67bc + 1;
      uVar6 = 1 << (DAT_801f67bc & 0x1f);
    } while ((int)DAT_801f67bc < 0x18);
  }
  DAT_8019b5a0 = 0;
  DAT_8019b588 = DAT_8019b58c;
  DAT_801f67b8 = DAT_801f67bc;
  iVar5 = ST_OBJ_314(DAT_801f67bc);
  DAT_8019b584 = 0x31;
  _spu_t(3,*(undefined4 *)(iVar5 + 0xc),DAT_801f6958);
  return;
}



