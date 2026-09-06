
undefined4 ST_OBJ_CAC(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_s1;
  
  uVar3 = 0;
  uVar1 = 1;
  do {
    if ((param_2 & uVar1) != 0) break;
    uVar3 = uVar3 + 1;
    uVar1 = 1 << (uVar3 & 0x1f);
  } while ((int)uVar3 < 0x18);
  SpuSetKey(1,param_2);
  if ((DAT_8019b100 & 1) != 0) {
    SpuFlush(1);
  }
  DAT_8019b5a4 = 0;
  DAT_8019b5a0 = 0;
  DAT_8019b588 = unaff_s1;
  DAT_8019b58c = unaff_s1;
  DAT_801f67b0 = FUN_8018e4b8(ST_OBJ_994);
  if (DAT_801f67d4 != 0) {
    _spu_FsetPCR(0);
  }
  DAT_801f67b4 = SpuSetIRQCallback(ST_OBJ_530);
  DAT_801f695c = 1;
  DAT_801f67b8 = uVar3;
  DAT_801f67bc = uVar3;
  iVar2 = ST_OBJ_314();
  SpuSetIRQ(0);
  DAT_8019b584 = 0x31;
  _spu_t(3,*(undefined4 *)(iVar2 + 0xc),DAT_801f6958);
  return 1;
}



