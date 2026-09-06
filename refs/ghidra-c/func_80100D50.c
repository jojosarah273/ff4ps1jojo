
bool FUN_80100d50(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8fb8(0xcd);
  FUN_800f6630(0xab);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f8fb8(0x7b);
  }
  FUN_800f6630(0xac);
  FUN_800f9690();
  FUN_800f6630(0x7b);
  *DAT_8019ed40 = *DAT_8019ed40 & (&DAT_80198ae0)[*DAT_8019ed54];
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f8fb8(0xd5);
    return false;
  }
  FUN_800f654c(1);
  FUN_800f824c(0xd5);
  FUN_80102c30();
  FUN_800f6630(0xa1);
  FUN_800f4248(8);
  FUN_800f8188(0x1a02);
  FUN_800f6564(0x1706);
  iVar1 = FUN_800f6434(0x80);
  uVar2 = 0xd1;
  if (iVar1 == 0) {
    FUN_800f5574(0x20);
    iVar1 = FUN_800f53c0();
    uVar2 = 0xd1;
    if (iVar1 == 0) {
      FUN_800f6564(0x1707);
      iVar1 = FUN_800f6434(0x80);
      uVar2 = 0xd1;
      if (iVar1 == 0) {
        FUN_800f5574(0x20);
        iVar1 = FUN_800f53c0();
        uVar2 = 0xd1;
        if (iVar1 == 0) {
          FUN_800f6630(0xa2);
          iVar1 = FUN_800f6434(0x80);
          if (iVar1 == 0) {
            FUN_800f6630(0xa2);
            FUN_800f4248(0x10);
            iVar1 = FUN_800f4120(0x202);
            if (iVar1 == 0) {
              FUN_800f6630(0xa1);
              FUN_800f4248(8);
              iVar1 = FUN_800f4120(0x202);
              if (iVar1 == 0) {
                FUN_800f654c(1);
                FUN_800f824c(0xd6);
                return false;
              }
            }
          }
          FUN_800f6630(0xd6);
          iVar1 = FUN_800f6434(0x202);
          if (iVar1 == 0) {
            return false;
          }
          FUN_800f8fb8(0xd6);
          FUN_800f6630(0xa1);
          FUN_800f4248(8);
          iVar1 = FUN_800f4120(2);
          if (iVar1 == 0) {
            FUN_800f654c(1);
            FUN_800f824c(0xb1);
            DAT_800d067b = 0;
            DAT_800d0677 = DAT_800d0677 & 0xf;
            FUN_800f654c(0x76);
            FUN_801163e8();
            FUN_800f8fb8(0xb1);
            return false;
          }
          FUN_800f6630(0xa2);
          iVar1 = FUN_800f6434(0x80);
          uVar2 = 0xd1;
          if (iVar1 != 0) {
            FUN_800f6564(0x1702);
            FUN_800f824c(0x3d);
            FUN_800f8fb8(0x3e);
            uVar2 = FUN_800f3c3c(0x3d);
            FUN_800f4f28(uVar2);
            FUN_800f4f4c();
            uVar2 = FUN_800f3c3c(0x3e);
            FUN_800f7a40(uVar2);
            FUN_800f6564(0x1701);
            iVar1 = FUN_800f6434(2);
            if (iVar1 == 0) {
              FUN_800f62bc(0x3e);
              FUN_800f62bc(0x3e);
            }
            FUN_800f7270(0x3d);
            FUN_800f6c68(0x158200);
            FUN_800f824c(0x3d);
            FUN_800f6c68(0x158201);
            FUN_800f824c(0x3e);
            FUN_800f7270(0x3d);
            do {
              FUN_800f6c68(0x158500);
              uVar2 = FUN_800f3b04(0x1706);
              FUN_800f54d4(uVar2);
              iVar1 = FUN_800f53d4();
              if (iVar1 != 0) {
                FUN_800f6c68(0x158501);
                uVar2 = FUN_800f3b04(0x1707);
                FUN_800f54d4(uVar2);
                iVar1 = FUN_800f53d4();
                if (iVar1 != 0) goto LAB_80101098;
              }
              *DAT_8019ed54 = *DAT_8019ed54 + 5;
            } while( true );
          }
        }
      }
    }
  }
LAB_80101214:
  FUN_800f62bc(uVar2);
  return false;
LAB_80101098:
  FUN_800f6c68(0x158502);
  FUN_800f5574(0xff);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6c68(0x158503);
    iVar1 = FUN_8011aeac();
    return iVar1 != 0;
  }
  FUN_80101230();
  FUN_800f6c68(0x158502);
  FUN_800f5574(0xfb);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    FUN_800f9330();
    FUN_800fd6b8();
    FUN_800fec74();
    FUN_800f95a0();
    FUN_800f6c68(0x158502);
    FUN_800f5480();
    FUN_800f8058(0xfb);
    FUN_800f8188(0x1700);
    FUN_800f6c68(0x158503);
    FUN_800f8188(0x1706);
    FUN_800f6c68(0x158504);
    FUN_800f8188(0x1707);
    FUN_800f62bc(0xcd);
    FUN_800f71dc(0);
    FUN_800f8d00(0x172c);
    return false;
  }
  FUN_800f8188(0x1702);
  FUN_800f6c68(0x158503);
  FUN_800f4248(0x3f);
  FUN_800f8188(0x1706);
  FUN_800f6c68(0x158503);
  FUN_800f4248(0xc0);
  *DAT_8019ed40 = *DAT_8019ed40 >> 6;
  FUN_800f8188(0x1705);
  FUN_800f6c68(0x158504);
  FUN_800f8188(0x1707);
  FUN_800fec74();
  FUN_800f654c(3);
  FUN_800f8188(0x1700);
  uVar2 = 0xcd;
  goto LAB_80101214;
}



