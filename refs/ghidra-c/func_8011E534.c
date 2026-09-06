
void FUN_8011e534(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f824c(0x3d);
  FUN_800f8fb8(0x3e);
  FUN_800f654c(0x17);
  FUN_800f824c(6);
  FUN_800f6564(0xfe5);
  FUN_800f4248(1);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f6564(0x1701);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) goto LAB_8011e594;
  }
  else {
LAB_8011e594:
    FUN_800f62bc(0x3e);
  }
  uVar2 = FUN_800f3c3c(0x3d);
  FUN_800f4f28(uVar2);
  FUN_800f4f4c();
  uVar2 = FUN_800f3c3c(0x3e);
  FUN_800f7a40(uVar2);
  FUN_800f7270(0x3d);
  FUN_800f6c68(0x178000);
  FUN_800f824c(0x3d);
  FUN_800f6c68(0x178001);
  FUN_800f824c(0x3e);
  iVar1 = FUN_800f6434(0x8080);
  if (iVar1 == 0) {
    FUN_800f62bc(6);
    FUN_800f4248(0x7f);
    FUN_800f824c(0x3e);
  }
  FUN_800f6c68(0x178002);
  FUN_800f824c(0x40);
  FUN_800f6c68(0x178003);
  FUN_800f4248(0x7f);
  FUN_800f824c(0x41);
  FUN_800f7270(0x3d);
  uVar2 = FUN_800f3c3c(0x40);
  FUN_800f56ac(uVar2);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    FUN_800f6630(0x41);
    FUN_800f5410();
    FUN_800f4008(0x80);
    FUN_800f824c(0x41);
  }
  FUN_800f6564(0xfe5);
  FUN_800f4248(1);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f6564(0x1701);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) goto LAB_8011e6d4;
  }
  FUN_800f62bc(6);
LAB_8011e6d4:
  FUN_800f6630(0x40);
  FUN_800f5480();
  uVar2 = FUN_800f3c3c(0x3d);
  FUN_800f7f48(uVar2);
  FUN_800f824c(0x40);
  FUN_800f6630(0x41);
  uVar2 = FUN_800f3c3c(0x3e);
  FUN_800f7f48(uVar2);
  FUN_800f824c(0x41);
  FUN_800f7594(0x3d);
  FUN_800f71dc(0);
  FUN_800f6630(6);
  FUN_800f9200();
  FUN_800f9448();
  while( true ) {
    FUN_800f6d70(0x8000);
    FUN_800f885c(0x7f4400);
    FUN_800f6364();
    uVar2 = FUN_800f3c3c(0x40);
    FUN_800f56ac(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) break;
    FUN_800f63bc();
    FUN_800f5a90(0x8000);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f7500(0);
      FUN_800f62bc(6);
      FUN_800f6630(6);
      FUN_800f9200();
      FUN_800f9448();
    }
  }
  FUN_800f654c(0);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f71dc(0);
  FUN_800f8d6c(0x40);
  FUN_800f8d6c(0x3d);
  do {
    while( true ) {
      FUN_800f6c68(0x7f4400);
      iVar1 = FUN_800f6434(0x8080);
      if (iVar1 == 0) break;
      FUN_800f7270(0x40);
      FUN_800f885c(0x7f5c71);
      FUN_800f6364();
      FUN_800f8d6c(0x40);
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f5574(0x20);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f8fb8(0x40);
        FUN_800f62bc(0x41);
      }
      FUN_800f7270(0x40);
      FUN_800f5958(0x2000);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        return;
      }
      FUN_800f7270(0x3d);
      FUN_800f6364();
      FUN_800f8d6c(0x3d);
    }
    FUN_800f4248(0x7f);
    FUN_800f9200();
    FUN_800f6c68(0x7f4401);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f63bc();
    FUN_800f93dc();
    FUN_800f7270(0x40);
    do {
      FUN_800f885c(0x7f5c71);
      FUN_800f6364();
      FUN_800f8d6c(0x40);
      FUN_800f9200();
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f5574(0x20);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f62bc(0x41);
        FUN_800f8fb8(0x40);
        FUN_800f7270(0x40);
      }
      FUN_800f93dc();
      FUN_800f5958(0x2000);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        return;
      }
      FUN_800f5ea0();
      iVar1 = FUN_800f5c64(0x202);
    } while (iVar1 != 0);
    FUN_800f7270(0x3d);
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    FUN_800f8d6c(0x3d);
  } while( true );
}



