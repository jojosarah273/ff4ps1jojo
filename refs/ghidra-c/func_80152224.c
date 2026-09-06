
void FUN_80152224(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9660(0x10);
  FUN_800f8d40(0x96);
  FUN_800f58bc(0xff);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      uVar2 = FUN_800f3c3c(0x96);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f7248(0x97);
        FUN_800f5480();
        uVar2 = FUN_800f3c3c(0x96);
        FUN_800f7f48(uVar2);
        FUN_800f5574(0xff);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f61e8();
          FUN_800f8188(0x3947);
          FUN_800f8f74(0x3948);
          FUN_800f6b38(0x1900);
          *DAT_8019ed5c = *DAT_8019ed40;
          FUN_800f8cd4(0x3945);
          FUN_800f9644(0x10);
          FUN_8015254c();
          FUN_800f9660(0x10);
          FUN_800f5410();
          FUN_800f6564(0x394b);
          uVar2 = FUN_800f3c3c(0x96);
          FUN_800f3f38(uVar2);
          FUN_800f62bc(0x97);
        }
        else {
          FUN_800f6b38(0x1900);
        }
      }
    }
  }
  FUN_800f9644(0x10);
  return;
}



