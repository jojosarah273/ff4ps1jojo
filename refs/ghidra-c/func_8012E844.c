
void FUN_8012e844(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8d6c(0x1d);
  FUN_800f8d6c(0x1f);
  FUN_800f9644(0x20);
  *DAT_8019ed44 = *DAT_8019ed54;
  FUN_800f55c0(0x1340);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5410();
    FUN_800f4064(0x5e);
  }
  else {
    FUN_800f5410();
    FUN_800f4064(0xfa);
  }
  FUN_800f8274(0x21);
  FUN_800f6214();
  FUN_800f6214();
  FUN_800f8274(0x25);
  FUN_800f9660(0x20);
  FUN_800f6364();
  do {
    FUN_800f7500(2);
    FUN_800f7270(0x1f);
    FUN_800f6364();
    FUN_800f8d6c(0x23);
    do {
      FUN_800f6e30(0x1f);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        uVar2 = FUN_800f3a70(0x1f);
        iVar1 = FUN_800f3b04(uVar2);
        FUN_800f54d4(iVar1 + (uint)*DAT_8019ed58);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) goto LAB_8012e9cc;
        FUN_800f63bc();
        FUN_800f66d8(0x1f);
        FUN_800f5410();
        uVar2 = FUN_800f3a70(0x23);
        uVar2 = FUN_800f3b04(uVar2);
        FUN_800f3f38(uVar2);
        FUN_800f5574(100);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f8a18(0x23);
          FUN_800f654c(0);
          FUN_800f82ec(0x1f);
          FUN_800f5ea0();
          FUN_800f82ec(0x1f);
          goto LAB_8012e9cc;
        }
      }
      else {
LAB_8012e9cc:
        FUN_800f63bc();
      }
      FUN_800f63bc();
      FUN_800f9644(0x20);
      *DAT_8019ed44 = *DAT_8019ed58;
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0x1f);
      FUN_800f3f94(uVar2);
      uVar2 = FUN_800f3c3c(0x25);
      FUN_800f5520(uVar2);
      FUN_800f9660(0x20);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f9644(0x20);
    FUN_800f62f0(0x1f);
    FUN_800f62f0(0x1f);
    FUN_800f9660(0x20);
    FUN_800f7270(0x1f);
    uVar2 = FUN_800f3c3c(0x21);
    FUN_800f56ac(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f7270(0x1d);
      FUN_800f9330();
      FUN_8012eac0();
      FUN_800f95a0();
      FUN_800f8d6c(0x1d);
      FUN_8012eac0();
      return;
    }
  } while( true );
}



