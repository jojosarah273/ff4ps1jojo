
void FUN_80173654(void)

{
  int iVar1;
  
  FUN_800f926c();
  FUN_800f654c(0x15);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6630(200);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0x7a);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6630(0xb9);
      FUN_800f5480();
      FUN_800f8058(0x10);
      FUN_800f5574(0x10);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f5ccc();
      }
      FUN_800f4248(0xc);
      *DAT_8019ed40 = *DAT_8019ed40 << 3;
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f7500(0);
      do {
        FUN_800f6b68(0xbb6a);
        FUN_800f8960(0x4c0);
        FUN_800f6364();
        FUN_800f63bc();
        FUN_800f5a90(0x20);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
    }
  }
  FUN_800f9448();
  return;
}



