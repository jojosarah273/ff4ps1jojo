
void FUN_80125934(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x1a73);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f5d24(0x1a73);
  }
  else {
    FUN_800f654c(10);
    FUN_800f8188(0x1a73);
    FUN_800f654c(0xff);
    uVar2 = FUN_800f3b04(0x1a75);
    FUN_800f5ecc(uVar2);
    FUN_800f8188(0x1a75);
    iVar1 = FUN_800f5f20(2);
    if (iVar1 == 0) {
      FUN_800f7500(0xfe00);
    }
    else {
      FUN_800f7500(0xfe14);
    }
    FUN_800f71dc(5);
    do {
      FUN_800f9644(0x20);
      FUN_800f6de8(0);
      FUN_800f8274(0x1d);
      FUN_800f6de8(2);
      FUN_800f8274(0x1f);
      FUN_800f9660(0x20);
      FUN_800f9330();
      FUN_800f939c();
      FUN_80125130();
      FUN_800f960c();
      FUN_800f95a0();
      FUN_800f63bc();
      FUN_800f63bc();
      FUN_800f63bc();
      FUN_800f63bc();
      FUN_800f5e48();
      iVar1 = FUN_800f5c64(0x202);
    } while (iVar1 != 0);
  }
  return;
}



