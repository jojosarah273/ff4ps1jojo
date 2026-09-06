
void FUN_80126bb8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f926c();
  FUN_800f9298();
  DAT_8019ee54 = 1;
  FUN_80178bb4();
  while( true ) {
    FUN_8016ea9c();
    FUN_800f654c(0x7e);
    FUN_800f9200();
    FUN_800f9448();
    FUN_800f8f74(0x1b9a);
    FUN_800f71dc(0x1be4);
    uVar1 = FUN_800f3b04(0x1a5f);
    FUN_800f56ac(uVar1);
    iVar2 = FUN_800f53d4();
    if (iVar2 == 0) {
      FUN_800f8d00(0x1a5f);
      FUN_800f8f74(0x1a3c);
      FUN_80128264();
      FUN_8011f864();
    }
    FUN_80128480();
    FUN_80128b3c();
    DAT_8019eda6 = 0;
    FUN_801793f8(2);
    if (DAT_8019edc2 == 2) {
      FUN_800f8f74(0x1a3c);
    }
    if (DAT_8019ee4e == -1) {
      FUN_800ff0ac();
    }
    FUN_80128480();
    FUN_80128b3c();
    iVar2 = FUN_800f53c0();
    if (iVar2 != 0) goto LAB_80126d00;
    DAT_8019edc4 = 0;
    FUN_80126e08();
    if (DAT_8019edc4 != 1) break;
    FUN_80126610();
    FUN_80178bb4();
  }
  FUN_80126d48();
LAB_80126d00:
  FUN_80122114();
  DAT_8019ee54 = 0;
  FUN_800f971c();
  FUN_800f3d48();
  FUN_800f65c8(0x17fb);
  FUN_800f94b8();
  FUN_800f9448();
  return;
}



