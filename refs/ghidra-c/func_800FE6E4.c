
void FUN_800fe6e4(void)

{
  int iVar1;
  
  iVar1 = FUN_800f3c3c(0);
  DAT_8019ee28 = (uint)*(ushort *)(iVar1 + 0x6e);
  DAT_8019ee5c = *(undefined4 *)(iVar1 + 0x6e);
  if (DAT_8019ee28 == 0xf7) {
    DAT_8019ee28 = 0x100;
    DAT_8019ee5c = 0x100;
  }
  return;
}



