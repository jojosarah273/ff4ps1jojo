
void FUN_8011f3f8(void)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  
  FUN_800f9330();
  FUN_800f939c();
  FUN_800f9644(0x20);
  FUN_800f71dc(0x7f);
  FUN_800f8d6c(0x5a);
  do {
    FUN_800f62f0(0x5a);
    FUN_800f5480();
    FUN_800f80d0(1000);
    iVar3 = FUN_800f53fc();
  } while (iVar3 == 0);
  FUN_800f5410();
  FUN_800f4064(1000);
  FUN_800f9298();
  FUN_800f71dc(0x4200);
  FUN_800f9330();
  FUN_800f94b8();
  sVar2 = *DAT_8019ed44;
  FUN_800f9660(0x20);
  DAT_800d4214 = sVar2 / 100;
  DAT_800d4216 = sVar2 % 100;
  FUN_8011f67c();
  FUN_800f6630(0x14);
  FUN_800f5410();
  FUN_800f4008(0x80);
  FUN_800f81e8(0x15b);
  FUN_800f6630(0x16);
  uVar1 = *DAT_8019ed40;
  FUN_800f971c();
  DAT_800d4214 = CONCAT11(*DAT_8019ed40,uVar1) / 10;
  DAT_800d4216 = CONCAT11(*DAT_8019ed40,uVar1) % 10;
  FUN_8011f67c();
  FUN_800f6630(0x14);
  FUN_800f5410();
  FUN_800f4008(0x80);
  FUN_800f81e8(0x15d);
  FUN_800f6630(0x16);
  FUN_800f94b8();
  FUN_800f5410();
  FUN_800f4008(0x80);
  FUN_800f824c(0x5e);
  FUN_800f6630(0x5a);
  FUN_800f5574(0x80);
  iVar3 = FUN_800f53d4();
  if (iVar3 != 0) {
    FUN_800f654c(0xff);
    FUN_800f824c(0x5a);
    FUN_800f6630(0x5b);
    FUN_800f5574(0x80);
    iVar3 = FUN_800f53d4();
    if (iVar3 != 0) {
      FUN_800f654c(0xff);
      FUN_800f824c(0x5b);
      FUN_800f6630(0x5d);
      FUN_800f5574(0x80);
      iVar3 = FUN_800f53d4();
      if (iVar3 != 0) {
        FUN_800f654c(0xff);
        FUN_800f824c(0x5d);
      }
    }
  }
  FUN_800f960c();
  FUN_800f95a0();
  return;
}



