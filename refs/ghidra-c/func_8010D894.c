
void FUN_8010d894(void)

{
  int iVar1;
  
  FUN_800f939c();
  FUN_800f9200();
  FUN_800f4248(7);
  FUN_800f824c(7);
  FUN_800f93dc();
  *DAT_8019ed40 = *DAT_8019ed40 >> 3;
  FUN_800f824c(0x3d);
  FUN_800f6564(0xfe5);
  iVar1 = FUN_800f6434(0x80);
  if (iVar1 == 0) {
    FUN_800f6564(0x1701);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) goto LAB_8010d934;
  }
  FUN_800f6630(0x3d);
  FUN_800f5410();
  FUN_800f4008(0x20);
  FUN_800f824c(0x3d);
LAB_8010d934:
  FUN_800f8fb8(0x3e);
  FUN_800f6630(7);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f7270(0x3d);
  FUN_800f6c68(0x12e0);
  while( true ) {
    FUN_800f5a90(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) break;
    FUN_800f7864();
    FUN_800f5ea0();
  }
  FUN_800f7864();
  FUN_800f76e8();
  FUN_800f654c(0);
  FUN_800f4008(0);
  FUN_800f960c();
  return;
}



