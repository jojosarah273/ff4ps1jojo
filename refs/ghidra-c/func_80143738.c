
void FUN_80143738(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f7500(0x40);
  do {
    FUN_800f6b68(0xed06);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f654c(0xf0);
      FUN_800f8960(0x300);
      FUN_800f8960(0x301);
    }
    else {
      FUN_800f6564(0x6cc0);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f6b68(0xebe6);
        FUN_800f5410();
        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xec76);
        FUN_800f3f38(uVar2);
        *DAT_8019ed40 = ~*DAT_8019ed40;
        FUN_800f5480();
        FUN_800f8058(8);
        FUN_800f8960(0x300);
        FUN_800f654c(0x7f);
        FUN_800f8960(0x303);
      }
      else {
        FUN_800f6b68(0xebe6);
        FUN_800f5410();
        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xec76);
        FUN_800f3f38(uVar2);
        FUN_800f8960(0x300);
        FUN_800f654c(0x3f);
        FUN_800f8960(0x303);
      }
      FUN_800f6b68(0xec2e);
      FUN_800f8960(0x301);
    }
    FUN_800f6564(0x1813);
    FUN_800f4248(2);
    FUN_800f5410();
    FUN_800f4008(0x9c);
    FUN_800f8960(0x302);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f5958(0x48);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



