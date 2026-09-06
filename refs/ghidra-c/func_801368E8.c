
void FUN_801368e8(void)

{
  int iVar1;
  
  FUN_800f8f74(0xfe15);
  FUN_800f8f74(0xfe19);
  FUN_800f8f74(0xfe1d);
  FUN_800f8f74(0xfe21);
  FUN_800f8f74(0xfe25);
  FUN_800f6564(0x1b7b);
  *DAT_8019ed40 = *DAT_8019ed40 << 2;
  FUN_801224d0();
  FUN_800f6b68(0x1b55);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_800f5574(0xce);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f8188(0x1b39);
      FUN_800f654c(0);
      do {
        FUN_801369b8();
        FUN_800f61e8();
        FUN_800f5574(5);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
    }
  }
  return;
}



