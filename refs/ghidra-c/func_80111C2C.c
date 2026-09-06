
void FUN_80111c2c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f7500(0x1c0);
  FUN_800f71dc(0);
  FUN_800f8fb8(0xc);
  FUN_800f8fb8(0xe);
  while( true ) {
    FUN_800f6630(0xc);
    FUN_800f5410();
    uVar1 = FUN_800f3c3c(0x2c);
    FUN_800f3f38(uVar1);
    FUN_800f8960(0x300);
    FUN_800f6630(0xe);
    FUN_800f5410();
    uVar1 = FUN_800f3c3c(0x2e);
    FUN_800f3f38(uVar1);
    FUN_800f8960(0x301);
    FUN_800f6c68(0x14f5d6);
    FUN_800f8960(0x302);
    FUN_800f6c68(0x14f5d7);
    FUN_800f8960(0x303);
    FUN_800f6630(0xc);
    FUN_800f5410();
    FUN_800f4008(0x10);
    FUN_800f4248(0x3f);
    FUN_800f824c(0xc);
    iVar2 = FUN_800f4120(0x202);
    if (iVar2 == 0) {
      FUN_800f6630(0xe);
      FUN_800f5410();
      FUN_800f4008(0x10);
      FUN_800f824c(0xe);
    }
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    *DAT_8019ed58 = *DAT_8019ed58 + 4;
    FUN_800f5958(0x20);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) break;
    FUN_800f5958(0x10);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) {
      FUN_800f7500(0x10);
    }
  }
  FUN_8011416c();
  FUN_800f654c(0xaa);
  FUN_800f8188(0x51c);
  FUN_800f8188(0x51d);
  return;
}



