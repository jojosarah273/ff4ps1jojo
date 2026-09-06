
void FUN_801193f8(void)

{
  int iVar1;
  
  FUN_80117594();
  FUN_800f5140();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed40 = (&DAT_801992d8)[*DAT_8019ed54];
  FUN_800f8188(0x8f8);
  *DAT_8019ed40 = (&DAT_801992d9)[*DAT_8019ed54];
  FUN_800f8188(0x8f9);
  FUN_800f8f74(0x8fa);
  FUN_800f654c(0x1a);
  FUN_800f824c(0xb2);
  FUN_801082c8();
  FUN_80107c98();
  FUN_801196f8();
  FUN_80174ce4();
  FUN_801196b0();
  FUN_80105af0();
  FUN_80105db4();
  FUN_80105d2c();
  FUN_80107f3c();
  FUN_800fe7b0();
  FUN_80109a28();
  FUN_800f6630(0xdb);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f654c(0x1b);
    FUN_800f824c(0xb2);
    FUN_801082c8();
    FUN_80107c98();
    FUN_80107f3c();
    FUN_80109a28();
  }
  else {
    DAT_800d0677 = 3;
    FUN_801196f8();
    FUN_800f7270(0xb3);
    FUN_800f6b68(0x9d5);
    FUN_800f5140();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6564(0x16a0);
    FUN_800f5480();
    FUN_800f8058((&DAT_801992d8)[*DAT_8019ed54]);
    FUN_800f824c(0x30);
    FUN_800f6564(0x16a1);
    FUN_800f8058((&DAT_801992d9)[*DAT_8019ed54]);
    FUN_800f824c(0x31);
    FUN_800f6564(0x16a2);
    FUN_800f8058(0);
    FUN_800f824c(0x32);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      FUN_800f6630(0x30);
      FUN_800f8188(0x16a0);
      FUN_800f6630(0x31);
      FUN_800f8188(0x16a1);
      FUN_800f6630(0x32);
      FUN_800f8188(0x16a2);
      FUN_8011ea5c();
      return;
    }
    FUN_800f654c(0x19);
    FUN_800f824c(0xb2);
    FUN_801082c8();
    FUN_80107c98();
    FUN_80107f3c();
    FUN_80109a28();
  }
  FUN_801175c4();
  FUN_8011ea5c();
  return;
}



