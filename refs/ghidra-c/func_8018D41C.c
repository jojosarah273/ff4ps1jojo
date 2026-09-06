
void ST_OBJ_584(void)

{
  undefined4 in_v0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_s3;
  uint unaff_s4;
  
  DAT_8019b584 = in_v0;
  if (DAT_8019b5a0 != 0) {
    uVar3 = 0;
    iVar5 = 7;
    do {
      if ((DAT_8019b5a0 & 1 << (uVar3 & 0x1f)) != 0) {
        iVar4 = (&DAT_801f67dc)[uVar3 * 4];
        iVar2 = (&DAT_801f67e0)[uVar3 * 4] + iVar4 + -8;
        if (DAT_801f695c == 0) {
          iVar2 = iVar2 + DAT_801f6958;
        }
        _spu_FsetRXX(iVar5,iVar2,1);
        if (unaff_s3 < iVar4) {
          unaff_s3 = iVar4;
          unaff_s4 = uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 8;
    } while ((int)uVar3 < 0x18);
  }
  if (DAT_8019b588 == 0) {
    if (unaff_s3 < 9) {
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
    DAT_801f67a0 = (&DAT_801f67e0)[unaff_s4 * 4] + unaff_s3 + -8;
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
    if ((DAT_8019b594 != 0) && (uVar3 = 0, DAT_801f6960 == 0)) {
      DAT_8019b58c = DAT_8019b588 | DAT_8019b594;
      DAT_8019b59c = DAT_8019b594;
      DAT_8019b598 = DAT_8019b594;
      DAT_8019b594 = 0;
      uVar1 = 1;
      do {
        if ((DAT_8019b58c & uVar1) != 0) break;
        uVar3 = uVar3 + 1;
        uVar1 = 1 << (uVar3 & 0x1f);
      } while ((int)uVar3 < 0x18);
      DAT_801f67bc = uVar3;
      ST_OBJ_938();
      return;
    }
  }
  else if (((DAT_8019b590 != 0) && (DAT_8019b59c != 0)) &&
          (uVar3 = DAT_8019b590 & DAT_8019b59c, DAT_801f6964 == 0)) {
    SpuSetKey(1,uVar3);
    if ((DAT_8019b100 & 1) != 0) {
      SpuFlush(1);
    }
    DAT_801f67bc = 0;
    DAT_8019b59c = 0;
    DAT_8019b590 = 0;
    DAT_8019b58c = DAT_8019b588 | uVar3;
    uVar3 = 1;
    do {
      if ((DAT_8019b58c & uVar3) != 0) break;
      DAT_801f67bc = DAT_801f67bc + 1;
      uVar3 = 1 << (DAT_801f67bc & 0x1f);
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



