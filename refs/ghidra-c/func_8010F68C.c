
void FUN_8010f68c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8fb8(0x20);
  FUN_800f8fb8(0x24);
  FUN_800f8fb8(0x7a);
  do {
    FUN_800fe778();
    FUN_800f6630(0x20);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f5da0(0x20);
      FUN_800f6630(0x20);
      FUN_800f4248(1);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f6630(0x20);
        FUN_800f7864();
        FUN_800f824c(0x22);
        FUN_800f6630(0x5c);
        FUN_800f5410();
        uVar2 = FUN_800f3c3c(0x22);
        FUN_800f3f38(uVar2);
        DAT_8019ee68 = (ushort)*DAT_8019ed40;
        FUN_800f6630(0x5d);
        FUN_800f4008(0);
        DAT_8019ecfe = 1;
        DAT_8019ee68 = DAT_8019ee68 | (ushort)*DAT_8019ed40 << 8;
      }
    }
    FUN_800f6630(0x7a);
    FUN_800f4248(0x7f);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f62bc(0x24);
      FUN_800f6630(0x24);
      FUN_800f5574(3);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        return;
      }
      FUN_800f654c(4);
      FUN_800f824c(5);
      FUN_800f8fb8(4);
    }
    else {
      FUN_800f6630(0x7a);
      FUN_800f4248(0xf);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f8fb8(5);
        FUN_800f8fb8(4);
      }
    }
    FUN_800fe870();
    FUN_8011416c();
    FUN_800f654c(1);
    FUN_800f824c(0xd5);
    FUN_8010543c();
    FUN_80102770();
    FUN_800f6630(0x5c);
    FUN_800f5410();
    FUN_800f4008(0xf);
    FUN_800f4248(0x10);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f71dc(0);
    }
    else {
      FUN_800f71dc(0x18);
    }
    FUN_800f654c(0x60);
    FUN_800f824c(0xc);
    FUN_800f654c(0x50);
    FUN_800f824c(0xe);
    FUN_801105a4();
    FUN_800f6630(0x5c);
    FUN_800f4248(0xf);
    FUN_800f5574(0xf);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0x48);
      FUN_800fd804();
    }
    FUN_80173780();
    FUN_800f6630(0x7a);
    FUN_800f4248(0x7f);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f654c(0x20);
      FUN_800f824c(0x20);
    }
  } while( true );
}



