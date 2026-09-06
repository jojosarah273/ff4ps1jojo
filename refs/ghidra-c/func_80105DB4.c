
void FUN_80105db4(void)

{
  int iVar1;
  
  FUN_800f8fb8(0xdc);
  do {
    FUN_800fe7b0();
    FUN_801096f0();
    FUN_801060a8();
    FUN_800f62bc(0xdc);
    FUN_800f6630(0xdc);
    FUN_800f5574(6);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f654c(1);
  FUN_800f824c(0x54);
  FUN_800f8fb8(0x8c);
  do {
    FUN_800fe7b0();
    FUN_801096f0();
    FUN_801764dc();
    FUN_800f6630(2);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0x54);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f62bc(0x54);
        goto LAB_80105fb8;
      }
    }
    FUN_800f6630(3);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0x55);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f62bc(0x55);
        FUN_800f654c(1);
        FUN_800f824c(0x8c);
LAB_80105fb8:
        FUN_80106830();
        FUN_800f6630(0x8c);
        FUN_800f824c(0xdb);
        FUN_800f5da0(0xdc);
        do {
          FUN_800fe7b0();
          FUN_801096f0();
          FUN_801060a8();
          FUN_800f5da0(0xdc);
          iVar1 = FUN_800f5b8c(0x8080);
        } while (iVar1 != 0);
        FUN_800fe7b0();
        FUN_801096f0();
        FUN_800f6630(0x3d);
        FUN_800f5480();
        FUN_800f8058(0x20);
        FUN_800f824c(0x3d);
        FUN_800f6630(0x3e);
        FUN_800f8058(0);
        FUN_800f824c(0x3e);
        FUN_801062e8();
        FUN_800f6630(0x3d);
        FUN_800f5480();
        FUN_800f8058(0x20);
        FUN_800f824c(0x3d);
        FUN_800f6630(0x3e);
        FUN_800f8058(0);
        FUN_800f824c(0x3e);
        FUN_801062e8();
        return;
      }
    }
    FUN_800f6630(1);
    FUN_800f4248(0xc);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0x8c);
      *DAT_8019ed40 = *DAT_8019ed40 ^ 1;
      FUN_800f824c(0x8c);
      FUN_800f6630(0x8c);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f654c(0x14);
      }
      else {
        FUN_800f654c(0xff);
      }
      DAT_801d4ef0 = *DAT_8019ed40 + 0x2000;
      FUN_800f6630(0x8c);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f654c(0x14);
      }
      else {
        FUN_800f654c(0xff);
      }
      DAT_801d4f70 = *DAT_8019ed40 + 0x2000;
      FUN_80106860();
    }
  } while( true );
}



