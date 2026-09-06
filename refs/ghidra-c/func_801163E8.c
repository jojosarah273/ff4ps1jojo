
undefined4 FUN_801163e8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f8fb8(0x3e);
  FUN_800f5140();
  FUN_800f4f4c();
  uVar1 = FUN_800f3c3c(0x3e);
  FUN_800f7a40(uVar1);
  FUN_800f824c(0x3d);
  FUN_800f7270(0x3d);
  FUN_800f6c68(0x128000);
  FUN_800f8188(0x9d3);
  FUN_800f6c68(0x128001);
  FUN_800f8188(0x9d4);
  FUN_800f654c(0xf);
  FUN_800f824c(0x80);
  do {
    FUN_800f7500(0);
    FUN_800f654c(1);
    FUN_800f8188(0xa15);
    FUN_800f7210(0x9d3);
    FUN_800f6c68(0x128200);
    FUN_800f5574(0xff);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) {
      FUN_800f6564(0x1703);
      FUN_800f8fb8(0x3d);
      FUN_800f7864();
      FUN_800f76e8();
      uVar1 = FUN_800f3c3c(0x3d);
      FUN_800f7cc8(uVar1);
      FUN_800f7864();
      FUN_800f76e8();
      uVar1 = FUN_800f3c3c(0x3d);
      FUN_800f7cc8(uVar1);
      FUN_800f824c(0x3e);
      FUN_800f7270(0x3d);
      FUN_800f6b68(0x1000);
      iVar2 = FUN_800f6434(0x202);
      if (iVar2 == 0) {
        FUN_80175e08();
      }
      FUN_800f654c(1);
      FUN_800f824c(0xe0);
      return 0;
    }
    FUN_800f5574(0xeb);
    iVar2 = FUN_800f53d4();
    if (iVar2 == 0) {
      FUN_800f5574(0xdb);
      iVar2 = FUN_800f53c0();
      if (iVar2 != 0) {
        FUN_800f5574(0xe2);
        iVar2 = FUN_800f53d4();
        if (iVar2 == 0) {
          FUN_800f5574(0xfe);
          iVar2 = FUN_800f53d4();
          if (iVar2 != 0) {
            FUN_800f8960(0x9d5);
            FUN_800f6364();
            FUN_800f63bc();
            FUN_800f6c68(0x128200);
            FUN_800f8960(0x9d5);
            FUN_800f6364();
            FUN_800f63bc();
            FUN_800f6c68(0x128200);
            goto LAB_80116668;
          }
        }
        else {
LAB_80116668:
          FUN_800f8960(0x9d5);
          FUN_800f6364();
          FUN_800f63bc();
          FUN_800f6c68(0x128200);
        }
        FUN_800f8960(0x9d5);
        FUN_800f6364();
        FUN_800f63bc();
        FUN_800f6c68(0x128200);
      }
      FUN_800f8960(0x9d5);
      FUN_800f6364();
      FUN_800f63bc();
    }
    else {
      FUN_800f6364();
      FUN_800f6c68(0x128200);
      FUN_800f8188(0xa15);
      FUN_800f6364();
      FUN_800f6c68(0x128200);
      FUN_800f824c(7);
      FUN_800f6364();
      do {
        FUN_800f6c68(0x128200);
        FUN_800f8960(0x9d5);
        FUN_800f6364();
        FUN_800f63bc();
        FUN_800f5da0(7);
        iVar2 = FUN_800f5b8c(0x202);
      } while (iVar2 != 0);
    }
    FUN_800f8d00(0x9d3);
    FUN_800f654c(0xff);
    FUN_800f8960(0x9d5);
    do {
      iVar2 = FUN_80116720();
      if (iVar2 != 0) {
        return 1;
      }
      FUN_800f5d24(0xa15);
      iVar2 = FUN_800f5b8c(0x202);
    } while (iVar2 != 0);
  } while( true );
}



