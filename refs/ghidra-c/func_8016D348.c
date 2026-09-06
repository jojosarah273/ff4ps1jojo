
void FUN_8016d348(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_800f3c3c(0);
  iVar2 = FUN_800f3b04(0x2000);
  FUN_800f9330();
  iVar2 = (uint)*DAT_8019ed54 + iVar2;
  *(undefined1 *)(iVar1 + 0x18) = *(undefined1 *)(iVar2 + 0xc0);
  *(undefined1 *)(iVar1 + 0x19) = *(undefined1 *)(iVar2 + 0xc1);
  *DAT_8019ed44 = *(undefined2 *)(iVar2 + 0x40);
  FUN_8016d3e0();
  FUN_800f95a0();
  return;
}



