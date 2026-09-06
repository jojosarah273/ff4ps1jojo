
undefined4 ST_OBJ_228(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_s2;
  
  DAT_801f6958 = DAT_801f67d0 >> 1;
  DAT_8019b594 = param_2;
  DAT_8019b598 = param_2;
  DAT_801f67b0 = FUN_8018e4b8(&ST_OBJ_0);
  if (DAT_801f67d4 != 0) {
    _spu_FsetPCR(0);
  }
  DAT_801f695c = 0;
  DAT_801f67c0 = unaff_s2;
  _spu_t(2,(&DAT_801f67e0)[unaff_s2 * 4]);
  iVar1 = (&DAT_801f67e4)[unaff_s2 * 4];
  puVar2 = (undefined1 *)(iVar1 + 1);
  *puVar2 = 6;
  *(undefined1 *)(iVar1 + 0x11) = 2;
  puVar2[DAT_801f6958 + -0x10] = 2;
  _spu_t(1);
  DAT_8019b584 = 0x21;
  _spu_t(3,(&DAT_801f67e4)[unaff_s2 * 4],DAT_801f6958);
  return 1;
}



