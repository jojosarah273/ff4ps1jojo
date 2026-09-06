
void FUN_8016b530(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_800f3c3c(0);
  iVar3 = FUN_800f3b04(0);
  uVar1 = *DAT_8019ed58;
  FUN_8016d348();
  iVar3 = (uint)uVar1 + iVar3;
  *(undefined1 *)(iVar3 + 0x6c) = *(undefined1 *)(iVar2 + 0x1e);
  *(undefined1 *)(iVar3 + 0x6d) = *(undefined1 *)(iVar2 + 0x1f);
  FUN_8016d2b0();
  *(undefined1 *)(iVar3 + 0x6e) = *(undefined1 *)(iVar2 + 0x1e);
  *(undefined1 *)(iVar3 + 0x6f) = *(undefined1 *)(iVar2 + 0x1f);
  return;
}



