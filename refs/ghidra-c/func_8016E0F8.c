
void FUN_8016e0f8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0x95);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_800f8fb8(0x95);
    FUN_8016b650();
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    *DAT_8019ed58 = *DAT_8019ed44;
    do {
      FUN_800f9330();
      FUN_800f6b68(0x2303);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f9330();
        *DAT_8019ed40 = *DAT_8019ed5c;
        FUN_800f5140();
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6b68(0x2384);
        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x2484);
        FUN_800f78c4(uVar2);
        iVar1 = FUN_800f7918(2);
        if (iVar1 == 0) {
          FUN_800f654c(0xf0);
          FUN_800f8960(0x300);
          FUN_800f8960(0x301);
        }
        else {
          FUN_800f6b68(0x2383);
          FUN_800f8960(0x300);
          FUN_800f6b68(0x2483);
          FUN_800f8960(0x301);
        }
        FUN_800f95a0();
        FUN_800f6b68(0x2683);
        *DAT_8019ed40 = *DAT_8019ed40 << 4;
        FUN_800f5410();
        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x2703);
        FUN_800f3f38(uVar2);
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6c68(0x13edc7);
        FUN_800f824c(0x28);
        FUN_800f4248(0x3f);
        FUN_800f8960(0x302);
        FUN_800f6630(0x28);
        FUN_800f4248(0xc0);
        *DAT_8019ed40 = *DAT_8019ed40 | 0xe;
        FUN_800f8960(0x303);
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
      }
      FUN_800f95a0();
      FUN_800f6364();
      uVar2 = FUN_800f3c3c(0x96);
      FUN_800f56ac(uVar2);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
  }
  return;
}



