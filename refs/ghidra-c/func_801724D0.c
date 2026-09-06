
void FUN_801724d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f926c();
  FUN_800f654c(0x15);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6564(0x1718);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6564(0x1701);
    uVar2 = FUN_800f3b04(0x171b);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6564(0x1704);
      FUN_800f5574(3);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6564(0x6d0);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f6564(0x6f8);
          iVar1 = FUN_800f6434(0x202);
          if (iVar1 == 0) {
            FUN_800f6564(0x1705);
            *DAT_8019ed40 = *DAT_8019ed40 << 4;
          }
          else {
            FUN_800f654c(0x40);
          }
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f7500(0);
          do {
            FUN_800f6b68(0xb816);
            FUN_800f8960(0x480);
            FUN_800f6b68(0xb817);
            FUN_800f5410();
            uVar2 = FUN_800f3b04(0x6f8);
            FUN_800f3f38(uVar2);
            FUN_800f8960(0x481);
            FUN_800f6b68(0xb818);
            FUN_800f8960(0x482);
            FUN_800f6b68(0xb819);
            FUN_800f8960(0x483);
            FUN_800f6364();
            FUN_800f6364();
            FUN_800f6364();
            FUN_800f6364();
            FUN_800f63bc();
            FUN_800f63bc();
            FUN_800f63bc();
            FUN_800f63bc();
            FUN_800f5a90(0x10);
            iVar1 = FUN_800f53d4();
          } while (iVar1 == 0);
          goto LAB_80172980;
        }
        FUN_800f6630(0xad);
        FUN_800f5574(0x20);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f4248(0xf);
          iVar1 = FUN_800f4120(0x202);
          if (iVar1 != 0) goto LAB_80172980;
        }
        FUN_800f6564(0x1719);
        FUN_800f824c(0xc);
        FUN_800f6564(0x171a);
        FUN_800f824c(0xe);
        FUN_80173ed8();
        FUN_800f6630(0xd7);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) goto LAB_80172980;
        FUN_800f6630(0xad);
        FUN_800f5574(0x10);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f654c(3);
          FUN_80171e18();
          return;
        }
        FUN_800f654c(3);
      }
      else {
        FUN_800f654c(0);
        FUN_801729e0();
        FUN_800f8fb8(0xd);
        FUN_800f8fb8(0xf);
        FUN_800f654c(0x70);
        FUN_800f824c(0xc);
        FUN_800f654c(0x70);
        FUN_800f5480();
        uVar2 = FUN_800f3c3c(0xb6);
        FUN_800f7f48(uVar2);
        FUN_800f824c(0xe);
        FUN_800f6564(0x1705);
      }
      *DAT_8019ed40 = *DAT_8019ed40 << 5;
      FUN_800f824c(7);
      FUN_800f6564(0x1704);
      FUN_800f5574(3);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f654c(0);
      }
      else {
        FUN_800f6630(0x7a);
        FUN_800f4248(2);
        *DAT_8019ed40 = *DAT_8019ed40 << 3;
      }
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(7);
      FUN_800f3f38(uVar2);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f7500(0);
      do {
        FUN_800f6b68(0xbfb4);
        FUN_800f5410();
        uVar2 = FUN_800f3c3c(0xc);
        FUN_800f3f38(uVar2);
        FUN_800f8960(0x480);
        FUN_800f6630(0xd);
        FUN_800f4008(0);
        FUN_800f4248(1);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) {
          FUN_800f654c(0x60);
          FUN_801714c4();
        }
        FUN_800f6b68(0xbfb5);
        FUN_800f5410();
        uVar2 = FUN_800f3c3c(0xe);
        FUN_800f3f38(uVar2);
        FUN_800f8960(0x481);
        FUN_800f6b68(0xbfb6);
        FUN_800f5410();
        FUN_800f4008(0x48);
        FUN_800f8960(0x482);
        FUN_800f6b68(0xbfb7);
        FUN_800f5410();
        FUN_800f4008(0x18);
        FUN_800f8960(0x483);
        FUN_800f6364();
        FUN_800f6364();
        FUN_800f6364();
        FUN_800f6364();
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f5a90(0x10);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
    }
  }
LAB_80172980:
  FUN_800f9448();
  return;
}



