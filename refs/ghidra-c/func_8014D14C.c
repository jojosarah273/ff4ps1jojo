
void FUN_8014d14c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f5410();
  FUN_800f4008(0x28);
  FUN_800f824c(0x26);
  FUN_800f654c(0x10);
  FUN_800f824c(0x28);
  FUN_80072720();
  FUN_800f6564(0xf279);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6564(0xf284);
    FUN_800f824c(0x26);
    FUN_800f7500(0);
    do {
      uVar2 = FUN_800f3c3c(0x26);
      FUN_800f4f28(uVar2);
      iVar1 = FUN_800f4fac(0x101);
      if (iVar1 == 0) {
        FUN_800f939c();
        *DAT_8019ed40 = *DAT_8019ed60;
        *DAT_8019ed40 = *DAT_8019ed40 << 5;
        *DAT_8019ed58 = *DAT_8019ed44;
        FUN_800f654c(0x10);
        FUN_800f824c(0x28);
        FUN_800f7270(0x2a);
        do {
          FUN_800f6c68(0xecb00);
          FUN_800f8960(0xee70);
          FUN_800f8960(0xee80);
          FUN_800f6364();
          FUN_800f63bc();
          FUN_800f5da0(0x28);
          iVar1 = FUN_800f5b8c(0x202);
        } while (iVar1 != 0);
        FUN_800f960c();
      }
      FUN_800f63bc();
      FUN_800f5a90(5);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
  }
  else {
    FUN_800f7500(0);
    FUN_800f7270(0x2a);
    do {
      FUN_800f6c68(0xecb00);
      FUN_800f8960(0xee30);
      FUN_800f8960(0xee40);
      FUN_800f6364();
      FUN_800f63bc();
      FUN_800f5a90(0x10);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
  }
  return;
}



