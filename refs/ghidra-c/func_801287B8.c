
void FUN_801287b8(void)

{
  int iVar1;
  
  FUN_800f9200();
  FUN_800f824c(0x4b);
  FUN_800f5140();
  FUN_800f824c(0x48);
  FUN_800f8fb8(0x49);
  FUN_800f71dc(0x9ae1);
  FUN_800f6630(0x4b);
  FUN_80120070();
  FUN_800f6630(0x4b);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f7500(0xa6c0);
    FUN_800f8ebc(0x29);
  }
  FUN_800f7500(DAT_80199218);
  FUN_8011ef30();
  FUN_800f7500(DAT_801991a0);
  FUN_800f71dc(0x82);
  FUN_8011f8d4();
  FUN_800f6630(0x4b);
  FUN_800f5410();
  FUN_800f4008(0x81);
  FUN_800f7594(0x29);
  FUN_800f8960(0xc2);
  FUN_800f9200();
  FUN_800f654c(0x7f);
  FUN_800f8960(0xc4);
  FUN_800f654c(0xff);
  FUN_800f8960(0xc6);
  FUN_800f8960(200);
  FUN_800f93dc();
  FUN_800f926c();
  FUN_800f654c(0x70);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6630(0x4b);
  FUN_8012833c();
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f7500(DAT_8019922c);
    FUN_8011fba4();
    FUN_800f9448();
  }
  else {
    FUN_800f9644(0x20);
    FUN_800f6658(0x48);
    *DAT_8019ed44 = *DAT_8019ed44 << 2;
    FUN_800f3d48();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f9330();
    FUN_800f9330();
    while( true ) {
      FUN_800f6be0(0);
      FUN_800f4264(0x3f);
      FUN_800f55c0(1);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) break;
      FUN_800f55c0(0xb);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) break;
      *DAT_8019ed44 = *DAT_8019ed54;
      FUN_800f5410();
      FUN_800f4064(0x40);
      *DAT_8019ed54 = *DAT_8019ed44;
    }
    FUN_800f6be0(7);
    FUN_800f7500(0x14a);
    FUN_80128ad4();
    FUN_800f6be0(9);
    FUN_800f7500(0x154);
    FUN_80128ad4();
    FUN_800f95a0();
    FUN_800f6658(0x29);
    FUN_800f5410();
    FUN_800f4064(0xcc);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f95a0();
    FUN_800f6be0(0x6a5);
    FUN_800f922c();
    FUN_800f9660(0x20);
    FUN_800f6b68(0x6a4);
    FUN_800f95a0();
    FUN_80127538();
    FUN_800f9448();
    FUN_800f7594(0x29);
    FUN_800f654c(199);
    FUN_800f8960(0x152);
  }
  FUN_800f93dc();
  FUN_800f61e8();
  return;
}



