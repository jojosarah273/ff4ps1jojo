
void FUN_80131358(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x1b9b);
  FUN_800f9200();
  FUN_800f939c();
  FUN_801224d0();
  FUN_800f6b68(0x1b8b);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f654c(8);
    FUN_800f824c(0x45);
    do {
      FUN_800f654c(0xff);
      FUN_800f8960(0);
      FUN_800f63bc();
      FUN_800f654c(0xf0);
      FUN_800f8960(0);
      FUN_800f63bc();
      FUN_800f5da0(0x45);
      iVar1 = FUN_800f5b8c(0x202);
    } while (iVar1 != 0);
  }
  else {
    FUN_800f6630(0x43);
    *DAT_8019ed40 = *DAT_8019ed40 << 1;
    FUN_800f5140();
    FUN_800f4f4c();
    uVar2 = FUN_800f3c3c(0x43);
    FUN_800f3f38(uVar2);
    *DAT_8019ed40 = *DAT_8019ed40 << 2;
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x24);
    FUN_800f824c(0x46);
    FUN_800f654c(0x44);
    FUN_800f824c(0x45);
    FUN_800f7270(0x45);
    FUN_800f971c();
    FUN_8011f724();
  }
  FUN_800f960c();
  FUN_800f9644(0x20);
  *DAT_8019ed44 = *DAT_8019ed58;
  FUN_800f5410();
  FUN_800f4064(0x10);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f9660(0x20);
  FUN_800f93dc();
  FUN_800f61e8();
  FUN_800f5574(5);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    FUN_800f971c();
  }
  FUN_800f8188(0x1b9b);
  return;
}



