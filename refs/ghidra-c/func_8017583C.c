
void FUN_8017583c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0x93);
  FUN_800f4248(0x3f);
  FUN_800f824c(0x3e);
  FUN_800f8fb8(0x3d);
  FUN_800f7270(0x3d);
  FUN_800f6564(0x1282);
  FUN_800f4248(0x10);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6630(0x93);
    FUN_800f5574(0x39);
    iVar1 = FUN_800f53d4();
    uVar2 = 0x2d;
    if (iVar1 != 0) {
LAB_801758c4:
      FUN_800f654c(uVar2);
      FUN_800f885c(0x7f5ce7);
      FUN_800f61e8();
      FUN_800f885c(0x7f5ce8);
      return;
    }
    FUN_800f5574(0x3a);
    iVar1 = FUN_800f53d4();
    uVar2 = 0x3d;
    if (iVar1 != 0) goto LAB_801758c4;
  }
  FUN_800f6564(0x1281);
  FUN_800f4248(0x40);
  iVar1 = FUN_800f4120(2);
  if (iVar1 != 0) {
LAB_80175a00:
    FUN_800f6564(0x1286);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 != 0) {
      return;
    }
    FUN_800f6630(0x93);
    FUN_800f5574(0xd2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0x13);
      FUN_800f885c(0x7f5cdb);
      return;
    }
    FUN_800f5574(0xd3);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(0xd4);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f654c(0x13);
        FUN_800f885c(0x7f5cd9);
        FUN_800f885c(0x7f5cda);
        FUN_800f885c(0x7f5cdb);
        FUN_800f885c(0x7f5cdc);
        FUN_800f885c(0x7f5cdd);
        return;
      }
      FUN_800f5574(0xd5);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(0xd6);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          return;
        }
        FUN_800f654c(0x13);
        FUN_800f885c(0x7f5cdb);
        return;
      }
    }
    FUN_800f654c(0x13);
    FUN_800f885c(0x7f5cda);
    FUN_800f885c(0x7f5cdb);
    FUN_800f885c(0x7f5cdc);
    return;
  }
  FUN_800f6630(0x93);
  FUN_800f5574(0x76);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(0x77);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0x12);
      FUN_800f885c(0x7f5cd2);
      FUN_800f654c(0x13);
      FUN_800f885c(0x7f5cd3);
      FUN_800f885c(0x7f5cd4);
      FUN_800f885c(0x7f5cd5);
      FUN_800f654c(0x14);
      goto LAB_801759f0;
    }
    FUN_800f5574(0x78);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto LAB_80175a00;
  }
  FUN_800f654c(0x13);
  FUN_800f885c(0x7f5cd2);
  FUN_800f885c(0x7f5cd3);
  FUN_800f885c(0x7f5cd4);
  FUN_800f885c(0x7f5cd5);
LAB_801759f0:
  FUN_800f885c(0x7f5cd6);
  return;
}



