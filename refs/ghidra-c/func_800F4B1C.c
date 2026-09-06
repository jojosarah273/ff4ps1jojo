
void FUN_800f4b1c(undefined4 param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_800f3b9c(param_1,*DAT_8019ed54);
  uVar1 = *DAT_8019ed54;
  *DAT_8019ed40 = *DAT_8019ed40 & *(byte *)(iVar2 + (uint)uVar1);
  DAT_8019ed40[1] = DAT_8019ed40[1] & ((byte *)(iVar2 + (uint)uVar1))[1];
  return;
}



