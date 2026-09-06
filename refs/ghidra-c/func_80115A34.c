
void FUN_80115a34(void)

{
  int iVar1;
  
  FUN_800f6630(0xad);
  FUN_800f5574(0x20);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6630(0x7a);
    FUN_800f7864();
    iVar1 = FUN_800f7728(0x101);
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_800f6630(0xad);
  FUN_800f5480();
  FUN_800f8058(0x10);
  FUN_800f4248(0xfc);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6630(0xc);
  FUN_800f8960(0x350);
  FUN_800f6630(0xd);
  FUN_800f4248(1);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f654c(0x14);
    FUN_801714c4();
  }
  FUN_800f6630(0xe);
  FUN_800f8960(0x351);
  FUN_800f6c68(0x15b8c9);
  FUN_800f8960(0x352);
  FUN_800f6c68(0x15b8ca);
  FUN_800f8960(0x353);
  FUN_800f6630(0xc);
  FUN_800f5410();
  FUN_800f4008(8);
  FUN_800f8960(0x354);
  FUN_800f6630(0xd);
  FUN_800f4008(0);
  FUN_800f4248(1);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f654c(0x15);
    FUN_801714c4();
  }
  FUN_800f6630(0xe);
  FUN_800f8960(0x355);
  FUN_800f6c68(0x15b8cb);
  FUN_800f8960(0x356);
  FUN_800f6c68(0x15b8cc);
  FUN_800f8960(0x357);
  return;
}



