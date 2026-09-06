
void FUN_8016d2b0(void)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar1 = FUN_800f3c3c(0);
  iVar2 = FUN_800f3b04(0x2000);
  FUN_800f9330();
  puVar3 = (undefined2 *)((uint)*DAT_8019ed54 + iVar2);
  *(undefined1 *)(iVar1 + 0x18) = *(undefined1 *)(puVar3 + 0x40);
  *(undefined1 *)(iVar1 + 0x19) = *(undefined1 *)((int)puVar3 + 0x81);
  *DAT_8019ed44 = *puVar3;
  FUN_8016d3e0();
  FUN_800f95a0();
  return;
}



