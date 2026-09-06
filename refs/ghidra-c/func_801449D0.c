
void FUN_801449d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x1813);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6b68(0x1901);
  FUN_800f4248(3);
  FUN_800f824c(1);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6564(0x6cc0);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6564(0xf446);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) goto LAB_80144a80;
LAB_80144ac8:
      FUN_800f6b68(0xebe6);
      FUN_800f8960(0x340);
    }
    else {
      FUN_800f6564(0xf446);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) goto LAB_80144ac8;
LAB_80144a80:
      FUN_800f6b68(0xebe6);
      *DAT_8019ed40 = ~*DAT_8019ed40;
      FUN_800f8960(0x340);
    }
    FUN_800f6b68(0xec76);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(1);
    FUN_800f3f38(uVar2);
    uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xec77);
    FUN_800f3f38(uVar2);
    FUN_800f8960(0x341);
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f5958(0x78);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f971c();
      *DAT_8019ed58 = *DAT_8019ed44;
      do {
        *DAT_8019ed40 = *DAT_8019ed60;
        *DAT_8019ed40 = *DAT_8019ed40 >> 3;
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6d70(0xebe7);
        FUN_800f7864();
        FUN_800f76e8();
        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x504);
        FUN_800f7cc8(uVar2);
        FUN_800f5480();
        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x504);
        FUN_800f7cc8(uVar2);
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f5a90(0x78);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      return;
    }
  } while( true );
}



