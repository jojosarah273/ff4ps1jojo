
void FUN_80134af8(void)

{
  int iVar1;
  
  FUN_800f654c(0);
  FUN_800f3d48();
  FUN_800f6564(0x1b39);
  FUN_800f5574(0xb0);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed44 << 3;
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f9660(0x20);
    FUN_800f6c68(0xf9106);
    FUN_800f4248(0x1f);
    FUN_800f5140();
    FUN_801224d0();
    FUN_800f9644(0x20);
    FUN_800f6cf4(0xfa550);
    FUN_800f8274(0x45);
    FUN_800f9660(0x20);
    FUN_800f7500(1);
    FUN_800f66d8(0xe5);
    FUN_800f4248(0xf);
    FUN_800f61e8();
    FUN_800f824c(0x48);
    FUN_800f8fb8(0x49);
    FUN_800f9644(0x20);
    FUN_800f6558(1);
    while( true ) {
      FUN_800f5dd4(0x48);
      iVar1 = FUN_800f5c64(2);
      if (iVar1 != 0) break;
      FUN_800f516c();
    }
    FUN_800f43a0(0x45);
    iVar1 = FUN_800f41e8(0x202);
    if (iVar1 != 0) {
      FUN_800f9660(0x20);
      FUN_800f5480();
      return;
    }
    FUN_800f9660(0x20);
  }
  FUN_800f5410();
  return;
}



