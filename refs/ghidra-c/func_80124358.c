
void FUN_80124358(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_800f6630(0x5a);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_800f654c(0);
    FUN_800f3d48();
    FUN_800f6630(0x5c);
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f3d48();
    FUN_800f9644(0x20);
    FUN_800f5410();
    FUN_800f4064(0x8000);
    FUN_800f8274(0x1f);
    FUN_800f6558(0x600);
    FUN_800f8274(0x22);
    FUN_800f9660(0x20);
    FUN_800f654c(0x1a);
    FUN_800f824c(0x21);
    FUN_800f6630(0x5b);
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_801224d0();
    FUN_800f9644(0x20);
    FUN_800f6cf4(0x1efd73);
    FUN_800f8274(0x1d);
    FUN_800f9660(0x20);
    FUN_8011f320();
    FUN_8011ee34();
    uVar2 = (uint)DAT_800d0123;
    uVar3 = (uint)CONCAT11(DAT_800d011e,DAT_800d011d);
    FUN_800f971c();
    FUN_800f3d48();
    FUN_800f6630(0x5c);
    FUN_800f4248(0xf);
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed44 << 5;
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f9660(0x20);
    FUN_800f6630(0x5b);
    *DAT_8019ed40 = *DAT_8019ed40 << 5;
    FUN_800f824c(0x43);
    FUN_800f7594(0x43);
    FUN_800f654c(0x20);
    FUN_800f824c(0x45);
    do {
      FUN_800f6c68(0x1cfd00);
      FUN_800f8960(0xfe28);
      FUN_800f6364();
      FUN_800f63bc();
      FUN_800f5da0(0x45);
      iVar1 = FUN_800f5b8c(0x202);
    } while (iVar1 != 0);
    iVar1 = uVar3 - (uVar3 & 0xe000);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    FUN_801813c0(&DAT_801cfd68 + uVar3,0x300,iVar1 >> 5 & 0xfff8,
                 (int)((((uVar2 << 8) >> 9) + 1) * 0x10000) >> 0x10);
  }
  return;
}



