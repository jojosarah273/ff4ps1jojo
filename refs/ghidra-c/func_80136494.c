
void FUN_80136494(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x1b7a);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6564(0x1b7c);
    FUN_800f5ccc();
  }
  FUN_800f61e8();
  FUN_800f824c(0x45);
  FUN_800f8188(0x1b75);
  FUN_800f6564(0x1b7b);
  *DAT_8019ed40 = *DAT_8019ed40 << 2;
  FUN_801224d0();
  FUN_800f6b68(0x1b56);
  FUN_800f824c(0x37);
  FUN_800f6b68(6999);
  FUN_800f824c(0x38);
  FUN_800f6b68(7000);
  FUN_800f824c(0x39);
  FUN_800f8fb8(0x3a);
  FUN_800f8fb8(0x3b);
  FUN_800f8fb8(0x3c);
  FUN_800f8fb8(0x3d);
  FUN_800f8fb8(0x3e);
  do {
    FUN_800f9644(0x20);
    FUN_800f6658(0x37);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0x3b);
    FUN_800f3f94(uVar2);
    FUN_800f8274(0x3b);
    FUN_800f6658(0x39);
    uVar2 = FUN_800f3c3c(0x3d);
    FUN_800f3f94(uVar2);
    FUN_800f8274(0x3d);
    FUN_800f9660(0x20);
    FUN_800f5da0(0x45);
    iVar1 = FUN_800f5b8c(0x202);
  } while (iVar1 != 0);
  FUN_800f7210(0x16a0);
  FUN_800f8d6c(0x37);
  FUN_800f6564(0x16a2);
  FUN_800f824c(0x39);
  FUN_800f8fb8(0x3a);
  FUN_800f9644(0x20);
  FUN_800f6658(0x37);
  FUN_800f5480();
  uVar2 = FUN_800f3c3c(0x3b);
  FUN_800f7fcc(uVar2);
  FUN_800f8274(0x37);
  FUN_800f6658(0x39);
  uVar2 = FUN_800f3c3c(0x3d);
  FUN_800f7fcc(uVar2);
  FUN_800f8274(0x39);
  FUN_800f9660(0x20);
  FUN_800f6630(0x3a);
  iVar1 = FUN_800f6434(0x8080);
  if (iVar1 == 0) {
    FUN_800f71dc(0x50c0);
    FUN_800f8d00(0x1a71);
    FUN_801257bc();
    FUN_800f654c(9);
    FUN_800f8188(0xfe01);
    FUN_800f8188(0xfe05);
    FUN_800f8188(0xfe09);
    FUN_800f8188(0xfe0d);
    FUN_800f8188(0xfe11);
    FUN_800f8188(0xfe15);
    FUN_800f8188(0xfe19);
    FUN_800f8188(0xfe1d);
    FUN_800f8188(0xfe21);
    FUN_800f8188(0xfe25);
    FUN_800f8f74(0x1a73);
    FUN_80125934();
    FUN_8011f684();
    FUN_80120fbc();
    FUN_800f7500(DAT_8019920e);
    FUN_8011fb74();
    FUN_80120b6c();
    FUN_8012219c();
    FUN_8011ff40();
    FUN_800f71dc(0x48c0);
    FUN_800f8d00(0x1a71);
    FUN_801257bc();
    FUN_801240d0();
    FUN_80126458();
  }
  else {
    FUN_800f654c(0);
    FUN_80134948();
    FUN_800f5574(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_80125934();
      FUN_8012b168();
      FUN_8011f684();
      FUN_80120fbc();
      FUN_800f7500(DAT_8019920c);
      FUN_8011fb74();
      FUN_80120b6c();
      FUN_8011ff40();
    }
    else {
      FUN_800f9330();
      FUN_800f6630(0x37);
      FUN_800f8188(0x16a0);
      FUN_800f7270(0x38);
      FUN_800f8d00(0x16a1);
      FUN_800f95a0();
      FUN_800f6564(0x1b7b);
      *DAT_8019ed40 = *DAT_8019ed40 << 2;
      FUN_800f824c(0x43);
      FUN_800f7594(0x43);
      FUN_800f6d70(0x1b55);
      FUN_800f8768(0x1440);
      FUN_800f6564(0x1b75);
      FUN_800f8768(0x1441);
      FUN_80120fbc();
      FUN_800f7500(DAT_80199210);
      FUN_8011fb74();
      FUN_80125934();
      FUN_8011f684();
      FUN_800f654c(0x2b);
      FUN_8012224c();
      FUN_80126458();
      FUN_8011ff40();
      do {
        FUN_8011f684();
        FUN_8011f884();
        FUN_800f6630(2);
        uVar2 = FUN_800f3c3c(3);
        FUN_800f78c4(uVar2);
        iVar1 = FUN_800f7918(0x202);
      } while (iVar1 != 0);
    }
  }
  return;
}



