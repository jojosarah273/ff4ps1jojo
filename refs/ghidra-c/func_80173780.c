
void FUN_80173780(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  FUN_800f926c();
  FUN_800f654c(0x15);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6564(0x1704);
  FUN_800f5574(6);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6564(0x1724);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) goto LAB_80173ec0;
    FUN_800f6564(0x1701);
    uVar2 = FUN_800f3b04(0x1727);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto LAB_80173ec0;
    FUN_800f6630(0xad);
    FUN_800f4248(0xf);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 != 0) goto LAB_80173ec0;
    FUN_800f6564(0x1725);
    FUN_800f5ccc();
    FUN_800f824c(0xc);
    FUN_800f6564(0x1726);
    FUN_800f5ccc();
    FUN_800f824c(0xe);
    FUN_800f6564(0x1700);
    FUN_800f5574(2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6564(0x1725);
      FUN_800f824c(0xc);
      FUN_800f6564(0x1726);
      FUN_800f824c(0xe);
      FUN_800f6564(0x1706);
      FUN_800f5574(8);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
        FUN_800f6630(0xc);
        FUN_800f5574(0x30);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_800f5480();
          FUN_800f8058(0x40);
          FUN_800f824c(0xc);
        }
      }
      else {
        FUN_800f5574(0x38);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_800f6630(0xc);
          FUN_800f5574(0x10);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f5410();
            FUN_800f4008(0x40);
            FUN_800f824c(0xc);
          }
        }
      }
      FUN_800f6564(0x1707);
      FUN_800f5574(8);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
        FUN_800f6630(0xe);
        FUN_800f5574(0x30);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_800f5480();
          FUN_800f8058(0x40);
          FUN_800f824c(0xe);
        }
      }
      else {
        FUN_800f5574(0x38);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_800f6630(0xe);
          FUN_800f5574(0x10);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f5410();
            FUN_800f4008(0x40);
            FUN_800f824c(0xe);
          }
        }
      }
      FUN_800f5da0(0xc);
      FUN_800f5da0(0xe);
    }
    FUN_80173ed8();
    FUN_800f6630(0xd7);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) goto LAB_80173ec0;
    FUN_800f6630(0xad);
    FUN_800f5574(0x10);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6630(0xe);
      FUN_800f5480();
      FUN_800f8058(8);
      FUN_800f824c(0xe);
      FUN_800f71dc(0);
      do {
        FUN_800f6b68(0xbc1f);
        FUN_800f5410();
        uVar2 = FUN_800f3c3c(0xc);
        FUN_800f3f38(uVar2);
        *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
        bVar3 = *DAT_8019ed68;
        if (*DAT_8019ed50 == '\0') {
          bVar3 = bVar3 | 2;
        }
        *DAT_8019ed68 = bVar3;
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f8768(0x4e0);
          FUN_800f6b68(0xbc20);
          FUN_800f5410();
          uVar2 = FUN_800f3c3c(0xe);
          FUN_800f3f38(uVar2);
          FUN_800f8768(0x4e1);
          FUN_800f6b68(0xbc21);
          FUN_800f8768(0x4e2);
          FUN_800f6b68(0xbc22);
          FUN_800f8768(0x4e3);
        }
        FUN_800f6364();
        FUN_800f6364();
        FUN_800f6364();
        FUN_800f6364();
        FUN_800f5958(0x10);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f9448();
      return;
    }
    FUN_800f654c(3);
  }
  else {
    FUN_800f6630(0xb9);
    FUN_800f5574(0x10);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_80173654();
    }
    else {
      FUN_800f5480();
      FUN_800f8058(0x10);
      FUN_800f5574(0x10);
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        FUN_800f654c(0x10);
      }
      FUN_801729e0();
    }
    FUN_800f654c(0x60);
    FUN_800f824c(0xc);
    FUN_800f654c(0x60);
    FUN_800f5480();
    uVar2 = FUN_800f3c3c(0xb9);
    FUN_800f7f48(uVar2);
    FUN_800f824c(0xe);
    FUN_800f8fb8(0xd);
    FUN_800f8fb8(0xf);
    FUN_800f6564(0x1705);
  }
  *DAT_8019ed40 = *DAT_8019ed40 << 5;
  FUN_800f824c(7);
  FUN_800f6630(7);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0x40);
  FUN_800f7500(0);
  FUN_800f8ebc(0x43);
  do {
    FUN_800f7270(0x43);
    FUN_800f6b68(0xbd97);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0xc);
    FUN_800f3f38(uVar2);
    FUN_800f8960(0x424);
    FUN_800f6630(0xd);
    FUN_800f4008(0);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(0x49);
      FUN_801714c4();
    }
    FUN_800f6b68(0xbd98);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0xe);
    FUN_800f3f38(uVar2);
    FUN_800f8960(0x425);
    FUN_800f7270(0x40);
    FUN_800f6b68(0xbdb7);
    FUN_800f8960(0x426);
    FUN_800f6b68(0xbdb8);
    FUN_800f8960(0x427);
    FUN_800f62bc(0x40);
    FUN_800f62bc(0x40);
    FUN_800f62bc(0x43);
    FUN_800f62bc(0x43);
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f5a90(0x20);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f7500(0);
  do {
    FUN_800f7270(0x43);
    FUN_800f6b68(0xbd97);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0xc);
    FUN_800f3f38(uVar2);
    FUN_800f8960(0x4a0);
    FUN_800f6630(0xd);
    FUN_800f4008(0);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(0x68);
      FUN_801714c4();
    }
    FUN_800f6b68(0xbd98);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0xe);
    FUN_800f3f38(uVar2);
    FUN_800f8960(0x4a1);
    FUN_800f7270(0x40);
    FUN_800f6b68(0xbdb7);
    FUN_800f8960(0x4a2);
    FUN_800f6b68(0xbdb8);
    FUN_800f8960(0x4a3);
    FUN_800f62bc(0x40);
    FUN_800f62bc(0x40);
    FUN_800f62bc(0x43);
    FUN_800f62bc(0x43);
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f5a90(0x20);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
LAB_80173ec0:
  FUN_800f9448();
  return;
}



