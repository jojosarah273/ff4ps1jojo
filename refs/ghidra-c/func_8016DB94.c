
void FUN_8016db94(void)

{
  int iVar1;
  
  FUN_800f9644(0x20);
  FUN_800f4264(0x1ff);
  FUN_800f516c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6cf4(0x13e5c5);
  iVar1 = FUN_800f64ec(0x8080);
  if (iVar1 == 0) {
    *DAT_8019ed44 = ~*DAT_8019ed44;
    FUN_800f8274(0x10);
    FUN_8016d028();
    FUN_800f9644(0x20);
    FUN_800f6658(0x14);
    *DAT_8019ed44 = ~*DAT_8019ed44;
    FUN_800f6214();
    iVar1 = FUN_800f6180(0x8080);
    if (iVar1 != 0) {
LAB_8016dcb0:
      FUN_800f8274(0x14);
      FUN_800f971c();
      FUN_800f9660(0x20);
      FUN_800f5410();
      return;
    }
  }
  else {
    FUN_800f9644(0x20);
    FUN_800f8274(0x10);
    FUN_8016d028();
    FUN_800f9644(0x20);
    FUN_800f6658(0x14);
    iVar1 = FUN_800f64ec(0x80);
    if (iVar1 == 0) goto LAB_8016dcb0;
  }
  FUN_800f8274(0x14);
  FUN_800f971c();
  FUN_800f9660(0x20);
  FUN_800f5480();
  return;
}



