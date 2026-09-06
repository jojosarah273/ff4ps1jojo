
void FUN_80171e18(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f5480();
  FUN_800f8058(2);
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed40 = *DAT_8019ed40 << 2;
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6630(0xc);
  FUN_800f5480();
  FUN_800f8058(4);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f654c(0xf8);
    FUN_800f8960(0x4f1);
  }
  else {
    FUN_800f8960(0x4f0);
    FUN_800f6630(0xe);
    FUN_800f5480();
    FUN_800f8058(5);
    FUN_800f8960(0x4f1);
  }
  FUN_800f6630(0xad);
  *DAT_8019ed40 = *DAT_8019ed40 >> 4;
  *DAT_8019ed40 = 0;
  FUN_800f824c(6);
  *DAT_8019ed40 = *DAT_8019ed5c;
  FUN_800f5140();
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(6);
  FUN_800f3f38(uVar2);
  FUN_800f4008(0x30);
  FUN_800f8960(0x4f2);
  FUN_800f6c68(0x15b4f5);
  FUN_800f8960(0x4f3);
  FUN_800f9448();
  return;
}



