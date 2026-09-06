
void FUN_80127808(void)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_801360ac();
  if (DAT_8019edc4 != 1) {
    FUN_80126610();
    FUN_801266a0();
    FUN_80123fb4();
    FUN_80126330();
    FUN_801241b8();
    FUN_80120e2c();
    FUN_80125a64();
    FUN_800f71dc(0x1be4);
    uVar3 = FUN_800f3b04(0x17fe);
    FUN_800f56ac(uVar3);
    iVar4 = FUN_800f53d4();
    sVar2 = DAT_8019ed9a;
    bVar1 = iVar4 == 0;
    if (bVar1) {
      FUN_80120e2c();
      FUN_800f7500(DAT_80199198);
      FUN_8011ef30();
      FUN_800f71dc(0x394);
      FUN_800f7500(DAT_8019922e);
      FUN_8011f8d4();
    }
    else {
      FUN_8012281c();
    }
    FUN_8011f6a4();
    FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
    FUN_80120f1c();
    FUN_800f7500(DAT_80199220);
    FUN_8011ef30();
    FUN_800f7500(DAT_8019921e);
    FUN_8011ef30();
    FUN_800f6564(0x1b47);
    iVar4 = FUN_800f6434(2);
    if (iVar4 == 0) {
      if (!bVar1 || sVar2 != 0) {
        FUN_800f7500(DAT_80199236);
        FUN_8011fba4();
      }
    }
    else {
      FUN_800f7500(DAT_80199224);
      FUN_8011fba4();
    }
    FUN_800f7500(DAT_80199226);
    FUN_8011fba4();
    FUN_800f6564(0x16a4);
    FUN_800f7210(0x16a5);
    FUN_800f7500(0xcb2e);
    FUN_80127538();
    FUN_800f7500(DAT_80199228);
    FUN_8011fba4();
    FUN_80120fbc();
    FUN_800f7500(DAT_80199222);
    FUN_8011ef30();
    FUN_800f7500(DAT_8019920a);
    FUN_800f71dc(0x676);
    FUN_8011f8d4();
    FUN_800f7500(0x62c);
    FUN_800f6564(0x16a2);
    FUN_800f7210(0x16a0);
    FUN_80124d08();
    FUN_80126330();
    FUN_8012214c();
    FUN_8011ef0c();
    if (bVar1 && sVar2 == 0) {
      FUN_800f6564(0x1b47);
      iVar4 = FUN_800f6434(2);
      if ((iVar4 == 0) && (DAT_8019ed9a == 0)) {
        FUN_80127f2c();
      }
    }
    FUN_80126590();
    FUN_800f8f74(0x1b46);
    if (DAT_8019edc2 == 8) {
      FUN_800f654c(1);
      FUN_800f8188(0x1b46);
    }
  }
  do {
    FUN_800f6564(0x1b46);
    iVar4 = FUN_800f6434(2);
    if (iVar4 == 0) {
      FUN_800f654c(0x40);
    }
    else {
      FUN_800f654c(0x30);
    }
    FUN_800f824c(0x46);
    FUN_800f654c(0xb8);
    FUN_800f824c(0x45);
    FUN_8011f6d4();
    FUN_8011f684();
    FUN_8011f884();
    if (DAT_8019eda8 != 0) {
      FUN_800f8f74(0x1b46);
      FUN_800f5480();
LAB_80127b3c:
      FUN_80136148();
      return;
    }
    if ((DAT_8019edc2 == 8) && (FUN_80135be4(), 0 < (int)(&DAT_8019edd0)[DAT_8019ed8e])) {
      DAT_8019edc4 = 0x42;
      FUN_80136014();
      return;
    }
    FUN_800f6630(1);
    FUN_800f4248(0xc);
    iVar4 = FUN_800f4120(2);
    if (iVar4 == 0) {
      FUN_800f6564(0x1b46);
      FUN_800f61e8();
      FUN_800f4248(1);
      FUN_800f8188(0x1b46);
    }
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar4 = FUN_800f4120(2);
    if (iVar4 == 0) {
      FUN_800f5480();
      FUN_800f6564(0x1b46);
      iVar4 = FUN_800f6434(2);
      if (iVar4 == 0) {
        FUN_800f5410();
      }
      goto LAB_80127b3c;
    }
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar4 = FUN_800f4120(2);
    if (iVar4 == 0) {
      FUN_800f5410();
      FUN_80136148();
      return;
    }
  } while( true );
}



