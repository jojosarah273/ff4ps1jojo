
void FUN_801428fc(void)

{
  int iVar1;
  
  FUN_8013d12c();
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f5ccc();
  FUN_800f8188(0xf427);
  do {
    FUN_800f6b68(0x1900);
    FUN_80142b4c();
    FUN_800f971c();
    FUN_800f8768(0xeca6);
    FUN_800f6364();
    FUN_800f5958(0x40);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_801407ec();
  FUN_800f71dc(0x18);
  do {
    FUN_800f9330();
    FUN_800f8f74(0xf428);
    FUN_800f971c();
    *DAT_8019ed58 = *DAT_8019ed44;
    do {
      FUN_800f6d70(0xf1b3);
      *DAT_8019ed40 = *DAT_8019ed40 >> 5;
      FUN_800f4248(3);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6c68(0xdfe0f);
      FUN_800f8960(0xec66);
      FUN_800f63bc();
      FUN_800f5a90(0x40);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f654c(0x40);
    FUN_801431e8();
    FUN_80177dcc();
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    do {
      FUN_800f6b68(0xeca6);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f6b68(0xf1b3);
        FUN_800f5480();
        FUN_800f8058(8);
        FUN_800f8768(0xf1b3);
        FUN_800f8768(0xf1f3);
        FUN_800f5574(0x10);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f654c(1);
          FUN_800f8768(0xeca6);
        }
      }
      FUN_800f6364();
      FUN_800f5958(0x40);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f95a0();
    FUN_800f5958(9);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_8014096c();
    }
    FUN_800f5e48();
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  FUN_800f8f74(0xef87);
  return;
}



