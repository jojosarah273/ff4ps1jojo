
void FUN_8010d2a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_800f3c3c(0);
  iVar2 = FUN_800f3b9c(0x7f4c00,0);
  FUN_800f9330();
  FUN_8010d54c();
  *DAT_8019ed5c = *(undefined1 *)(iVar1 + 0x3d);
  DAT_8019ed5c[1] = *(undefined1 *)(iVar1 + 0x3e);
  *DAT_8019ed40 = 0;
  *(undefined1 *)(iVar2 + (uint)*DAT_8019ed54) = *DAT_8019ed40;
  FUN_800f95a0();
  return;
}



