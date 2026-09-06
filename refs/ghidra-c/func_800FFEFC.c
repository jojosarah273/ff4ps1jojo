
void FUN_800ffefc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x1705);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0xa4);
    iVar1 = FUN_800f6434(0x8080);
    if (iVar1 != 0) {
      return;
    }
    FUN_800f6564(0x1706);
    FUN_800f824c(0xc);
    FUN_800f6564(0x1707);
    FUN_800f5ccc();
  }
  else {
    FUN_800f6564(0x1705);
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6564(0x1705);
      FUN_800f5574(2);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6630(0xaa);
        iVar1 = FUN_800f6434(0x8080);
        if (iVar1 != 0) {
          return;
        }
        FUN_800f6564(0x1706);
        FUN_800f5ccc();
        FUN_800f824c(0xc);
        FUN_800f6564(0x1707);
        FUN_800f824c(0xe);
        goto LAB_80100064;
      }
      FUN_800f6630(0xa8);
      iVar1 = FUN_800f6434(0x8080);
      if (iVar1 != 0) {
        return;
      }
      FUN_800f6564(0x1706);
      FUN_800f824c(0xc);
      FUN_800f6564(0x1707);
      FUN_800f61e8();
    }
    else {
      FUN_800f6630(0xa6);
      iVar1 = FUN_800f6434(0x8080);
      if (iVar1 != 0) {
        return;
      }
      FUN_800f6564(0x1706);
      FUN_800f61e8();
      FUN_800f824c(0xc);
      FUN_800f6564(0x1707);
    }
  }
  FUN_800f824c(0xe);
LAB_80100064:
  FUN_800f6564(0x711);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_80100b30();
    FUN_800f7500(0);
    FUN_800f7270(0x3d);
    do {
      FUN_800f6c68(0x158500);
      uVar2 = FUN_800f3c3c(0xc);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6c68(0x158501);
        uVar2 = FUN_800f3c3c(0xe);
        FUN_800f54d4(uVar2);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f8d6c(0x40);
          *DAT_8019ed40 = *DAT_8019ed60;
          FUN_800f5410();
          uVar2 = FUN_800f3b04(0xfe7);
          FUN_800f3f38(uVar2);
          FUN_800f8188(0x8fc);
          FUN_801009e8();
          FUN_800f5574(0);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f6564(0x1705);
            FUN_800f9690();
            FUN_800f6b68(0x70c);
            FUN_800f5574(0x77);
            iVar1 = FUN_800f53d4();
            if (iVar1 == 0) {
              return;
            }
            FUN_800f654c(4);
            FUN_800f824c(0xb2);
            FUN_801082c8();
            FUN_80107c98();
            FUN_80107f3c();
            return;
          }
          FUN_800f6564(0x1705);
          FUN_800f9690();
          FUN_800f6b68(0x70c);
          FUN_800f5574(0x78);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f654c(0x16);
            FUN_800f824c(0xb2);
            FUN_800f654c(0x37);
            FUN_800fd804();
          }
          else {
            FUN_800f6630(0xc);
            FUN_800f824c(0x3d);
            FUN_800f6630(0xe);
            FUN_800f824c(0x3e);
            FUN_800f7270(0x3d);
            FUN_800f654c(0x77);
            FUN_800f885c(0x7f5c71);
            FUN_80105230();
            FUN_800f8d00(0x6fe);
            FUN_80100894();
            FUN_800f654c(0x30);
            FUN_800fd804();
            FUN_800f654c(1);
            FUN_800f824c(0xd4);
            FUN_800f654c(1);
            FUN_800f824c(0xb2);
          }
          FUN_800f7270(0x40);
          FUN_800f6c68(0x158503);
          FUN_800f824c(9);
          FUN_800f6c68(0x158504);
          FUN_800f824c(8);
          FUN_800f6630(9);
          FUN_800f4248(0x40);
          iVar1 = FUN_800f4120(2);
          if (iVar1 == 0) {
            FUN_800f6630(8);
            FUN_800f824c(0xc6);
            FUN_800f6564(0x1701);
            *DAT_8019ed40 = *DAT_8019ed40 << 5;
            FUN_800f824c(8);
            FUN_800f6630(9);
            FUN_800f4248(0x1f);
            FUN_800f5410();
            uVar2 = FUN_800f3c3c(8);
            FUN_800f3f38(uVar2);
            FUN_800f5410();
            FUN_800f4008(0xc0);
            FUN_800f8188(0x1800);
            FUN_800f654c(1);
            FUN_800f8188(0x1801);
            FUN_800fd404();
            FUN_800f654c(1);
            FUN_800f824c(0x85);
            FUN_800f654c(3);
            FUN_800f824c(0xb2);
          }
          else {
            FUN_800f6630(9);
            FUN_800f4248(0x80);
            iVar1 = FUN_800f4120(2);
            if (iVar1 == 0) {
              FUN_800f6630(8);
              FUN_800f8188(0x8fb);
              FUN_801082c8();
              FUN_80107c98();
              FUN_80107f3c();
              FUN_801005dc();
              return;
            }
            FUN_800f62bc(0xb2);
            FUN_800f6630(8);
            FUN_800f4248(0x7f);
            FUN_800f824c(0x18);
            FUN_800f8fb8(0x19);
            FUN_800f6630(8);
            FUN_800f4248(0x80);
            iVar1 = FUN_800f4120(0x202);
            if (iVar1 == 0) {
              FUN_800f71dc(10);
            }
            else {
              FUN_800f71dc(1000);
            }
            FUN_800f8d6c(0x1a);
            FUN_80174f0c();
            FUN_801196b0();
            FUN_801004d4();
          }
          FUN_801082c8();
          FUN_80107c98();
          FUN_80107f3c();
          return;
        }
      }
      *DAT_8019ed54 = *DAT_8019ed54 + 5;
      FUN_800f63bc();
      *DAT_8019ed40 = *DAT_8019ed60;
      uVar2 = FUN_800f3b04(0x711);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
  }
  return;
}



