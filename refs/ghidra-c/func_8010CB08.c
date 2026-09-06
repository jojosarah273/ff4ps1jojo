
void FUN_8010cb08(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f8f74(0x8fd);
  FUN_8010d24c();
  FUN_800f6564(0xfde);
  FUN_800f8fb8(0x3e);
  FUN_800f5140();
  FUN_800f4f4c();
  uVar1 = FUN_800f3c3c(0x3e);
  FUN_800f7a40(uVar1);
  FUN_800f824c(0x3d);
  FUN_800f6564(0xfe5);
  iVar2 = FUN_800f6434(0x80);
  if (iVar2 == 0) {
    FUN_800f6564(0x1701);
    iVar2 = FUN_800f6434(2);
    if (iVar2 != 0) goto LAB_8010cb98;
  }
  FUN_800f62bc(0x3e);
  FUN_800f62bc(0x3e);
LAB_8010cb98:
  FUN_800f7270(0x3d);
  FUN_800f6c68(0x138000);
  FUN_800f824c(0x3d);
  FUN_800f6c68(0x138001);
  FUN_800f824c(0x3e);
  FUN_800f7270(0x3d);
  FUN_800f8d00(0x9cf);
  FUN_800f8d00(0x9d1);
  FUN_800f8f74(0x8fe);
  FUN_800f7210(0x9cf);
  while( true ) {
    FUN_800f6c68(0x138300);
    iVar2 = FUN_800f6434(2);
    if (iVar2 != 0) break;
    FUN_800f6240(0x8fe);
    *DAT_8019ed54 = *DAT_8019ed54 + 4;
  }
  FUN_800f6564(0x8fe);
  iVar2 = FUN_800f6434(0x202);
  if (iVar2 != 0) {
    FUN_800f8fb8(0xae);
    FUN_800f71dc(0);
    FUN_800f8d6c(0xaf);
    do {
      FUN_800f7210(0x9cf);
      FUN_800f6c68(0x138300);
      FUN_8010d61c();
      FUN_800f6630(6);
      FUN_800f5574(0x2e);
      iVar2 = FUN_800f53c0();
      if (iVar2 == 0) {
        FUN_800f654c(0);
      }
      else {
        FUN_800f5574(0x30);
        iVar2 = FUN_800f53c0();
        if (iVar2 == 0) {
          FUN_800f654c(3);
        }
        else {
          FUN_800f5574(0x46);
          iVar2 = FUN_800f53c0();
          if (iVar2 == 0) {
            FUN_800f654c(2);
          }
          else {
            FUN_800f654c(1);
          }
        }
      }
      FUN_800f824c(7);
      FUN_800f7210(0x9cf);
      FUN_800f7594(0xaf);
      FUN_800f6c68(0x138303);
      FUN_800f8960(0x901);
      FUN_800f4248(3);
      FUN_800f8960(0x909);
      FUN_800f61e8();
      FUN_800f8960(0x902);
      FUN_800f6d70(0x901);
      FUN_800f4248(0xfc);
      uVar1 = FUN_800f3c3c(7);
      FUN_800f78c4(uVar1);
      FUN_800f8960(0x901);
      FUN_800f6630(6);
      FUN_800f5574(0xe);
      iVar2 = FUN_800f53c0();
      if (iVar2 == 0) {
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6c68(0x15b2fa);
      }
      else {
        FUN_800f6c68(0x138303);
        FUN_800f4248(0xc);
        *DAT_8019ed40 = *DAT_8019ed40 >> 2;
        FUN_800f5410();
        FUN_800f4008(4);
      }
      FUN_800f8960(0x90d);
      FUN_800f7210(0x9cf);
      FUN_800f6c68(0x138300);
      FUN_800f8960(0x907);
      FUN_800f6c68(0x138301);
      iVar2 = FUN_800f6434(0x80);
      if (iVar2 == 0) {
        FUN_800f654c(0);
        FUN_800f8960(0x902);
      }
      FUN_800f6c68(0x138301);
      FUN_800f4248(0x3f);
      FUN_800f8960(0x904);
      FUN_800f824c(0xc);
      FUN_800f6c68(0x138302);
      FUN_800f8960(0x906);
      FUN_800f824c(0xe);
      FUN_800f6d70(0x907);
      FUN_8010d894();
      FUN_800f8960(0x90b);
      FUN_800f5574(0);
      iVar2 = FUN_800f53d4();
      if (iVar2 == 0) {
        FUN_8010d4ec();
      }
      FUN_800f654c(0);
      FUN_800f8960(0x8ff);
      FUN_800f8960(0x903);
      FUN_800f8960(0x905);
      FUN_800f8960(0x900);
      FUN_800f8960(0x908);
      FUN_800f8960(0x90c);
      FUN_800f6d70(0x904);
      FUN_800f824c(0x3d);
      FUN_800f6d70(0x906);
      FUN_800f824c(0x3e);
      FUN_800f7270(0x3d);
      FUN_800f6c68(0x7f5c71);
      FUN_800f824c(0x3d);
      FUN_800f8fb8(0x3e);
      uVar1 = FUN_800f3c3c(0x3d);
      FUN_800f4f28(uVar1);
      FUN_800f4f4c();
      uVar1 = FUN_800f3c3c(0x3e);
      FUN_800f7a40(uVar1);
      FUN_800f7270(0x3d);
      FUN_800f6b68(0xedc);
      FUN_800f7270(0xaf);
      FUN_800f4248(8);
      FUN_800f8768(0x90a);
      FUN_800f7210(0x9cf);
      *DAT_8019ed54 = *DAT_8019ed54 + 4;
      FUN_800f8d00(0x9cf);
      FUN_800f6630(0xaf);
      FUN_800f5410();
      FUN_800f4008(0xf);
      FUN_800f824c(0xaf);
      FUN_800f62bc(0xae);
      FUN_800f6630(0xae);
      uVar1 = FUN_800f3b04(0x8fe);
      FUN_800f54d4(uVar1);
      iVar2 = FUN_800f53d4();
    } while (iVar2 == 0);
    FUN_800f654c(0xc);
    FUN_800f824c(0xae);
    FUN_800f654c(0x18);
    FUN_8010d6a0();
    FUN_800f654c(0x1b);
    FUN_800f62bc(0xae);
    FUN_8010d6a0();
    FUN_800f654c(0x1c);
    FUN_800f62bc(0xae);
    FUN_8010d6a0();
    FUN_800f6564(0xfe1);
    FUN_800f4248(0xf);
    FUN_800f7500(0);
    FUN_8010d0d8();
    FUN_800f6564(0xfe1);
    *DAT_8019ed40 = *DAT_8019ed40 >> 4;
    FUN_800f7500(0x40);
    FUN_8010d0d8();
    FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
  }
  return;
}



