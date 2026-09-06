
void FUN_800f8378(undefined2 param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_800f3a70(param_1);
  iVar3 = FUN_800f3b04(uVar2);
  uVar1 = *DAT_8019ed58;
  *(undefined1 *)(iVar3 + (uint)uVar1) = DAT_1f8003c8;
  ((undefined1 *)(iVar3 + (uint)uVar1))[1] = DAT_1f8003c9;
  return;
}



