
void FUN_8016d600(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f5574(1);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(10);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_8016d768();
      FUN_800f6ea8(0x36);
      FUN_800f824c(0);
      do {
        FUN_800f654c(0xff);
        FUN_8016d730();
        FUN_800f5da0(0);
        iVar1 = FUN_800f5b8c(0x202);
      } while (iVar1 != 0);
    }
    else {
      FUN_8016d730();
    }
  }
  else {
    FUN_800f6564(0x7d1d);
    FUN_800f9644(0x20);
    FUN_800f922c();
    FUN_800f516c();
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0x39);
    FUN_800f3f94(uVar2);
    FUN_800f8274(0x39);
    FUN_800f9410();
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0x39);
    FUN_800f3f94(uVar2);
    FUN_800f8274(0x3c);
    FUN_800f971c();
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f9660(0x20);
  }
  return;
}



