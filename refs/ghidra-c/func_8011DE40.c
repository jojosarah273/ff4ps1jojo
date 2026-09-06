
void FUN_8011de40(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0xab);
  FUN_800f4248(1);
  FUN_800f4120(0x202);
  FUN_800f6564(0x6fa);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6630(0xab);
  FUN_800f4248(2);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f6564(0x70a);
    FUN_800f5480();
    FUN_800f8058(0x1f);
  }
  else {
    FUN_800f6564(0x70a);
    FUN_800f5410();
    FUN_800f4008(0x20);
  }
  *DAT_8019ed40 = *DAT_8019ed40 & (&DAT_80199300)[*DAT_8019ed54];
  FUN_800f824c(0x3d);
  FUN_800f824c(0x93);
  FUN_800f8fb8(0x3e);
  FUN_800f8fb8(0x44);
  FUN_800f6630(0x3d);
  FUN_800f4248(0x3f);
  FUN_800f824c(0x41);
  FUN_800f8fb8(0x40);
  uVar2 = FUN_800f3c3c(0x3d);
  FUN_800f4f28(uVar2);
  FUN_800f4f4c();
  uVar2 = FUN_800f3c3c(0x3e);
  FUN_800f7a40(uVar2);
  FUN_800f6564(0x1700);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_8011dfe4();
    FUN_8017583c();
  }
  else {
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_8011e318();
    }
    else {
      FUN_8011e16c();
    }
  }
  return;
}



