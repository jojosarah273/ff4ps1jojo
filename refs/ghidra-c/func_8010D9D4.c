
void FUN_8010d9d4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_800f3c3c(0);
  iVar2 = FUN_800f3b9c(0x14ee00,0);
  FUN_800f9330();
  *DAT_8019ed40 = *(undefined1 *)(iVar1 + 0x78);
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed40 = *(undefined1 *)(iVar2 + (uint)*DAT_8019ed54);
  *(char *)(iVar1 + 0x78) = *(char *)(iVar1 + 0x78) + '\x01';
  FUN_800f95a0();
  return;
}



