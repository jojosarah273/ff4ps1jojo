
void FUN_80101350(void)

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
    return;
  }
  FUN_800f654c(1);
  FUN_800f824c(0xd5);
  FUN_80102c30();
  FUN_800f8f74(0x1a02);
  FUN_800f6564(0x1704);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6240(0x1a02);
  }
  FUN_800f6564(0x1704);
  FUN_800f5574(4);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6564(0x6b7);
    FUN_800f5574(0x10);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6564(0x1700);
      FUN_800f5574(0);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6564(0x1700);
        FUN_800f5574(1);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) goto LAB_801014c0;
        FUN_800f654c(0x2f);
      }
      else {
        FUN_800f654c(0x2d);
      }
LAB_80101610:
      FUN_8011aeac();
      return;
    }
  }
LAB_801014c0:
  FUN_800f6630(0xa2);
  iVar1 = FUN_800f6434(0x80);
  if (iVar1 == 0) {
    FUN_800f654c(1);
    FUN_800f824c(0xd6);
  }
  else {
    FUN_800f6564(0x1704);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) {
      FUN_800f6630(0xd6);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 != 0) {
        FUN_800f8fb8(0xd6);
        FUN_800f6564(0x1700);
        FUN_800f5140();
        FUN_800f9690();
        FUN_800f6c68(0x158000);
        FUN_800f824c(0x3d);
        FUN_800f6c68(0x158001);
        FUN_800f824c(0x3e);
        FUN_800f7270(0x3d);
        do {
          FUN_800f6c68(0x158006);
          uVar2 = FUN_800f3b04(0x1706);
          FUN_800f54d4(uVar2);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_800f6c68(0x158007);
            uVar2 = FUN_800f3b04(0x1707);
            FUN_800f54d4(uVar2);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) goto LAB_801015e4;
          }
          *DAT_8019ed54 = *DAT_8019ed54 + 5;
        } while( true );
      }
    }
  }
  return;
LAB_801015e4:
  FUN_800f6c68(0x158008);
  FUN_800f5574(0xff);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f9330();
    FUN_800f7210(0x172c);
    FUN_800f6564(0x1700);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f654c(1);
    }
    FUN_800f8188(0x1701);
    FUN_800f6564(0x1700);
    FUN_800f5410();
    FUN_800f4008(0xfb);
    FUN_800f8768(0x172e);
    FUN_800f65c8(0x1706);
    FUN_800f8768(0x172f);
    FUN_800f6564(0x1707);
    FUN_800f8768(0x1730);
    *DAT_8019ed54 = *DAT_8019ed54 + 3;
    FUN_800f5958(0xc0);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      FUN_800f71dc(0);
    }
    FUN_800f8d00(0x172c);
    FUN_800f95a0();
    FUN_800f6c68(0x158008);
    FUN_800f8188(0x1702);
    FUN_800f6c68(0x158009);
    FUN_800f4248(0x3f);
    FUN_800f8188(0x1706);
    FUN_800f6c68(0x15800a);
    FUN_800f8188(0x1707);
    FUN_800f6c68(0x158009);
    FUN_800f4248(0xc0);
    *DAT_8019ed40 = *DAT_8019ed40 >> 6;
    FUN_800f8188(0x1705);
    FUN_800fd6b8();
    FUN_800fec74();
    FUN_800f62bc(0xcd);
    FUN_800f654c(3);
    FUN_800f8188(0x1700);
    return;
  }
  FUN_800f6c68(0x158009);
  goto LAB_80101610;
}



