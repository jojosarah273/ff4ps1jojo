
void FUN_8012dd58(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6240(0x1b27);
  FUN_800f6240(0x1bb8);
  FUN_800f62bc(0x84);
  while( true ) {
    FUN_80122ff4();
    FUN_800f6630(0xe8);
    FUN_800f5574(0x7f);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) break;
    FUN_800f654c(1);
    uVar2 = FUN_800f3b04(0x16a8);
    FUN_800f5ecc(uVar2);
    FUN_800f8188(0x16a8);
    FUN_80122a9c();
    FUN_80122538();
    FUN_80126528();
    FUN_8011ef0c();
  }
  FUN_800f6630(0xe8);
  iVar1 = FUN_800f6434(0x8080);
  if (iVar1 == 0) {
    FUN_800f8fb8(0xe8);
  }
  else {
    do {
      FUN_800f6630(0xe7);
      *DAT_8019ed40 = *DAT_8019ed40 << 3;
      FUN_800f824c(0x45);
      *DAT_8019ed40 = *DAT_8019ed40 << 1;
      FUN_800f5140();
      FUN_800f4f4c();
      uVar2 = FUN_800f3c3c(0x45);
      FUN_800f3f38(uVar2);
      FUN_800f4008(0x14);
      FUN_800f824c(0x46);
      FUN_800f654c(4);
      FUN_800f824c(0x45);
      FUN_8011f6ac();
      FUN_800f6630(0xe8);
      FUN_800f824c(0xd9);
      FUN_800f8f74(0x1b27);
      FUN_80122ff4();
      FUN_800f6630(0xe8);
      iVar1 = FUN_800f6434(0x8080);
      if (iVar1 == 0) {
        FUN_800f8fb8(0xe8);
        FUN_8012b0d8();
        FUN_8012b168();
        return;
      }
      FUN_800f824c(0xda);
      uVar2 = FUN_800f3c3c(0xd9);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
    } while (iVar1 != 0);
    FUN_800f6630(0xd9);
    FUN_8012d204();
    FUN_800f824c(0x45);
    FUN_800f6630(0xda);
    FUN_8012d204();
    uVar2 = FUN_800f3c3c(0x45);
    FUN_800f78c4(uVar2);
    iVar1 = FUN_800f7918(0x202);
    if (iVar1 == 0) {
      FUN_8012b0d8();
    }
    else {
      FUN_80124298();
      FUN_8012e5a8();
      FUN_800f9644(0x20);
      FUN_800f6658(0xda);
      FUN_800f4264(0xff);
      *DAT_8019ed44 = *DAT_8019ed44 << 5;
      FUN_800f516c();
      FUN_800f5050();
      FUN_800f4064(0x1000);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f9330();
      FUN_800f7500(0xf600);
      FUN_800f6558(0x3f);
      FUN_800f3d64(0x7e);
      FUN_800f960c();
      FUN_800f6658(0xd9);
      FUN_800f4264(0xff);
      *DAT_8019ed44 = *DAT_8019ed44 << 5;
      FUN_800f516c();
      FUN_800f5050();
      FUN_800f4064(0x1000);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f9330();
      FUN_800f6558(0x3f);
      FUN_800f3d64(0x7e7e);
      FUN_800f960c();
      FUN_800f71dc(0xf600);
      FUN_800f6558(0x3f);
      FUN_800f3d64(0x7e7e);
      FUN_800f9660(0x20);
      FUN_800f6630(0xd9);
      FUN_801224d0();
      FUN_800f6b68(0x16b9);
      FUN_800f9200();
      *DAT_8019ed58 = *DAT_8019ed54;
      FUN_800f6630(0xda);
      FUN_801224d0();
      FUN_800f6b68(0x16b9);
      FUN_800f8960(0x16b9);
      FUN_800f93dc();
      FUN_800f8768(0x16b9);
      FUN_801772e4();
      FUN_80125a64();
      FUN_8012b0d8();
      FUN_80122a9c();
      FUN_80122538();
      FUN_80126528();
      FUN_8011ef0c();
      FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
    }
  }
  return;
}



