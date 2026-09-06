
undefined4 FUN_80189590(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_801917f8(1,0);
  if (iVar3 == 2) {
    bVar1 = DAT_8019ef88 != DAT_8019ef40;
    *(undefined2 *)(DAT_8019ef88 * 0x10 + DAT_8019ed28) = 0xffff;
    iVar2 = 0;
    if (bVar1) {
      iVar2 = DAT_8019ef88 + 1;
    }
  }
  else {
    iVar2 = DAT_8019ef88;
    if (iVar3 != 5) {
      return param_1;
    }
  }
  DAT_8019ef88 = iVar2;
  return 0;
}



